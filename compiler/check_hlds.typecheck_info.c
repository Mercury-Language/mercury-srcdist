/*
** Automatically generated from `typecheck_info.m'
** by the Mercury compiler,
** version rotd-2014-12-08
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
#include "mdbcomp.sym_name.mih"
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




#line 137 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 140 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 143 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_info__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 146 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_info__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 149 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 152 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 155 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 158 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 161 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_args_type_assign_0_0[3];

#line 164 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_args_type_assign_0_0[3];

#line 167 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_args_type_assign_0_0;

#line 170 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_args_type_assign_0_0[1];

#line 173 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_args_type_assign_0[1];

#line 176 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_args_type_assign_0[1];

#line 179 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_args_type_assign_0[1];

#line 182 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_args_type_assign_0;

#line 185 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 188 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 191 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_0_0[6];

#line 194 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_cons_type_info_0_0[6];

#line 197 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0;

#line 200 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0[1];

#line 203 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0[1];

#line 206 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_0[1];

#line 209 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_0[1];

#line 212 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_0[1];

#line 215 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0;

#line 218 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_1[1];

#line 221 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1;

#line 224 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_2[1];

#line 227 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2;

#line 230 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_3[1];

#line 233 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3;

#line 236 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_4[1];

#line 239 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4;

#line 242 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_5[1];

#line 245 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5;

#line 248 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0[1];

#line 251 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1[1];

#line 254 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2[1];

#line 257 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_3[3];

#line 260 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_source_0[4];

#line 263 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0[6];

#line 266 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0[6];

#line 269 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 272 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0[2];

#line 275 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0;

#line 278 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0;

#line 281 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1[2];

#line 284 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1;

#line 287 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0[1];

#line 290 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1[1];

#line 293 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_overloaded_symbol_0[2];

#line 296 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0[2];

#line 299 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0[2];

#line 302 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0;

#line 305 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0;

#line 308 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 311 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 314 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 317 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_data__type_ctor_info_constraint_proof_0;

#line 320 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 323 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_assign_0_0[7];

#line 326 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_assign_0_0[7];

#line 329 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_assign_0_0;

#line 332 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_assign_0_0[1];

#line 335 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_assign_0[1];

#line 338 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_assign_0[1];

#line 341 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_assign_0[1];

#line 344 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_type_assign_0;

#line 347 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_info_0_0[8];

#line 350 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_info_0_0[8];

#line 353 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0;

#line 356 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0[1];

#line 359 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0[1];

#line 362 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0[1];

#line 365 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0[1];

#line 368 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0;

#line 371 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 374 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 377 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0;

#line 380 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_typecheck_sub_info_0_0[9];

#line 383 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_typecheck_sub_info_0_0[9];

#line 386 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDesc check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0;

#line 389 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0[1];

#line 392 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0[1];

#line 395 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0[1];

#line 398 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0[1];

#line 401 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____args_type_assign_0_0_10001(
#line 404 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 406 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 409 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____args_type_assign_0_0_10001(
#line 412 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 414 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 416 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 419 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____args_type_assign_set_0_0_10001(
#line 422 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 424 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 427 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____args_type_assign_set_0_0_10001(
#line 430 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 432 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 434 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 437 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001(
#line 440 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 442 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 445 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001(
#line 448 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 450 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 452 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 455 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001(
#line 458 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 460 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 463 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001(
#line 466 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 468 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 470 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 473 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001(
#line 476 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 478 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 481 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001(
#line 484 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 486 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 488 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 491 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001(
#line 494 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 496 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 499 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001(
#line 502 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 504 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 506 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 509 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_assign_0_0_10001(
#line 512 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 514 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 517 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____type_assign_0_0_10001(
#line 520 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 522 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 524 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 527 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_assign_set_0_0_10001(
#line 530 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 532 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 535 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____type_assign_set_0_0_10001(
#line 538 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 540 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 542 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 545 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001(
#line 548 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 550 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 553 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001(
#line 556 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 558 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 560 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 563 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001(
#line 566 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 568 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2);

#line 571 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001(
#line 574 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 576 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 578 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3);

#line 1018 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__do_type_checkpoint_4_p_0(
#line 1018 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Msg_5,
#line 1018 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_6);

#line 967 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_f_0(
#line 967 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Operator_1,
#line 967 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 967 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_3,
#line 967 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_4,
#line 967 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_5);

#line 948 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__write_type_assign_constraints_7_p_0(
#line 948 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Operator_1,
#line 948 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 948 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_3,
#line 948 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_4,
#line 948 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_5);

#line 934 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_f_0(
#line 934 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Constraints_5,
#line 934 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_6,
#line 934 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_7);

#line 890 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_types_to_pieces_6_f_0(
#line 890 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 890 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_2,
#line 890 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarTypes_3,
#line 890 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 890 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_5,
#line 890 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_6);

#line 861 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__write_type_assign_types_8_p_0(
#line 861 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 861 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_2,
#line 861 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarTypes_3,
#line 861 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 861 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_5,
#line 861 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_6);

#line 825 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_to_pieces_3_f_0(
#line 825 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeAssign_5,
#line 825 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__MaybeSeq_6,
#line 825 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_7);

#line 801 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__write_type_assign_4_p_0(
#line 801 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeAssign_5,
#line 801 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_6);

#line 574 "typecheck_info.m"
static MR_bool MR_CALL 
check_hlds__typecheck_info__tvar_maps_to_tvar_3_p_0(
#line 574 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 574 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TVar0_5,
#line 574 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__TVar_6);

#line 560 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_p_0(
#line 560 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OldHeadTypeParams_6,
#line 560 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_7,
#line 560 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TVar_8,
#line 560 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Renaming_0_11,
#line 560 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Renaming_12);

#line 557 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__get_existq_tvar_renaming_4_p_0_1(
#line 557 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 557 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 557 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 557 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_3);

#line 552 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__get_existq_tvar_renaming_4_p_0(
#line 552 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OldHeadTypeParams_5,
#line 552 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ExistQVars_6,
#line 552 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_7,
#line 552 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__ExistTypeRenaming_8);

#line 540 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__expand_types_5_p_0(
#line 540 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeSubst_6,
#line 540 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Type0_7,
#line 540 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Type_8,
#line 540 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TypeVarsSet_0_11,
#line 540 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TypeVarsSet_12);

#line 521 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_4(
#line 521 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 521 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 521 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_2);

#line 469 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_3(
#line 469 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 469 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 469 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 469 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_3);

#line 467 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_2(
#line 467 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 467 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 467 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 467 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_3);

#line 447 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_1(
#line 447 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 447 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 447 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_2,
#line 447 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3,
#line 447 "typecheck_info.m"
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



#line 1044 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1052 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1061 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_info__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1069 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_info__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1078 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck_info__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1087 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_info__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1095 "check_hlds.typecheck_info.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_info__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1103 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1111 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_args_type_assign_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraints_0
};

#line 1118 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_args_type_assign_0_0[3] = {
  (MR_String) "ata_caller_arg_assign",
  (MR_String) "ata_callee_arg_types",
  (MR_String) "ata_callee_constraints"
};

#line 1125 "check_hlds.typecheck_info.c"
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

#line 1140 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_args_type_assign_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_args_type_assign_0_0
};

#line 1145 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_args_type_assign_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_args_type_assign_0_0
  }
};

#line 1154 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_args_type_assign_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_args_type_assign_0_0
};

#line 1159 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_args_type_assign_0[1] = {
  (MR_Integer) 0
};

#line 1164 "check_hlds.typecheck_info.c"
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

#line 1185 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_args_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_args_type_assign_0
  }
};

#line 1193 "check_hlds.typecheck_info.c"
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

#line 1214 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1222 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1230 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_0_0[6] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraints_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
};

#line 1240 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_cons_type_info_0_0[6] = {
  (MR_String) "cti_varset",
  (MR_String) "cti_exit_tvars",
  (MR_String) "cti_result_type",
  (MR_String) "cti_arg_types",
  (MR_String) "cti_constraints",
  (MR_String) "cti_source"
};

#line 1250 "check_hlds.typecheck_info.c"
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

#line 1265 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0
};

#line 1270 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_cons_type_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_0_0
  }
};

#line 1279 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_0_0
};

#line 1284 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_0[1] = {
  (MR_Integer) 0
};

#line 1289 "check_hlds.typecheck_info.c"
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

#line 1310 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 1315 "check_hlds.typecheck_info.c"
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

#line 1330 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1335 "check_hlds.typecheck_info.c"
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

#line 1350 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_2[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 1355 "check_hlds.typecheck_info.c"
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

#line 1370 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_3[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
};

#line 1375 "check_hlds.typecheck_info.c"
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

#line 1390 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1395 "check_hlds.typecheck_info.c"
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

#line 1410 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_cons_type_info_source_0_5[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 1415 "check_hlds.typecheck_info.c"
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

#line 1430 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0
};

#line 1435 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_1[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1
};

#line 1440 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_2[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2
};

#line 1445 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_cons_type_info_source_0_3[3] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5
};

#line 1452 "check_hlds.typecheck_info.c"
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

#line 1476 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_cons_type_info_source_0[6] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_4,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_1,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_2,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_5,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_3,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_cons_type_info_source_0_0
};

#line 1486 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_cons_type_info_source_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 1496 "check_hlds.typecheck_info.c"
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

#line 1517 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 1525 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
};

#line 1531 "check_hlds.typecheck_info.c"
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

#line 1546 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
  }
};

#line 1554 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_overloaded_symbol_0_1[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0
};

#line 1560 "check_hlds.typecheck_info.c"
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

#line 1575 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0
};

#line 1580 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_overloaded_symbol_0_1[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1
};

#line 1585 "check_hlds.typecheck_info.c"
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

#line 1599 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_overloaded_symbol_0[2] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_1,
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_overloaded_symbol_0_0
};

#line 1605 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_overloaded_symbol_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1611 "check_hlds.typecheck_info.c"
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

#line 1632 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 1640 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0list__ti_list_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0,
    (MR_TypeInfo) &check_hlds__typecheck_info__list__ti_list_1term__type_ctor_info_context_0
  }
};

#line 1649 "check_hlds.typecheck_info.c"
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

#line 1670 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1678 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1687 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1696 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_data__type_ctor_info_constraint_proof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0
  }
};

#line 1705 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck_info__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1714 "check_hlds.typecheck_info.c"
static const MR_PseudoTypeInfo check_hlds__typecheck_info__check_hlds__typecheck_info__field_types_type_assign_0_0[7] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraints_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_data__type_ctor_info_constraint_proof_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1725 "check_hlds.typecheck_info.c"
static const MR_ConstString check_hlds__typecheck_info__check_hlds__typecheck_info__field_names_type_assign_0_0[7] = {
  (MR_String) "ta_var_types",
  (MR_String) "ta_type_varset",
  (MR_String) "ta_head_type_params",
  (MR_String) "ta_type_bindings",
  (MR_String) "ta_class_constraints",
  (MR_String) "ta_constraint_proofs",
  (MR_String) "ta_constraint_map"
};

#line 1736 "check_hlds.typecheck_info.c"
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

#line 1751 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_assign_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_assign_0_0
};

#line 1756 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_type_assign_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_type_assign_0_0
  }
};

#line 1765 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_type_assign_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_type_assign_0_0
};

#line 1770 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_type_assign_0[1] = {
  (MR_Integer) 0
};

#line 1775 "check_hlds.typecheck_info.c"
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

#line 1796 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1check_hlds__typecheck_info__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0
  }
};

#line 1804 "check_hlds.typecheck_info.c"
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

#line 1825 "check_hlds.typecheck_info.c"
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

#line 1837 "check_hlds.typecheck_info.c"
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

#line 1849 "check_hlds.typecheck_info.c"
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

#line 1864 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0
};

#line 1869 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_info_0_0
  }
};

#line 1878 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_info_0_0
};

#line 1883 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_info_0[1] = {
  (MR_Integer) 0
};

#line 1888 "check_hlds.typecheck_info.c"
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

#line 1909 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1hlds__hlds_pred__type_ctor_info_marker_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0
  }
};

#line 1917 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1925 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1933 "check_hlds.typecheck_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_info__maybe__ti_maybe_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1941 "check_hlds.typecheck_info.c"
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

#line 1954 "check_hlds.typecheck_info.c"
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

#line 1967 "check_hlds.typecheck_info.c"
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

#line 1982 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0
};

#line 1987 "check_hlds.typecheck_info.c"
static const MR_DuPtagLayout check_hlds__typecheck_info__check_hlds__typecheck_info__du_ptag_ordered_typecheck_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck_info__check_hlds__typecheck_info__du_stag_ordered_typecheck_sub_info_0_0
  }
};

#line 1996 "check_hlds.typecheck_info.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck_info__check_hlds__typecheck_info__du_name_ordered_typecheck_sub_info_0[1] = {
  &check_hlds__typecheck_info__check_hlds__typecheck_info__du_functor_desc_typecheck_sub_info_0_0
};

#line 2001 "check_hlds.typecheck_info.c"
static const MR_Integer check_hlds__typecheck_info__check_hlds__typecheck_info__functor_number_map_typecheck_sub_info_0[1] = {
  (MR_Integer) 0
};

#line 2006 "check_hlds.typecheck_info.c"
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

#line 2027 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____args_type_assign_0_0_10001(
#line 2030 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2032 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2034 "check_hlds.typecheck_info.c"
{
#line 2036 "check_hlds.typecheck_info.c"
  {
#line 2038 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2041 "check_hlds.typecheck_info.c"
    {
#line 2043 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____args_type_assign_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2046 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2048 "check_hlds.typecheck_info.c"
  }
#line 2050 "check_hlds.typecheck_info.c"
}

#line 2053 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____args_type_assign_0_0_10001(
#line 2056 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2058 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2060 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2062 "check_hlds.typecheck_info.c"
{
#line 2064 "check_hlds.typecheck_info.c"
  {
#line 2066 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2069 "check_hlds.typecheck_info.c"
    {
#line 2071 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____args_type_assign_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2074 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2076 "check_hlds.typecheck_info.c"
  }
#line 2078 "check_hlds.typecheck_info.c"
}

#line 2081 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____args_type_assign_set_0_0_10001(
#line 2084 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2086 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2088 "check_hlds.typecheck_info.c"
{
#line 2090 "check_hlds.typecheck_info.c"
  {
#line 2092 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2095 "check_hlds.typecheck_info.c"
    {
#line 2097 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____args_type_assign_set_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2100 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2102 "check_hlds.typecheck_info.c"
  }
#line 2104 "check_hlds.typecheck_info.c"
}

#line 2107 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____args_type_assign_set_0_0_10001(
#line 2110 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2112 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2114 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2116 "check_hlds.typecheck_info.c"
{
#line 2118 "check_hlds.typecheck_info.c"
  {
#line 2120 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2123 "check_hlds.typecheck_info.c"
    {
#line 2125 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____args_type_assign_set_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2128 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2130 "check_hlds.typecheck_info.c"
  }
#line 2132 "check_hlds.typecheck_info.c"
}

#line 2135 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_0_0_10001(
#line 2138 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2140 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2142 "check_hlds.typecheck_info.c"
{
#line 2144 "check_hlds.typecheck_info.c"
  {
#line 2146 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2149 "check_hlds.typecheck_info.c"
    {
#line 2151 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2154 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2156 "check_hlds.typecheck_info.c"
  }
#line 2158 "check_hlds.typecheck_info.c"
}

#line 2161 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_0_0_10001(
#line 2164 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2166 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2168 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2170 "check_hlds.typecheck_info.c"
{
#line 2172 "check_hlds.typecheck_info.c"
  {
#line 2174 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2177 "check_hlds.typecheck_info.c"
    {
#line 2179 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____cons_type_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2182 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2184 "check_hlds.typecheck_info.c"
  }
#line 2186 "check_hlds.typecheck_info.c"
}

#line 2189 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____cons_type_info_source_0_0_10001(
#line 2192 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2194 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2196 "check_hlds.typecheck_info.c"
{
#line 2198 "check_hlds.typecheck_info.c"
  {
#line 2200 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2203 "check_hlds.typecheck_info.c"
    {
#line 2205 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_source_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2208 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2210 "check_hlds.typecheck_info.c"
  }
#line 2212 "check_hlds.typecheck_info.c"
}

#line 2215 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____cons_type_info_source_0_0_10001(
#line 2218 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2220 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2222 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2224 "check_hlds.typecheck_info.c"
{
#line 2226 "check_hlds.typecheck_info.c"
  {
#line 2228 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2231 "check_hlds.typecheck_info.c"
    {
#line 2233 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____cons_type_info_source_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2236 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2238 "check_hlds.typecheck_info.c"
  }
#line 2240 "check_hlds.typecheck_info.c"
}

#line 2243 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_0_0_10001(
#line 2246 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2248 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2250 "check_hlds.typecheck_info.c"
{
#line 2252 "check_hlds.typecheck_info.c"
  {
#line 2254 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2257 "check_hlds.typecheck_info.c"
    {
#line 2259 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____overloaded_symbol_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2262 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2264 "check_hlds.typecheck_info.c"
  }
#line 2266 "check_hlds.typecheck_info.c"
}

#line 2269 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_0_0_10001(
#line 2272 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2274 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2276 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2278 "check_hlds.typecheck_info.c"
{
#line 2280 "check_hlds.typecheck_info.c"
  {
#line 2282 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2285 "check_hlds.typecheck_info.c"
    {
#line 2287 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____overloaded_symbol_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2290 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2292 "check_hlds.typecheck_info.c"
  }
#line 2294 "check_hlds.typecheck_info.c"
}

#line 2297 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0_10001(
#line 2300 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2302 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2304 "check_hlds.typecheck_info.c"
{
#line 2306 "check_hlds.typecheck_info.c"
  {
#line 2308 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2311 "check_hlds.typecheck_info.c"
    {
#line 2313 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____overloaded_symbol_map_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2316 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2318 "check_hlds.typecheck_info.c"
  }
#line 2320 "check_hlds.typecheck_info.c"
}

#line 2323 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0_10001(
#line 2326 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2328 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2330 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2332 "check_hlds.typecheck_info.c"
{
#line 2334 "check_hlds.typecheck_info.c"
  {
#line 2336 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2339 "check_hlds.typecheck_info.c"
    {
#line 2341 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____overloaded_symbol_map_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2344 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2346 "check_hlds.typecheck_info.c"
  }
#line 2348 "check_hlds.typecheck_info.c"
}

#line 2351 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_assign_0_0_10001(
#line 2354 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2356 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2358 "check_hlds.typecheck_info.c"
{
#line 2360 "check_hlds.typecheck_info.c"
  {
#line 2362 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2365 "check_hlds.typecheck_info.c"
    {
#line 2367 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____type_assign_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2370 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2372 "check_hlds.typecheck_info.c"
  }
#line 2374 "check_hlds.typecheck_info.c"
}

#line 2377 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____type_assign_0_0_10001(
#line 2380 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2382 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2384 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2386 "check_hlds.typecheck_info.c"
{
#line 2388 "check_hlds.typecheck_info.c"
  {
#line 2390 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2393 "check_hlds.typecheck_info.c"
    {
#line 2395 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____type_assign_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2398 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2400 "check_hlds.typecheck_info.c"
  }
#line 2402 "check_hlds.typecheck_info.c"
}

#line 2405 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____type_assign_set_0_0_10001(
#line 2408 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2410 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2412 "check_hlds.typecheck_info.c"
{
#line 2414 "check_hlds.typecheck_info.c"
  {
#line 2416 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2419 "check_hlds.typecheck_info.c"
    {
#line 2421 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____type_assign_set_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2424 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2426 "check_hlds.typecheck_info.c"
  }
#line 2428 "check_hlds.typecheck_info.c"
}

#line 2431 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____type_assign_set_0_0_10001(
#line 2434 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2436 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2438 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2440 "check_hlds.typecheck_info.c"
{
#line 2442 "check_hlds.typecheck_info.c"
  {
#line 2444 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2447 "check_hlds.typecheck_info.c"
    {
#line 2449 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____type_assign_set_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2452 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2454 "check_hlds.typecheck_info.c"
  }
#line 2456 "check_hlds.typecheck_info.c"
}

#line 2459 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_info_0_0_10001(
#line 2462 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2464 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2466 "check_hlds.typecheck_info.c"
{
#line 2468 "check_hlds.typecheck_info.c"
  {
#line 2470 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2473 "check_hlds.typecheck_info.c"
    {
#line 2475 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____typecheck_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2478 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2480 "check_hlds.typecheck_info.c"
  }
#line 2482 "check_hlds.typecheck_info.c"
}

#line 2485 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_info_0_0_10001(
#line 2488 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2490 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2492 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2494 "check_hlds.typecheck_info.c"
{
#line 2496 "check_hlds.typecheck_info.c"
  {
#line 2498 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2501 "check_hlds.typecheck_info.c"
    {
#line 2503 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____typecheck_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2506 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2508 "check_hlds.typecheck_info.c"
  }
#line 2510 "check_hlds.typecheck_info.c"
}

#line 2513 "check_hlds.typecheck_info.c"
static MR_bool MR_CALL 
check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0_10001(
#line 2516 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 2518 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2)
#line 2520 "check_hlds.typecheck_info.c"
{
#line 2522 "check_hlds.typecheck_info.c"
  {
#line 2524 "check_hlds.typecheck_info.c"
    MR_bool check_hlds__typecheck_info__succeeded;

#line 2527 "check_hlds.typecheck_info.c"
    {
#line 2529 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2));
    }
#line 2532 "check_hlds.typecheck_info.c"
    return check_hlds__typecheck_info__succeeded;
#line 2534 "check_hlds.typecheck_info.c"
  }
#line 2536 "check_hlds.typecheck_info.c"
}

#line 2539 "check_hlds.typecheck_info.c"
static void MR_CALL 
check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0_10001(
#line 2542 "check_hlds.typecheck_info.c"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_1,
#line 2544 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 2546 "check_hlds.typecheck_info.c"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3)
#line 2548 "check_hlds.typecheck_info.c"
{
#line 2550 "check_hlds.typecheck_info.c"
  {
#line 2552 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__conv0_HeadVar__1_1;

#line 2555 "check_hlds.typecheck_info.c"
    {
#line 2557 "check_hlds.typecheck_info.c"
      check_hlds__typecheck_info____Compare____typecheck_sub_info_0_0(&check_hlds__typecheck_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3));
    }
#line 2560 "check_hlds.typecheck_info.c"
    *check_hlds__typecheck_info__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck_info__conv0_HeadVar__1_1));
#line 2562 "check_hlds.typecheck_info.c"
  }
#line 2564 "check_hlds.typecheck_info.c"
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
#line 2591 "check_hlds.typecheck_info.c"
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
#line 2641 "check_hlds.typecheck_info.c"
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
#line 2661 "check_hlds.typecheck_info.c"
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
#line 2681 "check_hlds.typecheck_info.c"
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
#line 2705 "check_hlds.typecheck_info.c"
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
#line 2725 "check_hlds.typecheck_info.c"
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
#line 2745 "check_hlds.typecheck_info.c"
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
#line 2765 "check_hlds.typecheck_info.c"
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
#line 2785 "check_hlds.typecheck_info.c"
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

#line 2898 "check_hlds.typecheck_info.c"
        {
#line 2900 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_12_12);
        }
#line 43 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
          {
#line 2907 "check_hlds.typecheck_info.c"
            {
#line 2909 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = hlds__hlds_pred____Unify____import_status_0_0(check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_13_13);
            }
#line 43 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
              {
#line 2916 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_markers_0;
#line 2918 "check_hlds.typecheck_info.c"
                {
#line 2920 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeCtorInfo_25_25, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_14_14)));
                }
#line 43 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                  {
#line 2927 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_6_6 == check_hlds__typecheck_info__V_15_15);
#line 43 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                      {
#line 2933 "check_hlds.typecheck_info.c"
                        check_hlds__typecheck_info__TypeInfo_26_26 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[11];
#line 2935 "check_hlds.typecheck_info.c"
                        {
#line 2937 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_26_26, ((MR_Box) (check_hlds__typecheck_info__V_7_7)), ((MR_Box) (check_hlds__typecheck_info__V_16_16)));
                        }
#line 43 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                          {
#line 2944 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__TypeInfo_27_27 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[12];
#line 2946 "check_hlds.typecheck_info.c"
                            {
#line 2948 "check_hlds.typecheck_info.c"
                              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_27_27, ((MR_Box) (check_hlds__typecheck_info__V_8_8)), ((MR_Box) (check_hlds__typecheck_info__V_17_17)));
                            }
#line 43 "typecheck_info.m"
                            if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                              {
#line 2955 "check_hlds.typecheck_info.c"
                                check_hlds__typecheck_info__TypeInfo_28_28 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[13];
#line 2957 "check_hlds.typecheck_info.c"
                                {
#line 2959 "check_hlds.typecheck_info.c"
                                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_28_28, ((MR_Box) (check_hlds__typecheck_info__V_9_9)), ((MR_Box) (check_hlds__typecheck_info__V_18_18)));
                                }
#line 43 "typecheck_info.m"
                                if (check_hlds__typecheck_info__succeeded)
#line 43 "typecheck_info.m"
                                  {
#line 2966 "check_hlds.typecheck_info.c"
                                    check_hlds__typecheck_info__TypeInfo_29_29 = (MR_Word) &check_hlds__typecheck_info_scalar_common_2[2];
#line 2968 "check_hlds.typecheck_info.c"
                                    {
#line 2970 "check_hlds.typecheck_info.c"
                                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_29_29, ((MR_Box) (check_hlds__typecheck_info__V_10_10)), ((MR_Box) (check_hlds__typecheck_info__V_19_19)));
                                    }
#line 43 "typecheck_info.m"
                                    if (check_hlds__typecheck_info__succeeded)
#line 2975 "check_hlds.typecheck_info.c"
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
#line 3024 "check_hlds.typecheck_info.c"
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
#line 3070 "check_hlds.typecheck_info.c"
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
#line 3090 "check_hlds.typecheck_info.c"
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
#line 3110 "check_hlds.typecheck_info.c"
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
#line 3130 "check_hlds.typecheck_info.c"
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
#line 3150 "check_hlds.typecheck_info.c"
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
#line 3170 "check_hlds.typecheck_info.c"
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
#line 3190 "check_hlds.typecheck_info.c"
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

#line 3289 "check_hlds.typecheck_info.c"
        {
#line 3291 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____typecheck_sub_info_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_11_11);
        }
#line 80 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
          {
#line 3298 "check_hlds.typecheck_info.c"
            {
#line 3300 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__typecheck_info__V_4_4, check_hlds__typecheck_info__V_12_12);
            }
#line 80 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
              {
#line 3307 "check_hlds.typecheck_info.c"
                {
#line 3309 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = hlds__hlds_pred____Unify____call_id_0_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_13_13);
                }
#line 80 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                  {
#line 3316 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__V_6_6 == check_hlds__typecheck_info__V_14_14);
#line 80 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                      {
#line 3322 "check_hlds.typecheck_info.c"
                        {
#line 3324 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = mercury__term____Unify____context_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_15_15);
                        }
#line 80 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                          {
#line 3331 "check_hlds.typecheck_info.c"
                            {
#line 3333 "check_hlds.typecheck_info.c"
                              check_hlds__typecheck_info__succeeded = hlds__hlds_goal____Unify____unify_context_0_0(check_hlds__typecheck_info__V_8_8, check_hlds__typecheck_info__V_16_16);
                            }
#line 80 "typecheck_info.m"
                            if (check_hlds__typecheck_info__succeeded)
#line 80 "typecheck_info.m"
                              {
#line 3340 "check_hlds.typecheck_info.c"
                                check_hlds__typecheck_info__TypeInfo_25_25 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[10];
#line 3342 "check_hlds.typecheck_info.c"
                                {
#line 3344 "check_hlds.typecheck_info.c"
                                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_25_25, ((MR_Box) (check_hlds__typecheck_info__V_9_9)), ((MR_Box) (check_hlds__typecheck_info__V_17_17)));
                                }
#line 80 "typecheck_info.m"
                                if (check_hlds__typecheck_info__succeeded)
#line 3349 "check_hlds.typecheck_info.c"
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
#line 3458 "check_hlds.typecheck_info.c"
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
#line 3500 "check_hlds.typecheck_info.c"
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
#line 3520 "check_hlds.typecheck_info.c"
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
#line 3540 "check_hlds.typecheck_info.c"
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
#line 3560 "check_hlds.typecheck_info.c"
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
#line 3580 "check_hlds.typecheck_info.c"
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
#line 3600 "check_hlds.typecheck_info.c"
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

#line 3705 "check_hlds.typecheck_info.c"
        {
#line 3707 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, ((MR_Box) (check_hlds__typecheck_info__V_3_3)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
        }
#line 229 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
          {
#line 3714 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_20_20 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[6];
#line 3716 "check_hlds.typecheck_info.c"
            {
#line 3718 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_20_20, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_11_11)));
            }
#line 229 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
              {
#line 3725 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeInfo_21_21 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[7];
#line 3727 "check_hlds.typecheck_info.c"
                {
#line 3729 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_21_21, ((MR_Box) (check_hlds__typecheck_info__V_5_5)), ((MR_Box) (check_hlds__typecheck_info__V_12_12)));
                }
#line 229 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                  {
#line 3736 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__TypeInfo_22_22 = (MR_Word) &check_hlds__typecheck_info_scalar_common_2[3];
#line 3738 "check_hlds.typecheck_info.c"
                    {
#line 3740 "check_hlds.typecheck_info.c"
                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_22_22, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_13_13)));
                    }
#line 229 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                      {
#line 3747 "check_hlds.typecheck_info.c"
                        {
#line 3749 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = hlds__hlds_data____Unify____hlds_constraints_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_14_14);
                        }
#line 229 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                          {
#line 3756 "check_hlds.typecheck_info.c"
                            check_hlds__typecheck_info__TypeInfo_24_24 = (MR_Word) &check_hlds__typecheck_info_scalar_common_2[4];
#line 3758 "check_hlds.typecheck_info.c"
                            {
#line 3760 "check_hlds.typecheck_info.c"
                              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_24_24, ((MR_Box) (check_hlds__typecheck_info__V_8_8)), ((MR_Box) (check_hlds__typecheck_info__V_15_15)));
                            }
#line 229 "typecheck_info.m"
                            if (check_hlds__typecheck_info__succeeded)
#line 229 "typecheck_info.m"
                              {
#line 3767 "check_hlds.typecheck_info.c"
                                check_hlds__typecheck_info__TypeInfo_25_25 = (MR_Word) &check_hlds__typecheck_info_scalar_common_2[0];
#line 3769 "check_hlds.typecheck_info.c"
                                {
#line 3771 "check_hlds.typecheck_info.c"
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
#line 3881 "check_hlds.typecheck_info.c"
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
#line 3910 "check_hlds.typecheck_info.c"
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
#line 3935 "check_hlds.typecheck_info.c"
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
#line 3950 "check_hlds.typecheck_info.c"
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
#line 3968 "check_hlds.typecheck_info.c"
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
#line 4049 "check_hlds.typecheck_info.c"
              {
#line 4051 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_9_9);
              }
#line 108 "typecheck_info.m"
              if (check_hlds__typecheck_info__succeeded)
#line 108 "typecheck_info.m"
                {
#line 4058 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__TypeInfo_14_14 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[8];
#line 4060 "check_hlds.typecheck_info.c"
                  {
#line 4062 "check_hlds.typecheck_info.c"
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
#line 4096 "check_hlds.typecheck_info.c"
              {
#line 4098 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_5_5);
              }
#line 108 "typecheck_info.m"
              if (check_hlds__typecheck_info__succeeded)
#line 108 "typecheck_info.m"
                {
#line 4105 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__TypeInfo_16_16 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[9];
#line 4107 "check_hlds.typecheck_info.c"
                  {
#line 4109 "check_hlds.typecheck_info.c"
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
#line 4149 "check_hlds.typecheck_info.c"
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
#line 4180 "check_hlds.typecheck_info.c"
              *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
            else
#line 343 "typecheck_info.m"
              if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4186 "check_hlds.typecheck_info.c"
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
              else
#line 343 "typecheck_info.m"
                if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4192 "check_hlds.typecheck_info.c"
                  *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                else
#line 343 "typecheck_info.m"
                  if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4198 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                  else
#line 4202 "check_hlds.typecheck_info.c"
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
#line 4217 "check_hlds.typecheck_info.c"
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
#line 4241 "check_hlds.typecheck_info.c"
                  *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                else
#line 343 "typecheck_info.m"
                  if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4247 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                  else
#line 343 "typecheck_info.m"
                    if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4253 "check_hlds.typecheck_info.c"
                      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                    else
#line 4257 "check_hlds.typecheck_info.c"
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
#line 4272 "check_hlds.typecheck_info.c"
                *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
              else
#line 343 "typecheck_info.m"
                if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4278 "check_hlds.typecheck_info.c"
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
#line 4302 "check_hlds.typecheck_info.c"
                      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                    else
#line 343 "typecheck_info.m"
                      if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4308 "check_hlds.typecheck_info.c"
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                      else
#line 4312 "check_hlds.typecheck_info.c"
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
#line 4327 "check_hlds.typecheck_info.c"
                  *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                else
#line 343 "typecheck_info.m"
                  if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4333 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                  else
#line 343 "typecheck_info.m"
                    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4339 "check_hlds.typecheck_info.c"
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
#line 4363 "check_hlds.typecheck_info.c"
                          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                        else
#line 4367 "check_hlds.typecheck_info.c"
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
#line 4382 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                  else
#line 343 "typecheck_info.m"
                    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4388 "check_hlds.typecheck_info.c"
                      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                    else
#line 343 "typecheck_info.m"
                      if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4394 "check_hlds.typecheck_info.c"
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                      else
#line 343 "typecheck_info.m"
                        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4400 "check_hlds.typecheck_info.c"
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
#line 4422 "check_hlds.typecheck_info.c"
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
#line 4435 "check_hlds.typecheck_info.c"
                    *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                  else
#line 343 "typecheck_info.m"
                    if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4441 "check_hlds.typecheck_info.c"
                      *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                    else
#line 343 "typecheck_info.m"
                      if (((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4447 "check_hlds.typecheck_info.c"
                        *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "typecheck_info.m"
                      else
#line 343 "typecheck_info.m"
                        if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4453 "check_hlds.typecheck_info.c"
                          *check_hlds__typecheck_info__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "typecheck_info.m"
                        else
#line 343 "typecheck_info.m"
                          if (((((MR_tag((MR_Word) check_hlds__typecheck_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4459 "check_hlds.typecheck_info.c"
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
#line 4527 "check_hlds.typecheck_info.c"
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
#line 4552 "check_hlds.typecheck_info.c"
                {
#line 4554 "check_hlds.typecheck_info.c"
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
#line 4580 "check_hlds.typecheck_info.c"
                  {
#line 4582 "check_hlds.typecheck_info.c"
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
#line 4608 "check_hlds.typecheck_info.c"
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
#line 4633 "check_hlds.typecheck_info.c"
                      {
#line 4635 "check_hlds.typecheck_info.c"
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
#line 4659 "check_hlds.typecheck_info.c"
                      {
#line 4661 "check_hlds.typecheck_info.c"
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
#line 4699 "check_hlds.typecheck_info.c"
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
#line 4737 "check_hlds.typecheck_info.c"
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
#line 4757 "check_hlds.typecheck_info.c"
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
#line 4777 "check_hlds.typecheck_info.c"
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
#line 4797 "check_hlds.typecheck_info.c"
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
#line 4817 "check_hlds.typecheck_info.c"
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

#line 4906 "check_hlds.typecheck_info.c"
        {
#line 4908 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[6], ((MR_Box) (check_hlds__typecheck_info__V_3_3)), ((MR_Box) (check_hlds__typecheck_info__V_9_9)));
        }
#line 321 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
          {
#line 4915 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_18_18 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[7];
#line 4917 "check_hlds.typecheck_info.c"
            {
#line 4919 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_18_18, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_10_10)));
            }
#line 321 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
              {
#line 4926 "check_hlds.typecheck_info.c"
                {
#line 4928 "check_hlds.typecheck_info.c"
                  check_hlds__typecheck_info__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__V_11_11);
                }
#line 321 "typecheck_info.m"
                if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
                  {
#line 4935 "check_hlds.typecheck_info.c"
                    check_hlds__typecheck_info__TypeInfo_20_20 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[4];
#line 4937 "check_hlds.typecheck_info.c"
                    {
#line 4939 "check_hlds.typecheck_info.c"
                      check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_20_20, ((MR_Box) (check_hlds__typecheck_info__V_6_6)), ((MR_Box) (check_hlds__typecheck_info__V_12_12)));
                    }
#line 321 "typecheck_info.m"
                    if (check_hlds__typecheck_info__succeeded)
#line 321 "typecheck_info.m"
                      {
#line 4946 "check_hlds.typecheck_info.c"
                        {
#line 4948 "check_hlds.typecheck_info.c"
                          check_hlds__typecheck_info__succeeded = hlds__hlds_data____Unify____hlds_constraints_0_0(check_hlds__typecheck_info__V_7_7, check_hlds__typecheck_info__V_13_13);
                        }
#line 321 "typecheck_info.m"
                        if (check_hlds__typecheck_info__succeeded)
#line 4953 "check_hlds.typecheck_info.c"
                          {
#line 4955 "check_hlds.typecheck_info.c"
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
#line 5061 "check_hlds.typecheck_info.c"
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
#line 5087 "check_hlds.typecheck_info.c"
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
#line 5107 "check_hlds.typecheck_info.c"
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

#line 5176 "check_hlds.typecheck_info.c"
        {
#line 5178 "check_hlds.typecheck_info.c"
          check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info____Unify____type_assign_0_0(check_hlds__typecheck_info__V_3_3, check_hlds__typecheck_info__V_6_6);
        }
#line 293 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 293 "typecheck_info.m"
          {
#line 5185 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_11_11 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[4];
#line 5187 "check_hlds.typecheck_info.c"
            {
#line 5189 "check_hlds.typecheck_info.c"
              check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_11_11, ((MR_Box) (check_hlds__typecheck_info__V_4_4)), ((MR_Box) (check_hlds__typecheck_info__V_7_7)));
            }
#line 293 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 5194 "check_hlds.typecheck_info.c"
              {
#line 5196 "check_hlds.typecheck_info.c"
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

#line 1018 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__do_type_checkpoint_4_p_0(
#line 1018 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Msg_5,
#line 1018 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Info_6)
#line 1018 "typecheck_info.m"
{
#line 1021 "typecheck_info.m"
  {
#line 1021 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 1021 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ModuleInfo_8;
#line 1021 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Globals_9;
#line 1021 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Statistics_10;
#line 1021 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeAssignSet_11;
#line 1021 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__VarSet_16;
#line 1025 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_33_33;
#line 1025 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_34_34;
#line 1025 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_35_35;
#line 1025 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_36_36;
#line 1025 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_37_37;
#line 1025 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_38_38;
#line 1025 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_39_39;
#line 1030 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_40_40;
#line 1030 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_41_41;
#line 1030 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_42_42;
#line 1030 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_43_43;
#line 1030 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_44_44;
#line 1030 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_45_45;
#line 1030 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_46_46;
#line 5261 "check_hlds.typecheck_info.c"
    MR_Word check_hlds__typecheck_info__TypeAssign_12;
#line 1033 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;

#line 1022 "typecheck_info.m"
    {
#line 1022 "typecheck_info.m"
      mercury__io__write_string_3_p_0((MR_String) "At ");
    }
#line 1023 "typecheck_info.m"
    {
#line 1023 "typecheck_info.m"
      mercury__io__write_string_3_p_0(check_hlds__typecheck_info__Msg_5);
    }
#line 1024 "typecheck_info.m"
    {
#line 1024 "typecheck_info.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 1025 "typecheck_info.m"
    check_hlds__typecheck_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 0)));
#line 1025 "typecheck_info.m"
    check_hlds__typecheck_info__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 1)));
#line 1025 "typecheck_info.m"
    check_hlds__typecheck_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 2)));
#line 1025 "typecheck_info.m"
    check_hlds__typecheck_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 3)));
#line 1025 "typecheck_info.m"
    check_hlds__typecheck_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 4)));
#line 1025 "typecheck_info.m"
    check_hlds__typecheck_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 5)));
#line 1025 "typecheck_info.m"
    check_hlds__typecheck_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 6)));
#line 1025 "typecheck_info.m"
    check_hlds__typecheck_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 7)));
#line 1026 "typecheck_info.m"
    {
#line 1026 "typecheck_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck_info__ModuleInfo_8, &check_hlds__typecheck_info__Globals_9);
    }
#line 1027 "typecheck_info.m"
    {
#line 1027 "typecheck_info.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck_info__Globals_9, (MR_Integer) 56, &check_hlds__typecheck_info__Statistics_10);
    }
#line 1028 "typecheck_info.m"
    {
#line 1028 "typecheck_info.m"
      libs__file_util__maybe_report_stats_3_p_0(check_hlds__typecheck_info__Statistics_10);
    }
#line 1029 "typecheck_info.m"
    {
#line 1029 "typecheck_info.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1030 "typecheck_info.m"
    check_hlds__typecheck_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 0)));
#line 1030 "typecheck_info.m"
    check_hlds__typecheck_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 1)));
#line 1030 "typecheck_info.m"
    check_hlds__typecheck_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 2)));
#line 1030 "typecheck_info.m"
    check_hlds__typecheck_info__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 3)));
#line 1030 "typecheck_info.m"
    check_hlds__typecheck_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 4)));
#line 1030 "typecheck_info.m"
    check_hlds__typecheck_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 5)));
#line 1030 "typecheck_info.m"
    check_hlds__typecheck_info__TypeAssignSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 6)));
#line 1030 "typecheck_info.m"
    check_hlds__typecheck_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 7)));
#line 1042 "typecheck_info.m"
    {
#line 1042 "typecheck_info.m"
      check_hlds__typecheck_info__typecheck_info_get_varset_2_p_0(check_hlds__typecheck_info__Info_6, &check_hlds__typecheck_info__VarSet_16);
    }
#line 1032 "typecheck_info.m"
    check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__Statistics_10 == (MR_Integer) 1);
#line 1032 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 1032 "typecheck_info.m"
      {
#line 1033 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__TypeAssignSet_11)) == (MR_mktag((MR_Integer) 1)));
#line 1033 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 1033 "typecheck_info.m"
          {
#line 1033 "typecheck_info.m"
            check_hlds__typecheck_info__TypeAssign_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__TypeAssignSet_11, (MR_Integer) 0)));
#line 1033 "typecheck_info.m"
            check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__TypeAssignSet_11, (MR_Integer) 1)));
#line 1033 "typecheck_info.m"
          }
#line 1032 "typecheck_info.m"
      }
#line 5358 "check_hlds.typecheck_info.c"
    if (check_hlds__typecheck_info__succeeded)
#line 5360 "check_hlds.typecheck_info.c"
      {
#line 5362 "check_hlds.typecheck_info.c"
        MR_Word check_hlds__typecheck_info__VarTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 0)));
#line 5364 "check_hlds.typecheck_info.c"
        MR_Word check_hlds__typecheck_info__TypeBindings_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 3)));
#line 5366 "check_hlds.typecheck_info.c"
        MR_Integer check_hlds__typecheck_info__Count_61;
#line 5368 "check_hlds.typecheck_info.c"
        MR_Integer check_hlds__typecheck_info__Count_80;
#line 681 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 1)));
#line 681 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 2)));
#line 681 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 4)));
#line 681 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 5)));
#line 681 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_12, (MR_Integer) 6)));

#line 1059 "typecheck_info.m"
        {
#line 1059 "typecheck_info.m"
          parse_tree__prog_data__vartypes_count_2_p_0(check_hlds__typecheck_info__VarTypes_14, &check_hlds__typecheck_info__Count_61);
        }
#line 1060 "typecheck_info.m"
        {
#line 1060 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) "\t\140var -> type\' map");
        }
#line 1061 "typecheck_info.m"
        {
#line 1061 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) ": count = ");
        }
#line 1062 "typecheck_info.m"
        {
#line 1062 "typecheck_info.m"
          mercury__io__write_int_3_p_0(check_hlds__typecheck_info__Count_61);
        }
#line 1063 "typecheck_info.m"
        {
#line 1063 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1049 "typecheck_info.m"
        {
#line 1049 "typecheck_info.m"
          mercury__map__count_2_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck_info__TypeBindings_15, &check_hlds__typecheck_info__Count_80);
        }
#line 1050 "typecheck_info.m"
        {
#line 1050 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) "\t\140type var -> type\' map");
        }
#line 1051 "typecheck_info.m"
        {
#line 1051 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) ": count = ");
        }
#line 1052 "typecheck_info.m"
        {
#line 1052 "typecheck_info.m"
          mercury__io__write_int_3_p_0(check_hlds__typecheck_info__Count_80);
        }
#line 1053 "typecheck_info.m"
        {
#line 1053 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1043 "typecheck_info.m"
        {
#line 1043 "typecheck_info.m"
          check_hlds__typecheck_info__write_type_assign_set_4_p_0(check_hlds__typecheck_info__TypeAssignSet_11, check_hlds__typecheck_info__VarSet_16);
#line 1043 "typecheck_info.m"
          return;
        }
#line 5438 "check_hlds.typecheck_info.c"
      }
#line 5440 "check_hlds.typecheck_info.c"
    else
#line 1043 "typecheck_info.m"
      {
#line 1043 "typecheck_info.m"
        check_hlds__typecheck_info__write_type_assign_set_4_p_0(check_hlds__typecheck_info__TypeAssignSet_11, check_hlds__typecheck_info__VarSet_16);
#line 1043 "typecheck_info.m"
        return;
      }
#line 1021 "typecheck_info.m"
  }
#line 1018 "typecheck_info.m"
}

#line 967 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_f_0(
#line 967 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Operator_1,
#line 967 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 967 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_3,
#line 967 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_4,
#line 967 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_5)
#line 967 "typecheck_info.m"
{
#line 970 "typecheck_info.m"
  {
#line 970 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 970 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__6_6;

#line 970 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 970 "typecheck_info.m"
      check_hlds__typecheck_info__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 970 "typecheck_info.m"
    else
#line 972 "typecheck_info.m"
      {
#line 972 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Constraint_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 972 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 972 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ThisPieces_17;
#line 972 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TailPieceLists_18;
#line 972 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__Prefix_19;
#line 972 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__BoundConstraint_20;
#line 972 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ProgConstraint_21;
#line 972 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_22_22;
#line 972 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_25_25;
#line 972 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__V_26_26;
#line 972 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__V_27_27;

#line 976 "typecheck_info.m"
        if ((check_hlds__typecheck_info__FoundOne_5 == (MR_Integer) 0))
#line 974 "typecheck_info.m"
          {
#line 975 "typecheck_info.m"
            {
#line 975 "typecheck_info.m"
              check_hlds__typecheck_info__Prefix_19 = mercury__string__f_43_43_2_f_0(check_hlds__typecheck_info__Operator_1, (MR_String) " ");
            }
#line 974 "typecheck_info.m"
          }
#line 976 "typecheck_info.m"
        else
#line 978 "typecheck_info.m"
          check_hlds__typecheck_info__Prefix_19 = (MR_String) "   ";
#line 980 "typecheck_info.m"
        {
#line 980 "typecheck_info.m"
          check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(check_hlds__typecheck_info__TypeBindings_3, check_hlds__typecheck_info__Constraint_12, &check_hlds__typecheck_info__BoundConstraint_20);
        }
#line 981 "typecheck_info.m"
        {
#line 981 "typecheck_info.m"
          hlds__hlds_data__retrieve_prog_constraint_2_p_0(check_hlds__typecheck_info__BoundConstraint_20, &check_hlds__typecheck_info__ProgConstraint_21);
        }
#line 983 "typecheck_info.m"
        {
#line 983 "typecheck_info.m"
          check_hlds__typecheck_info__V_27_27 = parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(check_hlds__typecheck_info__TypeVarSet_4, check_hlds__typecheck_info__ProgConstraint_21);
        }
#line 982 "typecheck_info.m"
        {
#line 982 "typecheck_info.m"
          check_hlds__typecheck_info__V_26_26 = mercury__string__f_43_43_2_f_0(check_hlds__typecheck_info__Prefix_19, check_hlds__typecheck_info__V_27_27);
        }
#line 982 "typecheck_info.m"
        {
#line 982 "typecheck_info.m"
          check_hlds__typecheck_info__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 982 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_25_25, 0) = ((MR_Box) (check_hlds__typecheck_info__V_26_26));
#line 982 "typecheck_info.m"
        }
#line 983 "typecheck_info.m"
        {
#line 983 "typecheck_info.m"
          check_hlds__typecheck_info__ThisPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__ThisPieces_17, 0) = ((MR_Box) (check_hlds__typecheck_info__V_25_25));
#line 983 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__ThisPieces_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 983 "typecheck_info.m"
        }
#line 972 "typecheck_info.m"
        {
#line 972 "typecheck_info.m"
          check_hlds__typecheck_info__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_22_22, 0) = ((MR_Box) (check_hlds__typecheck_info__ThisPieces_17));
#line 972 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 972 "typecheck_info.m"
        }
#line 984 "typecheck_info.m"
        {
#line 984 "typecheck_info.m"
          check_hlds__typecheck_info__TailPieceLists_18 = check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_f_0(check_hlds__typecheck_info__Operator_1, check_hlds__typecheck_info__Constraints_13, check_hlds__typecheck_info__TypeBindings_3, check_hlds__typecheck_info__TypeVarSet_4, (MR_Integer) 1);
        }
#line 972 "typecheck_info.m"
        {
#line 972 "typecheck_info.m"
          check_hlds__typecheck_info__HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[3], check_hlds__typecheck_info__V_22_22, check_hlds__typecheck_info__TailPieceLists_18);
        }
#line 972 "typecheck_info.m"
      }
#line 970 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__6_6;
#line 970 "typecheck_info.m"
  }
#line 967 "typecheck_info.m"
}

#line 948 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__write_type_assign_constraints_7_p_0(
#line 948 "typecheck_info.m"
  MR_String check_hlds__typecheck_info__Operator_1,
#line 948 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__2_2,
#line 948 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_3,
#line 948 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_4,
#line 948 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_5)
#line 948 "typecheck_info.m"
{
#line 951 "typecheck_info.m"
  while (MR_TRUE)
#line 951 "typecheck_info.m"
    {
#line 951 "typecheck_info.m"
      /* tailcall optimized into a loop */
#line 951 "typecheck_info.m"
      {
#line 951 "typecheck_info.m"
        MR_bool check_hlds__typecheck_info__succeeded;

#line 951 "typecheck_info.m"
        if ((check_hlds__typecheck_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 951 "typecheck_info.m"
          {
#line 951 "typecheck_info.m"
          }
#line 951 "typecheck_info.m"
        else
#line 953 "typecheck_info.m"
          {
#line 953 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Constraint_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 0)));
#line 953 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, (MR_Integer) 1)));
#line 953 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__BoundConstraint_22;
#line 953 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__ProgConstraint_23;

#line 957 "typecheck_info.m"
            if ((check_hlds__typecheck_info__FoundOne_5 == (MR_Integer) 0))
#line 955 "typecheck_info.m"
              {
#line 955 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_28_28;
#line 955 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_31_31;

#line 956 "typecheck_info.m"
                {
#line 956 "typecheck_info.m"
                  check_hlds__typecheck_info__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 956 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_31_31, 0) = ((MR_Box) (check_hlds__typecheck_info__Operator_1));
#line 956 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[22])));
#line 956 "typecheck_info.m"
                }
#line 956 "typecheck_info.m"
                {
#line 956 "typecheck_info.m"
                  check_hlds__typecheck_info__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 956 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_28_28, 0) = ((MR_Box) ((MR_String) "\n\t"));
#line 956 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_28_28, 1) = ((MR_Box) (check_hlds__typecheck_info__V_31_31));
#line 956 "typecheck_info.m"
                }
#line 956 "typecheck_info.m"
                {
#line 956 "typecheck_info.m"
                  mercury__io__write_strings_3_p_0(check_hlds__typecheck_info__V_28_28);
                }
#line 955 "typecheck_info.m"
              }
#line 957 "typecheck_info.m"
            else
#line 958 "typecheck_info.m"
              {
#line 959 "typecheck_info.m"
                {
#line 959 "typecheck_info.m"
                  mercury__io__write_string_3_p_0((MR_String) ",\n\t   ");
                }
#line 958 "typecheck_info.m"
              }
#line 961 "typecheck_info.m"
            {
#line 961 "typecheck_info.m"
              check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(check_hlds__typecheck_info__TypeBindings_3, check_hlds__typecheck_info__Constraint_16, &check_hlds__typecheck_info__BoundConstraint_22);
            }
#line 962 "typecheck_info.m"
            {
#line 962 "typecheck_info.m"
              hlds__hlds_data__retrieve_prog_constraint_2_p_0(check_hlds__typecheck_info__BoundConstraint_22, &check_hlds__typecheck_info__ProgConstraint_23);
            }
#line 963 "typecheck_info.m"
            {
#line 963 "typecheck_info.m"
              parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(check_hlds__typecheck_info__TypeVarSet_4, (MR_Integer) 1, check_hlds__typecheck_info__ProgConstraint_23);
            }
#line 964 "typecheck_info.m"
            /* direct tailcall eliminated */
#line 964 "typecheck_info.m"
            {
#line 964 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__HeadVar__2__tmp_copy_2 = check_hlds__typecheck_info__Constraints_17;

#line 964 "typecheck_info.m"
              check_hlds__typecheck_info__FoundOne_5 = (MR_Integer) 1;
#line 964 "typecheck_info.m"
              check_hlds__typecheck_info__HeadVar__2_2 = check_hlds__typecheck_info__HeadVar__2__tmp_copy_2;
#line 964 "typecheck_info.m"
            }
#line 964 "typecheck_info.m"
            continue;
#line 953 "typecheck_info.m"
          }
#line 951 "typecheck_info.m"
      }
#line 951 "typecheck_info.m"
      break;
#line 951 "typecheck_info.m"
    }
#line 948 "typecheck_info.m"
}

#line 934 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_f_0(
#line 934 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Constraints_5,
#line 934 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_6,
#line 934 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_7)
#line 934 "typecheck_info.m"
{
#line 938 "typecheck_info.m"
  {
#line 938 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 938 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__4_4;
#line 938 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Pieces1_8;
#line 938 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Pieces2_9;
#line 938 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ConstraintsToProve_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_5, (MR_Integer) 0)));
#line 938 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__AssumedConstraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_5, (MR_Integer) 1)));
#line 938 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__PiecesList1_14;
#line 938 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__PiecesList2_15;
#line 939 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_5, (MR_Integer) 2)));
#line 939 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_5, (MR_Integer) 3)));

#line 941 "typecheck_info.m"
    {
#line 941 "typecheck_info.m"
      check_hlds__typecheck_info__PiecesList1_14 = check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_f_0((MR_String) "&", check_hlds__typecheck_info__AssumedConstraints_11, check_hlds__typecheck_info__TypeBindings_6, check_hlds__typecheck_info__TypeVarSet_7, (MR_Integer) 0);
    }
#line 943 "typecheck_info.m"
    {
#line 943 "typecheck_info.m"
      check_hlds__typecheck_info__PiecesList2_15 = check_hlds__typecheck_info__type_assign_constraints_to_pieces_list_5_f_0((MR_String) "<=", check_hlds__typecheck_info__ConstraintsToProve_10, check_hlds__typecheck_info__TypeBindings_6, check_hlds__typecheck_info__TypeVarSet_7, (MR_Integer) 0);
    }
#line 945 "typecheck_info.m"
    {
#line 945 "typecheck_info.m"
      check_hlds__typecheck_info__Pieces1_8 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(check_hlds__typecheck_info__PiecesList1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 946 "typecheck_info.m"
    {
#line 946 "typecheck_info.m"
      check_hlds__typecheck_info__Pieces2_9 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(check_hlds__typecheck_info__PiecesList2_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 938 "typecheck_info.m"
    {
#line 938 "typecheck_info.m"
      check_hlds__typecheck_info__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__typecheck_info__Pieces1_8, check_hlds__typecheck_info__Pieces2_9);
    }
#line 938 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__4_4;
#line 938 "typecheck_info.m"
  }
#line 934 "typecheck_info.m"
}

#line 890 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_types_to_pieces_6_f_0(
#line 890 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 890 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_2,
#line 890 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarTypes_3,
#line 890 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 890 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_5,
#line 890 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_6)
#line 890 "typecheck_info.m"
{
#line 893 "typecheck_info.m"
  while (MR_TRUE)
#line 893 "typecheck_info.m"
    {
#line 893 "typecheck_info.m"
      /* tailcall optimized into a loop */
#line 893 "typecheck_info.m"
      {
#line 893 "typecheck_info.m"
        MR_bool check_hlds__typecheck_info__succeeded;
#line 893 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Pieces_7;

#line 893 "typecheck_info.m"
        if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 897 "typecheck_info.m"
          if ((check_hlds__typecheck_info__FoundOne_6 == (MR_Integer) 0))
#line 895 "typecheck_info.m"
            {
#line 896 "typecheck_info.m"
              check_hlds__typecheck_info__Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[20]);
#line 895 "typecheck_info.m"
            }
#line 897 "typecheck_info.m"
          else
#line 899 "typecheck_info.m"
            check_hlds__typecheck_info__Pieces_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 893 "typecheck_info.m"
        else
#line 902 "typecheck_info.m"
          {
#line 902 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 902 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 917 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Type_25;

#line 903 "typecheck_info.m"
            {
#line 903 "typecheck_info.m"
              check_hlds__typecheck_info__succeeded = parse_tree__prog_data__search_var_type_3_p_0(check_hlds__typecheck_info__VarTypes_3, check_hlds__typecheck_info__Var_17, &check_hlds__typecheck_info__Type_25);
            }
#line 917 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 910 "typecheck_info.m"
              {
#line 910 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__TypeCtorInfo_44_44;
#line 910 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__PrefixPieces_26;
#line 910 "typecheck_info.m"
                MR_String check_hlds__typecheck_info__VarStr_27;
#line 910 "typecheck_info.m"
                MR_String check_hlds__typecheck_info__TypeStr_28;
#line 910 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__AssignPieces_29;
#line 910 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__TailPieces_30;
#line 910 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_34_34;
#line 910 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_35_35;
#line 910 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_38_38;
#line 910 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_39_39;
#line 910 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__V_42_42;
#line 910 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__Type1_49;
#line 910 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__Type_50;

#line 907 "typecheck_info.m"
                if ((check_hlds__typecheck_info__FoundOne_6 == (MR_Integer) 0))
#line 909 "typecheck_info.m"
                  check_hlds__typecheck_info__PrefixPieces_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 907 "typecheck_info.m"
                else
#line 905 "typecheck_info.m"
                  {
#line 906 "typecheck_info.m"
                    check_hlds__typecheck_info__PrefixPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[14]);
#line 905 "typecheck_info.m"
                  }
#line 911 "typecheck_info.m"
                {
#line 911 "typecheck_info.m"
                  check_hlds__typecheck_info__VarStr_27 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__typecheck_info__VarSet_2, (MR_Integer) 1, check_hlds__typecheck_info__Var_17);
                }
#line 1001 "typecheck_info.m"
                {
#line 1001 "typecheck_info.m"
                  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__typecheck_info__TypeBindings_4, check_hlds__typecheck_info__Type_25, &check_hlds__typecheck_info__Type1_49);
                }
#line 1002 "typecheck_info.m"
                {
#line 1002 "typecheck_info.m"
                  parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(check_hlds__typecheck_info__Type1_49, &check_hlds__typecheck_info__Type_50);
                }
#line 1003 "typecheck_info.m"
                {
#line 1003 "typecheck_info.m"
                  check_hlds__typecheck_info__TypeStr_28 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(check_hlds__typecheck_info__TypeVarSet_5, (MR_Integer) 0, check_hlds__typecheck_info__Type_50);
                }
#line 913 "typecheck_info.m"
                {
#line 913 "typecheck_info.m"
                  check_hlds__typecheck_info__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 913 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_34_34, 0) = ((MR_Box) (check_hlds__typecheck_info__VarStr_27));
#line 913 "typecheck_info.m"
                }
#line 913 "typecheck_info.m"
                {
#line 913 "typecheck_info.m"
                  check_hlds__typecheck_info__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "typecheck_info.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 913 "typecheck_info.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__V_39_39, 1) = ((MR_Box) (check_hlds__typecheck_info__TypeStr_28));
#line 913 "typecheck_info.m"
                }
#line 913 "typecheck_info.m"
                {
#line 913 "typecheck_info.m"
                  check_hlds__typecheck_info__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_38_38, 0) = ((MR_Box) (check_hlds__typecheck_info__V_39_39));
#line 913 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 913 "typecheck_info.m"
                }
#line 913 "typecheck_info.m"
                {
#line 913 "typecheck_info.m"
                  check_hlds__typecheck_info__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_info_scalar_common_1[21])));
#line 913 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_35_35, 1) = ((MR_Box) (check_hlds__typecheck_info__V_38_38));
#line 913 "typecheck_info.m"
                }
#line 913 "typecheck_info.m"
                {
#line 913 "typecheck_info.m"
                  check_hlds__typecheck_info__AssignPieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__AssignPieces_29, 0) = ((MR_Box) (check_hlds__typecheck_info__V_34_34));
#line 913 "typecheck_info.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__AssignPieces_29, 1) = ((MR_Box) (check_hlds__typecheck_info__V_35_35));
#line 913 "typecheck_info.m"
                }
#line 914 "typecheck_info.m"
                {
#line 914 "typecheck_info.m"
                  check_hlds__typecheck_info__TailPieces_30 = check_hlds__typecheck_info__type_assign_types_to_pieces_6_f_0(check_hlds__typecheck_info__Vars_18, check_hlds__typecheck_info__VarSet_2, check_hlds__typecheck_info__VarTypes_3, check_hlds__typecheck_info__TypeBindings_4, check_hlds__typecheck_info__TypeVarSet_5, (MR_Integer) 1);
                }
#line 5964 "check_hlds.typecheck_info.c"
                check_hlds__typecheck_info__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 916 "typecheck_info.m"
                {
#line 916 "typecheck_info.m"
                  check_hlds__typecheck_info__V_42_42 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck_info__TypeCtorInfo_44_44, check_hlds__typecheck_info__AssignPieces_29, check_hlds__typecheck_info__TailPieces_30);
                }
#line 916 "typecheck_info.m"
                {
#line 916 "typecheck_info.m"
                  check_hlds__typecheck_info__Pieces_7 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck_info__TypeCtorInfo_44_44, check_hlds__typecheck_info__PrefixPieces_26, check_hlds__typecheck_info__V_42_42);
                }
#line 910 "typecheck_info.m"
              }
#line 917 "typecheck_info.m"
            else
#line 918 "typecheck_info.m"
              {
#line 918 "typecheck_info.m"
                /* direct tailcall eliminated */
#line 918 "typecheck_info.m"
                {
#line 918 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__HeadVar__1__tmp_copy_1 = check_hlds__typecheck_info__Vars_18;

#line 918 "typecheck_info.m"
                  check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__HeadVar__1__tmp_copy_1;
#line 918 "typecheck_info.m"
                }
#line 918 "typecheck_info.m"
                continue;
#line 918 "typecheck_info.m"
              }
#line 902 "typecheck_info.m"
          }
#line 893 "typecheck_info.m"
        return check_hlds__typecheck_info__Pieces_7;
#line 893 "typecheck_info.m"
      }
#line 893 "typecheck_info.m"
      break;
#line 893 "typecheck_info.m"
    }
#line 890 "typecheck_info.m"
}

#line 861 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__write_type_assign_types_8_p_0(
#line 861 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__HeadVar__1_1,
#line 861 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_2,
#line 861 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarTypes_3,
#line 861 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 861 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeVarSet_5,
#line 861 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__FoundOne_6)
#line 861 "typecheck_info.m"
{
#line 864 "typecheck_info.m"
  while (MR_TRUE)
#line 864 "typecheck_info.m"
    {
#line 864 "typecheck_info.m"
      /* tailcall optimized into a loop */
#line 864 "typecheck_info.m"
      {
#line 864 "typecheck_info.m"
        MR_bool check_hlds__typecheck_info__succeeded;

#line 864 "typecheck_info.m"
        if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 868 "typecheck_info.m"
          if ((check_hlds__typecheck_info__FoundOne_6 == (MR_Integer) 0))
#line 866 "typecheck_info.m"
            {
#line 867 "typecheck_info.m"
              {
#line 867 "typecheck_info.m"
                mercury__io__write_string_3_p_0((MR_String) "(No variables were assigned a type)");
#line 867 "typecheck_info.m"
                return;
              }
#line 866 "typecheck_info.m"
            }
#line 868 "typecheck_info.m"
          else
#line 869 "typecheck_info.m"
            {
#line 869 "typecheck_info.m"
            }
#line 864 "typecheck_info.m"
        else
#line 872 "typecheck_info.m"
          {
#line 872 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 872 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 885 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Type_27;

#line 873 "typecheck_info.m"
            {
#line 873 "typecheck_info.m"
              check_hlds__typecheck_info__succeeded = parse_tree__prog_data__search_var_type_3_p_0(check_hlds__typecheck_info__VarTypes_3, check_hlds__typecheck_info__Var_19, &check_hlds__typecheck_info__Type_27);
            }
#line 885 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 879 "typecheck_info.m"
              {
#line 879 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__Type1_47;
#line 879 "typecheck_info.m"
                MR_Word check_hlds__typecheck_info__Type_48;

#line 877 "typecheck_info.m"
                if ((check_hlds__typecheck_info__FoundOne_6 == (MR_Integer) 0))
#line 878 "typecheck_info.m"
                  {
#line 878 "typecheck_info.m"
                  }
#line 877 "typecheck_info.m"
                else
#line 875 "typecheck_info.m"
                  {
#line 876 "typecheck_info.m"
                    {
#line 876 "typecheck_info.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n\t");
                    }
#line 875 "typecheck_info.m"
                  }
#line 880 "typecheck_info.m"
                {
#line 880 "typecheck_info.m"
                  parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__typecheck_info__VarSet_2, (MR_Integer) 1, check_hlds__typecheck_info__Var_19);
                }
#line 881 "typecheck_info.m"
                {
#line 881 "typecheck_info.m"
                  mercury__io__write_string_3_p_0((MR_String) ": ");
                }
#line 994 "typecheck_info.m"
                {
#line 994 "typecheck_info.m"
                  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__typecheck_info__TypeBindings_4, check_hlds__typecheck_info__Type_27, &check_hlds__typecheck_info__Type1_47);
                }
#line 995 "typecheck_info.m"
                {
#line 995 "typecheck_info.m"
                  parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(check_hlds__typecheck_info__Type1_47, &check_hlds__typecheck_info__Type_48);
                }
#line 996 "typecheck_info.m"
                {
#line 996 "typecheck_info.m"
                  parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(check_hlds__typecheck_info__TypeVarSet_5, (MR_Integer) 1, check_hlds__typecheck_info__Type_48);
                }
#line 883 "typecheck_info.m"
                /* direct tailcall eliminated */
#line 883 "typecheck_info.m"
                {
#line 883 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__HeadVar__1__tmp_copy_1 = check_hlds__typecheck_info__Vars_20;

#line 883 "typecheck_info.m"
                  check_hlds__typecheck_info__FoundOne_6 = (MR_Integer) 1;
#line 883 "typecheck_info.m"
                  check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__HeadVar__1__tmp_copy_1;
#line 883 "typecheck_info.m"
                }
#line 883 "typecheck_info.m"
                continue;
#line 879 "typecheck_info.m"
              }
#line 885 "typecheck_info.m"
            else
#line 886 "typecheck_info.m"
              {
#line 886 "typecheck_info.m"
                /* direct tailcall eliminated */
#line 886 "typecheck_info.m"
                {
#line 886 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__HeadVar__1__tmp_copy_1 = check_hlds__typecheck_info__Vars_20;

#line 886 "typecheck_info.m"
                  check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__HeadVar__1__tmp_copy_1;
#line 886 "typecheck_info.m"
                }
#line 886 "typecheck_info.m"
                continue;
#line 886 "typecheck_info.m"
              }
#line 872 "typecheck_info.m"
          }
#line 864 "typecheck_info.m"
      }
#line 864 "typecheck_info.m"
      break;
#line 864 "typecheck_info.m"
    }
#line 861 "typecheck_info.m"
}

#line 825 "typecheck_info.m"
static MR_Word MR_CALL 
check_hlds__typecheck_info__type_assign_to_pieces_3_f_0(
#line 825 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeAssign_5,
#line 825 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__MaybeSeq_6,
#line 825 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_7)
#line 825 "typecheck_info.m"
{
#line 828 "typecheck_info.m"
  {
#line 828 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 828 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Pieces_8;
#line 828 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeCtorInfo_53_53;
#line 828 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__SeqPieces_11;
#line 828 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadTypeParams_12;
#line 828 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__VarTypes_13;
#line 828 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Constraints_14;
#line 828 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeBindings_15;
#line 828 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeVarSet_16;
#line 828 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Vars_17;
#line 828 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadPieces_18;
#line 828 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypePieces_22;
#line 828 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ConstraintPieces_23;
#line 828 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_46_46;
#line 828 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_47_47;
#line 828 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_48_48;
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_59_59;
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_60_60;

#line 837 "typecheck_info.m"
    if ((check_hlds__typecheck_info__MaybeSeq_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 839 "typecheck_info.m"
      check_hlds__typecheck_info__SeqPieces_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 837 "typecheck_info.m"
    else
#line 830 "typecheck_info.m"
      {
#line 830 "typecheck_info.m"
        MR_Integer check_hlds__typecheck_info__N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__MaybeSeq_6, (MR_Integer) 0)));
#line 830 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__SeqPieces0_10;
#line 830 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_26_26;
#line 830 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_27_27;

#line 831 "typecheck_info.m"
        {
#line 831 "typecheck_info.m"
          check_hlds__typecheck_info__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 831 "typecheck_info.m"
          MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 831 "typecheck_info.m"
          MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__V_27_27, 1) = ((MR_Box) (check_hlds__typecheck_info__N_9));
#line 831 "typecheck_info.m"
        }
#line 831 "typecheck_info.m"
        {
#line 831 "typecheck_info.m"
          check_hlds__typecheck_info__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 831 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_26_26, 0) = ((MR_Box) (check_hlds__typecheck_info__V_27_27));
#line 831 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[16])));
#line 831 "typecheck_info.m"
        }
#line 831 "typecheck_info.m"
        {
#line 831 "typecheck_info.m"
          check_hlds__typecheck_info__SeqPieces0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 831 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__SeqPieces0_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_info_scalar_common_1[18])));
#line 831 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__SeqPieces0_10, 1) = ((MR_Box) (check_hlds__typecheck_info__V_26_26));
#line 831 "typecheck_info.m"
        }
#line 832 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = (check_hlds__typecheck_info__N_9 > (MR_Integer) 1);
#line 834 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 833 "typecheck_info.m"
          {
#line 833 "typecheck_info.m"
            {
#line 833 "typecheck_info.m"
              check_hlds__typecheck_info__SeqPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 833 "typecheck_info.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__SeqPieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 833 "typecheck_info.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__SeqPieces_11, 1) = ((MR_Box) (check_hlds__typecheck_info__SeqPieces0_10));
#line 833 "typecheck_info.m"
            }
#line 833 "typecheck_info.m"
          }
#line 834 "typecheck_info.m"
        else
#line 835 "typecheck_info.m"
          check_hlds__typecheck_info__SeqPieces_11 = check_hlds__typecheck_info__SeqPieces0_10;
#line 830 "typecheck_info.m"
      }
#line 683 "typecheck_info.m"
    check_hlds__typecheck_info__VarTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 0)));
#line 683 "typecheck_info.m"
    check_hlds__typecheck_info__TypeVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 1)));
#line 683 "typecheck_info.m"
    check_hlds__typecheck_info__HeadTypeParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 2)));
#line 683 "typecheck_info.m"
    check_hlds__typecheck_info__TypeBindings_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 3)));
#line 683 "typecheck_info.m"
    check_hlds__typecheck_info__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 4)));
#line 683 "typecheck_info.m"
    check_hlds__typecheck_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 5)));
#line 683 "typecheck_info.m"
    check_hlds__typecheck_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 6)));
#line 846 "typecheck_info.m"
    {
#line 846 "typecheck_info.m"
      parse_tree__prog_data__vartypes_vars_2_p_0(check_hlds__typecheck_info__VarTypes_13, &check_hlds__typecheck_info__Vars_17);
    }
#line 850 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadTypeParams_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 849 "typecheck_info.m"
      check_hlds__typecheck_info__HeadPieces_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 850 "typecheck_info.m"
    else
#line 851 "typecheck_info.m"
      {
#line 851 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__VarsStr_21;
#line 851 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_37_37;
#line 851 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__V_38_38;
#line 851 "typecheck_info.m"
        MR_String check_hlds__typecheck_info__V_40_40;

#line 852 "typecheck_info.m"
        {
#line 852 "typecheck_info.m"
          check_hlds__typecheck_info__VarsStr_21 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck_info__TypeVarSet_16, (MR_Integer) 1, check_hlds__typecheck_info__HeadTypeParams_12);
        }
#line 853 "typecheck_info.m"
        {
#line 853 "typecheck_info.m"
          check_hlds__typecheck_info__V_40_40 = mercury__string__f_43_43_2_f_0(check_hlds__typecheck_info__VarsStr_21, (MR_String) "]");
        }
#line 853 "typecheck_info.m"
        {
#line 853 "typecheck_info.m"
          check_hlds__typecheck_info__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "some [", check_hlds__typecheck_info__V_40_40);
        }
#line 853 "typecheck_info.m"
        {
#line 853 "typecheck_info.m"
          check_hlds__typecheck_info__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "typecheck_info.m"
          MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 853 "typecheck_info.m"
          MR_hl_field(MR_mktag(3), check_hlds__typecheck_info__V_37_37, 1) = ((MR_Box) (check_hlds__typecheck_info__V_38_38));
#line 853 "typecheck_info.m"
        }
#line 853 "typecheck_info.m"
        {
#line 853 "typecheck_info.m"
          check_hlds__typecheck_info__HeadPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadPieces_18, 0) = ((MR_Box) (check_hlds__typecheck_info__V_37_37));
#line 853 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadPieces_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[14])));
#line 853 "typecheck_info.m"
        }
#line 851 "typecheck_info.m"
      }
#line 855 "typecheck_info.m"
    {
#line 855 "typecheck_info.m"
      check_hlds__typecheck_info__TypePieces_22 = check_hlds__typecheck_info__type_assign_types_to_pieces_6_f_0(check_hlds__typecheck_info__Vars_17, check_hlds__typecheck_info__VarSet_7, check_hlds__typecheck_info__VarTypes_13, check_hlds__typecheck_info__TypeBindings_15, check_hlds__typecheck_info__TypeVarSet_16, (MR_Integer) 0);
    }
#line 857 "typecheck_info.m"
    {
#line 857 "typecheck_info.m"
      check_hlds__typecheck_info__ConstraintPieces_23 = check_hlds__typecheck_info__type_assign_hlds_constraints_to_pieces_3_f_0(check_hlds__typecheck_info__Constraints_14, check_hlds__typecheck_info__TypeBindings_15, check_hlds__typecheck_info__TypeVarSet_16);
    }
#line 6377 "check_hlds.typecheck_info.c"
    check_hlds__typecheck_info__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 859 "typecheck_info.m"
    {
#line 859 "typecheck_info.m"
      check_hlds__typecheck_info__V_48_48 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck_info__TypeCtorInfo_53_53, check_hlds__typecheck_info__ConstraintPieces_23, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_info_scalar_common_1[14]));
    }
#line 859 "typecheck_info.m"
    {
#line 859 "typecheck_info.m"
      check_hlds__typecheck_info__V_47_47 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck_info__TypeCtorInfo_53_53, check_hlds__typecheck_info__TypePieces_22, check_hlds__typecheck_info__V_48_48);
    }
#line 859 "typecheck_info.m"
    {
#line 859 "typecheck_info.m"
      check_hlds__typecheck_info__V_46_46 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck_info__TypeCtorInfo_53_53, check_hlds__typecheck_info__HeadPieces_18, check_hlds__typecheck_info__V_47_47);
    }
#line 859 "typecheck_info.m"
    {
#line 859 "typecheck_info.m"
      check_hlds__typecheck_info__Pieces_8 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck_info__TypeCtorInfo_53_53, check_hlds__typecheck_info__SeqPieces_11, check_hlds__typecheck_info__V_46_46);
    }
#line 828 "typecheck_info.m"
    return check_hlds__typecheck_info__Pieces_8;
#line 828 "typecheck_info.m"
  }
#line 825 "typecheck_info.m"
}

#line 801 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__write_type_assign_4_p_0(
#line 801 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeAssign_5,
#line 801 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__VarSet_6)
#line 801 "typecheck_info.m"
{
#line 804 "typecheck_info.m"
  {
#line 804 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 804 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadTypeParams_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 2)));
#line 804 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__VarTypes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 0)));
#line 804 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 4)));
#line 804 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeBindings_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 3)));
#line 804 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 1)));
#line 804 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Vars_13;
#line 804 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ConstraintsToProve_71;
#line 804 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__AssumedConstraints_72;
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 5)));
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_5, (MR_Integer) 6)));
#line 927 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_73_73;
#line 927 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_74_74;

#line 810 "typecheck_info.m"
    {
#line 810 "typecheck_info.m"
      parse_tree__prog_data__vartypes_vars_2_p_0(check_hlds__typecheck_info__VarTypes_9, &check_hlds__typecheck_info__Vars_13);
    }
#line 813 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadTypeParams_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 812 "typecheck_info.m"
      {
#line 812 "typecheck_info.m"
      }
#line 813 "typecheck_info.m"
    else
#line 814 "typecheck_info.m"
      {
#line 815 "typecheck_info.m"
        {
#line 815 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) "some [");
        }
#line 816 "typecheck_info.m"
        {
#line 816 "typecheck_info.m"
          parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck_info__TypeVarSet_12, (MR_Integer) 1, check_hlds__typecheck_info__HeadTypeParams_8);
        }
#line 817 "typecheck_info.m"
        {
#line 817 "typecheck_info.m"
          mercury__io__write_string_3_p_0((MR_String) "]\n\t");
        }
#line 814 "typecheck_info.m"
      }
#line 819 "typecheck_info.m"
    {
#line 819 "typecheck_info.m"
      check_hlds__typecheck_info__write_type_assign_types_8_p_0(check_hlds__typecheck_info__Vars_13, check_hlds__typecheck_info__VarSet_6, check_hlds__typecheck_info__VarTypes_9, check_hlds__typecheck_info__TypeBindings_11, check_hlds__typecheck_info__TypeVarSet_12, (MR_Integer) 0);
    }
#line 927 "typecheck_info.m"
    check_hlds__typecheck_info__ConstraintsToProve_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_10, (MR_Integer) 0)));
#line 927 "typecheck_info.m"
    check_hlds__typecheck_info__AssumedConstraints_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_10, (MR_Integer) 1)));
#line 927 "typecheck_info.m"
    check_hlds__typecheck_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_10, (MR_Integer) 2)));
#line 927 "typecheck_info.m"
    check_hlds__typecheck_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_10, (MR_Integer) 3)));
#line 929 "typecheck_info.m"
    {
#line 929 "typecheck_info.m"
      check_hlds__typecheck_info__write_type_assign_constraints_7_p_0((MR_String) "&", check_hlds__typecheck_info__AssumedConstraints_72, check_hlds__typecheck_info__TypeBindings_11, check_hlds__typecheck_info__TypeVarSet_12, (MR_Integer) 0);
    }
#line 931 "typecheck_info.m"
    {
#line 931 "typecheck_info.m"
      check_hlds__typecheck_info__write_type_assign_constraints_7_p_0((MR_String) "<=", check_hlds__typecheck_info__ConstraintsToProve_71, check_hlds__typecheck_info__TypeBindings_11, check_hlds__typecheck_info__TypeVarSet_12, (MR_Integer) 0);
    }
#line 823 "typecheck_info.m"
    {
#line 823 "typecheck_info.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 823 "typecheck_info.m"
      return;
    }
#line 804 "typecheck_info.m"
  }
#line 801 "typecheck_info.m"
}

#line 574 "typecheck_info.m"
static MR_bool MR_CALL 
check_hlds__typecheck_info__tvar_maps_to_tvar_3_p_0(
#line 574 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_4,
#line 574 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TVar0_5,
#line 574 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__TVar_6)
#line 574 "typecheck_info.m"
{
#line 580 "typecheck_info.m"
  while (MR_TRUE)
#line 580 "typecheck_info.m"
    {
#line 580 "typecheck_info.m"
      /* tailcall optimized into a loop */
#line 580 "typecheck_info.m"
      {
#line 580 "typecheck_info.m"
        MR_bool check_hlds__typecheck_info__succeeded;
#line 580 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Type_7;
#line 577 "typecheck_info.m"
        MR_Box check_hlds__typecheck_info__conv0_Type_7;

#line 577 "typecheck_info.m"
        {
#line 577 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck_info__TypeBindings_4, ((MR_Box) (check_hlds__typecheck_info__TVar0_5)), &check_hlds__typecheck_info__conv0_Type_7);
        }
#line 577 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 577 "typecheck_info.m"
          {
#line 577 "typecheck_info.m"
            check_hlds__typecheck_info__Type_7 = ((MR_Word) check_hlds__typecheck_info__conv0_Type_7);
#line 577 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 577 "typecheck_info.m"
          }
#line 580 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 578 "typecheck_info.m"
          {
#line 578 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TVar1_8;
#line 578 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_9_9;

#line 578 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck_info__Type_7)) == (MR_mktag((MR_Integer) 0)));
#line 578 "typecheck_info.m"
            if (check_hlds__typecheck_info__succeeded)
#line 578 "typecheck_info.m"
              {
#line 578 "typecheck_info.m"
                check_hlds__typecheck_info__TVar1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Type_7, (MR_Integer) 0)));
#line 578 "typecheck_info.m"
                check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Type_7, (MR_Integer) 1)));
#line 579 "typecheck_info.m"
                /* direct tailcall eliminated */
#line 579 "typecheck_info.m"
                {
#line 579 "typecheck_info.m"
                  MR_Word check_hlds__typecheck_info__TVar0__tmp_copy_5 = check_hlds__typecheck_info__TVar1_8;

#line 579 "typecheck_info.m"
                  check_hlds__typecheck_info__TVar0_5 = check_hlds__typecheck_info__TVar0__tmp_copy_5;
#line 579 "typecheck_info.m"
                }
#line 579 "typecheck_info.m"
                continue;
#line 578 "typecheck_info.m"
              }
#line 578 "typecheck_info.m"
          }
#line 580 "typecheck_info.m"
        else
#line 581 "typecheck_info.m"
          {
#line 581 "typecheck_info.m"
            *check_hlds__typecheck_info__TVar_6 = check_hlds__typecheck_info__TVar0_5;
#line 581 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 581 "typecheck_info.m"
          }
#line 580 "typecheck_info.m"
        return check_hlds__typecheck_info__succeeded;
#line 580 "typecheck_info.m"
      }
#line 580 "typecheck_info.m"
      break;
#line 580 "typecheck_info.m"
    }
#line 574 "typecheck_info.m"
}

#line 560 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_p_0(
#line 560 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OldHeadTypeParams_6,
#line 560 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_7,
#line 560 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TVar_8,
#line 560 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_Renaming_0_11,
#line 560 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_Renaming_12)
#line 560 "typecheck_info.m"
{
#line 570 "typecheck_info.m"
  {
#line 570 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 570 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__NewTVar_10;
#line 566 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeInfo_16_16;
#line 567 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeInfo_14_14;

#line 565 "typecheck_info.m"
    {
#line 565 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = check_hlds__typecheck_info__tvar_maps_to_tvar_3_p_0(check_hlds__typecheck_info__TypeBindings_7, check_hlds__typecheck_info__TVar_8, &check_hlds__typecheck_info__NewTVar_10);
    }
#line 565 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 565 "typecheck_info.m"
      {
#line 6644 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__TypeInfo_16_16 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0];
#line 566 "typecheck_info.m"
        {
#line 566 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck_info__TypeInfo_16_16, ((MR_Box) (check_hlds__typecheck_info__NewTVar_10)), ((MR_Box) (check_hlds__typecheck_info__TVar_8)));
        }
#line 566 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 565 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 565 "typecheck_info.m"
          {
#line 6657 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_14_14 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0];
#line 567 "typecheck_info.m"
            {
#line 567 "typecheck_info.m"
              check_hlds__typecheck_info__succeeded = mercury__list__member_2_p_0(check_hlds__typecheck_info__TypeInfo_14_14, ((MR_Box) (check_hlds__typecheck_info__NewTVar_10)), check_hlds__typecheck_info__OldHeadTypeParams_6);
            }
#line 567 "typecheck_info.m"
            check_hlds__typecheck_info__succeeded = !(check_hlds__typecheck_info__succeeded);
#line 565 "typecheck_info.m"
          }
#line 565 "typecheck_info.m"
      }
#line 570 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 569 "typecheck_info.m"
      {
#line 569 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_15_15 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0];

#line 569 "typecheck_info.m"
        {
#line 569 "typecheck_info.m"
          mercury__map__det_insert_4_p_0(check_hlds__typecheck_info__TypeInfo_15_15, check_hlds__typecheck_info__TypeInfo_15_15, ((MR_Box) (check_hlds__typecheck_info__TVar_8)), ((MR_Box) (check_hlds__typecheck_info__NewTVar_10)), check_hlds__typecheck_info__STATE_VARIABLE_Renaming_0_11, check_hlds__typecheck_info__STATE_VARIABLE_Renaming_12);
#line 569 "typecheck_info.m"
          return;
        }
#line 569 "typecheck_info.m"
      }
#line 570 "typecheck_info.m"
    else
#line 569 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Renaming_12 = check_hlds__typecheck_info__STATE_VARIABLE_Renaming_0_11;
#line 570 "typecheck_info.m"
  }
#line 560 "typecheck_info.m"
}

#line 557 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__get_existq_tvar_renaming_4_p_0_1(
#line 557 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 557 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 557 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 557 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_3)
#line 557 "typecheck_info.m"
{
#line 557 "typecheck_info.m"
  {
#line 557 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__closure = check_hlds__typecheck_info__closure_arg;
#line 557 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__conv0_STATE_VARIABLE_Renaming_12;

#line 557 "typecheck_info.m"
    {
#line 557 "typecheck_info.m"
      check_hlds__typecheck_info__get_existq_tvar_renaming_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), &check_hlds__typecheck_info__conv0_STATE_VARIABLE_Renaming_12);
    }
#line 557 "typecheck_info.m"
    *check_hlds__typecheck_info__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck_info__conv0_STATE_VARIABLE_Renaming_12));
#line 557 "typecheck_info.m"
  }
#line 557 "typecheck_info.m"
}

#line 552 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__get_existq_tvar_renaming_4_p_0(
#line 552 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__OldHeadTypeParams_5,
#line 552 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__ExistQVars_6,
#line 552 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeBindings_7,
#line 552 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__ExistTypeRenaming_8)
#line 552 "typecheck_info.m"
{
#line 556 "typecheck_info.m"
  {
#line 556 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 556 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeInfo_14_14;
#line 556 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;
#line 556 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10;
#line 557 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__conv1_ExistTypeRenaming_8;

#line 557 "typecheck_info.m"
    {
#line 557 "typecheck_info.m"
      check_hlds__typecheck_info__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 557 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, 0) = ((MR_Box) (&check_hlds__typecheck_info_scalar_common_4[1]));
#line 557 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, 1) = ((MR_Box) (check_hlds__typecheck_info__get_existq_tvar_renaming_4_p_0_1));
#line 557 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 557 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, 3) = ((MR_Box) (check_hlds__typecheck_info__OldHeadTypeParams_5));
#line 557 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, 4) = ((MR_Box) (check_hlds__typecheck_info__TypeBindings_7));
#line 557 "typecheck_info.m"
    }
#line 6769 "check_hlds.typecheck_info.c"
    check_hlds__typecheck_info__TypeInfo_14_14 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0];
#line 558 "typecheck_info.m"
    {
#line 558 "typecheck_info.m"
      check_hlds__typecheck_info__V_10_10 = mercury__map__init_0_f_0(check_hlds__typecheck_info__TypeInfo_14_14, check_hlds__typecheck_info__TypeInfo_14_14);
    }
#line 557 "typecheck_info.m"
    {
#line 557 "typecheck_info.m"
      mercury__list__foldl_4_p_0(check_hlds__typecheck_info__TypeInfo_14_14, (MR_Word) &check_hlds__typecheck_info_scalar_common_2[1], check_hlds__typecheck_info__V_9_9, check_hlds__typecheck_info__ExistQVars_6, ((MR_Box) (check_hlds__typecheck_info__V_10_10)), &check_hlds__typecheck_info__conv1_ExistTypeRenaming_8);
    }
#line 557 "typecheck_info.m"
    *check_hlds__typecheck_info__ExistTypeRenaming_8 = ((MR_Word) check_hlds__typecheck_info__conv1_ExistTypeRenaming_8);
#line 556 "typecheck_info.m"
  }
#line 552 "typecheck_info.m"
}

#line 540 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__expand_types_5_p_0(
#line 540 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__TypeSubst_6,
#line 540 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__Type0_7,
#line 540 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__Type_8,
#line 540 "typecheck_info.m"
  MR_Word check_hlds__typecheck_info__STATE_VARIABLE_TypeVarsSet_0_11,
#line 540 "typecheck_info.m"
  MR_Word * check_hlds__typecheck_info__STATE_VARIABLE_TypeVarsSet_12)
#line 540 "typecheck_info.m"
{
#line 543 "typecheck_info.m"
  {
#line 543 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 543 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeVars_10;

#line 544 "typecheck_info.m"
    {
#line 544 "typecheck_info.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__typecheck_info__TypeSubst_6, check_hlds__typecheck_info__Type0_7, check_hlds__typecheck_info__Type_8);
    }
#line 545 "typecheck_info.m"
    {
#line 545 "typecheck_info.m"
      parse_tree__prog_type__type_vars_2_p_0(*check_hlds__typecheck_info__Type_8, &check_hlds__typecheck_info__TypeVars_10);
    }
#line 546 "typecheck_info.m"
    {
#line 546 "typecheck_info.m"
      mercury__set__insert_list_3_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], check_hlds__typecheck_info__TypeVars_10, check_hlds__typecheck_info__STATE_VARIABLE_TypeVarsSet_0_11, check_hlds__typecheck_info__STATE_VARIABLE_TypeVarsSet_12);
#line 546 "typecheck_info.m"
      return;
    }
#line 543 "typecheck_info.m"
  }
#line 540 "typecheck_info.m"
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
#line 1007 "typecheck_info.m"
  {
#line 1007 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 1007 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 1)));
#line 1007 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Globals_9;
#line 1007 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__DoCheckPoint_10;
#line 1008 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 0)));
#line 1008 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 2)));
#line 1008 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 3)));
#line 1008 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 4)));
#line 1008 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 5)));
#line 1008 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 6)));
#line 1008 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_6, (MR_Integer) 7)));

#line 1009 "typecheck_info.m"
    {
#line 1009 "typecheck_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck_info__ModuleInfo_8, &check_hlds__typecheck_info__Globals_9);
    }
#line 1010 "typecheck_info.m"
    {
#line 1010 "typecheck_info.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck_info__Globals_9, (MR_Integer) 58, &check_hlds__typecheck_info__DoCheckPoint_10);
    }
#line 1014 "typecheck_info.m"
    if ((check_hlds__typecheck_info__DoCheckPoint_10 == (MR_Integer) 0))
#line 1015 "typecheck_info.m"
      {
#line 1015 "typecheck_info.m"
      }
#line 1014 "typecheck_info.m"
    else
#line 1013 "typecheck_info.m"
      {
#line 1013 "typecheck_info.m"
        check_hlds__typecheck_info__do_type_checkpoint_4_p_0(check_hlds__typecheck_info__Msg_5, check_hlds__typecheck_info__Info_6);
#line 1013 "typecheck_info.m"
        return;
      }
#line 1007 "typecheck_info.m"
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
#line 791 "typecheck_info.m"
  {
#line 791 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 791 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__4_4;

#line 791 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 791 "typecheck_info.m"
      check_hlds__typecheck_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 791 "typecheck_info.m"
    else
#line 793 "typecheck_info.m"
      {
#line 793 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ArgTypeAssign_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 793 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ArgTypeAssigns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 793 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeAssign_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_7, (MR_Integer) 0)));
#line 793 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_15_15;
#line 793 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16;
#line 793 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_17_17;
#line 796 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info___ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_7, (MR_Integer) 1)));
#line 796 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info___Cnstrs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_7, (MR_Integer) 2)));

#line 797 "typecheck_info.m"
        {
#line 797 "typecheck_info.m"
          check_hlds__typecheck_info__V_15_15 = check_hlds__typecheck_info__type_assign_to_pieces_3_f_0(check_hlds__typecheck_info__TypeAssign_12, check_hlds__typecheck_info__MaybeSeq_2, check_hlds__typecheck_info__VarSet_3);
        }
#line 766 "typecheck_info.m"
        if ((check_hlds__typecheck_info__MaybeSeq_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 766 "typecheck_info.m"
          check_hlds__typecheck_info__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 766 "typecheck_info.m"
        else
#line 767 "typecheck_info.m"
          {
#line 767 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__N_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__MaybeSeq_2, (MR_Integer) 0)));
#line 767 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__V_20_20 = (check_hlds__typecheck_info__N_19 + (MR_Integer) 1);

#line 767 "typecheck_info.m"
            {
#line 767 "typecheck_info.m"
              check_hlds__typecheck_info__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 767 "typecheck_info.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_17_17, 0) = ((MR_Box) (check_hlds__typecheck_info__V_20_20));
#line 767 "typecheck_info.m"
            }
#line 767 "typecheck_info.m"
          }
#line 798 "typecheck_info.m"
        {
#line 798 "typecheck_info.m"
          check_hlds__typecheck_info__V_16_16 = check_hlds__typecheck_info__args_type_assign_set_to_pieces_3_f_0(check_hlds__typecheck_info__ArgTypeAssigns_8, check_hlds__typecheck_info__V_17_17, check_hlds__typecheck_info__VarSet_3);
        }
#line 797 "typecheck_info.m"
        {
#line 797 "typecheck_info.m"
          check_hlds__typecheck_info__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__typecheck_info__V_15_15, check_hlds__typecheck_info__V_16_16);
        }
#line 793 "typecheck_info.m"
      }
#line 791 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__4_4;
#line 791 "typecheck_info.m"
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
#line 781 "typecheck_info.m"
  while (MR_TRUE)
#line 781 "typecheck_info.m"
    {
#line 781 "typecheck_info.m"
      /* tailcall optimized into a loop */
#line 781 "typecheck_info.m"
      {
#line 781 "typecheck_info.m"
        MR_bool check_hlds__typecheck_info__succeeded;

#line 781 "typecheck_info.m"
        if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 781 "typecheck_info.m"
          {
#line 781 "typecheck_info.m"
          }
#line 781 "typecheck_info.m"
        else
#line 782 "typecheck_info.m"
          {
#line 782 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__ArgTypeAssign_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 782 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__ArgTypeAssigns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 782 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeAssign_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_9, (MR_Integer) 0)));
#line 785 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info___ArgTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_9, (MR_Integer) 1)));
#line 785 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info___Cnstrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_9, (MR_Integer) 2)));

#line 786 "typecheck_info.m"
            {
#line 786 "typecheck_info.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 787 "typecheck_info.m"
            {
#line 787 "typecheck_info.m"
              check_hlds__typecheck_info__write_type_assign_4_p_0(check_hlds__typecheck_info__TypeAssign_13, check_hlds__typecheck_info__VarSet_2);
            }
#line 788 "typecheck_info.m"
            {
#line 788 "typecheck_info.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 789 "typecheck_info.m"
            /* direct tailcall eliminated */
#line 789 "typecheck_info.m"
            {
#line 789 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__HeadVar__1__tmp_copy_1 = check_hlds__typecheck_info__ArgTypeAssigns_10;

#line 789 "typecheck_info.m"
              check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__HeadVar__1__tmp_copy_1;
#line 789 "typecheck_info.m"
            }
#line 789 "typecheck_info.m"
            continue;
#line 782 "typecheck_info.m"
          }
#line 781 "typecheck_info.m"
      }
#line 781 "typecheck_info.m"
      break;
#line 781 "typecheck_info.m"
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
#line 776 "typecheck_info.m"
  {
#line 776 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 776 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__4_4;

#line 776 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 776 "typecheck_info.m"
      check_hlds__typecheck_info__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 776 "typecheck_info.m"
    else
#line 777 "typecheck_info.m"
      {
#line 777 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeAssign_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 777 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeAssigns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 777 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_11_11;
#line 777 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_12_12;
#line 777 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_13_13;

#line 778 "typecheck_info.m"
        {
#line 778 "typecheck_info.m"
          check_hlds__typecheck_info__V_11_11 = check_hlds__typecheck_info__type_assign_to_pieces_3_f_0(check_hlds__typecheck_info__TypeAssign_7, check_hlds__typecheck_info__MaybeSeq_2, check_hlds__typecheck_info__VarSet_3);
        }
#line 766 "typecheck_info.m"
        if ((check_hlds__typecheck_info__MaybeSeq_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 766 "typecheck_info.m"
          check_hlds__typecheck_info__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 766 "typecheck_info.m"
        else
#line 767 "typecheck_info.m"
          {
#line 767 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__N_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__MaybeSeq_2, (MR_Integer) 0)));
#line 767 "typecheck_info.m"
            MR_Integer check_hlds__typecheck_info__V_16_16 = (check_hlds__typecheck_info__N_15 + (MR_Integer) 1);

#line 767 "typecheck_info.m"
            {
#line 767 "typecheck_info.m"
              check_hlds__typecheck_info__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 767 "typecheck_info.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_13_13, 0) = ((MR_Box) (check_hlds__typecheck_info__V_16_16));
#line 767 "typecheck_info.m"
            }
#line 767 "typecheck_info.m"
          }
#line 779 "typecheck_info.m"
        {
#line 779 "typecheck_info.m"
          check_hlds__typecheck_info__V_12_12 = check_hlds__typecheck_info__type_assign_set_to_pieces_3_f_0(check_hlds__typecheck_info__TypeAssigns_8, check_hlds__typecheck_info__V_13_13, check_hlds__typecheck_info__VarSet_3);
        }
#line 778 "typecheck_info.m"
        {
#line 778 "typecheck_info.m"
          check_hlds__typecheck_info__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__typecheck_info__V_11_11, check_hlds__typecheck_info__V_12_12);
        }
#line 777 "typecheck_info.m"
      }
#line 776 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__4_4;
#line 776 "typecheck_info.m"
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
#line 769 "typecheck_info.m"
  while (MR_TRUE)
#line 769 "typecheck_info.m"
    {
#line 769 "typecheck_info.m"
      /* tailcall optimized into a loop */
#line 769 "typecheck_info.m"
      {
#line 769 "typecheck_info.m"
        MR_bool check_hlds__typecheck_info__succeeded;

#line 769 "typecheck_info.m"
        if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 769 "typecheck_info.m"
          {
#line 769 "typecheck_info.m"
          }
#line 769 "typecheck_info.m"
        else
#line 770 "typecheck_info.m"
          {
#line 770 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeAssign_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 770 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeAssigns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 770 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__HeadTypeParams_26;
#line 770 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__VarTypes_27;
#line 770 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Constraints_28;
#line 770 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeBindings_29;
#line 770 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeVarSet_30;
#line 770 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Vars_31;
#line 770 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__ConstraintsToProve_87;
#line 770 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__AssumedConstraints_88;
#line 683 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_51_51;
#line 683 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_52_52;
#line 927 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_89_89;
#line 927 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_90_90;

#line 771 "typecheck_info.m"
            {
#line 771 "typecheck_info.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 683 "typecheck_info.m"
            check_hlds__typecheck_info__VarTypes_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 0)));
#line 683 "typecheck_info.m"
            check_hlds__typecheck_info__TypeVarSet_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 1)));
#line 683 "typecheck_info.m"
            check_hlds__typecheck_info__HeadTypeParams_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 2)));
#line 683 "typecheck_info.m"
            check_hlds__typecheck_info__TypeBindings_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 3)));
#line 683 "typecheck_info.m"
            check_hlds__typecheck_info__Constraints_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 4)));
#line 683 "typecheck_info.m"
            check_hlds__typecheck_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 5)));
#line 683 "typecheck_info.m"
            check_hlds__typecheck_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign_9, (MR_Integer) 6)));
#line 810 "typecheck_info.m"
            {
#line 810 "typecheck_info.m"
              parse_tree__prog_data__vartypes_vars_2_p_0(check_hlds__typecheck_info__VarTypes_27, &check_hlds__typecheck_info__Vars_31);
            }
#line 813 "typecheck_info.m"
            if ((check_hlds__typecheck_info__HeadTypeParams_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 812 "typecheck_info.m"
              {
#line 812 "typecheck_info.m"
              }
#line 813 "typecheck_info.m"
            else
#line 814 "typecheck_info.m"
              {
#line 815 "typecheck_info.m"
                {
#line 815 "typecheck_info.m"
                  mercury__io__write_string_3_p_0((MR_String) "some [");
                }
#line 816 "typecheck_info.m"
                {
#line 816 "typecheck_info.m"
                  parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck_info__TypeVarSet_30, (MR_Integer) 1, check_hlds__typecheck_info__HeadTypeParams_26);
                }
#line 817 "typecheck_info.m"
                {
#line 817 "typecheck_info.m"
                  mercury__io__write_string_3_p_0((MR_String) "]\n\t");
                }
#line 814 "typecheck_info.m"
              }
#line 819 "typecheck_info.m"
            {
#line 819 "typecheck_info.m"
              check_hlds__typecheck_info__write_type_assign_types_8_p_0(check_hlds__typecheck_info__Vars_31, check_hlds__typecheck_info__VarSet_2, check_hlds__typecheck_info__VarTypes_27, check_hlds__typecheck_info__TypeBindings_29, check_hlds__typecheck_info__TypeVarSet_30, (MR_Integer) 0);
            }
#line 927 "typecheck_info.m"
            check_hlds__typecheck_info__ConstraintsToProve_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_28, (MR_Integer) 0)));
#line 927 "typecheck_info.m"
            check_hlds__typecheck_info__AssumedConstraints_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_28, (MR_Integer) 1)));
#line 927 "typecheck_info.m"
            check_hlds__typecheck_info__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_28, (MR_Integer) 2)));
#line 927 "typecheck_info.m"
            check_hlds__typecheck_info__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Constraints_28, (MR_Integer) 3)));
#line 929 "typecheck_info.m"
            {
#line 929 "typecheck_info.m"
              check_hlds__typecheck_info__write_type_assign_constraints_7_p_0((MR_String) "&", check_hlds__typecheck_info__AssumedConstraints_88, check_hlds__typecheck_info__TypeBindings_29, check_hlds__typecheck_info__TypeVarSet_30, (MR_Integer) 0);
            }
#line 931 "typecheck_info.m"
            {
#line 931 "typecheck_info.m"
              check_hlds__typecheck_info__write_type_assign_constraints_7_p_0((MR_String) "<=", check_hlds__typecheck_info__ConstraintsToProve_87, check_hlds__typecheck_info__TypeBindings_29, check_hlds__typecheck_info__TypeVarSet_30, (MR_Integer) 0);
            }
#line 823 "typecheck_info.m"
            {
#line 823 "typecheck_info.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 773 "typecheck_info.m"
            {
#line 773 "typecheck_info.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 774 "typecheck_info.m"
            /* direct tailcall eliminated */
#line 774 "typecheck_info.m"
            {
#line 774 "typecheck_info.m"
              MR_Word check_hlds__typecheck_info__HeadVar__1__tmp_copy_1 = check_hlds__typecheck_info__TypeAssigns_10;

#line 774 "typecheck_info.m"
              check_hlds__typecheck_info__HeadVar__1_1 = check_hlds__typecheck_info__HeadVar__1__tmp_copy_1;
#line 774 "typecheck_info.m"
            }
#line 774 "typecheck_info.m"
            continue;
#line 770 "typecheck_info.m"
          }
#line 769 "typecheck_info.m"
      }
#line 769 "typecheck_info.m"
      break;
#line 769 "typecheck_info.m"
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
#line 756 "typecheck_info.m"
  {
#line 756 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 756 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 5)));
#line 756 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 0)));
#line 756 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 1)));
#line 756 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 2)));
#line 756 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 3)));
#line 756 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__CTI_3, (MR_Integer) 4)));

#line 756 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 756 "typecheck_info.m"
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
#line 722 "typecheck_info.m"
  {
#line 722 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 722 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2;

#line 722 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 722 "typecheck_info.m"
      check_hlds__typecheck_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 722 "typecheck_info.m"
    else
#line 724 "typecheck_info.m"
      {
#line 724 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ArgTypeAssign_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 724 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ArgTypeAssigns_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 724 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_3, (MR_Integer) 0)));
#line 724 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_3, (MR_Integer) 1)));
#line 724 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgTypeAssign_3, (MR_Integer) 2)));

#line 731 "typecheck_info.m"
        if ((check_hlds__typecheck_info__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 727 "typecheck_info.m"
          {
#line 727 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_14_14;
#line 727 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_15_15;
#line 727 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__OldConstraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 4)));
#line 727 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Bindings_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 3)));
#line 727 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Constraints_22;
#line 727 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__NewConstraints_23;
#line 685 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 0)));
#line 685 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 1)));
#line 685 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 2)));
#line 685 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 5)));
#line 685 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 6)));
#line 698 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_43_43;
#line 698 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_44_44;
#line 698 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_45_45;
#line 698 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_46_46;
#line 698 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_48_48;
#line 698 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_49_49;
#line 698 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_47_47;

#line 744 "typecheck_info.m"
            {
#line 744 "typecheck_info.m"
              check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(check_hlds__typecheck_info__Bindings_21, check_hlds__typecheck_info__V_8_8, &check_hlds__typecheck_info__Constraints_22);
            }
#line 745 "typecheck_info.m"
            {
#line 745 "typecheck_info.m"
              hlds__hlds_data__merge_hlds_constraints_3_p_0(check_hlds__typecheck_info__Constraints_22, check_hlds__typecheck_info__OldConstraints_20, &check_hlds__typecheck_info__NewConstraints_23);
            }
#line 698 "typecheck_info.m"
            check_hlds__typecheck_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 0)));
#line 698 "typecheck_info.m"
            check_hlds__typecheck_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 1)));
#line 698 "typecheck_info.m"
            check_hlds__typecheck_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 2)));
#line 698 "typecheck_info.m"
            check_hlds__typecheck_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 3)));
#line 698 "typecheck_info.m"
            check_hlds__typecheck_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 4)));
#line 698 "typecheck_info.m"
            check_hlds__typecheck_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 5)));
#line 698 "typecheck_info.m"
            check_hlds__typecheck_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 6)));
#line 698 "typecheck_info.m"
            {
#line 698 "typecheck_info.m"
              check_hlds__typecheck_info__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 698 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 0) = ((MR_Box) (check_hlds__typecheck_info__V_43_43));
#line 698 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 1) = ((MR_Box) (check_hlds__typecheck_info__V_44_44));
#line 698 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 2) = ((MR_Box) (check_hlds__typecheck_info__V_45_45));
#line 698 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 3) = ((MR_Box) (check_hlds__typecheck_info__V_46_46));
#line 698 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 4) = ((MR_Box) (check_hlds__typecheck_info__NewConstraints_23));
#line 698 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 5) = ((MR_Box) (check_hlds__typecheck_info__V_48_48));
#line 698 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_14_14, 6) = ((MR_Box) (check_hlds__typecheck_info__V_49_49));
#line 698 "typecheck_info.m"
            }
#line 730 "typecheck_info.m"
            {
#line 730 "typecheck_info.m"
              check_hlds__typecheck_info__V_15_15 = check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_f_0(check_hlds__typecheck_info__ArgTypeAssigns_4);
            }
#line 729 "typecheck_info.m"
            {
#line 729 "typecheck_info.m"
              check_hlds__typecheck_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "typecheck_info.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 729 "typecheck_info.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 729 "typecheck_info.m"
            }
#line 727 "typecheck_info.m"
          }
#line 731 "typecheck_info.m"
        else
#line 732 "typecheck_info.m"
          {
#line 735 "typecheck_info.m"
            {
#line 735 "typecheck_info.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck_info", (MR_String) "function \140check_hlds.typecheck_info.convert_args_type_assign_set_check_empty_args\'/1", (MR_String) "Args != []");
            }
#line 732 "typecheck_info.m"
          }
#line 724 "typecheck_info.m"
      }
#line 722 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 722 "typecheck_info.m"
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
#line 717 "typecheck_info.m"
  {
#line 717 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 717 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2;

#line 717 "typecheck_info.m"
    if ((check_hlds__typecheck_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 717 "typecheck_info.m"
      check_hlds__typecheck_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 717 "typecheck_info.m"
    else
#line 718 "typecheck_info.m"
      {
#line 718 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ArgsTypeAssign_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 0)));
#line 718 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ArgsTypeAssigns_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__1_1, (MR_Integer) 1)));
#line 718 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_5_5;
#line 718 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_6_6;
#line 718 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeAssign0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 0)));
#line 718 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Constraints0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 2)));
#line 718 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__OldConstraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 4)));
#line 718 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Bindings_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 3)));
#line 718 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Constraints_13;
#line 718 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__NewConstraints_14;
#line 740 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 1)));
#line 685 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 0)));
#line 685 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 1)));
#line 685 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 2)));
#line 685 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 5)));
#line 685 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 6)));
#line 698 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_34_34;
#line 698 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_35_35;
#line 698 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_36_36;
#line 698 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_37_37;
#line 698 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_39_39;
#line 698 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_40_40;
#line 698 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_38_38;

#line 744 "typecheck_info.m"
        {
#line 744 "typecheck_info.m"
          check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(check_hlds__typecheck_info__Bindings_12, check_hlds__typecheck_info__Constraints0_10, &check_hlds__typecheck_info__Constraints_13);
        }
#line 745 "typecheck_info.m"
        {
#line 745 "typecheck_info.m"
          hlds__hlds_data__merge_hlds_constraints_3_p_0(check_hlds__typecheck_info__Constraints_13, check_hlds__typecheck_info__OldConstraints_11, &check_hlds__typecheck_info__NewConstraints_14);
        }
#line 698 "typecheck_info.m"
        check_hlds__typecheck_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 0)));
#line 698 "typecheck_info.m"
        check_hlds__typecheck_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 1)));
#line 698 "typecheck_info.m"
        check_hlds__typecheck_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 2)));
#line 698 "typecheck_info.m"
        check_hlds__typecheck_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 3)));
#line 698 "typecheck_info.m"
        check_hlds__typecheck_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 4)));
#line 698 "typecheck_info.m"
        check_hlds__typecheck_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 5)));
#line 698 "typecheck_info.m"
        check_hlds__typecheck_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TypeAssign0_8, (MR_Integer) 6)));
#line 698 "typecheck_info.m"
        {
#line 698 "typecheck_info.m"
          check_hlds__typecheck_info__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 698 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 0) = ((MR_Box) (check_hlds__typecheck_info__V_34_34));
#line 698 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 1) = ((MR_Box) (check_hlds__typecheck_info__V_35_35));
#line 698 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 2) = ((MR_Box) (check_hlds__typecheck_info__V_36_36));
#line 698 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 3) = ((MR_Box) (check_hlds__typecheck_info__V_37_37));
#line 698 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 4) = ((MR_Box) (check_hlds__typecheck_info__NewConstraints_14));
#line 698 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 5) = ((MR_Box) (check_hlds__typecheck_info__V_39_39));
#line 698 "typecheck_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_5_5, 6) = ((MR_Box) (check_hlds__typecheck_info__V_40_40));
#line 698 "typecheck_info.m"
        }
#line 720 "typecheck_info.m"
        {
#line 720 "typecheck_info.m"
          check_hlds__typecheck_info__V_6_6 = check_hlds__typecheck_info__convert_args_type_assign_set_1_f_0(check_hlds__typecheck_info__ArgsTypeAssigns_4);
        }
#line 719 "typecheck_info.m"
        {
#line 719 "typecheck_info.m"
          check_hlds__typecheck_info__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__typecheck_info__V_5_5));
#line 719 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__typecheck_info__V_6_6));
#line 719 "typecheck_info.m"
        }
#line 718 "typecheck_info.m"
      }
#line 717 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 717 "typecheck_info.m"
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
#line 753 "typecheck_info.m"
  {
#line 753 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 753 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 2)));
#line 753 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 0)));
#line 753 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 1)));

#line 753 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 753 "typecheck_info.m"
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
#line 751 "typecheck_info.m"
  {
#line 751 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 751 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 1)));
#line 751 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 0)));
#line 751 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 2)));

#line 751 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 751 "typecheck_info.m"
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
#line 749 "typecheck_info.m"
  {
#line 749 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 749 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 0)));
#line 749 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 1)));
#line 749 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__ArgsTypeAssign_3, (MR_Integer) 2)));

#line 749 "typecheck_info.m"
    return check_hlds__typecheck_info__HeadVar__2_2;
#line 749 "typecheck_info.m"
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
#line 705 "typecheck_info.m"
  {
#line 705 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 705 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 0)));
#line 705 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 2)));
#line 705 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_28_28 = check_hlds__typecheck_info__V_21_21;
#line 705 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_30_30 = check_hlds__typecheck_info__V_23_23;
#line 705 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_31_31 = check_hlds__typecheck_info__Bindings_8;
#line 705 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_35_35 = check_hlds__typecheck_info__V_28_28;
#line 705 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_36_36 = check_hlds__typecheck_info__TVarSet_9;
#line 705 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_37_37 = check_hlds__typecheck_info__V_30_30;
#line 705 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_38_38 = check_hlds__typecheck_info__V_31_31;
#line 705 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_42_42 = check_hlds__typecheck_info__V_35_35;
#line 705 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_43_43 = check_hlds__typecheck_info__V_36_36;
#line 705 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_44_44 = check_hlds__typecheck_info__V_37_37;
#line 705 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_45_45 = check_hlds__typecheck_info__V_38_38;
#line 705 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_46_46 = check_hlds__typecheck_info__Constraints_10;
#line 709 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 1)));
#line 709 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 3)));
#line 709 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 4)));
#line 709 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 5)));
#line 709 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_14, (MR_Integer) 6)));

#line 713 "typecheck_info.m"
    {
#line 713 "typecheck_info.m"
      MR_Word base;
#line 713 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 713 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_15 = base;
#line 713 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_42_42));
#line 713 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_43_43));
#line 713 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_44_44));
#line 713 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_45_45));
#line 713 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_46_46));
#line 713 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__Proofs_11));
#line 713 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__ConstraintMap_12));
#line 713 "typecheck_info.m"
    }
#line 705 "typecheck_info.m"
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
#line 702 "typecheck_info.m"
  {
#line 702 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 702 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 702 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 702 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 702 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 702 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 702 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 702 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));

#line 702 "typecheck_info.m"
    {
#line 702 "typecheck_info.m"
      MR_Word base;
#line 702 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 702 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 702 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 702 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 702 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 702 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 702 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 702 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 702 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__ConstraintMap_4));
#line 702 "typecheck_info.m"
    }
#line 702 "typecheck_info.m"
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
#line 700 "typecheck_info.m"
  {
#line 700 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 700 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 700 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 700 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 700 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 700 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 700 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 700 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));

#line 700 "typecheck_info.m"
    {
#line 700 "typecheck_info.m"
      MR_Word base;
#line 700 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 700 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 700 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 700 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 700 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 700 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 700 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 700 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__Proofs_4));
#line 700 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 700 "typecheck_info.m"
    }
#line 700 "typecheck_info.m"
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
#line 698 "typecheck_info.m"
  {
#line 698 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 698 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 698 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 698 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 698 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 698 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 698 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 698 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));

#line 698 "typecheck_info.m"
    {
#line 698 "typecheck_info.m"
      MR_Word base;
#line 698 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 698 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 698 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 698 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 698 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 698 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 698 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__Constraints_4));
#line 698 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 698 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 698 "typecheck_info.m"
    }
#line 698 "typecheck_info.m"
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
#line 696 "typecheck_info.m"
  {
#line 696 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 696 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 696 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 696 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 696 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 696 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 696 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 696 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));

#line 696 "typecheck_info.m"
    {
#line 696 "typecheck_info.m"
      MR_Word base;
#line 696 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 696 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 696 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 696 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 696 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 696 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__TypeBindings_4));
#line 696 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 696 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 696 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 696 "typecheck_info.m"
    }
#line 696 "typecheck_info.m"
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
#line 694 "typecheck_info.m"
  {
#line 694 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 694 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 694 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 694 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 694 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 694 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 694 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 694 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));

#line 694 "typecheck_info.m"
    {
#line 694 "typecheck_info.m"
      MR_Word base;
#line 694 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 694 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 694 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 694 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 694 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__HeadTypeParams_4));
#line 694 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 694 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 694 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 694 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 694 "typecheck_info.m"
    }
#line 694 "typecheck_info.m"
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
#line 692 "typecheck_info.m"
  {
#line 692 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 692 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 692 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 692 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 692 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 692 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 692 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 692 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));

#line 692 "typecheck_info.m"
    {
#line 692 "typecheck_info.m"
      MR_Word base;
#line 692 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 692 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 692 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 692 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__TVarSet_4));
#line 692 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 692 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 692 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 692 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 692 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 692 "typecheck_info.m"
    }
#line 692 "typecheck_info.m"
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
#line 690 "typecheck_info.m"
  {
#line 690 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 690 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 690 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 690 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 690 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 690 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 690 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 690 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));

#line 690 "typecheck_info.m"
    {
#line 690 "typecheck_info.m"
      MR_Word base;
#line 690 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 690 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_TA_7 = base;
#line 690 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__VarTypes_4));
#line 690 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 690 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 690 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 690 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 690 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 690 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 690 "typecheck_info.m"
    }
#line 690 "typecheck_info.m"
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
#line 687 "typecheck_info.m"
  {
#line 687 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 687 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 0)));
#line 687 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 1)));
#line 687 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 2)));
#line 687 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 3)));
#line 687 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 4)));
#line 687 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 5)));

#line 687 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 6)));
#line 687 "typecheck_info.m"
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
    MR_Word check_hlds__typecheck_info__V_9_9;

#line 686 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 5)));
#line 686 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 6)));
#line 686 "typecheck_info.m"
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
    MR_Word check_hlds__typecheck_info__V_8_8;
#line 685 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;

#line 685 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 4)));
#line 685 "typecheck_info.m"
    check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 5)));
#line 685 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 6)));
#line 685 "typecheck_info.m"
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
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 684 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8;
#line 684 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;

#line 684 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 3)));
#line 684 "typecheck_info.m"
    check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 4)));
#line 684 "typecheck_info.m"
    check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 5)));
#line 684 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 6)));
#line 684 "typecheck_info.m"
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
#line 683 "typecheck_info.m"
  {
#line 683 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 0)));
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 1)));
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6;
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8;
#line 683 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;

#line 683 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 2)));
#line 683 "typecheck_info.m"
    check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 3)));
#line 683 "typecheck_info.m"
    check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 4)));
#line 683 "typecheck_info.m"
    check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 5)));
#line 683 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 6)));
#line 683 "typecheck_info.m"
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
#line 682 "typecheck_info.m"
  {
#line 682 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 0)));
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5;
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6;
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8;
#line 682 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;

#line 682 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 1)));
#line 682 "typecheck_info.m"
    check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 2)));
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
#line 681 "typecheck_info.m"
  {
#line 681 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 681 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4;
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
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 0)));
#line 681 "typecheck_info.m"
    check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__TA_3, (MR_Integer) 1)));
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
#line 674 "typecheck_info.m"
  {
#line 674 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Markers0_6;
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Markers_7;
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12;
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_29_29;
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_30_30;
#line 674 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_31_31;
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_32_32;
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_33_33;
#line 674 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_34_34;
#line 674 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_35_35;
#line 675 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 675 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 675 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 675 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 675 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 675 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 675 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 675 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 0)));
#line 675 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 1)));
#line 675 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_23_23;
#line 675 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_24_24;
#line 675 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_25_25;
#line 675 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_26_26;
#line 675 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_27_27;
#line 675 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_28_28;
#line 677 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_36_36;
#line 677 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_37_37;
#line 677 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_39_39;
#line 677 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_40_40;
#line 677 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_41_41;
#line 677 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_42_42;
#line 677 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_43_43;
#line 677 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_44_44;
#line 677 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_38_38;

#line 675 "typecheck_info.m"
    check_hlds__typecheck_info__Markers0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 2)));
#line 675 "typecheck_info.m"
    check_hlds__typecheck_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 3)));
#line 675 "typecheck_info.m"
    check_hlds__typecheck_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 4)));
#line 675 "typecheck_info.m"
    check_hlds__typecheck_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 5)));
#line 675 "typecheck_info.m"
    check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 6)));
#line 675 "typecheck_info.m"
    check_hlds__typecheck_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 7)));
#line 675 "typecheck_info.m"
    check_hlds__typecheck_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_10_10, (MR_Integer) 8)));
#line 676 "typecheck_info.m"
    {
#line 676 "typecheck_info.m"
      hlds__hlds_pred__add_marker_3_p_0(check_hlds__typecheck_info__Marker_4, check_hlds__typecheck_info__Markers0_6, &check_hlds__typecheck_info__Markers_7);
    }
#line 677 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 677 "typecheck_info.m"
    check_hlds__typecheck_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 677 "typecheck_info.m"
    check_hlds__typecheck_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 677 "typecheck_info.m"
    check_hlds__typecheck_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 677 "typecheck_info.m"
    check_hlds__typecheck_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 677 "typecheck_info.m"
    check_hlds__typecheck_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 677 "typecheck_info.m"
    check_hlds__typecheck_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 677 "typecheck_info.m"
    check_hlds__typecheck_info__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 677 "typecheck_info.m"
    check_hlds__typecheck_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 0)));
#line 677 "typecheck_info.m"
    check_hlds__typecheck_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 1)));
#line 677 "typecheck_info.m"
    check_hlds__typecheck_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 2)));
#line 677 "typecheck_info.m"
    check_hlds__typecheck_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 3)));
#line 677 "typecheck_info.m"
    check_hlds__typecheck_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 4)));
#line 677 "typecheck_info.m"
    check_hlds__typecheck_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 5)));
#line 677 "typecheck_info.m"
    check_hlds__typecheck_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 6)));
#line 677 "typecheck_info.m"
    check_hlds__typecheck_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 7)));
#line 677 "typecheck_info.m"
    check_hlds__typecheck_info__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 8)));
#line 677 "typecheck_info.m"
    {
#line 677 "typecheck_info.m"
      check_hlds__typecheck_info__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 677 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 0) = ((MR_Box) (check_hlds__typecheck_info__V_36_36));
#line 677 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 1) = ((MR_Box) (check_hlds__typecheck_info__V_37_37));
#line 677 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 2) = ((MR_Box) (check_hlds__typecheck_info__Markers_7));
#line 677 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 3) = ((MR_Box) (check_hlds__typecheck_info__V_39_39));
#line 677 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 4) = ((MR_Box) (check_hlds__typecheck_info__V_40_40));
#line 677 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 5) = ((MR_Box) (check_hlds__typecheck_info__V_41_41));
#line 677 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 6) = ((MR_Box) (check_hlds__typecheck_info__V_42_42));
#line 677 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 7) = ((MR_Box) (check_hlds__typecheck_info__V_43_43));
#line 677 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_13_13, 8) = ((MR_Box) (check_hlds__typecheck_info__V_44_44));
#line 677 "typecheck_info.m"
    }
#line 677 "typecheck_info.m"
    {
#line 677 "typecheck_info.m"
      MR_Word base;
#line 677 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 677 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_9 = base;
#line 677 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 677 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_29_29));
#line 677 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_30_30));
#line 677 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_31_31));
#line 677 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_32_32));
#line 677 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_33_33));
#line 677 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_34_34));
#line 677 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__V_35_35));
#line 677 "typecheck_info.m"
    }
#line 674 "typecheck_info.m"
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
#line 663 "typecheck_info.m"
  {
#line 663 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 663 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Errors0_5;
#line 663 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__MaybeOverloadError_6;
#line 663 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 616 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 616 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 616 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 616 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 616 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 616 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 616 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 616 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 0)));
#line 616 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 1)));
#line 616 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 2)));
#line 616 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 3)));
#line 616 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 4)));
#line 616 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_23_23;
#line 616 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_24_24;

#line 616 "typecheck_info.m"
    check_hlds__typecheck_info__Errors0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 5)));
#line 616 "typecheck_info.m"
    check_hlds__typecheck_info__MaybeOverloadError_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 6)));
#line 616 "typecheck_info.m"
    check_hlds__typecheck_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 7)));
#line 616 "typecheck_info.m"
    check_hlds__typecheck_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_9_9, (MR_Integer) 8)));
#line 669 "typecheck_info.m"
    if ((check_hlds__typecheck_info__MaybeOverloadError_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 668 "typecheck_info.m"
      *check_hlds__typecheck_info__Errors_4 = check_hlds__typecheck_info__Errors0_5;
#line 669 "typecheck_info.m"
    else
#line 670 "typecheck_info.m"
      {
#line 670 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__OverloadError_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__MaybeOverloadError_6, (MR_Integer) 0)));

#line 671 "typecheck_info.m"
        {
#line 671 "typecheck_info.m"
          MR_Word base;
#line 671 "typecheck_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "typecheck_info.m"
          *check_hlds__typecheck_info__Errors_4 = base;
#line 671 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck_info__OverloadError_7));
#line 671 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck_info__Errors0_5));
#line 671 "typecheck_info.m"
        }
#line 670 "typecheck_info.m"
      }
#line 663 "typecheck_info.m"
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
#line 658 "typecheck_info.m"
  {
#line 658 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 658 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Errors0_6;
#line 658 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Errors_7;
#line 658 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 658 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 658 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
#line 658 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
#line 658 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
#line 658 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
#line 658 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));
#line 658 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_8, (MR_Integer) 7)));
#line 658 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 0)));
#line 658 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 1)));
#line 658 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 2)));
#line 658 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 3)));
#line 658 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 4)));
#line 658 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_25_25;
#line 658 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_26_26;
#line 658 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_27_27;
#line 658 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_31_31;

#line 616 "typecheck_info.m"
    check_hlds__typecheck_info__Errors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 5)));
#line 616 "typecheck_info.m"
    check_hlds__typecheck_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 6)));
#line 616 "typecheck_info.m"
    check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 7)));
#line 616 "typecheck_info.m"
    check_hlds__typecheck_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_12_12, (MR_Integer) 8)));
#line 660 "typecheck_info.m"
    {
#line 660 "typecheck_info.m"
      check_hlds__typecheck_info__Errors_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "typecheck_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Errors_7, 0) = ((MR_Box) (check_hlds__typecheck_info__Error_4));
#line 660 "typecheck_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Errors_7, 1) = ((MR_Box) (check_hlds__typecheck_info__Errors0_6));
#line 660 "typecheck_info.m"
    }
#line 629 "typecheck_info.m"
    {
#line 629 "typecheck_info.m"
      check_hlds__typecheck_info__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 629 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 0) = ((MR_Box) (check_hlds__typecheck_info__V_20_20));
#line 629 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 1) = ((MR_Box) (check_hlds__typecheck_info__V_21_21));
#line 629 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 2) = ((MR_Box) (check_hlds__typecheck_info__V_22_22));
#line 629 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 3) = ((MR_Box) (check_hlds__typecheck_info__V_23_23));
#line 629 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 4) = ((MR_Box) (check_hlds__typecheck_info__V_24_24));
#line 629 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 5) = ((MR_Box) (check_hlds__typecheck_info__Errors_7));
#line 629 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 6) = ((MR_Box) (check_hlds__typecheck_info__V_25_25));
#line 629 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 7) = ((MR_Box) (check_hlds__typecheck_info__V_26_26));
#line 629 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_31_31, 8) = ((MR_Box) (check_hlds__typecheck_info__V_27_27));
#line 629 "typecheck_info.m"
    }
#line 629 "typecheck_info.m"
    {
#line 629 "typecheck_info.m"
      MR_Word base;
#line 629 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 629 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_9 = base;
#line 629 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_31_31));
#line 629 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 629 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 629 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 629 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_16_16));
#line 629 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_17_17));
#line 629 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_18_18));
#line 629 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__V_19_19));
#line 629 "typecheck_info.m"
    }
#line 658 "typecheck_info.m"
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
#line 647 "typecheck_info.m"
  {
#line 647 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 647 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__SymbolMap0_8;
#line 647 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__SymbolMap_11;
#line 647 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 647 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_42_42;
#line 647 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_43_43;
#line 647 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_44_44;
#line 647 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_45_45;
#line 647 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_46_46;
#line 647 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_47_47;
#line 647 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_48_48;
#line 647 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_49_49;
#line 647 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_50_50;
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 620 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 620 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 0)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 1)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 2)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 3)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 4)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 5)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 6)));
#line 620 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_39_39;
#line 652 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__OldContexts_9;
#line 649 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__conv0_OldContexts_9;
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_51_51;
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_52_52;
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_53_53;
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_54_54;
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_55_55;
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_56_56;
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_57_57;
#line 633 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_59_59;
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_58_58;

#line 620 "typecheck_info.m"
    check_hlds__typecheck_info__SymbolMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 7)));
#line 620 "typecheck_info.m"
    check_hlds__typecheck_info__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_24_24, (MR_Integer) 8)));
#line 649 "typecheck_info.m"
    {
#line 649 "typecheck_info.m"
      check_hlds__typecheck_info__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[1], check_hlds__typecheck_info__SymbolMap0_8, ((MR_Box) (check_hlds__typecheck_info__Symbol_5)), &check_hlds__typecheck_info__conv0_OldContexts_9);
    }
#line 649 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 649 "typecheck_info.m"
      {
#line 649 "typecheck_info.m"
        check_hlds__typecheck_info__OldContexts_9 = ((MR_Word) check_hlds__typecheck_info__conv0_OldContexts_9);
#line 649 "typecheck_info.m"
        check_hlds__typecheck_info__succeeded = MR_TRUE;
#line 649 "typecheck_info.m"
      }
#line 652 "typecheck_info.m"
    if (check_hlds__typecheck_info__succeeded)
#line 650 "typecheck_info.m"
      {
#line 650 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Contexts_10;

#line 650 "typecheck_info.m"
        {
#line 650 "typecheck_info.m"
          check_hlds__typecheck_info__Contexts_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 650 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_10, 0) = ((MR_Box) (check_hlds__typecheck_info__Context_6));
#line 650 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_10, 1) = ((MR_Box) (check_hlds__typecheck_info__OldContexts_9));
#line 650 "typecheck_info.m"
        }
#line 651 "typecheck_info.m"
        {
#line 651 "typecheck_info.m"
          mercury__map__det_update_4_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[1], ((MR_Box) (check_hlds__typecheck_info__Symbol_5)), ((MR_Box) (check_hlds__typecheck_info__Contexts_10)), check_hlds__typecheck_info__SymbolMap0_8, &check_hlds__typecheck_info__SymbolMap_11);
        }
#line 650 "typecheck_info.m"
      }
#line 652 "typecheck_info.m"
    else
#line 653 "typecheck_info.m"
      {
#line 653 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__Contexts_16;

#line 653 "typecheck_info.m"
        {
#line 653 "typecheck_info.m"
          check_hlds__typecheck_info__Contexts_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_16, 0) = ((MR_Box) (check_hlds__typecheck_info__Context_6));
#line 653 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__Contexts_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 653 "typecheck_info.m"
        }
#line 654 "typecheck_info.m"
        {
#line 654 "typecheck_info.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[1], ((MR_Box) (check_hlds__typecheck_info__Symbol_5)), ((MR_Box) (check_hlds__typecheck_info__Contexts_16)), check_hlds__typecheck_info__SymbolMap0_8, &check_hlds__typecheck_info__SymbolMap_11);
        }
#line 653 "typecheck_info.m"
      }
#line 633 "typecheck_info.m"
    check_hlds__typecheck_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 0)));
#line 633 "typecheck_info.m"
    check_hlds__typecheck_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 1)));
#line 633 "typecheck_info.m"
    check_hlds__typecheck_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 2)));
#line 633 "typecheck_info.m"
    check_hlds__typecheck_info__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 3)));
#line 633 "typecheck_info.m"
    check_hlds__typecheck_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 4)));
#line 633 "typecheck_info.m"
    check_hlds__typecheck_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 5)));
#line 633 "typecheck_info.m"
    check_hlds__typecheck_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 6)));
#line 633 "typecheck_info.m"
    check_hlds__typecheck_info__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__STATE_VARIABLE_Info_0_12, (MR_Integer) 7)));
#line 633 "typecheck_info.m"
    check_hlds__typecheck_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 0)));
#line 633 "typecheck_info.m"
    check_hlds__typecheck_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 1)));
#line 633 "typecheck_info.m"
    check_hlds__typecheck_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 2)));
#line 633 "typecheck_info.m"
    check_hlds__typecheck_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 3)));
#line 633 "typecheck_info.m"
    check_hlds__typecheck_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 4)));
#line 633 "typecheck_info.m"
    check_hlds__typecheck_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 5)));
#line 633 "typecheck_info.m"
    check_hlds__typecheck_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 6)));
#line 633 "typecheck_info.m"
    check_hlds__typecheck_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 7)));
#line 633 "typecheck_info.m"
    check_hlds__typecheck_info__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_42_42, (MR_Integer) 8)));
#line 633 "typecheck_info.m"
    {
#line 633 "typecheck_info.m"
      check_hlds__typecheck_info__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 0) = ((MR_Box) (check_hlds__typecheck_info__V_51_51));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 1) = ((MR_Box) (check_hlds__typecheck_info__V_52_52));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 2) = ((MR_Box) (check_hlds__typecheck_info__V_53_53));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 3) = ((MR_Box) (check_hlds__typecheck_info__V_54_54));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 4) = ((MR_Box) (check_hlds__typecheck_info__V_55_55));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 5) = ((MR_Box) (check_hlds__typecheck_info__V_56_56));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 6) = ((MR_Box) (check_hlds__typecheck_info__V_57_57));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 7) = ((MR_Box) (check_hlds__typecheck_info__SymbolMap_11));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_43_43, 8) = ((MR_Box) (check_hlds__typecheck_info__V_59_59));
#line 633 "typecheck_info.m"
    }
#line 633 "typecheck_info.m"
    {
#line 633 "typecheck_info.m"
      MR_Word base;
#line 633 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 633 "typecheck_info.m"
      *check_hlds__typecheck_info__STATE_VARIABLE_Info_13 = base;
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_43_43));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_44_44));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_45_45));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_46_46));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_47_47));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_48_48));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_49_49));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__V_50_50));
#line 633 "typecheck_info.m"
    }
#line 647 "typecheck_info.m"
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
#line 644 "typecheck_info.m"
  {
#line 644 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 644 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 645 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 645 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 645 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 645 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 645 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 645 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 645 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));

#line 645 "typecheck_info.m"
    {
#line 645 "typecheck_info.m"
      hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__Ctors_4);
#line 645 "typecheck_info.m"
      return;
    }
#line 644 "typecheck_info.m"
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
#line 642 "typecheck_info.m"
  {
#line 642 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 642 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 643 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 643 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 643 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 643 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 643 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 643 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 643 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));

#line 643 "typecheck_info.m"
    {
#line 643 "typecheck_info.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__Types_4);
#line 643 "typecheck_info.m"
      return;
    }
#line 642 "typecheck_info.m"
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
#line 640 "typecheck_info.m"
  {
#line 640 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 640 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 641 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 641 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 641 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 641 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 641 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 641 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 641 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));

#line 641 "typecheck_info.m"
    {
#line 641 "typecheck_info.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__Preds_4);
#line 641 "typecheck_info.m"
      return;
    }
#line 640 "typecheck_info.m"
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
#line 638 "typecheck_info.m"
  {
#line 638 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 638 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 639 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 639 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 639 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 639 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 639 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 639 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 639 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));

#line 639 "typecheck_info.m"
    {
#line 639 "typecheck_info.m"
      hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__typecheck_info__V_5_5, check_hlds__typecheck_info__Name_4);
#line 639 "typecheck_info.m"
      return;
    }
#line 638 "typecheck_info.m"
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
#line 633 "typecheck_info.m"
  {
#line 633 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 0)));
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 1)));
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 2)));
#line 633 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 3)));
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 4)));
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 5)));
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 6)));
#line 633 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 7)));
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 0)));
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 1)));
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 2)));
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 3)));
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 4)));
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 5)));
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 6)));
#line 633 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 8)));
#line 633 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 7)));

#line 633 "typecheck_info.m"
    {
#line 633 "typecheck_info.m"
      check_hlds__typecheck_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 0) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 1) = ((MR_Box) (check_hlds__typecheck_info__V_16_16));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 2) = ((MR_Box) (check_hlds__typecheck_info__V_17_17));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 3) = ((MR_Box) (check_hlds__typecheck_info__V_18_18));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 4) = ((MR_Box) (check_hlds__typecheck_info__V_19_19));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 5) = ((MR_Box) (check_hlds__typecheck_info__V_20_20));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 6) = ((MR_Box) (check_hlds__typecheck_info__V_21_21));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 7) = ((MR_Box) (check_hlds__typecheck_info__Symbols_4));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 8) = ((MR_Box) (check_hlds__typecheck_info__V_23_23));
#line 633 "typecheck_info.m"
    }
#line 633 "typecheck_info.m"
    {
#line 633 "typecheck_info.m"
      MR_Word base;
#line 633 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 633 "typecheck_info.m"
      *check_hlds__typecheck_info__HeadVar__3_3 = base;
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_7_7));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_8_8));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 633 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 633 "typecheck_info.m"
    }
#line 633 "typecheck_info.m"
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
#line 631 "typecheck_info.m"
  {
#line 631 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 631 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 0)));
#line 631 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 631 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 1)));
#line 631 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 2)));
#line 631 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 3)));
#line 631 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 4)));
#line 631 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 5)));
#line 631 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 6)));
#line 631 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 7)));
#line 631 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 0)));
#line 631 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 1)));
#line 631 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 2)));
#line 631 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 3)));
#line 631 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 4)));
#line 631 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 5)));
#line 631 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 7)));
#line 631 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 8)));
#line 631 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_6_6, (MR_Integer) 6)));

#line 631 "typecheck_info.m"
    {
#line 631 "typecheck_info.m"
      check_hlds__typecheck_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 631 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 0) = ((MR_Box) (check_hlds__typecheck_info__V_15_15));
#line 631 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 1) = ((MR_Box) (check_hlds__typecheck_info__V_16_16));
#line 631 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 2) = ((MR_Box) (check_hlds__typecheck_info__V_17_17));
#line 631 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 3) = ((MR_Box) (check_hlds__typecheck_info__V_18_18));
#line 631 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 4) = ((MR_Box) (check_hlds__typecheck_info__V_19_19));
#line 631 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 5) = ((MR_Box) (check_hlds__typecheck_info__V_20_20));
#line 631 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 6) = ((MR_Box) (check_hlds__typecheck_info__OverloadSpec_4));
#line 631 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 7) = ((MR_Box) (check_hlds__typecheck_info__V_22_22));
#line 631 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_7_7, 8) = ((MR_Box) (check_hlds__typecheck_info__V_23_23));
#line 631 "typecheck_info.m"
    }
#line 631 "typecheck_info.m"
    {
#line 631 "typecheck_info.m"
      MR_Word base;
#line 631 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 631 "typecheck_info.m"
      *check_hlds__typecheck_info__HeadVar__3_3 = base;
#line 631 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_7_7));
#line 631 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_8_8));
#line 631 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 631 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 631 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 631 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 631 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 631 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__V_14_14));
#line 631 "typecheck_info.m"
    }
#line 631 "typecheck_info.m"
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
#line 627 "typecheck_info.m"
  {
#line 627 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 627 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 0)));
#line 627 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 1)));
#line 627 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 3)));
#line 627 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 4)));
#line 627 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 5)));
#line 627 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 6)));
#line 627 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 7)));
#line 627 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_5, (MR_Integer) 2)));

#line 627 "typecheck_info.m"
    {
#line 627 "typecheck_info.m"
      MR_Word base;
#line 627 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 627 "typecheck_info.m"
      *check_hlds__typecheck_info__HeadVar__3_3 = base;
#line 627 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__V_6_6));
#line 627 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__V_7_7));
#line 627 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck_info__PredCallId_4));
#line 627 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck_info__V_9_9));
#line 627 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__V_10_10));
#line 627 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck_info__V_11_11));
#line 627 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__V_12_12));
#line 627 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__V_13_13));
#line 627 "typecheck_info.m"
    }
#line 627 "typecheck_info.m"
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
#line 622 "typecheck_info.m"
  {
#line 622 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 622 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 622 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 622 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 622 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 622 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 622 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 622 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 622 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 622 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 622 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 622 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 622 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 622 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 622 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 622 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 622 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));

#line 622 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 622 "typecheck_info.m"
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
#line 624 "typecheck_info.m"
  {
#line 624 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 624 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 624 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 624 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 624 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 624 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 624 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 624 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));

#line 624 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 624 "typecheck_info.m"
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
#line 620 "typecheck_info.m"
  {
#line 620 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 620 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 620 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 620 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 620 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 620 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 620 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 620 "typecheck_info.m"
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
#line 618 "typecheck_info.m"
  {
#line 618 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 618 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 618 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 618 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 618 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 618 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 618 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 618 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 618 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 618 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 618 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 618 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 618 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 618 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 618 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 618 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18;
#line 618 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 618 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 618 "typecheck_info.m"
    check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 618 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 618 "typecheck_info.m"
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
#line 615 "typecheck_info.m"
  {
#line 615 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 615 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 615 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17;
#line 615 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18;
#line 615 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 615 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 615 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 615 "typecheck_info.m"
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
#line 614 "typecheck_info.m"
  {
#line 614 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 614 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_6_6;
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_7_7;
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8;
#line 614 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9;
#line 614 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_10_10;

#line 614 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 614 "typecheck_info.m"
    check_hlds__typecheck_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 614 "typecheck_info.m"
    check_hlds__typecheck_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 614 "typecheck_info.m"
    check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 614 "typecheck_info.m"
    check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 614 "typecheck_info.m"
    check_hlds__typecheck_info__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 614 "typecheck_info.m"
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
#line 612 "typecheck_info.m"
  {
#line 612 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 612 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 612 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 612 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 612 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 612 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 612 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 612 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 612 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 612 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 612 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 612 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 612 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 612 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;
#line 612 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17;
#line 612 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18;
#line 612 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 612 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 612 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 612 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 612 "typecheck_info.m"
    check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 612 "typecheck_info.m"
    check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 612 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 612 "typecheck_info.m"
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
#line 608 "typecheck_info.m"
  {
#line 608 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 608 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 608 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 608 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 608 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 608 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 608 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 608 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 608 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 608 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 608 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 608 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14;
#line 608 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 608 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;
#line 608 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17;
#line 608 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18;
#line 608 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 608 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 608 "typecheck_info.m"
    check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 608 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 608 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 608 "typecheck_info.m"
    check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 608 "typecheck_info.m"
    check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 608 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 608 "typecheck_info.m"
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
#line 610 "typecheck_info.m"
  {
#line 610 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 610 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 610 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 610 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 610 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 610 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 610 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 610 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 610 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 610 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 610 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;
#line 610 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14;
#line 610 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 610 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;
#line 610 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17;
#line 610 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18;
#line 610 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 610 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 610 "typecheck_info.m"
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 610 "typecheck_info.m"
    check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 610 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 610 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 610 "typecheck_info.m"
    check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 610 "typecheck_info.m"
    check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 610 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 610 "typecheck_info.m"
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
#line 606 "typecheck_info.m"
  {
#line 606 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 606 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 0)));
#line 606 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 1)));
#line 606 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 2)));
#line 606 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 3)));
#line 606 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 4)));
#line 606 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 5)));
#line 606 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 6)));
#line 606 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_3, (MR_Integer) 7)));
#line 606 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_12_12;
#line 606 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_13_13;
#line 606 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_14_14;
#line 606 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_15_15;
#line 606 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_16_16;
#line 606 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_17_17;
#line 606 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_18_18;
#line 606 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_19_19;

#line 606 "typecheck_info.m"
    *check_hlds__typecheck_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 0)));
#line 606 "typecheck_info.m"
    check_hlds__typecheck_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 1)));
#line 606 "typecheck_info.m"
    check_hlds__typecheck_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 2)));
#line 606 "typecheck_info.m"
    check_hlds__typecheck_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 3)));
#line 606 "typecheck_info.m"
    check_hlds__typecheck_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 4)));
#line 606 "typecheck_info.m"
    check_hlds__typecheck_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 5)));
#line 606 "typecheck_info.m"
    check_hlds__typecheck_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 6)));
#line 606 "typecheck_info.m"
    check_hlds__typecheck_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 7)));
#line 606 "typecheck_info.m"
    check_hlds__typecheck_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_4_4, (MR_Integer) 8)));
#line 606 "typecheck_info.m"
  }
#line 171 "typecheck_info.m"
}

#line 521 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_4(
#line 521 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 521 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 521 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_2)
#line 521 "typecheck_info.m"
{
#line 521 "typecheck_info.m"
  {
#line 521 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__closure = check_hlds__typecheck_info__closure_arg;
#line 521 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__conv7_HeadVar__3_3;

#line 521 "typecheck_info.m"
    {
#line 521 "typecheck_info.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), &check_hlds__typecheck_info__conv7_HeadVar__3_3);
    }
#line 521 "typecheck_info.m"
    *check_hlds__typecheck_info__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck_info__conv7_HeadVar__3_3));
#line 521 "typecheck_info.m"
  }
#line 521 "typecheck_info.m"
}

#line 469 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_3(
#line 469 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 469 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 469 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 469 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_3)
#line 469 "typecheck_info.m"
{
#line 469 "typecheck_info.m"
  {
#line 469 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__closure = check_hlds__typecheck_info__closure_arg;
#line 469 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__conv5_HeadVar__3_3;

#line 469 "typecheck_info.m"
    {
#line 469 "typecheck_info.m"
      hlds__hlds_data__update_constraint_map_3_p_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), &check_hlds__typecheck_info__conv5_HeadVar__3_3);
    }
#line 469 "typecheck_info.m"
    *check_hlds__typecheck_info__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck_info__conv5_HeadVar__3_3));
#line 469 "typecheck_info.m"
  }
#line 469 "typecheck_info.m"
}

#line 467 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_2(
#line 467 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 467 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 467 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_2,
#line 467 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_3)
#line 467 "typecheck_info.m"
{
#line 467 "typecheck_info.m"
  {
#line 467 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__closure = check_hlds__typecheck_info__closure_arg;
#line 467 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__conv3_HeadVar__3_3;

#line 467 "typecheck_info.m"
    {
#line 467 "typecheck_info.m"
      hlds__hlds_data__update_constraint_map_3_p_0(((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_2), &check_hlds__typecheck_info__conv3_HeadVar__3_3);
    }
#line 467 "typecheck_info.m"
    *check_hlds__typecheck_info__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck_info__conv3_HeadVar__3_3));
#line 467 "typecheck_info.m"
  }
#line 467 "typecheck_info.m"
}

#line 447 "typecheck_info.m"
static void MR_CALL 
check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_1(
#line 447 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__closure_arg,
#line 447 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_1,
#line 447 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_2,
#line 447 "typecheck_info.m"
  MR_Box check_hlds__typecheck_info__wrapper_arg_3,
#line 447 "typecheck_info.m"
  MR_Box * check_hlds__typecheck_info__wrapper_arg_4)
#line 447 "typecheck_info.m"
{
#line 447 "typecheck_info.m"
  {
#line 447 "typecheck_info.m"
    MR_Box check_hlds__typecheck_info__closure = check_hlds__typecheck_info__closure_arg;
#line 447 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__conv1_Type_8;
#line 447 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__conv0_STATE_VARIABLE_TypeVarsSet_12;

#line 447 "typecheck_info.m"
    {
#line 447 "typecheck_info.m"
      check_hlds__typecheck_info__expand_types_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck_info__wrapper_arg_1), &check_hlds__typecheck_info__conv1_Type_8, ((MR_Word) check_hlds__typecheck_info__wrapper_arg_3), &check_hlds__typecheck_info__conv0_STATE_VARIABLE_TypeVarsSet_12);
    }
#line 447 "typecheck_info.m"
    *check_hlds__typecheck_info__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck_info__conv1_Type_8));
#line 447 "typecheck_info.m"
    *check_hlds__typecheck_info__wrapper_arg_4 = ((MR_Box) (check_hlds__typecheck_info__conv0_STATE_VARIABLE_TypeVarsSet_12));
#line 447 "typecheck_info.m"
  }
#line 447 "typecheck_info.m"
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
#line 428 "typecheck_info.m"
  {
#line 428 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 428 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeAssignSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 6)));
#line 429 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 0)));
#line 429 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 1)));
#line 429 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 2)));
#line 429 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 3)));
#line 429 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 4)));
#line 429 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 5)));
#line 429 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__Info_13, (MR_Integer) 7)));

#line 531 "typecheck_info.m"
    if ((check_hlds__typecheck_info__TypeAssignSet_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "typecheck_info.m"
      {
#line 533 "typecheck_info.m"
        {
#line 533 "typecheck_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck_info", (MR_String) "predicate \140check_hlds.typecheck_info.typecheck_info_get_final_info\'/12", (MR_String) "TypeAssignSet = []");
#line 533 "typecheck_info.m"
          return;
        }
#line 532 "typecheck_info.m"
      }
#line 531 "typecheck_info.m"
    else
#line 431 "typecheck_info.m"
      {
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeCtorInfo_85_85;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_86_86;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeInfo_90_90;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeAssign_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__TypeAssignSet_25, (MR_Integer) 0)));
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__HeadTypeParams_28;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__OldTypeVarSet_29;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__VarTypes0_30;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeBindings_31;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__HLDSTypeConstraints_32;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ConstraintProofs0_33;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ConstraintMap0_34;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__VarTypes1_35;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ConstraintProofs_36;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ConstraintMap1_37;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeVars1_39;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__HLDSUnivConstraints_41;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__HLDSExistConstraints_42;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ConstraintMap2_45;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ConstraintMap_46;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ExplicitTypes_47;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ExplicitTypeVars0_48;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ExistQVarsToBeRenamed_49;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__ExistQVarsToRemain_50;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeVars2_51;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeVars_52;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__TypeConstraints_53;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_61_61;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_62_62;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_63_63;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_64_64;
#line 431 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__TypeAssignSet_25, (MR_Integer) 1)));
#line 465 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_43_43;
#line 465 "typecheck_info.m"
        MR_Word check_hlds__typecheck_info__V_44_44;
#line 467 "typecheck_info.m"
        MR_Box check_hlds__typecheck_info__conv4_ConstraintMap2_45;
#line 469 "typecheck_info.m"
        MR_Box check_hlds__typecheck_info__conv6_ConstraintMap_46;

#line 432 "typecheck_info.m"
        {
#line 432 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__HeadTypeParams_28);
        }
#line 433 "typecheck_info.m"
        {
#line 433 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_typevarset_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__OldTypeVarSet_29);
        }
#line 434 "typecheck_info.m"
        {
#line 434 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__VarTypes0_30);
        }
#line 435 "typecheck_info.m"
        {
#line 435 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__TypeBindings_31);
        }
#line 436 "typecheck_info.m"
        {
#line 436 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__HLDSTypeConstraints_32);
        }
#line 437 "typecheck_info.m"
        {
#line 437 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_constraint_proofs_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__ConstraintProofs0_33);
        }
#line 438 "typecheck_info.m"
        {
#line 438 "typecheck_info.m"
          check_hlds__typecheck_info__type_assign_get_constraint_map_2_p_0(check_hlds__typecheck_info__TypeAssign_26, &check_hlds__typecheck_info__ConstraintMap0_34);
        }
#line 440 "typecheck_info.m"
        {
#line 440 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck_info__TypeBindings_31);
        }
#line 446 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 441 "typecheck_info.m"
          {
#line 441 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__Types1_38;

#line 441 "typecheck_info.m"
            check_hlds__typecheck_info__VarTypes1_35 = check_hlds__typecheck_info__VarTypes0_30;
#line 442 "typecheck_info.m"
            check_hlds__typecheck_info__ConstraintProofs_36 = check_hlds__typecheck_info__ConstraintProofs0_33;
#line 443 "typecheck_info.m"
            check_hlds__typecheck_info__ConstraintMap1_37 = check_hlds__typecheck_info__ConstraintMap0_34;
#line 444 "typecheck_info.m"
            {
#line 444 "typecheck_info.m"
              parse_tree__prog_data__vartypes_types_2_p_0(check_hlds__typecheck_info__VarTypes1_35, &check_hlds__typecheck_info__Types1_38);
            }
#line 445 "typecheck_info.m"
            {
#line 445 "typecheck_info.m"
              parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck_info__Types1_38, &check_hlds__typecheck_info__TypeVars1_39);
            }
#line 441 "typecheck_info.m"
          }
#line 446 "typecheck_info.m"
        else
#line 448 "typecheck_info.m"
          {
#line 448 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeInfo_80_80;
#line 448 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__TypeVarsSet1_40;
#line 448 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_57_57;
#line 448 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_58_58;
#line 447 "typecheck_info.m"
            MR_Box check_hlds__typecheck_info__conv2_TypeVarsSet1_40;

#line 447 "typecheck_info.m"
            {
#line 447 "typecheck_info.m"
              check_hlds__typecheck_info__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 447 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_57_57, 0) = ((MR_Box) (&check_hlds__typecheck_info_scalar_common_4[0]));
#line 447 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_57_57, 1) = ((MR_Box) (check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_1));
#line 447 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 447 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_57_57, 3) = ((MR_Box) (check_hlds__typecheck_info__TypeBindings_31));
#line 447 "typecheck_info.m"
            }
#line 10532 "check_hlds.typecheck_info.c"
            check_hlds__typecheck_info__TypeInfo_80_80 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0];
#line 448 "typecheck_info.m"
            {
#line 448 "typecheck_info.m"
              check_hlds__typecheck_info__V_58_58 = mercury__set__init_0_f_0(check_hlds__typecheck_info__TypeInfo_80_80);
            }
#line 447 "typecheck_info.m"
            {
#line 447 "typecheck_info.m"
              parse_tree__prog_data__transform_foldl_var_types_5_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[2], check_hlds__typecheck_info__V_57_57, check_hlds__typecheck_info__VarTypes0_30, &check_hlds__typecheck_info__VarTypes1_35, ((MR_Box) (check_hlds__typecheck_info__V_58_58)), &check_hlds__typecheck_info__conv2_TypeVarsSet1_40);
            }
#line 447 "typecheck_info.m"
            check_hlds__typecheck_info__TypeVarsSet1_40 = ((MR_Word) check_hlds__typecheck_info__conv2_TypeVarsSet1_40);
#line 449 "typecheck_info.m"
            {
#line 449 "typecheck_info.m"
              mercury__set__to_sorted_list_2_p_0(check_hlds__typecheck_info__TypeInfo_80_80, check_hlds__typecheck_info__TypeVarsSet1_40, &check_hlds__typecheck_info__TypeVars1_39);
            }
#line 450 "typecheck_info.m"
            {
#line 450 "typecheck_info.m"
              check_hlds__type_util__apply_rec_subst_to_constraint_proofs_3_p_0(check_hlds__typecheck_info__TypeBindings_31, check_hlds__typecheck_info__ConstraintProofs0_33, &check_hlds__typecheck_info__ConstraintProofs_36);
            }
#line 452 "typecheck_info.m"
            {
#line 452 "typecheck_info.m"
              check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0(check_hlds__typecheck_info__TypeBindings_31, check_hlds__typecheck_info__ConstraintMap0_34, &check_hlds__typecheck_info__ConstraintMap1_37);
            }
#line 448 "typecheck_info.m"
          }
#line 465 "typecheck_info.m"
        check_hlds__typecheck_info__HLDSUnivConstraints_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HLDSTypeConstraints_32, (MR_Integer) 0)));
#line 465 "typecheck_info.m"
        check_hlds__typecheck_info__HLDSExistConstraints_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HLDSTypeConstraints_32, (MR_Integer) 1)));
#line 465 "typecheck_info.m"
        check_hlds__typecheck_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HLDSTypeConstraints_32, (MR_Integer) 2)));
#line 465 "typecheck_info.m"
        check_hlds__typecheck_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__HLDSTypeConstraints_32, (MR_Integer) 3)));
#line 10571 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__TypeCtorInfo_85_85 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 10573 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__TypeInfo_86_86 = (MR_Word) &check_hlds__typecheck_info_scalar_common_2[0];
#line 467 "typecheck_info.m"
        {
#line 467 "typecheck_info.m"
          mercury__list__foldl_4_p_0(check_hlds__typecheck_info__TypeCtorInfo_85_85, check_hlds__typecheck_info__TypeInfo_86_86, (MR_Word) &check_hlds__typecheck_info_scalar_common_2[6], check_hlds__typecheck_info__HLDSUnivConstraints_41, ((MR_Box) (check_hlds__typecheck_info__ConstraintMap1_37)), &check_hlds__typecheck_info__conv4_ConstraintMap2_45);
        }
#line 467 "typecheck_info.m"
        check_hlds__typecheck_info__ConstraintMap2_45 = ((MR_Word) check_hlds__typecheck_info__conv4_ConstraintMap2_45);
#line 469 "typecheck_info.m"
        {
#line 469 "typecheck_info.m"
          mercury__list__foldl_4_p_0(check_hlds__typecheck_info__TypeCtorInfo_85_85, check_hlds__typecheck_info__TypeInfo_86_86, (MR_Word) &check_hlds__typecheck_info_scalar_common_2[7], check_hlds__typecheck_info__HLDSExistConstraints_42, ((MR_Box) (check_hlds__typecheck_info__ConstraintMap2_45)), &check_hlds__typecheck_info__conv6_ConstraintMap_46);
        }
#line 469 "typecheck_info.m"
        check_hlds__typecheck_info__ConstraintMap_46 = ((MR_Word) check_hlds__typecheck_info__conv6_ConstraintMap_46);
#line 475 "typecheck_info.m"
        {
#line 475 "typecheck_info.m"
          check_hlds__typecheck_info__get_existq_tvar_renaming_4_p_0(check_hlds__typecheck_info__OldHeadTypeParams_14, check_hlds__typecheck_info__OldExistQVars_15, check_hlds__typecheck_info__TypeBindings_31, check_hlds__typecheck_info__ExistTypeRenaming_24);
        }
#line 499 "typecheck_info.m"
        {
#line 499 "typecheck_info.m"
          parse_tree__prog_data__vartypes_types_2_p_0(check_hlds__typecheck_info__OldExplicitVarTypes_16, &check_hlds__typecheck_info__ExplicitTypes_47);
        }
#line 500 "typecheck_info.m"
        {
#line 500 "typecheck_info.m"
          parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck_info__ExplicitTypes_47, &check_hlds__typecheck_info__ExplicitTypeVars0_48);
        }
#line 10604 "check_hlds.typecheck_info.c"
        check_hlds__typecheck_info__TypeInfo_90_90 = (MR_Word) &check_hlds__typecheck_info_scalar_common_1[0];
#line 501 "typecheck_info.m"
        {
#line 501 "typecheck_info.m"
          mercury__map__keys_2_p_0(check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__TypeInfo_90_90, *check_hlds__typecheck_info__ExistTypeRenaming_24, &check_hlds__typecheck_info__ExistQVarsToBeRenamed_49);
        }
#line 502 "typecheck_info.m"
        {
#line 502 "typecheck_info.m"
          mercury__list__delete_elems_3_p_0(check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__OldExistQVars_15, check_hlds__typecheck_info__ExistQVarsToBeRenamed_49, &check_hlds__typecheck_info__ExistQVarsToRemain_50);
        }
#line 505 "typecheck_info.m"
        {
#line 505 "typecheck_info.m"
          check_hlds__typecheck_info__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_64_64, 0) = ((MR_Box) (check_hlds__typecheck_info__ExplicitTypeVars0_48));
#line 505 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "typecheck_info.m"
        }
#line 505 "typecheck_info.m"
        {
#line 505 "typecheck_info.m"
          check_hlds__typecheck_info__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_63_63, 0) = ((MR_Box) (check_hlds__typecheck_info__TypeVars1_39));
#line 505 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_63_63, 1) = ((MR_Box) (check_hlds__typecheck_info__V_64_64));
#line 505 "typecheck_info.m"
        }
#line 504 "typecheck_info.m"
        {
#line 504 "typecheck_info.m"
          check_hlds__typecheck_info__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_62_62, 0) = ((MR_Box) (check_hlds__typecheck_info__HeadTypeParams_28));
#line 504 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_62_62, 1) = ((MR_Box) (check_hlds__typecheck_info__V_63_63));
#line 504 "typecheck_info.m"
        }
#line 504 "typecheck_info.m"
        {
#line 504 "typecheck_info.m"
          check_hlds__typecheck_info__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_61_61, 0) = ((MR_Box) (check_hlds__typecheck_info__ExistQVarsToRemain_50));
#line 504 "typecheck_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__V_61_61, 1) = ((MR_Box) (check_hlds__typecheck_info__V_62_62));
#line 504 "typecheck_info.m"
        }
#line 504 "typecheck_info.m"
        {
#line 504 "typecheck_info.m"
          mercury__list__condense_2_p_0(check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__V_61_61, &check_hlds__typecheck_info__TypeVars2_51);
        }
#line 506 "typecheck_info.m"
        {
#line 506 "typecheck_info.m"
          mercury__list__sort_and_remove_dups_2_p_0(check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__TypeVars2_51, &check_hlds__typecheck_info__TypeVars_52);
        }
#line 509 "typecheck_info.m"
        {
#line 509 "typecheck_info.m"
          mercury__varset__squash_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck_info__OldTypeVarSet_29, check_hlds__typecheck_info__TypeVars_52, check_hlds__typecheck_info__NewTypeVarSet_17, check_hlds__typecheck_info__TSubst_23);
        }
#line 513 "typecheck_info.m"
        {
#line 513 "typecheck_info.m"
          hlds__hlds_data__retrieve_prog_constraints_2_p_0(check_hlds__typecheck_info__HLDSTypeConstraints_32, &check_hlds__typecheck_info__TypeConstraints_53);
        }
#line 514 "typecheck_info.m"
        {
#line 514 "typecheck_info.m"
          check_hlds__typecheck_info__succeeded = mercury__map__is_empty_1_p_0(check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__TypeInfo_90_90, *check_hlds__typecheck_info__TSubst_23);
        }
#line 520 "typecheck_info.m"
        if (check_hlds__typecheck_info__succeeded)
#line 515 "typecheck_info.m"
          {
#line 515 "typecheck_info.m"
            *check_hlds__typecheck_info__NewVarTypes_19 = check_hlds__typecheck_info__VarTypes1_35;
#line 516 "typecheck_info.m"
            *check_hlds__typecheck_info__NewHeadTypeParams_18 = check_hlds__typecheck_info__HeadTypeParams_28;
#line 517 "typecheck_info.m"
            *check_hlds__typecheck_info__NewTypeConstraints_20 = check_hlds__typecheck_info__TypeConstraints_53;
#line 518 "typecheck_info.m"
            *check_hlds__typecheck_info__NewConstraintProofs_21 = check_hlds__typecheck_info__ConstraintProofs_36;
#line 519 "typecheck_info.m"
            *check_hlds__typecheck_info__NewConstraintMap_22 = check_hlds__typecheck_info__ConstraintMap_46;
#line 515 "typecheck_info.m"
          }
#line 520 "typecheck_info.m"
        else
#line 522 "typecheck_info.m"
          {
#line 522 "typecheck_info.m"
            MR_Word check_hlds__typecheck_info__V_66_66;

#line 521 "typecheck_info.m"
            {
#line 521 "typecheck_info.m"
              check_hlds__typecheck_info__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 521 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_66_66, 0) = ((MR_Box) (&check_hlds__typecheck_info_scalar_common_5[1]));
#line 521 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_66_66, 1) = ((MR_Box) (check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0_4));
#line 521 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 521 "typecheck_info.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_66_66, 3) = ((MR_Box) (*check_hlds__typecheck_info__TSubst_23));
#line 521 "typecheck_info.m"
            }
#line 521 "typecheck_info.m"
            {
#line 521 "typecheck_info.m"
              parse_tree__prog_data__transform_var_types_3_p_0(check_hlds__typecheck_info__V_66_66, check_hlds__typecheck_info__VarTypes1_35, check_hlds__typecheck_info__NewVarTypes_19);
            }
#line 523 "typecheck_info.m"
            {
#line 523 "typecheck_info.m"
              mercury__map__apply_to_list_3_p_0(check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__TypeInfo_90_90, check_hlds__typecheck_info__HeadTypeParams_28, *check_hlds__typecheck_info__TSubst_23, check_hlds__typecheck_info__NewHeadTypeParams_18);
            }
#line 524 "typecheck_info.m"
            {
#line 524 "typecheck_info.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(*check_hlds__typecheck_info__TSubst_23, check_hlds__typecheck_info__TypeConstraints_53, check_hlds__typecheck_info__NewTypeConstraints_20);
            }
#line 526 "typecheck_info.m"
            {
#line 526 "typecheck_info.m"
              check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_p_0(*check_hlds__typecheck_info__TSubst_23, check_hlds__typecheck_info__ConstraintProofs_36, check_hlds__typecheck_info__NewConstraintProofs_21);
            }
#line 528 "typecheck_info.m"
            {
#line 528 "typecheck_info.m"
              check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0(*check_hlds__typecheck_info__TSubst_23, check_hlds__typecheck_info__ConstraintMap_46, check_hlds__typecheck_info__NewConstraintMap_22);
#line 528 "typecheck_info.m"
              return;
            }
#line 522 "typecheck_info.m"
          }
#line 431 "typecheck_info.m"
      }
#line 428 "typecheck_info.m"
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
#line 399 "typecheck_info.m"
  {
#line 399 "typecheck_info.m"
    MR_bool check_hlds__typecheck_info__succeeded;
#line 399 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeCtorInfo_52_52;
#line 399 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Context_27;
#line 399 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeBindings_28;
#line 399 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Proofs_29;
#line 399 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__ConstraintMap_30;
#line 399 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__OverloadedSymbols_32;
#line 399 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__Globals_33;
#line 399 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__WarnLimit_34;
#line 399 "typecheck_info.m"
    MR_Integer check_hlds__typecheck_info__ErrorLimit_35;
#line 399 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__TypeAssignSet_37;
#line 399 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__SubInfo_38;
#line 399 "typecheck_info.m"
    MR_Word check_hlds__typecheck_info__V_48_48;

#line 403 "typecheck_info.m"
    {
#line 403 "typecheck_info.m"
      mercury__term__context_init_1_p_0(&check_hlds__typecheck_info__Context_27);
    }
#line 404 "typecheck_info.m"
    {
#line 404 "typecheck_info.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__typecheck_info_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__typecheck_info__TypeBindings_28);
    }
#line 10822 "check_hlds.typecheck_info.c"
    check_hlds__typecheck_info__TypeCtorInfo_52_52 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 405 "typecheck_info.m"
    {
#line 405 "typecheck_info.m"
      mercury__map__init_1_p_0(check_hlds__typecheck_info__TypeCtorInfo_52_52, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &check_hlds__typecheck_info__Proofs_29);
    }
#line 406 "typecheck_info.m"
    {
#line 406 "typecheck_info.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, check_hlds__typecheck_info__TypeCtorInfo_52_52, &check_hlds__typecheck_info__ConstraintMap_30);
    }
#line 408 "typecheck_info.m"
    {
#line 408 "typecheck_info.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_overloaded_symbol_0, (MR_Word) &check_hlds__typecheck_info_scalar_common_1[1], &check_hlds__typecheck_info__OverloadedSymbols_32);
    }
#line 409 "typecheck_info.m"
    {
#line 409 "typecheck_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck_info__ModuleInfo_13, &check_hlds__typecheck_info__Globals_33);
    }
#line 410 "typecheck_info.m"
    {
#line 410 "typecheck_info.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck_info__Globals_33, (MR_Integer) 658, &check_hlds__typecheck_info__WarnLimit_34);
    }
#line 412 "typecheck_info.m"
    {
#line 412 "typecheck_info.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck_info__Globals_33, (MR_Integer) 659, &check_hlds__typecheck_info__ErrorLimit_35);
    }
#line 415 "typecheck_info.m"
    {
#line 415 "typecheck_info.m"
      check_hlds__typecheck_info__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 415 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 0) = ((MR_Box) (check_hlds__typecheck_info__VarTypes_18));
#line 415 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 1) = ((MR_Box) (check_hlds__typecheck_info__TypeVarSet_16));
#line 415 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 2) = ((MR_Box) (check_hlds__typecheck_info__HeadTypeParams_19));
#line 415 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 3) = ((MR_Box) (check_hlds__typecheck_info__TypeBindings_28));
#line 415 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 4) = ((MR_Box) (check_hlds__typecheck_info__Constraints_20));
#line 415 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 5) = ((MR_Box) (check_hlds__typecheck_info__Proofs_29));
#line 415 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__V_48_48, 6) = ((MR_Box) (check_hlds__typecheck_info__ConstraintMap_30));
#line 415 "typecheck_info.m"
    }
#line 416 "typecheck_info.m"
    {
#line 416 "typecheck_info.m"
      check_hlds__typecheck_info__TypeAssignSet_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "typecheck_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__TypeAssignSet_37, 0) = ((MR_Box) (check_hlds__typecheck_info__V_48_48));
#line 416 "typecheck_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck_info__TypeAssignSet_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 416 "typecheck_info.m"
    }
#line 418 "typecheck_info.m"
    {
#line 418 "typecheck_info.m"
      check_hlds__typecheck_info__SubInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 418 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 0) = ((MR_Box) (check_hlds__typecheck_info__PredId_14));
#line 418 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 1) = ((MR_Box) (check_hlds__typecheck_info__Status_21));
#line 418 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 2) = ((MR_Box) (check_hlds__typecheck_info__PredMarkers_22));
#line 418 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 3) = ((MR_Box) (check_hlds__typecheck_info__IsFieldAccessFunction_15));
#line 418 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 4) = ((MR_Box) (check_hlds__typecheck_info__VarSet_17));
#line 418 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 5) = ((MR_Box) (check_hlds__typecheck_info__NonOverloadErrors_23));
#line 418 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 418 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 7) = ((MR_Box) (check_hlds__typecheck_info__OverloadedSymbols_32));
#line 418 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck_info__SubInfo_38, 8) = ((MR_Box) (check_hlds__typecheck_info__ErrorLimit_35));
#line 418 "typecheck_info.m"
    }
#line 422 "typecheck_info.m"
    {
#line 422 "typecheck_info.m"
      MR_Word base;
#line 422 "typecheck_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 422 "typecheck_info.m"
      *check_hlds__typecheck_info__Info_24 = base;
#line 422 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck_info__SubInfo_38));
#line 422 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck_info__ModuleInfo_13));
#line 422 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (&check_hlds__typecheck_info_scalar_common_3[1]));
#line 422 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 0));
#line 422 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck_info__Context_27));
#line 422 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (&check_hlds__typecheck_info_scalar_common_1[17]));
#line 422 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck_info__TypeAssignSet_37));
#line 422 "typecheck_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck_info__WarnLimit_34));
#line 422 "typecheck_info.m"
    }
#line 399 "typecheck_info.m"
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
