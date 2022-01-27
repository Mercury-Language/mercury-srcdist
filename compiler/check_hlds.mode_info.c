/*
** Automatically generated from `mode_info.m'
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


/* :- module check_hlds.mode_info. */
/* :- implementation. */

/*
INIT mercury__check_hlds__mode_info__init
ENDINIT
*/

#include "check_hlds.mode_info.mih"


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
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
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
#include "parse_tree.file_kind.mih"
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




#line 135 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_0[1];

#line 138 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0;

#line 141 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_1[1];

#line 144 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1;

#line 147 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_0[1];

#line 150 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_1[1];

#line 153 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_call_context_0[2];

#line 156 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_call_context_0[2];

#line 159 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_call_context_0[2];

#line 162 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_debug_flags_0_0[3];

#line 165 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_debug_flags_0_0[3];

#line 168 "check_hlds.mode_info.c"
static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_debug_flags_0_0[3];

#line 171 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0;

#line 174 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0[1];

#line 177 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_debug_flags_0[1];

#line 180 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_debug_flags_0[1];

#line 183 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_debug_flags_0[1];

#line 186 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0;

#line 189 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1;

#line 192 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_had_from_ground_term_scope_0[2];

#line 195 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_had_from_ground_term_scope_0[2];

#line 198 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_had_from_ground_term_scope_0[2];

#line 201 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0;

#line 204 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1;

#line 207 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_how_to_check_goal_0[2];

#line 210 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_how_to_check_goal_0[2];

#line 213 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_how_to_check_goal_0[2];

#line 216 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0;

#line 219 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1;

#line 222 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_dupl_for_switch_0[2];

#line 225 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_dupl_for_switch_0[2];

#line 228 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_dupl_for_switch_0[2];

#line 231 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0;

#line 234 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1;

#line 237 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_from_ground_term_scope_0[2];

#line 240 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_from_ground_term_scope_0[2];

#line 243 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_from_ground_term_scope_0[2];

#line 246 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0;

#line 249 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1;

#line 252 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_promise_purity_scope_0[2];

#line 255 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_promise_purity_scope_0[2];

#line 258 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_promise_purity_scope_0[2];

#line 261 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 264 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 267 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 270 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 273 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0;

#line 276 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1;

#line 279 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_make_ground_terms_unique_0[2];

#line 282 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_make_ground_terms_unique_0[2];

#line 285 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_make_ground_terms_unique_0[2];

#line 288 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0;

#line 291 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1;

#line 294 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_change_called_proc_0[2];

#line 297 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_change_called_proc_0[2];

#line 300 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_change_called_proc_0[2];

#line 303 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0;

#line 306 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1;

#line 309 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_init_solver_vars_0[2];

#line 312 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_init_solver_vars_0[2];

#line 315 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_init_solver_vars_0[2];

#line 318 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_0[2];

#line 321 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0;

#line 324 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_1[2];

#line 327 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1;

#line 330 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2;

#line 333 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_0[1];

#line 336 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_1[1];

#line 339 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_2[1];

#line 342 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_context_0[3];

#line 345 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_context_0[3];

#line 348 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_context_0[3];

#line 351 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

#line 354 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 357 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_info_0_0[8];

#line 360 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_info_0_0[8];

#line 363 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0;

#line 366 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0[1];

#line 369 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_info_0[1];

#line 372 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_info_0[1];

#line 375 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_info_0[1];

#line 378 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 381 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 384 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0;

#line 387 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 390 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0;

#line 393 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 396 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 399 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_warning_info_0;

#line 402 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_sub_info_0_0[24];

#line 405 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_sub_info_0_0[24];

#line 408 "check_hlds.mode_info.c"
static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_mode_sub_info_0_0[24];

#line 411 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0;

#line 414 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0[1];

#line 417 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_sub_info_0[1];

#line 420 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_sub_info_0[1];

#line 423 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_sub_info_0[1];

#line 426 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_par_conj_mode_check_0_0[2];

#line 429 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_par_conj_mode_check_0_0[2];

#line 432 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0;

#line 435 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0[1];

#line 438 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_par_conj_mode_check_0[1];

#line 441 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_par_conj_mode_check_0[1];

#line 444 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_par_conj_mode_check_0[1];

#line 447 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0;

#line 450 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1;

#line 453 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_side_0[2];

#line 456 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_side_0[2];

#line 459 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_side_0[2];

#line 462 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0;

#line 465 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1;

#line 468 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_var_lock_reason_0_2[1];

#line 471 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2;

#line 474 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3;

#line 477 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4;

#line 480 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5;

#line 483 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_0[5];

#line 486 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_1[1];

#line 489 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_var_lock_reason_0[2];

#line 492 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_var_lock_reason_0[6];

#line 495 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_var_lock_reason_0[6];

#line 498 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____call_context_0_0_10001(
#line 501 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 503 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 506 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____call_context_0_0_10001(
#line 509 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 511 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 513 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 516 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____debug_flags_0_0_10001(
#line 519 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 521 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 524 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0_10001(
#line 527 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 529 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 531 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 534 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0_10001(
#line 537 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 539 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 542 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0_10001(
#line 545 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 547 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 549 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 552 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____how_to_check_goal_0_0_10001(
#line 555 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 557 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 560 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____how_to_check_goal_0_0_10001(
#line 563 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 565 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 567 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 570 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0_10001(
#line 573 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 575 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 578 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0_10001(
#line 581 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 583 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 585 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 588 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0_10001(
#line 591 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 593 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 596 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0_10001(
#line 599 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 601 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 603 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 606 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0_10001(
#line 609 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 611 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 614 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0_10001(
#line 617 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 619 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 621 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 624 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____locked_vars_0_0_10001(
#line 627 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 629 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 632 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____locked_vars_0_0_10001(
#line 635 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 637 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 639 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 642 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0_10001(
#line 645 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 647 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 650 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0_10001(
#line 653 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 655 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 657 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 660 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_change_called_proc_0_0_10001(
#line 663 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 665 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 668 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_change_called_proc_0_0_10001(
#line 671 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 673 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 675 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 678 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_init_solver_vars_0_0_10001(
#line 681 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 683 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 686 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_init_solver_vars_0_0_10001(
#line 689 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 691 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 693 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 696 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_context_0_0_10001(
#line 699 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 701 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 704 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_context_0_0_10001(
#line 707 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 709 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 711 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 714 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0_10001(
#line 717 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 719 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 722 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0_10001(
#line 725 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 727 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 729 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 732 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0_10001(
#line 735 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 737 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 740 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0_10001(
#line 743 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 745 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 747 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 750 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0_10001(
#line 753 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 755 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 758 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0_10001(
#line 761 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 763 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 765 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 768 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0_10001(
#line 771 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 773 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 776 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0_10001(
#line 779 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 781 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 783 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 786 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____side_0_0_10001(
#line 789 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 791 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 794 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____side_0_0_10001(
#line 797 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 799 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 801 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 804 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____var_lock_reason_0_0_10001(
#line 807 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 809 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 812 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____var_lock_reason_0_0_10001(
#line 815 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 817 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 819 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 365 "mode_info.m"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0(
#line 365 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 365 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 365 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3);

#line 365 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0(
#line 365 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 365 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2);

#line 974 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(
#line 974 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 974 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_7,
#line 974 "mode_info.m"
  MR_Word * check_hlds__mode_info__Reason_8);


static /* final */ const MR_Box check_hlds__mode_info_scalar_common_1[11][2];

static /* final */ const MR_Box check_hlds__mode_info_scalar_common_2[3][3];




static /* final */ const MR_Box check_hlds__mode_info_scalar_common_1[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__bag__bag__type_ctor_info_bag_1)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_2[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_debug_flags_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_info_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_var_lock_reason_0)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_1[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_1[9])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 948 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0
};

#line 953 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0 = {
  (MR_String) "call_context_unify",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_0,
  NULL,
  NULL,
  NULL
};

#line 968 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0
};

#line 973 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1 = {
  (MR_String) "call_context_call",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_1,
  NULL,
  NULL,
  NULL
};

#line 988 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0
};

#line 993 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1
};

#line 998 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_call_context_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_1
  }
};

#line 1012 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_call_context_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0
};

#line 1018 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_call_context_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1024 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_call_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____call_context_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____call_context_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "call_context",
  {     check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_call_context_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_call_context_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_call_context_0
};

#line 1041 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_debug_flags_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1048 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_debug_flags_0_0[3] = {
  (MR_String) "verbose",
  (MR_String) "minimal",
  (MR_String) "statistics"
};

#line 1055 "check_hlds.mode_info.c"
static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_debug_flags_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  }
};

#line 1074 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0 = {
  (MR_String) "debug_flags",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_info__check_hlds__mode_info__field_types_debug_flags_0_0,
  check_hlds__mode_info__check_hlds__mode_info__field_names_debug_flags_0_0,
  check_hlds__mode_info__check_hlds__mode_info__field_locns_debug_flags_0_0,
  NULL
};

#line 1089 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0
};

#line 1094 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_debug_flags_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0
  }
};

#line 1103 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_debug_flags_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0
};

#line 1108 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_debug_flags_0[1] = {
  (MR_Integer) 0
};

#line 1113 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_debug_flags_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____debug_flags_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____debug_flags_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "debug_flags",
  {     check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_debug_flags_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_debug_flags_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_debug_flags_0
};

#line 1130 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0 = {
  (MR_String) "had_from_ground_term_scope",
  (MR_Integer) 0
};

#line 1136 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1 = {
  (MR_String) "did_not_have_from_ground_term_scope",
  (MR_Integer) 1
};

#line 1142 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_had_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1
};

#line 1148 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_had_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0
};

#line 1154 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_had_from_ground_term_scope_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1160 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_had_from_ground_term_scope_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "had_from_ground_term_scope",
  {     check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_had_from_ground_term_scope_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_had_from_ground_term_scope_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_had_from_ground_term_scope_0
};

#line 1177 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0 = {
  (MR_String) "check_modes",
  (MR_Integer) 0
};

#line 1183 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1 = {
  (MR_String) "check_unique_modes",
  (MR_Integer) 1
};

#line 1189 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_how_to_check_goal_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1
};

#line 1195 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_how_to_check_goal_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1
};

#line 1201 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_how_to_check_goal_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1207 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_how_to_check_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____how_to_check_goal_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____how_to_check_goal_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "how_to_check_goal",
  {     check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_how_to_check_goal_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_how_to_check_goal_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_how_to_check_goal_0
};

#line 1224 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0 = {
  (MR_String) "in_dupl_for_switch",
  (MR_Integer) 0
};

#line 1230 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1 = {
  (MR_String) "not_in_dupl_for_switch",
  (MR_Integer) 1
};

#line 1236 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_dupl_for_switch_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1
};

#line 1242 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_dupl_for_switch_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1
};

#line 1248 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_dupl_for_switch_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1254 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_dupl_for_switch_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____in_dupl_for_switch_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____in_dupl_for_switch_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "in_dupl_for_switch",
  {     check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_dupl_for_switch_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_dupl_for_switch_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_dupl_for_switch_0
};

#line 1271 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0 = {
  (MR_String) "in_from_ground_term_scope",
  (MR_Integer) 0
};

#line 1277 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1 = {
  (MR_String) "not_in_from_ground_term_scope",
  (MR_Integer) 1
};

#line 1283 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1
};

#line 1289 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1
};

#line 1295 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_from_ground_term_scope_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1301 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_from_ground_term_scope_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "in_from_ground_term_scope",
  {     check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_from_ground_term_scope_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_from_ground_term_scope_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_from_ground_term_scope_0
};

#line 1318 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0 = {
  (MR_String) "in_promise_purity_scope",
  (MR_Integer) 0
};

#line 1324 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1 = {
  (MR_String) "not_in_promise_purity_scope",
  (MR_Integer) 1
};

#line 1330 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_promise_purity_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1
};

#line 1336 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_promise_purity_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1
};

#line 1342 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_promise_purity_scope_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1348 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_promise_purity_scope_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____in_promise_purity_scope_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____in_promise_purity_scope_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "in_promise_purity_scope",
  {     check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_promise_purity_scope_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_promise_purity_scope_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_promise_purity_scope_0
};

#line 1365 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1373 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1381 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_var_lock_reason_0,
    (MR_TypeInfo) &check_hlds__mode_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1390 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1398 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_locked_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_info____Unify____locked_vars_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____locked_vars_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "locked_vars",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1415 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0 = {
  (MR_String) "make_ground_terms_unique",
  (MR_Integer) 0
};

#line 1421 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1 = {
  (MR_String) "do_not_make_ground_terms_unique",
  (MR_Integer) 1
};

#line 1427 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_make_ground_terms_unique_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1
};

#line 1433 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_make_ground_terms_unique_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0
};

#line 1439 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_make_ground_terms_unique_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1445 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_make_ground_terms_unique_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____make_ground_terms_unique_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____make_ground_terms_unique_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "make_ground_terms_unique",
  {     check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_make_ground_terms_unique_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_make_ground_terms_unique_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_make_ground_terms_unique_0
};

#line 1462 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0 = {
  (MR_String) "may_change_called_proc",
  (MR_Integer) 0
};

#line 1468 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1 = {
  (MR_String) "may_not_change_called_proc",
  (MR_Integer) 1
};

#line 1474 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_change_called_proc_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1
};

#line 1480 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_change_called_proc_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1
};

#line 1486 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_change_called_proc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1492 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_may_change_called_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____may_change_called_proc_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____may_change_called_proc_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "may_change_called_proc",
  {     check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_change_called_proc_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_change_called_proc_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_change_called_proc_0
};

#line 1509 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0 = {
  (MR_String) "may_init_solver_vars",
  (MR_Integer) 0
};

#line 1515 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1 = {
  (MR_String) "may_not_init_solver_vars",
  (MR_Integer) 1
};

#line 1521 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_init_solver_vars_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1
};

#line 1527 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_init_solver_vars_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1
};

#line 1533 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_init_solver_vars_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1539 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_may_init_solver_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____may_init_solver_vars_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____may_init_solver_vars_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "may_init_solver_vars",
  {     check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_init_solver_vars_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_init_solver_vars_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_init_solver_vars_0
};

#line 1556 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1562 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0 = {
  (MR_String) "mode_context_call",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_0,
  NULL,
  NULL,
  NULL
};

#line 1577 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_side_0
};

#line 1583 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1 = {
  (MR_String) "mode_context_unify",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_1,
  NULL,
  NULL,
  NULL
};

#line 1598 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2 = {
  (MR_String) "mode_context_uninitialized",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1613 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2
};

#line 1618 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0
};

#line 1623 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_2[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1
};

#line 1628 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_context_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_2
  }
};

#line 1647 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_context_0[3] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2
};

#line 1654 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_context_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1661 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____mode_context_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____mode_context_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "mode_context",
  {     check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_context_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_context_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_context_0
};

#line 1678 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0
  }
};

#line 1686 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1694 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_info_0_0[8] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_info_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_context_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_sub_info_0
};

#line 1706 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_info_0_0[8] = {
  (MR_String) "mi_module_info",
  (MR_String) "mi_instmap",
  (MR_String) "mi_delay_info",
  (MR_String) "mi_errors",
  (MR_String) "mi_mode_context",
  (MR_String) "mi_context",
  (MR_String) "mi_nondet_live_vars",
  (MR_String) "mi_sub_info"
};

#line 1718 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0 = {
  (MR_String) "mode_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_info__check_hlds__mode_info__field_types_mode_info_0_0,
  check_hlds__mode_info__check_hlds__mode_info__field_names_mode_info_0_0,
  NULL,
  NULL
};

#line 1733 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0
};

#line 1738 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0
  }
};

#line 1747 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_info_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0
};

#line 1752 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_info_0[1] = {
  (MR_Integer) 0
};

#line 1757 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____mode_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____mode_info_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "mode_info",
  {     check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_info_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_info_0
};

#line 1774 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1782 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1791 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_debug_flags_0
  }
};

#line 1799 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1807 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0
  }
};

#line 1815 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1823 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1832 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_warning_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0
  }
};

#line 1840 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_sub_info_0_0[24] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_how_to_check_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_may_change_called_proc_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_may_init_solver_vars_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_warning_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_need_to_requantify_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_promise_purity_scope_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_from_ground_term_scope_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_had_from_ground_term_scope_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_make_ground_terms_unique_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_dupl_for_switch_0
};

#line 1868 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_sub_info_0_0[24] = {
  (MR_String) "msi_pred_id",
  (MR_String) "msi_proc_id",
  (MR_String) "msi_varset",
  (MR_String) "msi_vartypes",
  (MR_String) "msi_debug",
  (MR_String) "msi_locked_vars",
  (MR_String) "msi_live_vars",
  (MR_String) "msi_instvarset",
  (MR_String) "msi_par_conj",
  (MR_String) "msi_how_to_check",
  (MR_String) "msi_may_change_called_proc",
  (MR_String) "msi_may_init_solver_vars",
  (MR_String) "msi_last_checkpoint_insts",
  (MR_String) "msi_changed_flag",
  (MR_String) "msi_checking_extra_goals",
  (MR_String) "msi_initial_instmap",
  (MR_String) "msi_head_inst_vars",
  (MR_String) "msi_warnings",
  (MR_String) "msi_need_to_requantify",
  (MR_String) "msi_in_promise_purity_scope",
  (MR_String) "msi_in_from_ground_term",
  (MR_String) "msi_had_from_ground_term",
  (MR_String) "msi_make_ground_terms_unique",
  (MR_String) "msi_in_dupl_for_switch"
};

#line 1896 "check_hlds.mode_info.c"
static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_mode_sub_info_0_0[24] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 15,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 15,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 15,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 15,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 15,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 15,
    (MR_Integer) 5,
    (MR_Integer) 1
  }
};

#line 2020 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0 = {
  (MR_String) "mode_sub_info",
  (MR_Integer) 24,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_info__check_hlds__mode_info__field_types_mode_sub_info_0_0,
  check_hlds__mode_info__check_hlds__mode_info__field_names_mode_sub_info_0_0,
  check_hlds__mode_info__check_hlds__mode_info__field_locns_mode_sub_info_0_0,
  NULL
};

#line 2035 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0
};

#line 2040 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0
  }
};

#line 2049 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_sub_info_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0
};

#line 2054 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_sub_info_0[1] = {
  (MR_Integer) 0
};

#line 2059 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_sub_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____mode_sub_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____mode_sub_info_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "mode_sub_info",
  {     check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_sub_info_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_sub_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_sub_info_0
};

#line 2076 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_par_conj_mode_check_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2082 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_par_conj_mode_check_0_0[2] = {
  (MR_String) "par_conj_nonlocals",
  (MR_String) "par_conj_bound"
};

#line 2088 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0 = {
  (MR_String) "par_conj_mode_check",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_info__check_hlds__mode_info__field_types_par_conj_mode_check_0_0,
  check_hlds__mode_info__check_hlds__mode_info__field_names_par_conj_mode_check_0_0,
  NULL,
  NULL
};

#line 2103 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0
};

#line 2108 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_par_conj_mode_check_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0
  }
};

#line 2117 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_par_conj_mode_check_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0
};

#line 2122 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_par_conj_mode_check_0[1] = {
  (MR_Integer) 0
};

#line 2127 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____par_conj_mode_check_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____par_conj_mode_check_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "par_conj_mode_check",
  {     check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_par_conj_mode_check_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_par_conj_mode_check_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_par_conj_mode_check_0
};

#line 2144 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_stack_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "par_conj_mode_check_stack",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2161 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0 = {
  (MR_String) "left",
  (MR_Integer) 0
};

#line 2167 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1 = {
  (MR_String) "right",
  (MR_Integer) 1
};

#line 2173 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_side_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1
};

#line 2179 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_side_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1
};

#line 2185 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_side_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2191 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_side_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____side_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____side_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "side",
  {     check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_side_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_side_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_side_0
};

#line 2208 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0 = {
  (MR_String) "var_lock_negation",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2223 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1 = {
  (MR_String) "var_lock_if_then_else",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2238 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_var_lock_reason_0_2[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
};

#line 2243 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2 = {
  (MR_String) "var_lock_lambda",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__mode_info__check_hlds__mode_info__field_types_var_lock_reason_0_2,
  NULL,
  NULL,
  NULL
};

#line 2258 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3 = {
  (MR_String) "var_lock_trace_goal",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2273 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4 = {
  (MR_String) "var_lock_atomic_goal",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2288 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5 = {
  (MR_String) "var_lock_par_conj",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2303 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_0[5] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5
};

#line 2312 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2
};

#line 2317 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_var_lock_reason_0[2] = {
  {
    (MR_Integer) 5,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_1
  }
};

#line 2331 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_var_lock_reason_0[6] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3
};

#line 2341 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_var_lock_reason_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 4
};

#line 2351 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_var_lock_reason_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____var_lock_reason_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____var_lock_reason_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "var_lock_reason",
  {     check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_var_lock_reason_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_var_lock_reason_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_var_lock_reason_0
};

#line 2368 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____call_context_0_0_10001(
#line 2371 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2373 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2375 "check_hlds.mode_info.c"
{
#line 2377 "check_hlds.mode_info.c"
  {
#line 2379 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2382 "check_hlds.mode_info.c"
    {
#line 2384 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____call_context_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2387 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2389 "check_hlds.mode_info.c"
  }
#line 2391 "check_hlds.mode_info.c"
}

#line 2394 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____call_context_0_0_10001(
#line 2397 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2399 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2401 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2403 "check_hlds.mode_info.c"
{
#line 2405 "check_hlds.mode_info.c"
  {
#line 2407 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2410 "check_hlds.mode_info.c"
    {
#line 2412 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____call_context_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2415 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2417 "check_hlds.mode_info.c"
  }
#line 2419 "check_hlds.mode_info.c"
}

#line 2422 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____debug_flags_0_0_10001(
#line 2425 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2427 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2429 "check_hlds.mode_info.c"
{
#line 2431 "check_hlds.mode_info.c"
  {
#line 2433 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2436 "check_hlds.mode_info.c"
    {
#line 2438 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____debug_flags_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2441 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2443 "check_hlds.mode_info.c"
  }
#line 2445 "check_hlds.mode_info.c"
}

#line 2448 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0_10001(
#line 2451 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2453 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2455 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2457 "check_hlds.mode_info.c"
{
#line 2459 "check_hlds.mode_info.c"
  {
#line 2461 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2464 "check_hlds.mode_info.c"
    {
#line 2466 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____debug_flags_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2469 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2471 "check_hlds.mode_info.c"
  }
#line 2473 "check_hlds.mode_info.c"
}

#line 2476 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0_10001(
#line 2479 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2481 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2483 "check_hlds.mode_info.c"
{
#line 2485 "check_hlds.mode_info.c"
  {
#line 2487 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2490 "check_hlds.mode_info.c"
    {
#line 2492 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2495 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2497 "check_hlds.mode_info.c"
  }
#line 2499 "check_hlds.mode_info.c"
}

#line 2502 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0_10001(
#line 2505 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2507 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2509 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2511 "check_hlds.mode_info.c"
{
#line 2513 "check_hlds.mode_info.c"
  {
#line 2515 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2518 "check_hlds.mode_info.c"
    {
#line 2520 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2523 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2525 "check_hlds.mode_info.c"
  }
#line 2527 "check_hlds.mode_info.c"
}

#line 2530 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____how_to_check_goal_0_0_10001(
#line 2533 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2535 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2537 "check_hlds.mode_info.c"
{
#line 2539 "check_hlds.mode_info.c"
  {
#line 2541 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2544 "check_hlds.mode_info.c"
    {
#line 2546 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____how_to_check_goal_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2549 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2551 "check_hlds.mode_info.c"
  }
#line 2553 "check_hlds.mode_info.c"
}

#line 2556 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____how_to_check_goal_0_0_10001(
#line 2559 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2561 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2563 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2565 "check_hlds.mode_info.c"
{
#line 2567 "check_hlds.mode_info.c"
  {
#line 2569 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2572 "check_hlds.mode_info.c"
    {
#line 2574 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____how_to_check_goal_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2577 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2579 "check_hlds.mode_info.c"
  }
#line 2581 "check_hlds.mode_info.c"
}

#line 2584 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0_10001(
#line 2587 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2589 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2591 "check_hlds.mode_info.c"
{
#line 2593 "check_hlds.mode_info.c"
  {
#line 2595 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2598 "check_hlds.mode_info.c"
    {
#line 2600 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____in_dupl_for_switch_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2603 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2605 "check_hlds.mode_info.c"
  }
#line 2607 "check_hlds.mode_info.c"
}

#line 2610 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0_10001(
#line 2613 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2615 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2617 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2619 "check_hlds.mode_info.c"
{
#line 2621 "check_hlds.mode_info.c"
  {
#line 2623 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2626 "check_hlds.mode_info.c"
    {
#line 2628 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____in_dupl_for_switch_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2631 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2633 "check_hlds.mode_info.c"
  }
#line 2635 "check_hlds.mode_info.c"
}

#line 2638 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0_10001(
#line 2641 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2643 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2645 "check_hlds.mode_info.c"
{
#line 2647 "check_hlds.mode_info.c"
  {
#line 2649 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2652 "check_hlds.mode_info.c"
    {
#line 2654 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2657 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2659 "check_hlds.mode_info.c"
  }
#line 2661 "check_hlds.mode_info.c"
}

#line 2664 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0_10001(
#line 2667 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2669 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2671 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2673 "check_hlds.mode_info.c"
{
#line 2675 "check_hlds.mode_info.c"
  {
#line 2677 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2680 "check_hlds.mode_info.c"
    {
#line 2682 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2685 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2687 "check_hlds.mode_info.c"
  }
#line 2689 "check_hlds.mode_info.c"
}

#line 2692 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0_10001(
#line 2695 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2697 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2699 "check_hlds.mode_info.c"
{
#line 2701 "check_hlds.mode_info.c"
  {
#line 2703 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2706 "check_hlds.mode_info.c"
    {
#line 2708 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____in_promise_purity_scope_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2711 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2713 "check_hlds.mode_info.c"
  }
#line 2715 "check_hlds.mode_info.c"
}

#line 2718 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0_10001(
#line 2721 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2723 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2725 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2727 "check_hlds.mode_info.c"
{
#line 2729 "check_hlds.mode_info.c"
  {
#line 2731 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2734 "check_hlds.mode_info.c"
    {
#line 2736 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____in_promise_purity_scope_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2739 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2741 "check_hlds.mode_info.c"
  }
#line 2743 "check_hlds.mode_info.c"
}

#line 2746 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____locked_vars_0_0_10001(
#line 2749 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2751 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2753 "check_hlds.mode_info.c"
{
#line 2755 "check_hlds.mode_info.c"
  {
#line 2757 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2760 "check_hlds.mode_info.c"
    {
#line 2762 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____locked_vars_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2765 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2767 "check_hlds.mode_info.c"
  }
#line 2769 "check_hlds.mode_info.c"
}

#line 2772 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____locked_vars_0_0_10001(
#line 2775 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2777 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2779 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2781 "check_hlds.mode_info.c"
{
#line 2783 "check_hlds.mode_info.c"
  {
#line 2785 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2788 "check_hlds.mode_info.c"
    {
#line 2790 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____locked_vars_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2793 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2795 "check_hlds.mode_info.c"
  }
#line 2797 "check_hlds.mode_info.c"
}

#line 2800 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0_10001(
#line 2803 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2805 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2807 "check_hlds.mode_info.c"
{
#line 2809 "check_hlds.mode_info.c"
  {
#line 2811 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2814 "check_hlds.mode_info.c"
    {
#line 2816 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____make_ground_terms_unique_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2819 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2821 "check_hlds.mode_info.c"
  }
#line 2823 "check_hlds.mode_info.c"
}

#line 2826 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0_10001(
#line 2829 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2831 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2833 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2835 "check_hlds.mode_info.c"
{
#line 2837 "check_hlds.mode_info.c"
  {
#line 2839 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2842 "check_hlds.mode_info.c"
    {
#line 2844 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____make_ground_terms_unique_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2847 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2849 "check_hlds.mode_info.c"
  }
#line 2851 "check_hlds.mode_info.c"
}

#line 2854 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_change_called_proc_0_0_10001(
#line 2857 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2859 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2861 "check_hlds.mode_info.c"
{
#line 2863 "check_hlds.mode_info.c"
  {
#line 2865 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2868 "check_hlds.mode_info.c"
    {
#line 2870 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____may_change_called_proc_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2873 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2875 "check_hlds.mode_info.c"
  }
#line 2877 "check_hlds.mode_info.c"
}

#line 2880 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_change_called_proc_0_0_10001(
#line 2883 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2885 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2887 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2889 "check_hlds.mode_info.c"
{
#line 2891 "check_hlds.mode_info.c"
  {
#line 2893 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2896 "check_hlds.mode_info.c"
    {
#line 2898 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____may_change_called_proc_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2901 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2903 "check_hlds.mode_info.c"
  }
#line 2905 "check_hlds.mode_info.c"
}

#line 2908 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_init_solver_vars_0_0_10001(
#line 2911 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2913 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2915 "check_hlds.mode_info.c"
{
#line 2917 "check_hlds.mode_info.c"
  {
#line 2919 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2922 "check_hlds.mode_info.c"
    {
#line 2924 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____may_init_solver_vars_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2927 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2929 "check_hlds.mode_info.c"
  }
#line 2931 "check_hlds.mode_info.c"
}

#line 2934 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_init_solver_vars_0_0_10001(
#line 2937 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2939 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2941 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2943 "check_hlds.mode_info.c"
{
#line 2945 "check_hlds.mode_info.c"
  {
#line 2947 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2950 "check_hlds.mode_info.c"
    {
#line 2952 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____may_init_solver_vars_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2955 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2957 "check_hlds.mode_info.c"
  }
#line 2959 "check_hlds.mode_info.c"
}

#line 2962 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_context_0_0_10001(
#line 2965 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2967 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2969 "check_hlds.mode_info.c"
{
#line 2971 "check_hlds.mode_info.c"
  {
#line 2973 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2976 "check_hlds.mode_info.c"
    {
#line 2978 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_context_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2981 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2983 "check_hlds.mode_info.c"
  }
#line 2985 "check_hlds.mode_info.c"
}

#line 2988 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_context_0_0_10001(
#line 2991 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2993 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2995 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2997 "check_hlds.mode_info.c"
{
#line 2999 "check_hlds.mode_info.c"
  {
#line 3001 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3004 "check_hlds.mode_info.c"
    {
#line 3006 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____mode_context_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3009 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3011 "check_hlds.mode_info.c"
  }
#line 3013 "check_hlds.mode_info.c"
}

#line 3016 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0_10001(
#line 3019 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3021 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3023 "check_hlds.mode_info.c"
{
#line 3025 "check_hlds.mode_info.c"
  {
#line 3027 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3030 "check_hlds.mode_info.c"
    {
#line 3032 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_info_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3035 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3037 "check_hlds.mode_info.c"
  }
#line 3039 "check_hlds.mode_info.c"
}

#line 3042 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0_10001(
#line 3045 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3047 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3049 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3051 "check_hlds.mode_info.c"
{
#line 3053 "check_hlds.mode_info.c"
  {
#line 3055 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3058 "check_hlds.mode_info.c"
    {
#line 3060 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____mode_info_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3063 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3065 "check_hlds.mode_info.c"
  }
#line 3067 "check_hlds.mode_info.c"
}

#line 3070 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0_10001(
#line 3073 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3075 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3077 "check_hlds.mode_info.c"
{
#line 3079 "check_hlds.mode_info.c"
  {
#line 3081 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3084 "check_hlds.mode_info.c"
    {
#line 3086 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_sub_info_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3089 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3091 "check_hlds.mode_info.c"
  }
#line 3093 "check_hlds.mode_info.c"
}

#line 3096 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0_10001(
#line 3099 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3101 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3103 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3105 "check_hlds.mode_info.c"
{
#line 3107 "check_hlds.mode_info.c"
  {
#line 3109 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3112 "check_hlds.mode_info.c"
    {
#line 3114 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____mode_sub_info_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3117 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3119 "check_hlds.mode_info.c"
  }
#line 3121 "check_hlds.mode_info.c"
}

#line 3124 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0_10001(
#line 3127 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3129 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3131 "check_hlds.mode_info.c"
{
#line 3133 "check_hlds.mode_info.c"
  {
#line 3135 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3138 "check_hlds.mode_info.c"
    {
#line 3140 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____par_conj_mode_check_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3143 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3145 "check_hlds.mode_info.c"
  }
#line 3147 "check_hlds.mode_info.c"
}

#line 3150 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0_10001(
#line 3153 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3155 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3157 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3159 "check_hlds.mode_info.c"
{
#line 3161 "check_hlds.mode_info.c"
  {
#line 3163 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3166 "check_hlds.mode_info.c"
    {
#line 3168 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____par_conj_mode_check_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3171 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3173 "check_hlds.mode_info.c"
  }
#line 3175 "check_hlds.mode_info.c"
}

#line 3178 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0_10001(
#line 3181 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3183 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3185 "check_hlds.mode_info.c"
{
#line 3187 "check_hlds.mode_info.c"
  {
#line 3189 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3192 "check_hlds.mode_info.c"
    {
#line 3194 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3197 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3199 "check_hlds.mode_info.c"
  }
#line 3201 "check_hlds.mode_info.c"
}

#line 3204 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0_10001(
#line 3207 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3209 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3211 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3213 "check_hlds.mode_info.c"
{
#line 3215 "check_hlds.mode_info.c"
  {
#line 3217 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3220 "check_hlds.mode_info.c"
    {
#line 3222 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3225 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3227 "check_hlds.mode_info.c"
  }
#line 3229 "check_hlds.mode_info.c"
}

#line 3232 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____side_0_0_10001(
#line 3235 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3237 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3239 "check_hlds.mode_info.c"
{
#line 3241 "check_hlds.mode_info.c"
  {
#line 3243 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3246 "check_hlds.mode_info.c"
    {
#line 3248 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____side_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3251 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3253 "check_hlds.mode_info.c"
  }
#line 3255 "check_hlds.mode_info.c"
}

#line 3258 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____side_0_0_10001(
#line 3261 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3263 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3265 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3267 "check_hlds.mode_info.c"
{
#line 3269 "check_hlds.mode_info.c"
  {
#line 3271 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3274 "check_hlds.mode_info.c"
    {
#line 3276 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____side_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3279 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3281 "check_hlds.mode_info.c"
  }
#line 3283 "check_hlds.mode_info.c"
}

#line 3286 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____var_lock_reason_0_0_10001(
#line 3289 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3291 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3293 "check_hlds.mode_info.c"
{
#line 3295 "check_hlds.mode_info.c"
  {
#line 3297 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3300 "check_hlds.mode_info.c"
    {
#line 3302 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____var_lock_reason_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3305 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3307 "check_hlds.mode_info.c"
  }
#line 3309 "check_hlds.mode_info.c"
}

#line 3312 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____var_lock_reason_0_0_10001(
#line 3315 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3317 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3319 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3321 "check_hlds.mode_info.c"
{
#line 3323 "check_hlds.mode_info.c"
  {
#line 3325 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3328 "check_hlds.mode_info.c"
    {
#line 3330 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____var_lock_reason_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3333 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3335 "check_hlds.mode_info.c"
  }
#line 3337 "check_hlds.mode_info.c"
}

#line 67 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____var_lock_reason_0_0(
#line 67 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 67 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 67 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 67 "mode_info.m"
{
#line 67 "mode_info.m"
  {
#line 67 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 67 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_16 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 67 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_17 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 67 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_16 == check_hlds__mode_info__CastY_17);
#line 67 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 3364 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "mode_info.m"
    else
#line 67 "mode_info.m"
#line 67 "mode_info.m"
      switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__2_2)) {
#line 67 "mode_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 67 "mode_info.m"
        case (MR_Integer) 0:
#line 67 "mode_info.m"
#line 67 "mode_info.m"
          switch (MR_unmkbody(check_hlds__mode_info__HeadVar__2_2)) {
#line 67 "mode_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 67 "mode_info.m"
            case (MR_Integer) 0:
#line 67 "mode_info.m"
#line 67 "mode_info.m"
              switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) {
#line 67 "mode_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 67 "mode_info.m"
                case (MR_Integer) 0:
#line 67 "mode_info.m"
#line 67 "mode_info.m"
                  switch (MR_unmkbody(check_hlds__mode_info__HeadVar__3_3)) {
#line 67 "mode_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 67 "mode_info.m"
                    case (MR_Integer) 0:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 1:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 2:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 3:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 4:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                  }
#line 67 "mode_info.m"
                  break;
#line 67 "mode_info.m"
                case (MR_Integer) 1:
#line 3430 "check_hlds.mode_info.c"
                  *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                  break;
#line 67 "mode_info.m"
              }
#line 67 "mode_info.m"
              break;
#line 67 "mode_info.m"
            case (MR_Integer) 1:
#line 67 "mode_info.m"
#line 67 "mode_info.m"
              switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) {
#line 67 "mode_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 67 "mode_info.m"
                case (MR_Integer) 0:
#line 67 "mode_info.m"
#line 67 "mode_info.m"
                  switch (MR_unmkbody(check_hlds__mode_info__HeadVar__3_3)) {
#line 67 "mode_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 67 "mode_info.m"
                    case (MR_Integer) 0:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 1:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 2:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 3:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 4:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                  }
#line 67 "mode_info.m"
                  break;
#line 67 "mode_info.m"
                case (MR_Integer) 1:
#line 3488 "check_hlds.mode_info.c"
                  *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                  break;
#line 67 "mode_info.m"
              }
#line 67 "mode_info.m"
              break;
#line 67 "mode_info.m"
            case (MR_Integer) 2:
#line 67 "mode_info.m"
#line 67 "mode_info.m"
              switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) {
#line 67 "mode_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 67 "mode_info.m"
                case (MR_Integer) 0:
#line 67 "mode_info.m"
#line 67 "mode_info.m"
                  switch (MR_unmkbody(check_hlds__mode_info__HeadVar__3_3)) {
#line 67 "mode_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 67 "mode_info.m"
                    case (MR_Integer) 0:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 1:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 2:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 3:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 4:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                  }
#line 67 "mode_info.m"
                  break;
#line 67 "mode_info.m"
                case (MR_Integer) 1:
#line 3546 "check_hlds.mode_info.c"
                  *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                  break;
#line 67 "mode_info.m"
              }
#line 67 "mode_info.m"
              break;
#line 67 "mode_info.m"
            case (MR_Integer) 3:
#line 67 "mode_info.m"
#line 67 "mode_info.m"
              switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) {
#line 67 "mode_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 67 "mode_info.m"
                case (MR_Integer) 0:
#line 67 "mode_info.m"
#line 67 "mode_info.m"
                  switch (MR_unmkbody(check_hlds__mode_info__HeadVar__3_3)) {
#line 67 "mode_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 67 "mode_info.m"
                    case (MR_Integer) 0:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 1:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 2:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 3:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 4:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                  }
#line 67 "mode_info.m"
                  break;
#line 67 "mode_info.m"
                case (MR_Integer) 1:
#line 3604 "check_hlds.mode_info.c"
                  *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                  break;
#line 67 "mode_info.m"
              }
#line 67 "mode_info.m"
              break;
#line 67 "mode_info.m"
            case (MR_Integer) 4:
#line 67 "mode_info.m"
#line 67 "mode_info.m"
              switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) {
#line 67 "mode_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 67 "mode_info.m"
                case (MR_Integer) 0:
#line 67 "mode_info.m"
#line 67 "mode_info.m"
                  switch (MR_unmkbody(check_hlds__mode_info__HeadVar__3_3)) {
#line 67 "mode_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 67 "mode_info.m"
                    case (MR_Integer) 0:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 1:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 2:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 3:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                    case (MR_Integer) 4:
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "mode_info.m"
                      break;
#line 67 "mode_info.m"
                  }
#line 67 "mode_info.m"
                  break;
#line 67 "mode_info.m"
                case (MR_Integer) 1:
#line 3662 "check_hlds.mode_info.c"
                  *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                  break;
#line 67 "mode_info.m"
              }
#line 67 "mode_info.m"
              break;
#line 67 "mode_info.m"
          }
#line 67 "mode_info.m"
          break;
#line 67 "mode_info.m"
        case (MR_Integer) 1:
#line 67 "mode_info.m"
          {
#line 67 "mode_info.m"
            MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));

#line 67 "mode_info.m"
#line 67 "mode_info.m"
            switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) {
#line 67 "mode_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 67 "mode_info.m"
              case (MR_Integer) 0:
#line 67 "mode_info.m"
#line 67 "mode_info.m"
                switch (MR_unmkbody(check_hlds__mode_info__HeadVar__3_3)) {
#line 67 "mode_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 67 "mode_info.m"
                  case (MR_Integer) 0:
#line 3695 "check_hlds.mode_info.c"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                    break;
#line 67 "mode_info.m"
                  case (MR_Integer) 1:
#line 3701 "check_hlds.mode_info.c"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                    break;
#line 67 "mode_info.m"
                  case (MR_Integer) 2:
#line 3707 "check_hlds.mode_info.c"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                    break;
#line 67 "mode_info.m"
                  case (MR_Integer) 3:
#line 3713 "check_hlds.mode_info.c"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                    break;
#line 67 "mode_info.m"
                  case (MR_Integer) 4:
#line 3719 "check_hlds.mode_info.c"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                    break;
#line 67 "mode_info.m"
                }
#line 67 "mode_info.m"
                break;
#line 67 "mode_info.m"
              case (MR_Integer) 1:
#line 67 "mode_info.m"
                {
#line 67 "mode_info.m"
                  MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));
#line 67 "mode_info.m"
                  MR_Integer check_hlds__mode_info__V_20_20 = (MR_Integer) check_hlds__mode_info__V_19_19;
#line 67 "mode_info.m"
                  MR_Integer check_hlds__mode_info__V_21_21 = (MR_Integer) check_hlds__mode_info__V_9_9;

#line 67 "mode_info.m"
                  {
#line 67 "mode_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_20_20, check_hlds__mode_info__V_21_21);
#line 67 "mode_info.m"
                    return;
                  }
#line 67 "mode_info.m"
                }
#line 67 "mode_info.m"
                break;
#line 67 "mode_info.m"
            }
#line 67 "mode_info.m"
          }
#line 67 "mode_info.m"
          break;
#line 67 "mode_info.m"
      }
#line 67 "mode_info.m"
  }
#line 67 "mode_info.m"
}

#line 67 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____var_lock_reason_0_0(
#line 67 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 67 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 67 "mode_info.m"
{
#line 67 "mode_info.m"
  {
#line 67 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 67 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_15 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 67 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_16 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 67 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_15 == check_hlds__mode_info__CastY_16);
#line 67 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 67 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 67 "mode_info.m"
    else
#line 67 "mode_info.m"
#line 67 "mode_info.m"
      switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) {
#line 67 "mode_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 67 "mode_info.m"
        case (MR_Integer) 0:
#line 67 "mode_info.m"
#line 67 "mode_info.m"
          switch (MR_unmkbody(check_hlds__mode_info__HeadVar__1_1)) {
#line 67 "mode_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 67 "mode_info.m"
            case (MR_Integer) 0:
#line 67 "mode_info.m"
              {
#line 67 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastX_3 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 67 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastY_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 67 "mode_info.m"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastY_4 == check_hlds__mode_info__CastX_3);
#line 67 "mode_info.m"
              }
#line 67 "mode_info.m"
              break;
#line 67 "mode_info.m"
            case (MR_Integer) 1:
#line 67 "mode_info.m"
              {
#line 67 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastX_5 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 67 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastY_6 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 67 "mode_info.m"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastY_6 == check_hlds__mode_info__CastX_5);
#line 67 "mode_info.m"
              }
#line 67 "mode_info.m"
              break;
#line 67 "mode_info.m"
            case (MR_Integer) 2:
#line 67 "mode_info.m"
              {
#line 67 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastX_9 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 67 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastY_10 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 67 "mode_info.m"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastY_10 == check_hlds__mode_info__CastX_9);
#line 67 "mode_info.m"
              }
#line 67 "mode_info.m"
              break;
#line 67 "mode_info.m"
            case (MR_Integer) 3:
#line 67 "mode_info.m"
              {
#line 67 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastX_11 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 67 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastY_12 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 67 "mode_info.m"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastY_12 == check_hlds__mode_info__CastX_11);
#line 67 "mode_info.m"
              }
#line 67 "mode_info.m"
              break;
#line 67 "mode_info.m"
            case (MR_Integer) 4:
#line 67 "mode_info.m"
              {
#line 67 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastX_13 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 67 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastY_14 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 67 "mode_info.m"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastY_14 == check_hlds__mode_info__CastX_13);
#line 67 "mode_info.m"
              }
#line 67 "mode_info.m"
              break;
#line 67 "mode_info.m"
          }
#line 67 "mode_info.m"
          break;
#line 67 "mode_info.m"
        case (MR_Integer) 1:
#line 67 "mode_info.m"
          {
#line 67 "mode_info.m"
            MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 67 "mode_info.m"
            MR_Word check_hlds__mode_info__V_8_8;

#line 67 "mode_info.m"
            check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 67 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 67 "mode_info.m"
              {
#line 67 "mode_info.m"
                check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 3896 "check_hlds.mode_info.c"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_7_7 == check_hlds__mode_info__V_8_8);
#line 67 "mode_info.m"
              }
#line 67 "mode_info.m"
          }
#line 67 "mode_info.m"
          break;
#line 67 "mode_info.m"
      }
#line 67 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 67 "mode_info.m"
  }
#line 67 "mode_info.m"
}

#line 59 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____side_0_0(
#line 59 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 59 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 59 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 59 "mode_info.m"
{
#line 59 "mode_info.m"
  {
#line 59 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 59 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 59 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 59 "mode_info.m"
    {
#line 59 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
#line 59 "mode_info.m"
      return;
    }
#line 59 "mode_info.m"
  }
#line 59 "mode_info.m"
}

#line 59 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____side_0_0(
#line 59 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 59 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 59 "mode_info.m"
{
#line 3954 "check_hlds.mode_info.c"
  {
#line 3956 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 3959 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3961 "check_hlds.mode_info.c"
  }
#line 59 "mode_info.m"
}

#line 146 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0(
#line 146 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 146 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 146 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 146 "mode_info.m"
{
#line 146 "mode_info.m"
  {
#line 146 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 146 "mode_info.m"
    MR_Word check_hlds__mode_info__Cast_HeadVar1_4 = check_hlds__mode_info__HeadVar__2_2;
#line 146 "mode_info.m"
    MR_Word check_hlds__mode_info__Cast_HeadVar2_5 = check_hlds__mode_info__HeadVar__3_3;

#line 146 "mode_info.m"
    {
#line 146 "mode_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[8], check_hlds__mode_info__HeadVar__1_1, ((MR_Box) (check_hlds__mode_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_info__Cast_HeadVar2_5)));
#line 146 "mode_info.m"
      return;
    }
#line 146 "mode_info.m"
  }
#line 146 "mode_info.m"
}

#line 146 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0(
#line 146 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 146 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 146 "mode_info.m"
{
#line 146 "mode_info.m"
  {
#line 146 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 146 "mode_info.m"
    MR_Word check_hlds__mode_info__Cast_HeadVar1_3 = check_hlds__mode_info__HeadVar__1_1;
#line 146 "mode_info.m"
    MR_Word check_hlds__mode_info__Cast_HeadVar2_4 = check_hlds__mode_info__HeadVar__2_2;

#line 146 "mode_info.m"
    {
#line 146 "mode_info.m"
      return check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[8], ((MR_Box) (check_hlds__mode_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_info__Cast_HeadVar2_4)));
    }
#line 146 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 146 "mode_info.m"
  }
#line 146 "mode_info.m"
}

#line 147 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0(
#line 147 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 147 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 147 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 147 "mode_info.m"
{
#line 147 "mode_info.m"
  {
#line 147 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 147 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_9 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 147 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_10 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 147 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_9 == check_hlds__mode_info__CastY_10);
#line 147 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 4052 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "mode_info.m"
    else
#line 147 "mode_info.m"
      {
#line 147 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 147 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 147 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));
#line 147 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 1)));
#line 147 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8;

#line 147 "mode_info.m"
        {
#line 147 "mode_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[3], &check_hlds__mode_info__V_8_8, ((MR_Box) (check_hlds__mode_info__V_4_4)), ((MR_Box) (check_hlds__mode_info__V_6_6)));
        }
#line 4074 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_8_8 == (MR_Integer) 0);
#line 147 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 147 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 147 "mode_info.m"
          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_8_8;
#line 147 "mode_info.m"
        else
#line 147 "mode_info.m"
          {
#line 147 "mode_info.m"
            {
#line 147 "mode_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[3], check_hlds__mode_info__HeadVar__1_1, ((MR_Box) (check_hlds__mode_info__V_5_5)), ((MR_Box) (check_hlds__mode_info__V_7_7)));
#line 147 "mode_info.m"
              return;
            }
#line 147 "mode_info.m"
          }
#line 147 "mode_info.m"
      }
#line 147 "mode_info.m"
  }
#line 147 "mode_info.m"
}

#line 147 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0(
#line 147 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 147 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 147 "mode_info.m"
{
#line 147 "mode_info.m"
  {
#line 147 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 147 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_7 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 147 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_8 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 147 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_7 == check_hlds__mode_info__CastY_8);
#line 147 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 147 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 147 "mode_info.m"
    else
#line 147 "mode_info.m"
      {
#line 147 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_10_10;
#line 147 "mode_info.m"
        MR_Word check_hlds__mode_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 147 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 147 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 147 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));

#line 4141 "check_hlds.mode_info.c"
        {
#line 4143 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[3], ((MR_Box) (check_hlds__mode_info__V_3_3)), ((MR_Box) (check_hlds__mode_info__V_5_5)));
        }
#line 147 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 147 "mode_info.m"
          {
#line 4150 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeInfo_10_10 = (MR_Word) &check_hlds__mode_info_scalar_common_1[3];
#line 4152 "check_hlds.mode_info.c"
            {
#line 4154 "check_hlds.mode_info.c"
              return check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_10_10, ((MR_Box) (check_hlds__mode_info__V_4_4)), ((MR_Box) (check_hlds__mode_info__V_6_6)));
            }
#line 147 "mode_info.m"
          }
#line 147 "mode_info.m"
      }
#line 147 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 147 "mode_info.m"
  }
#line 147 "mode_info.m"
}

#line 365 "mode_info.m"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0(
#line 365 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 365 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 365 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 365 "mode_info.m"
{
#line 365 "mode_info.m"
  {
#line 365 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 365 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_75 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 365 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_76 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 365 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_75 == check_hlds__mode_info__CastY_76);
#line 365 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 4192 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 365 "mode_info.m"
    else
#line 365 "mode_info.m"
      {
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 365 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 8)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 10)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 12)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 13)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));
#line 365 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 1)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 2)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 3)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 4)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 5)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 6)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 7)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 8)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 10)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 12)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 13)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 14)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52;

#line 365 "mode_info.m"
        {
#line 365 "mode_info.m"
          hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__mode_info__V_52_52, check_hlds__mode_info__V_4_4, check_hlds__mode_info__V_28_28);
        }
#line 4302 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_52_52 == (MR_Integer) 0);
#line 365 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_52_52;
#line 365 "mode_info.m"
        else
#line 365 "mode_info.m"
          {
#line 365 "mode_info.m"
            MR_Word check_hlds__mode_info__V_53_53;

#line 365 "mode_info.m"
            {
#line 365 "mode_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_53_53, check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_29_29);
            }
#line 4322 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_53_53 == (MR_Integer) 0);
#line 365 "mode_info.m"
            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_53_53;
#line 365 "mode_info.m"
            else
#line 365 "mode_info.m"
              {
#line 365 "mode_info.m"
                MR_Word check_hlds__mode_info__V_54_54;

#line 365 "mode_info.m"
                {
#line 365 "mode_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[5], &check_hlds__mode_info__V_54_54, ((MR_Box) (check_hlds__mode_info__V_6_6)), ((MR_Box) (check_hlds__mode_info__V_30_30)));
                }
#line 4342 "check_hlds.mode_info.c"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_54_54 == (MR_Integer) 0);
#line 365 "mode_info.m"
                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_54_54;
#line 365 "mode_info.m"
                else
#line 365 "mode_info.m"
                  {
#line 365 "mode_info.m"
                    MR_Word check_hlds__mode_info__V_55_55;

#line 365 "mode_info.m"
                    {
#line 365 "mode_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_2[1], &check_hlds__mode_info__V_55_55, ((MR_Box) (check_hlds__mode_info__V_7_7)), ((MR_Box) (check_hlds__mode_info__V_31_31)));
                    }
#line 4362 "check_hlds.mode_info.c"
                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_55_55 == (MR_Integer) 0);
#line 365 "mode_info.m"
                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_55_55;
#line 365 "mode_info.m"
                    else
#line 365 "mode_info.m"
                      {
#line 365 "mode_info.m"
                        MR_Word check_hlds__mode_info__V_56_56;

#line 365 "mode_info.m"
                        {
#line 365 "mode_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[6], &check_hlds__mode_info__V_56_56, ((MR_Box) (check_hlds__mode_info__V_8_8)), ((MR_Box) (check_hlds__mode_info__V_32_32)));
                        }
#line 4382 "check_hlds.mode_info.c"
                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_56_56 == (MR_Integer) 0);
#line 365 "mode_info.m"
                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_56_56;
#line 365 "mode_info.m"
                        else
#line 365 "mode_info.m"
                          {
#line 365 "mode_info.m"
                            MR_Word check_hlds__mode_info__V_57_57;

#line 365 "mode_info.m"
                            {
#line 365 "mode_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[4], &check_hlds__mode_info__V_57_57, ((MR_Box) (check_hlds__mode_info__V_9_9)), ((MR_Box) (check_hlds__mode_info__V_33_33)));
                            }
#line 4402 "check_hlds.mode_info.c"
                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_57_57 == (MR_Integer) 0);
#line 365 "mode_info.m"
                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_57_57;
#line 365 "mode_info.m"
                            else
#line 365 "mode_info.m"
                              {
#line 365 "mode_info.m"
                                MR_Word check_hlds__mode_info__V_58_58;

#line 365 "mode_info.m"
                                {
#line 365 "mode_info.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[2], &check_hlds__mode_info__V_58_58, ((MR_Box) (check_hlds__mode_info__V_10_10)), ((MR_Box) (check_hlds__mode_info__V_34_34)));
                                }
#line 4422 "check_hlds.mode_info.c"
                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_58_58 == (MR_Integer) 0);
#line 365 "mode_info.m"
                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_58_58;
#line 365 "mode_info.m"
                                else
#line 365 "mode_info.m"
                                  {
#line 365 "mode_info.m"
                                    MR_Word check_hlds__mode_info__V_59_59;

#line 365 "mode_info.m"
                                    {
#line 365 "mode_info.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[7], &check_hlds__mode_info__V_59_59, ((MR_Box) (check_hlds__mode_info__V_11_11)), ((MR_Box) (check_hlds__mode_info__V_35_35)));
                                    }
#line 4442 "check_hlds.mode_info.c"
                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_59_59 == (MR_Integer) 0);
#line 365 "mode_info.m"
                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                                    if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_59_59;
#line 365 "mode_info.m"
                                    else
#line 365 "mode_info.m"
                                      {
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_60_60;

#line 365 "mode_info.m"
                                        {
#line 365 "mode_info.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[8], &check_hlds__mode_info__V_60_60, ((MR_Box) (check_hlds__mode_info__V_12_12)), ((MR_Box) (check_hlds__mode_info__V_36_36)));
                                        }
#line 4462 "check_hlds.mode_info.c"
                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_60_60 == (MR_Integer) 0);
#line 365 "mode_info.m"
                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                                        if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_60_60;
#line 365 "mode_info.m"
                                        else
#line 365 "mode_info.m"
                                          {
#line 365 "mode_info.m"
                                            MR_Word check_hlds__mode_info__V_61_61;
#line 365 "mode_info.m"
                                            MR_Integer check_hlds__mode_info__V_101_101 = (MR_Integer) check_hlds__mode_info__V_13_13;
#line 365 "mode_info.m"
                                            MR_Integer check_hlds__mode_info__V_102_102 = (MR_Integer) check_hlds__mode_info__V_37_37;

#line 365 "mode_info.m"
                                            {
#line 365 "mode_info.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_61_61, check_hlds__mode_info__V_101_101, check_hlds__mode_info__V_102_102);
                                            }
#line 4486 "check_hlds.mode_info.c"
                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_61_61 == (MR_Integer) 0);
#line 365 "mode_info.m"
                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                                            if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_61_61;
#line 365 "mode_info.m"
                                            else
#line 365 "mode_info.m"
                                              {
#line 365 "mode_info.m"
                                                MR_Word check_hlds__mode_info__V_62_62;
#line 365 "mode_info.m"
                                                MR_Integer check_hlds__mode_info__V_103_103 = (MR_Integer) check_hlds__mode_info__V_14_14;
#line 365 "mode_info.m"
                                                MR_Integer check_hlds__mode_info__V_104_104 = (MR_Integer) check_hlds__mode_info__V_38_38;

#line 365 "mode_info.m"
                                                {
#line 365 "mode_info.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_62_62, check_hlds__mode_info__V_103_103, check_hlds__mode_info__V_104_104);
                                                }
#line 4510 "check_hlds.mode_info.c"
                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_62_62 == (MR_Integer) 0);
#line 365 "mode_info.m"
                                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                                                if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_62_62;
#line 365 "mode_info.m"
                                                else
#line 365 "mode_info.m"
                                                  {
#line 365 "mode_info.m"
                                                    MR_Word check_hlds__mode_info__V_63_63;
#line 365 "mode_info.m"
                                                    MR_Integer check_hlds__mode_info__V_105_105 = (MR_Integer) check_hlds__mode_info__V_15_15;
#line 365 "mode_info.m"
                                                    MR_Integer check_hlds__mode_info__V_106_106 = (MR_Integer) check_hlds__mode_info__V_39_39;

#line 365 "mode_info.m"
                                                    {
#line 365 "mode_info.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_63_63, check_hlds__mode_info__V_105_105, check_hlds__mode_info__V_106_106);
                                                    }
#line 4534 "check_hlds.mode_info.c"
                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_63_63 == (MR_Integer) 0);
#line 365 "mode_info.m"
                                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                                                    if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_63_63;
#line 365 "mode_info.m"
                                                    else
#line 365 "mode_info.m"
                                                      {
#line 365 "mode_info.m"
                                                        MR_Word check_hlds__mode_info__V_64_64;

#line 365 "mode_info.m"
                                                        {
#line 365 "mode_info.m"
                                                          hlds__instmap____Compare____instmap_0_0(&check_hlds__mode_info__V_64_64, check_hlds__mode_info__V_16_16, check_hlds__mode_info__V_40_40);
                                                        }
#line 4554 "check_hlds.mode_info.c"
                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_64_64 == (MR_Integer) 0);
#line 365 "mode_info.m"
                                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                                                        if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_64_64;
#line 365 "mode_info.m"
                                                        else
#line 365 "mode_info.m"
                                                          {
#line 365 "mode_info.m"
                                                            MR_Word check_hlds__mode_info__V_65_65;
#line 365 "mode_info.m"
                                                            MR_Integer check_hlds__mode_info__V_107_107 = (MR_Integer) check_hlds__mode_info__V_17_17;
#line 365 "mode_info.m"
                                                            MR_Integer check_hlds__mode_info__V_108_108 = (MR_Integer) check_hlds__mode_info__V_41_41;

#line 365 "mode_info.m"
                                                            {
#line 365 "mode_info.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_65_65, check_hlds__mode_info__V_107_107, check_hlds__mode_info__V_108_108);
                                                            }
#line 4578 "check_hlds.mode_info.c"
                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_65_65 == (MR_Integer) 0);
#line 365 "mode_info.m"
                                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                                                            if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_65_65;
#line 365 "mode_info.m"
                                                            else
#line 365 "mode_info.m"
                                                              {
#line 365 "mode_info.m"
                                                                MR_Word check_hlds__mode_info__V_66_66;
#line 365 "mode_info.m"
                                                                MR_Integer check_hlds__mode_info__V_109_109 = (MR_Integer) check_hlds__mode_info__V_18_18;
#line 365 "mode_info.m"
                                                                MR_Integer check_hlds__mode_info__V_110_110 = (MR_Integer) check_hlds__mode_info__V_42_42;

#line 365 "mode_info.m"
                                                                {
#line 365 "mode_info.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_66_66, check_hlds__mode_info__V_109_109, check_hlds__mode_info__V_110_110);
                                                                }
#line 4602 "check_hlds.mode_info.c"
                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_66_66 == (MR_Integer) 0);
#line 365 "mode_info.m"
                                                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                                                                if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_66_66;
#line 365 "mode_info.m"
                                                                else
#line 365 "mode_info.m"
                                                                  {
#line 365 "mode_info.m"
                                                                    MR_Word check_hlds__mode_info__V_67_67;

#line 365 "mode_info.m"
                                                                    {
#line 365 "mode_info.m"
                                                                      hlds__instmap____Compare____instmap_0_0(&check_hlds__mode_info__V_67_67, check_hlds__mode_info__V_19_19, check_hlds__mode_info__V_43_43);
                                                                    }
#line 4622 "check_hlds.mode_info.c"
                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_67_67 == (MR_Integer) 0);
#line 365 "mode_info.m"
                                                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                                                                    if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_67_67;
#line 365 "mode_info.m"
                                                                    else
#line 365 "mode_info.m"
                                                                      {
#line 365 "mode_info.m"
                                                                        MR_Word check_hlds__mode_info__V_68_68;

#line 365 "mode_info.m"
                                                                        {
#line 365 "mode_info.m"
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_2[2], &check_hlds__mode_info__V_68_68, ((MR_Box) (check_hlds__mode_info__V_20_20)), ((MR_Box) (check_hlds__mode_info__V_44_44)));
                                                                        }
#line 4642 "check_hlds.mode_info.c"
                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_68_68 == (MR_Integer) 0);
#line 365 "mode_info.m"
                                                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                                                                        if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_68_68;
#line 365 "mode_info.m"
                                                                        else
#line 365 "mode_info.m"
                                                                          {
#line 365 "mode_info.m"
                                                                            MR_Word check_hlds__mode_info__V_69_69;

#line 365 "mode_info.m"
                                                                            {
#line 365 "mode_info.m"
                                                                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[10], &check_hlds__mode_info__V_69_69, ((MR_Box) (check_hlds__mode_info__V_21_21)), ((MR_Box) (check_hlds__mode_info__V_45_45)));
                                                                            }
#line 4662 "check_hlds.mode_info.c"
                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_69_69 == (MR_Integer) 0);
#line 365 "mode_info.m"
                                                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                                                                            if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_69_69;
#line 365 "mode_info.m"
                                                                            else
#line 365 "mode_info.m"
                                                                              {
#line 365 "mode_info.m"
                                                                                MR_Word check_hlds__mode_info__V_70_70;
#line 365 "mode_info.m"
                                                                                MR_Integer check_hlds__mode_info__V_111_111 = (MR_Integer) check_hlds__mode_info__V_22_22;
#line 365 "mode_info.m"
                                                                                MR_Integer check_hlds__mode_info__V_112_112 = (MR_Integer) check_hlds__mode_info__V_46_46;

#line 365 "mode_info.m"
                                                                                {
#line 365 "mode_info.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_70_70, check_hlds__mode_info__V_111_111, check_hlds__mode_info__V_112_112);
                                                                                }
#line 4686 "check_hlds.mode_info.c"
                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_70_70 == (MR_Integer) 0);
#line 365 "mode_info.m"
                                                                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                                                                                if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_70_70;
#line 365 "mode_info.m"
                                                                                else
#line 365 "mode_info.m"
                                                                                  {
#line 365 "mode_info.m"
                                                                                    MR_Word check_hlds__mode_info__V_71_71;
#line 365 "mode_info.m"
                                                                                    MR_Integer check_hlds__mode_info__V_113_113 = (MR_Integer) check_hlds__mode_info__V_23_23;
#line 365 "mode_info.m"
                                                                                    MR_Integer check_hlds__mode_info__V_114_114 = (MR_Integer) check_hlds__mode_info__V_47_47;

#line 365 "mode_info.m"
                                                                                    {
#line 365 "mode_info.m"
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_71_71, check_hlds__mode_info__V_113_113, check_hlds__mode_info__V_114_114);
                                                                                    }
#line 4710 "check_hlds.mode_info.c"
                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_71_71 == (MR_Integer) 0);
#line 365 "mode_info.m"
                                                                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                                                                                    if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_71_71;
#line 365 "mode_info.m"
                                                                                    else
#line 365 "mode_info.m"
                                                                                      {
#line 365 "mode_info.m"
                                                                                        MR_Word check_hlds__mode_info__V_72_72;
#line 365 "mode_info.m"
                                                                                        MR_Integer check_hlds__mode_info__V_115_115 = (MR_Integer) check_hlds__mode_info__V_24_24;
#line 365 "mode_info.m"
                                                                                        MR_Integer check_hlds__mode_info__V_116_116 = (MR_Integer) check_hlds__mode_info__V_48_48;

#line 365 "mode_info.m"
                                                                                        {
#line 365 "mode_info.m"
                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_72_72, check_hlds__mode_info__V_115_115, check_hlds__mode_info__V_116_116);
                                                                                        }
#line 4734 "check_hlds.mode_info.c"
                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_72_72 == (MR_Integer) 0);
#line 365 "mode_info.m"
                                                                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                                                                                        if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_72_72;
#line 365 "mode_info.m"
                                                                                        else
#line 365 "mode_info.m"
                                                                                          {
#line 365 "mode_info.m"
                                                                                            MR_Word check_hlds__mode_info__V_73_73;
#line 365 "mode_info.m"
                                                                                            MR_Integer check_hlds__mode_info__V_117_117 = (MR_Integer) check_hlds__mode_info__V_25_25;
#line 365 "mode_info.m"
                                                                                            MR_Integer check_hlds__mode_info__V_118_118 = (MR_Integer) check_hlds__mode_info__V_49_49;

#line 365 "mode_info.m"
                                                                                            {
#line 365 "mode_info.m"
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_73_73, check_hlds__mode_info__V_117_117, check_hlds__mode_info__V_118_118);
                                                                                            }
#line 4758 "check_hlds.mode_info.c"
                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_73_73 == (MR_Integer) 0);
#line 365 "mode_info.m"
                                                                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                                                                                            if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_73_73;
#line 365 "mode_info.m"
                                                                                            else
#line 365 "mode_info.m"
                                                                                              {
#line 365 "mode_info.m"
                                                                                                MR_Word check_hlds__mode_info__V_74_74;
#line 365 "mode_info.m"
                                                                                                MR_Integer check_hlds__mode_info__V_119_119 = (MR_Integer) check_hlds__mode_info__V_26_26;
#line 365 "mode_info.m"
                                                                                                MR_Integer check_hlds__mode_info__V_120_120 = (MR_Integer) check_hlds__mode_info__V_50_50;

#line 365 "mode_info.m"
                                                                                                {
#line 365 "mode_info.m"
                                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_74_74, check_hlds__mode_info__V_119_119, check_hlds__mode_info__V_120_120);
                                                                                                }
#line 4782 "check_hlds.mode_info.c"
                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_74_74 == (MR_Integer) 0);
#line 365 "mode_info.m"
                                                                                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 365 "mode_info.m"
                                                                                                if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_74_74;
#line 365 "mode_info.m"
                                                                                                else
#line 365 "mode_info.m"
                                                                                                  {
#line 365 "mode_info.m"
                                                                                                    MR_Integer check_hlds__mode_info__V_121_121 = (MR_Integer) check_hlds__mode_info__V_27_27;
#line 365 "mode_info.m"
                                                                                                    MR_Integer check_hlds__mode_info__V_122_122 = (MR_Integer) check_hlds__mode_info__V_51_51;

#line 365 "mode_info.m"
                                                                                                    {
#line 365 "mode_info.m"
                                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_121_121, check_hlds__mode_info__V_122_122);
#line 365 "mode_info.m"
                                                                                                      return;
                                                                                                    }
#line 365 "mode_info.m"
                                                                                                  }
#line 365 "mode_info.m"
                                                                                              }
#line 365 "mode_info.m"
                                                                                          }
#line 365 "mode_info.m"
                                                                                      }
#line 365 "mode_info.m"
                                                                                  }
#line 365 "mode_info.m"
                                                                              }
#line 365 "mode_info.m"
                                                                          }
#line 365 "mode_info.m"
                                                                      }
#line 365 "mode_info.m"
                                                                  }
#line 365 "mode_info.m"
                                                              }
#line 365 "mode_info.m"
                                                          }
#line 365 "mode_info.m"
                                                      }
#line 365 "mode_info.m"
                                                  }
#line 365 "mode_info.m"
                                              }
#line 365 "mode_info.m"
                                          }
#line 365 "mode_info.m"
                                      }
#line 365 "mode_info.m"
                                  }
#line 365 "mode_info.m"
                              }
#line 365 "mode_info.m"
                          }
#line 365 "mode_info.m"
                      }
#line 365 "mode_info.m"
                  }
#line 365 "mode_info.m"
              }
#line 365 "mode_info.m"
          }
#line 365 "mode_info.m"
      }
#line 365 "mode_info.m"
  }
#line 365 "mode_info.m"
}

#line 365 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0(
#line 365 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 365 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 365 "mode_info.m"
{
#line 365 "mode_info.m"
  {
#line 365 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 365 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_51 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 365 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_52 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 365 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_51 == check_hlds__mode_info__CastY_52);
#line 365 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 365 "mode_info.m"
    else
#line 365 "mode_info.m"
      {
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_54_54;
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_55_55;
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_56_56;
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_57_57;
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_58_58;
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_59_59;
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_60_60;
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_63_63;
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_64_64;
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 365 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 2)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 3)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 4)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 5)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 6)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 7)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 8)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 10)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 12)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 13)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 14)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 365 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 8)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 10)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 12)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 13)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)));
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 365 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 5002 "check_hlds.mode_info.c"
        {
#line 5004 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_27_27);
        }
#line 365 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
          {
#line 5011 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_4_4 == check_hlds__mode_info__V_28_28);
#line 365 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
              {
#line 5017 "check_hlds.mode_info.c"
                check_hlds__mode_info__TypeInfo_54_54 = (MR_Word) &check_hlds__mode_info_scalar_common_1[5];
#line 5019 "check_hlds.mode_info.c"
                {
#line 5021 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_54_54, ((MR_Box) (check_hlds__mode_info__V_5_5)), ((MR_Box) (check_hlds__mode_info__V_29_29)));
                }
#line 365 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                  {
#line 5028 "check_hlds.mode_info.c"
                    check_hlds__mode_info__TypeInfo_55_55 = (MR_Word) &check_hlds__mode_info_scalar_common_2[1];
#line 5030 "check_hlds.mode_info.c"
                    {
#line 5032 "check_hlds.mode_info.c"
                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_55_55, ((MR_Box) (check_hlds__mode_info__V_6_6)), ((MR_Box) (check_hlds__mode_info__V_30_30)));
                    }
#line 365 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                      {
#line 5039 "check_hlds.mode_info.c"
                        check_hlds__mode_info__TypeInfo_56_56 = (MR_Word) &check_hlds__mode_info_scalar_common_1[6];
#line 5041 "check_hlds.mode_info.c"
                        {
#line 5043 "check_hlds.mode_info.c"
                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_56_56, ((MR_Box) (check_hlds__mode_info__V_7_7)), ((MR_Box) (check_hlds__mode_info__V_31_31)));
                        }
#line 365 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                          {
#line 5050 "check_hlds.mode_info.c"
                            check_hlds__mode_info__TypeInfo_57_57 = (MR_Word) &check_hlds__mode_info_scalar_common_1[4];
#line 5052 "check_hlds.mode_info.c"
                            {
#line 5054 "check_hlds.mode_info.c"
                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_57_57, ((MR_Box) (check_hlds__mode_info__V_8_8)), ((MR_Box) (check_hlds__mode_info__V_32_32)));
                            }
#line 365 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                              {
#line 5061 "check_hlds.mode_info.c"
                                check_hlds__mode_info__TypeInfo_58_58 = (MR_Word) &check_hlds__mode_info_scalar_common_1[2];
#line 5063 "check_hlds.mode_info.c"
                                {
#line 5065 "check_hlds.mode_info.c"
                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_58_58, ((MR_Box) (check_hlds__mode_info__V_9_9)), ((MR_Box) (check_hlds__mode_info__V_33_33)));
                                }
#line 365 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                  {
#line 5072 "check_hlds.mode_info.c"
                                    check_hlds__mode_info__TypeInfo_59_59 = (MR_Word) &check_hlds__mode_info_scalar_common_1[7];
#line 5074 "check_hlds.mode_info.c"
                                    {
#line 5076 "check_hlds.mode_info.c"
                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_59_59, ((MR_Box) (check_hlds__mode_info__V_10_10)), ((MR_Box) (check_hlds__mode_info__V_34_34)));
                                    }
#line 365 "mode_info.m"
                                    if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                      {
#line 5083 "check_hlds.mode_info.c"
                                        check_hlds__mode_info__TypeInfo_60_60 = (MR_Word) &check_hlds__mode_info_scalar_common_1[8];
#line 5085 "check_hlds.mode_info.c"
                                        {
#line 5087 "check_hlds.mode_info.c"
                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_60_60, ((MR_Box) (check_hlds__mode_info__V_11_11)), ((MR_Box) (check_hlds__mode_info__V_35_35)));
                                        }
#line 365 "mode_info.m"
                                        if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                          {
#line 5094 "check_hlds.mode_info.c"
                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_12_12 == check_hlds__mode_info__V_36_36);
#line 365 "mode_info.m"
                                            if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                              {
#line 5100 "check_hlds.mode_info.c"
                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_13_13 == check_hlds__mode_info__V_37_37);
#line 365 "mode_info.m"
                                                if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                  {
#line 5106 "check_hlds.mode_info.c"
                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_14_14 == check_hlds__mode_info__V_38_38);
#line 365 "mode_info.m"
                                                    if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                      {
#line 5112 "check_hlds.mode_info.c"
                                                        {
#line 5114 "check_hlds.mode_info.c"
                                                          check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_15_15, check_hlds__mode_info__V_39_39);
                                                        }
#line 365 "mode_info.m"
                                                        if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                          {
#line 5121 "check_hlds.mode_info.c"
                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_16_16 == check_hlds__mode_info__V_40_40);
#line 365 "mode_info.m"
                                                            if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                              {
#line 5127 "check_hlds.mode_info.c"
                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_17_17 == check_hlds__mode_info__V_41_41);
#line 365 "mode_info.m"
                                                                if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                  {
#line 5133 "check_hlds.mode_info.c"
                                                                    {
#line 5135 "check_hlds.mode_info.c"
                                                                      check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_18_18, check_hlds__mode_info__V_42_42);
                                                                    }
#line 365 "mode_info.m"
                                                                    if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                      {
#line 5142 "check_hlds.mode_info.c"
                                                                        check_hlds__mode_info__TypeInfo_63_63 = (MR_Word) &check_hlds__mode_info_scalar_common_2[2];
#line 5144 "check_hlds.mode_info.c"
                                                                        {
#line 5146 "check_hlds.mode_info.c"
                                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_63_63, ((MR_Box) (check_hlds__mode_info__V_19_19)), ((MR_Box) (check_hlds__mode_info__V_43_43)));
                                                                        }
#line 365 "mode_info.m"
                                                                        if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                          {
#line 5153 "check_hlds.mode_info.c"
                                                                            check_hlds__mode_info__TypeInfo_64_64 = (MR_Word) &check_hlds__mode_info_scalar_common_1[10];
#line 5155 "check_hlds.mode_info.c"
                                                                            {
#line 5157 "check_hlds.mode_info.c"
                                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_64_64, ((MR_Box) (check_hlds__mode_info__V_20_20)), ((MR_Box) (check_hlds__mode_info__V_44_44)));
                                                                            }
#line 365 "mode_info.m"
                                                                            if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                              {
#line 5164 "check_hlds.mode_info.c"
                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_21_21 == check_hlds__mode_info__V_45_45);
#line 365 "mode_info.m"
                                                                                if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                  {
#line 5170 "check_hlds.mode_info.c"
                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_22_22 == check_hlds__mode_info__V_46_46);
#line 365 "mode_info.m"
                                                                                    if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                      {
#line 5176 "check_hlds.mode_info.c"
                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_23_23 == check_hlds__mode_info__V_47_47);
#line 365 "mode_info.m"
                                                                                        if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                          {
#line 5182 "check_hlds.mode_info.c"
                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_24_24 == check_hlds__mode_info__V_48_48);
#line 365 "mode_info.m"
                                                                                            if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                              {
#line 5188 "check_hlds.mode_info.c"
                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_25_25 == check_hlds__mode_info__V_49_49);
#line 365 "mode_info.m"
                                                                                                if (check_hlds__mode_info__succeeded)
#line 5192 "check_hlds.mode_info.c"
                                                                                                  check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_26_26 == check_hlds__mode_info__V_50_50);
#line 365 "mode_info.m"
                                                                                              }
#line 365 "mode_info.m"
                                                                                          }
#line 365 "mode_info.m"
                                                                                      }
#line 365 "mode_info.m"
                                                                                  }
#line 365 "mode_info.m"
                                                                              }
#line 365 "mode_info.m"
                                                                          }
#line 365 "mode_info.m"
                                                                      }
#line 365 "mode_info.m"
                                                                  }
#line 365 "mode_info.m"
                                                              }
#line 365 "mode_info.m"
                                                          }
#line 365 "mode_info.m"
                                                      }
#line 365 "mode_info.m"
                                                  }
#line 365 "mode_info.m"
                                              }
#line 365 "mode_info.m"
                                          }
#line 365 "mode_info.m"
                                      }
#line 365 "mode_info.m"
                                  }
#line 365 "mode_info.m"
                              }
#line 365 "mode_info.m"
                          }
#line 365 "mode_info.m"
                      }
#line 365 "mode_info.m"
                  }
#line 365 "mode_info.m"
              }
#line 365 "mode_info.m"
          }
#line 365 "mode_info.m"
      }
#line 365 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 365 "mode_info.m"
  }
#line 365 "mode_info.m"
}

#line 478 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0(
#line 478 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 478 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 478 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 478 "mode_info.m"
{
#line 478 "mode_info.m"
  {
#line 478 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 478 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_27 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 478 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_28 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 478 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_27 == check_hlds__mode_info__CastY_28);
#line 478 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 5271 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 478 "mode_info.m"
    else
#line 478 "mode_info.m"
      {
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 1)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 2)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 3)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 4)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 5)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 6)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 7)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20;

#line 478 "mode_info.m"
        {
#line 478 "mode_info.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__mode_info__V_20_20, check_hlds__mode_info__V_4_4, check_hlds__mode_info__V_12_12);
        }
#line 5317 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_20_20 == (MR_Integer) 0);
#line 478 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 478 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 478 "mode_info.m"
          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_20_20;
#line 478 "mode_info.m"
        else
#line 478 "mode_info.m"
          {
#line 478 "mode_info.m"
            MR_Word check_hlds__mode_info__V_21_21;

#line 478 "mode_info.m"
            {
#line 478 "mode_info.m"
              hlds__instmap____Compare____instmap_0_0(&check_hlds__mode_info__V_21_21, check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_13_13);
            }
#line 5337 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_21_21 == (MR_Integer) 0);
#line 478 "mode_info.m"
            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 478 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 478 "mode_info.m"
              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_21_21;
#line 478 "mode_info.m"
            else
#line 478 "mode_info.m"
              {
#line 478 "mode_info.m"
                MR_Word check_hlds__mode_info__V_22_22;

#line 478 "mode_info.m"
                {
#line 478 "mode_info.m"
                  check_hlds__delay_info____Compare____delay_info_0_0(&check_hlds__mode_info__V_22_22, check_hlds__mode_info__V_6_6, check_hlds__mode_info__V_14_14);
                }
#line 5357 "check_hlds.mode_info.c"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_22_22 == (MR_Integer) 0);
#line 478 "mode_info.m"
                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 478 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 478 "mode_info.m"
                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_22_22;
#line 478 "mode_info.m"
                else
#line 478 "mode_info.m"
                  {
#line 478 "mode_info.m"
                    MR_Word check_hlds__mode_info__V_23_23;

#line 478 "mode_info.m"
                    {
#line 478 "mode_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[1], &check_hlds__mode_info__V_23_23, ((MR_Box) (check_hlds__mode_info__V_7_7)), ((MR_Box) (check_hlds__mode_info__V_15_15)));
                    }
#line 5377 "check_hlds.mode_info.c"
                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_23_23 == (MR_Integer) 0);
#line 478 "mode_info.m"
                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 478 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 478 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_23_23;
#line 478 "mode_info.m"
                    else
#line 478 "mode_info.m"
                      {
#line 478 "mode_info.m"
                        MR_Word check_hlds__mode_info__V_24_24;

#line 478 "mode_info.m"
                        {
#line 478 "mode_info.m"
                          check_hlds__mode_info____Compare____mode_context_0_0(&check_hlds__mode_info__V_24_24, check_hlds__mode_info__V_8_8, check_hlds__mode_info__V_16_16);
                        }
#line 5397 "check_hlds.mode_info.c"
                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_24_24 == (MR_Integer) 0);
#line 478 "mode_info.m"
                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 478 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 478 "mode_info.m"
                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_24_24;
#line 478 "mode_info.m"
                        else
#line 478 "mode_info.m"
                          {
#line 478 "mode_info.m"
                            MR_Word check_hlds__mode_info__V_25_25;

#line 478 "mode_info.m"
                            {
#line 478 "mode_info.m"
                              mercury__term____Compare____context_0_0(&check_hlds__mode_info__V_25_25, check_hlds__mode_info__V_9_9, check_hlds__mode_info__V_17_17);
                            }
#line 5417 "check_hlds.mode_info.c"
                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_25_25 == (MR_Integer) 0);
#line 478 "mode_info.m"
                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 478 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 478 "mode_info.m"
                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_25_25;
#line 478 "mode_info.m"
                            else
#line 478 "mode_info.m"
                              {
#line 478 "mode_info.m"
                                MR_Word check_hlds__mode_info__V_26_26;

#line 478 "mode_info.m"
                                {
#line 478 "mode_info.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[2], &check_hlds__mode_info__V_26_26, ((MR_Box) (check_hlds__mode_info__V_10_10)), ((MR_Box) (check_hlds__mode_info__V_18_18)));
                                }
#line 5437 "check_hlds.mode_info.c"
                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_26_26 == (MR_Integer) 0);
#line 478 "mode_info.m"
                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 478 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 478 "mode_info.m"
                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_26_26;
#line 478 "mode_info.m"
                                else
#line 478 "mode_info.m"
                                  {
#line 478 "mode_info.m"
                                    check_hlds__mode_info____Compare____mode_sub_info_0_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_11_11, check_hlds__mode_info__V_19_19);
#line 478 "mode_info.m"
                                    return;
                                  }
#line 478 "mode_info.m"
                              }
#line 478 "mode_info.m"
                          }
#line 478 "mode_info.m"
                      }
#line 478 "mode_info.m"
                  }
#line 478 "mode_info.m"
              }
#line 478 "mode_info.m"
          }
#line 478 "mode_info.m"
      }
#line 478 "mode_info.m"
  }
#line 478 "mode_info.m"
}

#line 478 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0(
#line 478 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 478 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 478 "mode_info.m"
{
#line 478 "mode_info.m"
  {
#line 478 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 478 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_19 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 478 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_20 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 478 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_19 == check_hlds__mode_info__CastY_20);
#line 478 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 478 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 478 "mode_info.m"
    else
#line 478 "mode_info.m"
      {
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_24_24;
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_26_26;
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 2)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 3)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 4)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 5)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 6)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 7)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 478 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 365 "mode_info.m"
        MR_Integer check_hlds__mode_info__CastX_75;
#line 365 "mode_info.m"
        MR_Integer check_hlds__mode_info__CastY_76;

#line 5542 "check_hlds.mode_info.c"
        {
#line 5544 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_11_11);
        }
#line 478 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 478 "mode_info.m"
          {
#line 5551 "check_hlds.mode_info.c"
            {
#line 5553 "check_hlds.mode_info.c"
              check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_4_4, check_hlds__mode_info__V_12_12);
            }
#line 478 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 478 "mode_info.m"
              {
#line 5560 "check_hlds.mode_info.c"
                {
#line 5562 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = check_hlds__delay_info____Unify____delay_info_0_0(check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_13_13);
                }
#line 478 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 478 "mode_info.m"
                  {
#line 5569 "check_hlds.mode_info.c"
                    check_hlds__mode_info__TypeInfo_24_24 = (MR_Word) &check_hlds__mode_info_scalar_common_1[1];
#line 5571 "check_hlds.mode_info.c"
                    {
#line 5573 "check_hlds.mode_info.c"
                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_24_24, ((MR_Box) (check_hlds__mode_info__V_6_6)), ((MR_Box) (check_hlds__mode_info__V_14_14)));
                    }
#line 478 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 478 "mode_info.m"
                      {
#line 5580 "check_hlds.mode_info.c"
                        {
#line 5582 "check_hlds.mode_info.c"
                          check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_context_0_0(check_hlds__mode_info__V_7_7, check_hlds__mode_info__V_15_15);
                        }
#line 478 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 478 "mode_info.m"
                          {
#line 5589 "check_hlds.mode_info.c"
                            {
#line 5591 "check_hlds.mode_info.c"
                              check_hlds__mode_info__succeeded = mercury__term____Unify____context_0_0(check_hlds__mode_info__V_8_8, check_hlds__mode_info__V_16_16);
                            }
#line 478 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 478 "mode_info.m"
                              {
#line 5598 "check_hlds.mode_info.c"
                                check_hlds__mode_info__TypeInfo_26_26 = (MR_Word) &check_hlds__mode_info_scalar_common_1[2];
#line 5600 "check_hlds.mode_info.c"
                                {
#line 5602 "check_hlds.mode_info.c"
                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_26_26, ((MR_Box) (check_hlds__mode_info__V_9_9)), ((MR_Box) (check_hlds__mode_info__V_17_17)));
                                }
#line 478 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 478 "mode_info.m"
                                  {
#line 365 "mode_info.m"
                                    check_hlds__mode_info__CastX_75 = (MR_Integer) check_hlds__mode_info__V_10_10;
#line 365 "mode_info.m"
                                    check_hlds__mode_info__CastY_76 = (MR_Integer) check_hlds__mode_info__V_18_18;
#line 365 "mode_info.m"
                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_75 == check_hlds__mode_info__CastY_76);
#line 365 "mode_info.m"
                                    if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                      check_hlds__mode_info__succeeded = MR_TRUE;
#line 365 "mode_info.m"
                                    else
#line 365 "mode_info.m"
                                      {
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_54_78;
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_55_79;
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_56_80;
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_57_81;
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_58_82;
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_59_83;
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_60_84;
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_63_87;
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_64_88;
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 0)));
#line 365 "mode_info.m"
                                        MR_Integer check_hlds__mode_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 1)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 2)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 3)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 4)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 5)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 6)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 7)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 8)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 13)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 0)));
#line 365 "mode_info.m"
                                        MR_Integer check_hlds__mode_info__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 1)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 2)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 3)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 4)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 5)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 6)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 7)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 8)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_60_60 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 10)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_64_64 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 12)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 13)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 14)));
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_69_69 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 365 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 5738 "check_hlds.mode_info.c"
                                        {
#line 5740 "check_hlds.mode_info.c"
                                          check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_info__V_27_27, check_hlds__mode_info__V_51_51);
                                        }
#line 365 "mode_info.m"
                                        if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                          {
#line 5747 "check_hlds.mode_info.c"
                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_28_28 == check_hlds__mode_info__V_52_52);
#line 365 "mode_info.m"
                                            if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                              {
#line 5753 "check_hlds.mode_info.c"
                                                check_hlds__mode_info__TypeInfo_54_78 = (MR_Word) &check_hlds__mode_info_scalar_common_1[5];
#line 5755 "check_hlds.mode_info.c"
                                                {
#line 5757 "check_hlds.mode_info.c"
                                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_54_78, ((MR_Box) (check_hlds__mode_info__V_29_29)), ((MR_Box) (check_hlds__mode_info__V_53_53)));
                                                }
#line 365 "mode_info.m"
                                                if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                  {
#line 5764 "check_hlds.mode_info.c"
                                                    check_hlds__mode_info__TypeInfo_55_79 = (MR_Word) &check_hlds__mode_info_scalar_common_2[1];
#line 5766 "check_hlds.mode_info.c"
                                                    {
#line 5768 "check_hlds.mode_info.c"
                                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_55_79, ((MR_Box) (check_hlds__mode_info__V_30_30)), ((MR_Box) (check_hlds__mode_info__V_54_54)));
                                                    }
#line 365 "mode_info.m"
                                                    if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                      {
#line 5775 "check_hlds.mode_info.c"
                                                        check_hlds__mode_info__TypeInfo_56_80 = (MR_Word) &check_hlds__mode_info_scalar_common_1[6];
#line 5777 "check_hlds.mode_info.c"
                                                        {
#line 5779 "check_hlds.mode_info.c"
                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_56_80, ((MR_Box) (check_hlds__mode_info__V_31_31)), ((MR_Box) (check_hlds__mode_info__V_55_55)));
                                                        }
#line 365 "mode_info.m"
                                                        if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                          {
#line 5786 "check_hlds.mode_info.c"
                                                            check_hlds__mode_info__TypeInfo_57_81 = (MR_Word) &check_hlds__mode_info_scalar_common_1[4];
#line 5788 "check_hlds.mode_info.c"
                                                            {
#line 5790 "check_hlds.mode_info.c"
                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_57_81, ((MR_Box) (check_hlds__mode_info__V_32_32)), ((MR_Box) (check_hlds__mode_info__V_56_56)));
                                                            }
#line 365 "mode_info.m"
                                                            if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                              {
#line 5797 "check_hlds.mode_info.c"
                                                                check_hlds__mode_info__TypeInfo_58_82 = (MR_Word) &check_hlds__mode_info_scalar_common_1[2];
#line 5799 "check_hlds.mode_info.c"
                                                                {
#line 5801 "check_hlds.mode_info.c"
                                                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_58_82, ((MR_Box) (check_hlds__mode_info__V_33_33)), ((MR_Box) (check_hlds__mode_info__V_57_57)));
                                                                }
#line 365 "mode_info.m"
                                                                if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                  {
#line 5808 "check_hlds.mode_info.c"
                                                                    check_hlds__mode_info__TypeInfo_59_83 = (MR_Word) &check_hlds__mode_info_scalar_common_1[7];
#line 5810 "check_hlds.mode_info.c"
                                                                    {
#line 5812 "check_hlds.mode_info.c"
                                                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_59_83, ((MR_Box) (check_hlds__mode_info__V_34_34)), ((MR_Box) (check_hlds__mode_info__V_58_58)));
                                                                    }
#line 365 "mode_info.m"
                                                                    if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                      {
#line 5819 "check_hlds.mode_info.c"
                                                                        check_hlds__mode_info__TypeInfo_60_84 = (MR_Word) &check_hlds__mode_info_scalar_common_1[8];
#line 5821 "check_hlds.mode_info.c"
                                                                        {
#line 5823 "check_hlds.mode_info.c"
                                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_60_84, ((MR_Box) (check_hlds__mode_info__V_35_35)), ((MR_Box) (check_hlds__mode_info__V_59_59)));
                                                                        }
#line 365 "mode_info.m"
                                                                        if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                          {
#line 5830 "check_hlds.mode_info.c"
                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_36_36 == check_hlds__mode_info__V_60_60);
#line 365 "mode_info.m"
                                                                            if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                              {
#line 5836 "check_hlds.mode_info.c"
                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_37_37 == check_hlds__mode_info__V_61_61);
#line 365 "mode_info.m"
                                                                                if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                  {
#line 5842 "check_hlds.mode_info.c"
                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_38_38 == check_hlds__mode_info__V_62_62);
#line 365 "mode_info.m"
                                                                                    if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                      {
#line 5848 "check_hlds.mode_info.c"
                                                                                        {
#line 5850 "check_hlds.mode_info.c"
                                                                                          check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_39_39, check_hlds__mode_info__V_63_63);
                                                                                        }
#line 365 "mode_info.m"
                                                                                        if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                          {
#line 5857 "check_hlds.mode_info.c"
                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_40_40 == check_hlds__mode_info__V_64_64);
#line 365 "mode_info.m"
                                                                                            if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                              {
#line 5863 "check_hlds.mode_info.c"
                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_41_41 == check_hlds__mode_info__V_65_65);
#line 365 "mode_info.m"
                                                                                                if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                                  {
#line 5869 "check_hlds.mode_info.c"
                                                                                                    {
#line 5871 "check_hlds.mode_info.c"
                                                                                                      check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_42_42, check_hlds__mode_info__V_66_66);
                                                                                                    }
#line 365 "mode_info.m"
                                                                                                    if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                                      {
#line 5878 "check_hlds.mode_info.c"
                                                                                                        check_hlds__mode_info__TypeInfo_63_87 = (MR_Word) &check_hlds__mode_info_scalar_common_2[2];
#line 5880 "check_hlds.mode_info.c"
                                                                                                        {
#line 5882 "check_hlds.mode_info.c"
                                                                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_63_87, ((MR_Box) (check_hlds__mode_info__V_43_43)), ((MR_Box) (check_hlds__mode_info__V_67_67)));
                                                                                                        }
#line 365 "mode_info.m"
                                                                                                        if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                                          {
#line 5889 "check_hlds.mode_info.c"
                                                                                                            check_hlds__mode_info__TypeInfo_64_88 = (MR_Word) &check_hlds__mode_info_scalar_common_1[10];
#line 5891 "check_hlds.mode_info.c"
                                                                                                            {
#line 5893 "check_hlds.mode_info.c"
                                                                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_64_88, ((MR_Box) (check_hlds__mode_info__V_44_44)), ((MR_Box) (check_hlds__mode_info__V_68_68)));
                                                                                                            }
#line 365 "mode_info.m"
                                                                                                            if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                                              {
#line 5900 "check_hlds.mode_info.c"
                                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_45_45 == check_hlds__mode_info__V_69_69);
#line 365 "mode_info.m"
                                                                                                                if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                                                  {
#line 5906 "check_hlds.mode_info.c"
                                                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_46_46 == check_hlds__mode_info__V_70_70);
#line 365 "mode_info.m"
                                                                                                                    if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                                                      {
#line 5912 "check_hlds.mode_info.c"
                                                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_47_47 == check_hlds__mode_info__V_71_71);
#line 365 "mode_info.m"
                                                                                                                        if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                                                          {
#line 5918 "check_hlds.mode_info.c"
                                                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_48_48 == check_hlds__mode_info__V_72_72);
#line 365 "mode_info.m"
                                                                                                                            if (check_hlds__mode_info__succeeded)
#line 365 "mode_info.m"
                                                                                                                              {
#line 5924 "check_hlds.mode_info.c"
                                                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_49_49 == check_hlds__mode_info__V_73_73);
#line 365 "mode_info.m"
                                                                                                                                if (check_hlds__mode_info__succeeded)
#line 5928 "check_hlds.mode_info.c"
                                                                                                                                  check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_50_50 == check_hlds__mode_info__V_74_74);
#line 365 "mode_info.m"
                                                                                                                              }
#line 365 "mode_info.m"
                                                                                                                          }
#line 365 "mode_info.m"
                                                                                                                      }
#line 365 "mode_info.m"
                                                                                                                  }
#line 365 "mode_info.m"
                                                                                                              }
#line 365 "mode_info.m"
                                                                                                          }
#line 365 "mode_info.m"
                                                                                                      }
#line 365 "mode_info.m"
                                                                                                  }
#line 365 "mode_info.m"
                                                                                              }
#line 365 "mode_info.m"
                                                                                          }
#line 365 "mode_info.m"
                                                                                      }
#line 365 "mode_info.m"
                                                                                  }
#line 365 "mode_info.m"
                                                                              }
#line 365 "mode_info.m"
                                                                          }
#line 365 "mode_info.m"
                                                                      }
#line 365 "mode_info.m"
                                                                  }
#line 365 "mode_info.m"
                                                              }
#line 365 "mode_info.m"
                                                          }
#line 365 "mode_info.m"
                                                      }
#line 365 "mode_info.m"
                                                  }
#line 365 "mode_info.m"
                                              }
#line 365 "mode_info.m"
                                          }
#line 365 "mode_info.m"
                                      }
#line 478 "mode_info.m"
                                  }
#line 478 "mode_info.m"
                              }
#line 478 "mode_info.m"
                          }
#line 478 "mode_info.m"
                      }
#line 478 "mode_info.m"
                  }
#line 478 "mode_info.m"
              }
#line 478 "mode_info.m"
          }
#line 478 "mode_info.m"
      }
#line 478 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 478 "mode_info.m"
  }
#line 478 "mode_info.m"
}

#line 46 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____mode_context_0_0(
#line 46 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 46 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 46 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 46 "mode_info.m"
{
#line 46 "mode_info.m"
  {
#line 46 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 46 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_30 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 46 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_31 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 46 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_30 == check_hlds__mode_info__CastY_31);
#line 46 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 6023 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 46 "mode_info.m"
    else
#line 46 "mode_info.m"
#line 46 "mode_info.m"
      switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__2_2)) {
#line 46 "mode_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 46 "mode_info.m"
        case (MR_Integer) 0:
#line 46 "mode_info.m"
#line 46 "mode_info.m"
          switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) {
#line 46 "mode_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 46 "mode_info.m"
            case (MR_Integer) 0:
#line 46 "mode_info.m"
              *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 46 "mode_info.m"
              break;
#line 46 "mode_info.m"
            case (MR_Integer) 1:
#line 6047 "check_hlds.mode_info.c"
              *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 46 "mode_info.m"
              break;
#line 46 "mode_info.m"
            case (MR_Integer) 2:
#line 6053 "check_hlds.mode_info.c"
              *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 46 "mode_info.m"
              break;
#line 46 "mode_info.m"
          }
#line 46 "mode_info.m"
          break;
#line 46 "mode_info.m"
        case (MR_Integer) 1:
#line 46 "mode_info.m"
          {
#line 46 "mode_info.m"
            MR_Integer check_hlds__mode_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 46 "mode_info.m"
            MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));

#line 46 "mode_info.m"
#line 46 "mode_info.m"
            switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) {
#line 46 "mode_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 46 "mode_info.m"
              case (MR_Integer) 0:
#line 6077 "check_hlds.mode_info.c"
                *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 46 "mode_info.m"
                break;
#line 46 "mode_info.m"
              case (MR_Integer) 1:
#line 46 "mode_info.m"
                {
#line 46 "mode_info.m"
                  MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));
#line 46 "mode_info.m"
                  MR_Integer check_hlds__mode_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 1)));
#line 46 "mode_info.m"
                  MR_Word check_hlds__mode_info__V_8_8;

#line 46 "mode_info.m"
                  {
#line 46 "mode_info.m"
                    hlds__hlds_pred____Compare____call_id_0_0(&check_hlds__mode_info__V_8_8, check_hlds__mode_info__V_37_37, check_hlds__mode_info__V_6_6);
                  }
#line 6097 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_8_8 == (MR_Integer) 0);
#line 46 "mode_info.m"
                  check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 46 "mode_info.m"
                  if (check_hlds__mode_info__succeeded)
#line 46 "mode_info.m"
                    *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_8_8;
#line 46 "mode_info.m"
                  else
#line 46 "mode_info.m"
                    {
#line 46 "mode_info.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_36_36, check_hlds__mode_info__V_7_7);
#line 46 "mode_info.m"
                      return;
                    }
#line 46 "mode_info.m"
                }
#line 46 "mode_info.m"
                break;
#line 46 "mode_info.m"
              case (MR_Integer) 2:
#line 6120 "check_hlds.mode_info.c"
                *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 46 "mode_info.m"
                break;
#line 46 "mode_info.m"
            }
#line 46 "mode_info.m"
          }
#line 46 "mode_info.m"
          break;
#line 46 "mode_info.m"
        case (MR_Integer) 2:
#line 46 "mode_info.m"
          {
#line 46 "mode_info.m"
            MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 46 "mode_info.m"
            MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));

#line 46 "mode_info.m"
#line 46 "mode_info.m"
            switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) {
#line 46 "mode_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 46 "mode_info.m"
              case (MR_Integer) 0:
#line 6146 "check_hlds.mode_info.c"
                *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 46 "mode_info.m"
                break;
#line 46 "mode_info.m"
              case (MR_Integer) 1:
#line 6152 "check_hlds.mode_info.c"
                *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 46 "mode_info.m"
                break;
#line 46 "mode_info.m"
              case (MR_Integer) 2:
#line 46 "mode_info.m"
                {
#line 46 "mode_info.m"
                  MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));
#line 46 "mode_info.m"
                  MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 1)));
#line 46 "mode_info.m"
                  MR_Word check_hlds__mode_info__V_23_23;

#line 46 "mode_info.m"
                  {
#line 46 "mode_info.m"
                    hlds__hlds_goal____Compare____unify_context_0_0(&check_hlds__mode_info__V_23_23, check_hlds__mode_info__V_39_39, check_hlds__mode_info__V_21_21);
                  }
#line 6172 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_23_23 == (MR_Integer) 0);
#line 46 "mode_info.m"
                  check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 46 "mode_info.m"
                  if (check_hlds__mode_info__succeeded)
#line 46 "mode_info.m"
                    *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_23_23;
#line 46 "mode_info.m"
                  else
#line 46 "mode_info.m"
                    {
#line 46 "mode_info.m"
                      MR_Integer check_hlds__mode_info__V_40_40 = (MR_Integer) check_hlds__mode_info__V_38_38;
#line 46 "mode_info.m"
                      MR_Integer check_hlds__mode_info__V_41_41 = (MR_Integer) check_hlds__mode_info__V_22_22;

#line 46 "mode_info.m"
                      {
#line 46 "mode_info.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_40_40, check_hlds__mode_info__V_41_41);
#line 46 "mode_info.m"
                        return;
                      }
#line 46 "mode_info.m"
                    }
#line 46 "mode_info.m"
                }
#line 46 "mode_info.m"
                break;
#line 46 "mode_info.m"
            }
#line 46 "mode_info.m"
          }
#line 46 "mode_info.m"
          break;
#line 46 "mode_info.m"
      }
#line 46 "mode_info.m"
  }
#line 46 "mode_info.m"
}

#line 46 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_context_0_0(
#line 46 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 46 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 46 "mode_info.m"
{
#line 46 "mode_info.m"
  {
#line 46 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 46 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_13 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 46 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_14 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 46 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_13 == check_hlds__mode_info__CastY_14);
#line 46 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 46 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 46 "mode_info.m"
    else
#line 46 "mode_info.m"
#line 46 "mode_info.m"
      switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) {
#line 46 "mode_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 46 "mode_info.m"
        case (MR_Integer) 0:
#line 46 "mode_info.m"
          {
#line 46 "mode_info.m"
            MR_Integer check_hlds__mode_info__CastX_11 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 46 "mode_info.m"
            MR_Integer check_hlds__mode_info__CastY_12 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 46 "mode_info.m"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastY_12 == check_hlds__mode_info__CastX_11);
#line 46 "mode_info.m"
          }
#line 46 "mode_info.m"
          break;
#line 46 "mode_info.m"
        case (MR_Integer) 1:
#line 46 "mode_info.m"
          {
#line 46 "mode_info.m"
            MR_Word check_hlds__mode_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 46 "mode_info.m"
            MR_Integer check_hlds__mode_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 46 "mode_info.m"
            MR_Word check_hlds__mode_info__V_5_5;
#line 46 "mode_info.m"
            MR_Integer check_hlds__mode_info__V_6_6;

#line 46 "mode_info.m"
            check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 46 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 46 "mode_info.m"
              {
#line 46 "mode_info.m"
                check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 46 "mode_info.m"
                check_hlds__mode_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 6284 "check_hlds.mode_info.c"
                {
#line 6286 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____call_id_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_5_5);
                }
#line 46 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 6291 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_4_4 == check_hlds__mode_info__V_6_6);
#line 46 "mode_info.m"
              }
#line 46 "mode_info.m"
          }
#line 46 "mode_info.m"
          break;
#line 46 "mode_info.m"
        case (MR_Integer) 2:
#line 46 "mode_info.m"
          {
#line 46 "mode_info.m"
            MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 46 "mode_info.m"
            MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 46 "mode_info.m"
            MR_Word check_hlds__mode_info__V_9_9;
#line 46 "mode_info.m"
            MR_Word check_hlds__mode_info__V_10_10;

#line 46 "mode_info.m"
            check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 46 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 46 "mode_info.m"
              {
#line 46 "mode_info.m"
                check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 46 "mode_info.m"
                check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 6322 "check_hlds.mode_info.c"
                {
#line 6324 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = hlds__hlds_goal____Unify____unify_context_0_0(check_hlds__mode_info__V_7_7, check_hlds__mode_info__V_9_9);
                }
#line 46 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 6329 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_8_8 == check_hlds__mode_info__V_10_10);
#line 46 "mode_info.m"
              }
#line 46 "mode_info.m"
          }
#line 46 "mode_info.m"
          break;
#line 46 "mode_info.m"
      }
#line 46 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 46 "mode_info.m"
  }
#line 46 "mode_info.m"
}

#line 116 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____may_init_solver_vars_0_0(
#line 116 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 116 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 116 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 116 "mode_info.m"
{
#line 116 "mode_info.m"
  {
#line 116 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 116 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 116 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 116 "mode_info.m"
    {
#line 116 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
#line 116 "mode_info.m"
      return;
    }
#line 116 "mode_info.m"
  }
#line 116 "mode_info.m"
}

#line 116 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_init_solver_vars_0_0(
#line 116 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 116 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 116 "mode_info.m"
{
#line 6387 "check_hlds.mode_info.c"
  {
#line 6389 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6392 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6394 "check_hlds.mode_info.c"
  }
#line 116 "mode_info.m"
}

#line 87 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____may_change_called_proc_0_0(
#line 87 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 87 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 87 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 87 "mode_info.m"
{
#line 87 "mode_info.m"
  {
#line 87 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 87 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 87 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 87 "mode_info.m"
    {
#line 87 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
#line 87 "mode_info.m"
      return;
    }
#line 87 "mode_info.m"
  }
#line 87 "mode_info.m"
}

#line 87 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_change_called_proc_0_0(
#line 87 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 87 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 87 "mode_info.m"
{
#line 6440 "check_hlds.mode_info.c"
  {
#line 6442 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6445 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6447 "check_hlds.mode_info.c"
  }
#line 87 "mode_info.m"
}

#line 132 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0(
#line 132 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 132 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 132 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 132 "mode_info.m"
{
#line 132 "mode_info.m"
  {
#line 132 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 132 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 132 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 132 "mode_info.m"
    {
#line 132 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
#line 132 "mode_info.m"
      return;
    }
#line 132 "mode_info.m"
  }
#line 132 "mode_info.m"
}

#line 132 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0(
#line 132 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 132 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 132 "mode_info.m"
{
#line 6493 "check_hlds.mode_info.c"
  {
#line 6495 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6498 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6500 "check_hlds.mode_info.c"
  }
#line 132 "mode_info.m"
}

#line 91 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____locked_vars_0_0(
#line 91 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 91 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 91 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 91 "mode_info.m"
{
#line 91 "mode_info.m"
  {
#line 91 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 91 "mode_info.m"
    MR_Word check_hlds__mode_info__Cast_HeadVar1_4 = check_hlds__mode_info__HeadVar__2_2;
#line 91 "mode_info.m"
    MR_Word check_hlds__mode_info__Cast_HeadVar2_5 = check_hlds__mode_info__HeadVar__3_3;

#line 91 "mode_info.m"
    {
#line 91 "mode_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[4], check_hlds__mode_info__HeadVar__1_1, ((MR_Box) (check_hlds__mode_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_info__Cast_HeadVar2_5)));
#line 91 "mode_info.m"
      return;
    }
#line 91 "mode_info.m"
  }
#line 91 "mode_info.m"
}

#line 91 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____locked_vars_0_0(
#line 91 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 91 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 91 "mode_info.m"
{
#line 91 "mode_info.m"
  {
#line 91 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 91 "mode_info.m"
    MR_Word check_hlds__mode_info__Cast_HeadVar1_3 = check_hlds__mode_info__HeadVar__1_1;
#line 91 "mode_info.m"
    MR_Word check_hlds__mode_info__Cast_HeadVar2_4 = check_hlds__mode_info__HeadVar__2_2;

#line 91 "mode_info.m"
    {
#line 91 "mode_info.m"
      return check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[4], ((MR_Box) (check_hlds__mode_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_info__Cast_HeadVar2_4)));
    }
#line 91 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 91 "mode_info.m"
  }
#line 91 "mode_info.m"
}

#line 120 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0(
#line 120 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 120 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 120 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 120 "mode_info.m"
{
#line 120 "mode_info.m"
  {
#line 120 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 120 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 120 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 120 "mode_info.m"
    {
#line 120 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
#line 120 "mode_info.m"
      return;
    }
#line 120 "mode_info.m"
  }
#line 120 "mode_info.m"
}

#line 120 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0(
#line 120 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 120 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 120 "mode_info.m"
{
#line 6608 "check_hlds.mode_info.c"
  {
#line 6610 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6613 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6615 "check_hlds.mode_info.c"
  }
#line 120 "mode_info.m"
}

#line 124 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0(
#line 124 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 124 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 124 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 124 "mode_info.m"
{
#line 124 "mode_info.m"
  {
#line 124 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 124 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 124 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 124 "mode_info.m"
    {
#line 124 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
#line 124 "mode_info.m"
      return;
    }
#line 124 "mode_info.m"
  }
#line 124 "mode_info.m"
}

#line 124 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0(
#line 124 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 124 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 124 "mode_info.m"
{
#line 6661 "check_hlds.mode_info.c"
  {
#line 6663 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6666 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6668 "check_hlds.mode_info.c"
  }
#line 124 "mode_info.m"
}

#line 136 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0(
#line 136 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 136 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 136 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 136 "mode_info.m"
{
#line 136 "mode_info.m"
  {
#line 136 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 136 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 136 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 136 "mode_info.m"
    {
#line 136 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
#line 136 "mode_info.m"
      return;
    }
#line 136 "mode_info.m"
  }
#line 136 "mode_info.m"
}

#line 136 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0(
#line 136 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 136 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 136 "mode_info.m"
{
#line 6714 "check_hlds.mode_info.c"
  {
#line 6716 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6719 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6721 "check_hlds.mode_info.c"
  }
#line 136 "mode_info.m"
}

#line 76 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____how_to_check_goal_0_0(
#line 76 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 76 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 76 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 76 "mode_info.m"
{
#line 76 "mode_info.m"
  {
#line 76 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 76 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 76 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 76 "mode_info.m"
    {
#line 76 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
#line 76 "mode_info.m"
      return;
    }
#line 76 "mode_info.m"
  }
#line 76 "mode_info.m"
}

#line 76 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____how_to_check_goal_0_0(
#line 76 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 76 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 76 "mode_info.m"
{
#line 6767 "check_hlds.mode_info.c"
  {
#line 6769 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6772 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6774 "check_hlds.mode_info.c"
  }
#line 76 "mode_info.m"
}

#line 128 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0(
#line 128 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 128 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 128 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 128 "mode_info.m"
{
#line 128 "mode_info.m"
  {
#line 128 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 128 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 128 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 128 "mode_info.m"
    {
#line 128 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
#line 128 "mode_info.m"
      return;
    }
#line 128 "mode_info.m"
  }
#line 128 "mode_info.m"
}

#line 128 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0(
#line 128 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 128 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 128 "mode_info.m"
{
#line 6820 "check_hlds.mode_info.c"
  {
#line 6822 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6825 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6827 "check_hlds.mode_info.c"
  }
#line 128 "mode_info.m"
}

#line 95 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0(
#line 95 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 95 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 95 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 95 "mode_info.m"
{
#line 95 "mode_info.m"
  {
#line 95 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 95 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_12 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 95 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_13 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 95 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_12 == check_hlds__mode_info__CastY_13);
#line 95 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 6856 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 95 "mode_info.m"
    else
#line 95 "mode_info.m"
      {
#line 95 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 95 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 95 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 95 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 95 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 95 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 95 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10;
#line 95 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_17_17 = (MR_Integer) check_hlds__mode_info__V_4_4;
#line 95 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_18_18 = (MR_Integer) check_hlds__mode_info__V_7_7;

#line 95 "mode_info.m"
        {
#line 95 "mode_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_10_10, check_hlds__mode_info__V_17_17, check_hlds__mode_info__V_18_18);
        }
#line 6886 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_10_10 == (MR_Integer) 0);
#line 95 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 95 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 95 "mode_info.m"
          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_10_10;
#line 95 "mode_info.m"
        else
#line 95 "mode_info.m"
          {
#line 95 "mode_info.m"
            MR_Word check_hlds__mode_info__V_11_11;
#line 95 "mode_info.m"
            MR_Integer check_hlds__mode_info__V_19_19 = (MR_Integer) check_hlds__mode_info__V_5_5;
#line 95 "mode_info.m"
            MR_Integer check_hlds__mode_info__V_20_20 = (MR_Integer) check_hlds__mode_info__V_8_8;

#line 95 "mode_info.m"
            {
#line 95 "mode_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_11_11, check_hlds__mode_info__V_19_19, check_hlds__mode_info__V_20_20);
            }
#line 6910 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_11_11 == (MR_Integer) 0);
#line 95 "mode_info.m"
            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 95 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 95 "mode_info.m"
              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_11_11;
#line 95 "mode_info.m"
            else
#line 95 "mode_info.m"
              {
#line 95 "mode_info.m"
                MR_Integer check_hlds__mode_info__V_21_21 = (MR_Integer) check_hlds__mode_info__V_6_6;
#line 95 "mode_info.m"
                MR_Integer check_hlds__mode_info__V_22_22 = (MR_Integer) check_hlds__mode_info__V_9_9;

#line 95 "mode_info.m"
                {
#line 95 "mode_info.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_21_21, check_hlds__mode_info__V_22_22);
#line 95 "mode_info.m"
                  return;
                }
#line 95 "mode_info.m"
              }
#line 95 "mode_info.m"
          }
#line 95 "mode_info.m"
      }
#line 95 "mode_info.m"
  }
#line 95 "mode_info.m"
}

#line 95 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____debug_flags_0_0(
#line 95 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 95 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 95 "mode_info.m"
{
#line 95 "mode_info.m"
  {
#line 95 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 95 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_9 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 95 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_10 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 95 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_9 == check_hlds__mode_info__CastY_10);
#line 95 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 95 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 95 "mode_info.m"
    else
#line 95 "mode_info.m"
      {
#line 95 "mode_info.m"
        MR_Word check_hlds__mode_info__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 95 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 95 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 95 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 95 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 95 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 6986 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_3_3 == check_hlds__mode_info__V_6_6);
#line 95 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 95 "mode_info.m"
          {
#line 6992 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_4_4 == check_hlds__mode_info__V_7_7);
#line 95 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 6996 "check_hlds.mode_info.c"
              check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_5_5 == check_hlds__mode_info__V_8_8);
#line 95 "mode_info.m"
          }
#line 95 "mode_info.m"
      }
#line 95 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 95 "mode_info.m"
  }
#line 95 "mode_info.m"
}

#line 63 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____call_context_0_0(
#line 63 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 63 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 63 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 63 "mode_info.m"
{
#line 63 "mode_info.m"
  {
#line 63 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 63 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_12 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 63 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_13 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 63 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_12 == check_hlds__mode_info__CastY_13);
#line 63 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 7033 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 63 "mode_info.m"
    else
#line 63 "mode_info.m"
    if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 63 "mode_info.m"
      {
#line 63 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));

#line 63 "mode_info.m"
        if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 63 "mode_info.m"
          {
#line 63 "mode_info.m"
            MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));

#line 63 "mode_info.m"
            {
#line 63 "mode_info.m"
              hlds__hlds_pred____Compare____call_id_0_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_16_16, check_hlds__mode_info__V_11_11);
#line 63 "mode_info.m"
              return;
            }
#line 63 "mode_info.m"
          }
#line 63 "mode_info.m"
        else
#line 7062 "check_hlds.mode_info.c"
          *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 63 "mode_info.m"
      }
#line 63 "mode_info.m"
    else
#line 63 "mode_info.m"
      {
#line 63 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));

#line 63 "mode_info.m"
        if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7075 "check_hlds.mode_info.c"
          *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 63 "mode_info.m"
        else
#line 63 "mode_info.m"
          {
#line 63 "mode_info.m"
            MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));

#line 63 "mode_info.m"
            {
#line 63 "mode_info.m"
              hlds__hlds_goal____Compare____unify_context_0_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_17_17, check_hlds__mode_info__V_5_5);
#line 63 "mode_info.m"
              return;
            }
#line 63 "mode_info.m"
          }
#line 63 "mode_info.m"
      }
#line 63 "mode_info.m"
  }
#line 63 "mode_info.m"
}

#line 63 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____call_context_0_0(
#line 63 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 63 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 63 "mode_info.m"
{
#line 63 "mode_info.m"
  {
#line 63 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 63 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_7 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 63 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_8 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 63 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_7 == check_hlds__mode_info__CastY_8);
#line 63 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 63 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 63 "mode_info.m"
    else
#line 63 "mode_info.m"
    if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 63 "mode_info.m"
      {
#line 63 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 63 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6;

#line 63 "mode_info.m"
        check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 63 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 63 "mode_info.m"
          {
#line 63 "mode_info.m"
            check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 7143 "check_hlds.mode_info.c"
            {
#line 7145 "check_hlds.mode_info.c"
              return check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____call_id_0_0(check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_6_6);
            }
#line 63 "mode_info.m"
          }
#line 63 "mode_info.m"
      }
#line 63 "mode_info.m"
    else
#line 63 "mode_info.m"
      {
#line 63 "mode_info.m"
        MR_Word check_hlds__mode_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 63 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4;

#line 63 "mode_info.m"
        check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 63 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 63 "mode_info.m"
          {
#line 63 "mode_info.m"
            check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 7169 "check_hlds.mode_info.c"
            {
#line 7171 "check_hlds.mode_info.c"
              return check_hlds__mode_info__succeeded = hlds__hlds_goal____Unify____unify_context_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_4_4);
            }
#line 63 "mode_info.m"
          }
#line 63 "mode_info.m"
      }
#line 63 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 63 "mode_info.m"
  }
#line 63 "mode_info.m"
}

#line 974 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(
#line 974 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 974 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_7,
#line 974 "mode_info.m"
  MR_Word * check_hlds__mode_info__Reason_8)
#line 974 "mode_info.m"
{
#line 977 "mode_info.m"
  while (MR_TRUE)
#line 977 "mode_info.m"
    {
#line 977 "mode_info.m"
      /* tailcall optimized into a loop */
#line 977 "mode_info.m"
      {
#line 977 "mode_info.m"
        MR_bool check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 977 "mode_info.m"
        MR_Word check_hlds__mode_info__ThisReason_4;
#line 977 "mode_info.m"
        MR_Word check_hlds__mode_info__Set_5;
#line 977 "mode_info.m"
        MR_Word check_hlds__mode_info__Sets_6;
#line 977 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9;
#line 978 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeCtorInfo_10_10;

#line 977 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 977 "mode_info.m"
          {
#line 977 "mode_info.m"
            check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 977 "mode_info.m"
            check_hlds__mode_info__Sets_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 977 "mode_info.m"
            check_hlds__mode_info__ThisReason_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 977 "mode_info.m"
            check_hlds__mode_info__Set_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 7229 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 978 "mode_info.m"
            {
#line 978 "mode_info.m"
              check_hlds__mode_info__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__mode_info__TypeCtorInfo_10_10, check_hlds__mode_info__Set_5, check_hlds__mode_info__Var_7);
            }
#line 980 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 979 "mode_info.m"
              {
#line 979 "mode_info.m"
                *check_hlds__mode_info__Reason_8 = check_hlds__mode_info__ThisReason_4;
#line 979 "mode_info.m"
                check_hlds__mode_info__succeeded = MR_TRUE;
#line 979 "mode_info.m"
              }
#line 980 "mode_info.m"
            else
#line 981 "mode_info.m"
              {
#line 981 "mode_info.m"
                /* direct tailcall eliminated */
#line 981 "mode_info.m"
                {
#line 981 "mode_info.m"
                  MR_Word check_hlds__mode_info__HeadVar__1__tmp_copy_1 = check_hlds__mode_info__Sets_6;

#line 981 "mode_info.m"
                  check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__HeadVar__1__tmp_copy_1;
#line 981 "mode_info.m"
                }
#line 981 "mode_info.m"
                continue;
#line 981 "mode_info.m"
              }
#line 977 "mode_info.m"
          }
#line 977 "mode_info.m"
        return check_hlds__mode_info__succeeded;
#line 977 "mode_info.m"
      }
#line 977 "mode_info.m"
      break;
#line 977 "mode_info.m"
    }
#line 974 "mode_info.m"
}

#line 345 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(
#line 345 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_2)
#line 345 "mode_info.m"
{
#line 1040 "mode_info.m"
  {
#line 1040 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1040 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 0)));
#line 1040 "mode_info.m"
    MR_Word check_hlds__mode_info__Globals_4;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 1)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 2)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 3)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 4)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 5)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 6)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 7)));

#line 1042 "mode_info.m"
    {
#line 1042 "mode_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__mode_info__ModuleInfo_3, &check_hlds__mode_info__Globals_4);
    }
#line 1043 "mode_info.m"
    {
#line 1043 "mode_info.m"
      return check_hlds__mode_info__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__mode_info__Globals_4, (MR_Integer) 299, (MR_Integer) 1);
    }
#line 1040 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 1040 "mode_info.m"
  }
#line 345 "mode_info.m"
}

#line 339 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info__mode_info_may_init_solver_vars_1_p_0(
#line 339 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_2)
#line 339 "mode_info.m"
{
#line 1034 "mode_info.m"
  {
#line 1034 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1034 "mode_info.m"
    MR_Word check_hlds__mode_info__MayInitSolverVars_3;
#line 1034 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 7)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 0)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 1)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 2)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 3)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 4)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 5)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 6)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 630 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 630 "mode_info.m"
    check_hlds__mode_info__MayInitSolverVars_3 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1036 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__MayInitSolverVars_3 == (MR_Integer) 0);
#line 1034 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 1034 "mode_info.m"
  }
#line 339 "mode_info.m"
}

#line 335 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_need_to_requantify_2_p_0(
#line 335 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4,
#line 335 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_5)
#line 335 "mode_info.m"
{
#line 1029 "mode_info.m"
  {
#line 1029 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;

#line 1030 "mode_info.m"
    {
#line 1030 "mode_info.m"
      check_hlds__mode_info__mode_info_set_need_to_requantify_3_p_0((MR_Integer) 0, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_5);
#line 1030 "mode_info.m"
      return;
    }
#line 1029 "mode_info.m"
  }
#line 335 "mode_info.m"
}

#line 332 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_add_warning_3_p_0(
#line 332 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeWarningInfo_4,
#line 332 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8,
#line 332 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9)
#line 332 "mode_info.m"
{
#line 1024 "mode_info.m"
  {
#line 1024 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1024 "mode_info.m"
    MR_Word check_hlds__mode_info__Warnings0_6;
#line 1024 "mode_info.m"
    MR_Word check_hlds__mode_info__Warnings_7;
#line 1024 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 1024 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));
#line 1024 "mode_info.m"
    MR_Word check_hlds__mode_info__V_52_52;
#line 1024 "mode_info.m"
    MR_Word check_hlds__mode_info__V_53_53;
#line 1024 "mode_info.m"
    MR_Word check_hlds__mode_info__V_54_54;
#line 1024 "mode_info.m"
    MR_Word check_hlds__mode_info__V_55_55;
#line 1024 "mode_info.m"
    MR_Word check_hlds__mode_info__V_56_56;
#line 1024 "mode_info.m"
    MR_Word check_hlds__mode_info__V_57_57;
#line 1024 "mode_info.m"
    MR_Word check_hlds__mode_info__V_58_58;
#line 1024 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59;
#line 1024 "mode_info.m"
    MR_Word check_hlds__mode_info__V_60_60;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 0)));
#line 608 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 1)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 2)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 3)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 4)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 5)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 6)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 7)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 8)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 10)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 12)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 13)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_61_61;
#line 679 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_62_62;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_63_63;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_64_64;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_65_65;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_70_70;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_71_71;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_72_72;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_73_73;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_74_74;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_75_75;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_76_76;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_77_77;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_79_79;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_80_80;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_81_81;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_82_82;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_83_83;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_84_84;
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_78_78;

#line 608 "mode_info.m"
    check_hlds__mode_info__Warnings0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 14)));
#line 608 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 608 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1026 "mode_info.m"
    {
#line 1026 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__ModeWarningInfo_4));
#line 1026 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1026 "mode_info.m"
    }
#line 1026 "mode_info.m"
    {
#line 1026 "mode_info.m"
      mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0, check_hlds__mode_info__Warnings0_6, check_hlds__mode_info__V_10_10, &check_hlds__mode_info__Warnings_7);
    }
#line 679 "mode_info.m"
    check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 0)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 1)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 2)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 3)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 4)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 5)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 6)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 7)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 8)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_70_70 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 679 "mode_info.m"
    check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    check_hlds__mode_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 10)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_74_74 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 679 "mode_info.m"
    check_hlds__mode_info__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    check_hlds__mode_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 12)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 13)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 14)));
#line 679 "mode_info.m"
    check_hlds__mode_info__V_79_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 679 "mode_info.m"
    check_hlds__mode_info__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    check_hlds__mode_info__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    check_hlds__mode_info__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    check_hlds__mode_info__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    check_hlds__mode_info__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    {
#line 679 "mode_info.m"
      check_hlds__mode_info__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 0) = ((MR_Box) (check_hlds__mode_info__V_61_61));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 1) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 2) = ((MR_Box) (check_hlds__mode_info__V_63_63));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 3) = ((MR_Box) (check_hlds__mode_info__V_64_64));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 4) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 5) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 6) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 7) = ((MR_Box) (check_hlds__mode_info__V_68_68));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 8) = ((MR_Box) (check_hlds__mode_info__V_69_69));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 9) = ((MR_Box) ((check_hlds__mode_info__V_70_70 | ((((check_hlds__mode_info__V_71_71 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_72_72 << (MR_Integer) 2)))))));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 10) = ((MR_Box) (check_hlds__mode_info__V_73_73));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 11) = ((MR_Box) ((check_hlds__mode_info__V_74_74 | ((check_hlds__mode_info__V_75_75 << (MR_Integer) 1)))));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 12) = ((MR_Box) (check_hlds__mode_info__V_76_76));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 13) = ((MR_Box) (check_hlds__mode_info__V_77_77));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 14) = ((MR_Box) (check_hlds__mode_info__Warnings_7));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 15) = ((MR_Box) ((check_hlds__mode_info__V_79_79 | ((((check_hlds__mode_info__V_80_80 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_81_81 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_82_82 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_83_83 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_84_84 << (MR_Integer) 5)))))))))))));
#line 679 "mode_info.m"
    }
#line 679 "mode_info.m"
    {
#line 679 "mode_info.m"
      MR_Word base;
#line 679 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 679 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9 = base;
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_59_59));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_60_60));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 679 "mode_info.m"
    }
#line 1024 "mode_info.m"
  }
#line 332 "mode_info.m"
}

#line 329 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_warning_3_p_0(
#line 329 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeWarning_4,
#line 329 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9,
#line 329 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10)
#line 329 "mode_info.m"
{
#line 1018 "mode_info.m"
  {
#line 1018 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1018 "mode_info.m"
    MR_Word check_hlds__mode_info__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 5)));
#line 1018 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 4)));
#line 1018 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeWarningInfo_8;
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 0)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 1)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 2)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 3)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 6)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 7)));

#line 1021 "mode_info.m"
    {
#line 1021 "mode_info.m"
      check_hlds__mode_info__ModeWarningInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1021 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 0) = ((MR_Box) (check_hlds__mode_info__ModeWarning_4));
#line 1021 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 1) = ((MR_Box) (check_hlds__mode_info__Context_6));
#line 1021 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 2) = ((MR_Box) (check_hlds__mode_info__ModeContext_7));
#line 1021 "mode_info.m"
    }
#line 1022 "mode_info.m"
    {
#line 1022 "mode_info.m"
      check_hlds__mode_info__mode_info_add_warning_3_p_0(check_hlds__mode_info__ModeWarningInfo_8, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10);
#line 1022 "mode_info.m"
      return;
    }
#line 1018 "mode_info.m"
  }
#line 329 "mode_info.m"
}

#line 326 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_add_error_3_p_0(
#line 326 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeErrorInfo_4,
#line 326 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8,
#line 326 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9)
#line 326 "mode_info.m"
{
#line 1013 "mode_info.m"
  {
#line 1013 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1013 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 1013 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors_7;
#line 1013 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));

#line 1015 "mode_info.m"
    {
#line 1015 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__ModeErrorInfo_4));
#line 1015 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1015 "mode_info.m"
    }
#line 1015 "mode_info.m"
    {
#line 1015 "mode_info.m"
      mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__mode_info__Errors0_6, check_hlds__mode_info__V_10_10, &check_hlds__mode_info__Errors_7);
    }
#line 1016 "mode_info.m"
    {
#line 1016 "mode_info.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__mode_info__Errors_7, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9);
#line 1016 "mode_info.m"
      return;
    }
#line 1013 "mode_info.m"
  }
#line 326 "mode_info.m"
}

#line 323 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_error_4_p_0(
#line 323 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_5,
#line 323 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeError_6,
#line 323 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11,
#line 323 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12)
#line 323 "mode_info.m"
{
#line 1007 "mode_info.m"
  {
#line 1007 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1007 "mode_info.m"
    MR_Word check_hlds__mode_info__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 5)));
#line 1007 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 4)));
#line 1007 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeErrorInfo_10;
#line 1007 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 3)));
#line 1007 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors_37;
#line 1007 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 0)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 1)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 2)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 6)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 7)));

#line 1010 "mode_info.m"
    {
#line 1010 "mode_info.m"
      check_hlds__mode_info__ModeErrorInfo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1010 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 0) = ((MR_Box) (check_hlds__mode_info__Vars_5));
#line 1010 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 1) = ((MR_Box) (check_hlds__mode_info__ModeError_6));
#line 1010 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 2) = ((MR_Box) (check_hlds__mode_info__Context_8));
#line 1010 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 3) = ((MR_Box) (check_hlds__mode_info__ModeContext_9));
#line 1010 "mode_info.m"
    }
#line 1015 "mode_info.m"
    {
#line 1015 "mode_info.m"
      check_hlds__mode_info__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_38_38, 0) = ((MR_Box) (check_hlds__mode_info__ModeErrorInfo_10));
#line 1015 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1015 "mode_info.m"
    }
#line 1015 "mode_info.m"
    {
#line 1015 "mode_info.m"
      mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__mode_info__Errors0_36, check_hlds__mode_info__V_38_38, &check_hlds__mode_info__Errors_37);
    }
#line 1016 "mode_info.m"
    {
#line 1016 "mode_info.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__mode_info__Errors_37, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12);
#line 1016 "mode_info.m"
      return;
    }
#line 1007 "mode_info.m"
  }
#line 323 "mode_info.m"
}

#line 316 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_var_is_nondet_live_3_p_0(
#line 316 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 316 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_5,
#line 316 "mode_info.m"
  MR_Word * check_hlds__mode_info__Result_6)
#line 316 "mode_info.m"
{
#line 926 "mode_info.m"
  {
#line 926 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 926 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));

#line 928 "mode_info.m"
    {
#line 928 "mode_info.m"
      check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__NondetLiveVars0_7, ((MR_Box) (check_hlds__mode_info__Var_5)));
    }
#line 930 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 929 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 0;
#line 930 "mode_info.m"
    else
#line 931 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 1;
#line 926 "mode_info.m"
  }
#line 316 "mode_info.m"
}

#line 311 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_var_is_live_3_p_0(
#line 311 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 311 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_5,
#line 311 "mode_info.m"
  MR_Word * check_hlds__mode_info__Result_6)
#line 311 "mode_info.m"
{
#line 918 "mode_info.m"
  {
#line 918 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 918 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 918 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 616 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;

#line 616 "mode_info.m"
    check_hlds__mode_info__LiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 920 "mode_info.m"
    {
#line 920 "mode_info.m"
      check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVars0_7, ((MR_Box) (check_hlds__mode_info__Var_5)));
    }
#line 922 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 921 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 0;
#line 922 "mode_info.m"
    else
#line 923 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 1;
#line 918 "mode_info.m"
  }
#line 311 "mode_info.m"
}

#line 309 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(
#line 309 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_1,
#line 309 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 309 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 309 "mode_info.m"
{
#line 913 "mode_info.m"
  {
#line 913 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;

#line 913 "mode_info.m"
    if ((check_hlds__mode_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 913 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 913 "mode_info.m"
    else
#line 914 "mode_info.m"
      {
#line 914 "mode_info.m"
        MR_Word check_hlds__mode_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 914 "mode_info.m"
        MR_Word check_hlds__mode_info__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 914 "mode_info.m"
        MR_Word check_hlds__mode_info__Live_8;
#line 914 "mode_info.m"
        MR_Word check_hlds__mode_info__Lives_9;
#line 914 "mode_info.m"
        MR_Word check_hlds__mode_info__LiveVars0_13;
#line 914 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 7)));
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 0)));
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 1)));
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 2)));
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 3)));
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 4)));
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 5)));
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 6)));
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 0)));
#line 616 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 1)));
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 2)));
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 3)));
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 4)));
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 5)));
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31;
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32;
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33;
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34;
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35;
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36;
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37;
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38;
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39;
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40;
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41;
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42;
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43;
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44;
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45;
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46;
#line 616 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47;

#line 616 "mode_info.m"
        check_hlds__mode_info__LiveVars0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 6)));
#line 616 "mode_info.m"
        check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 7)));
#line 616 "mode_info.m"
        check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 8)));
#line 616 "mode_info.m"
        check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
        check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
        check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 616 "mode_info.m"
        check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 10)));
#line 616 "mode_info.m"
        check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
        check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
        check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 12)));
#line 616 "mode_info.m"
        check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 13)));
#line 616 "mode_info.m"
        check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 14)));
#line 616 "mode_info.m"
        check_hlds__mode_info__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
        check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
        check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 616 "mode_info.m"
        check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 616 "mode_info.m"
        check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 616 "mode_info.m"
        check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 920 "mode_info.m"
        {
#line 920 "mode_info.m"
          check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVars0_13, ((MR_Box) (check_hlds__mode_info__Var_6)));
        }
#line 922 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 921 "mode_info.m"
          check_hlds__mode_info__Live_8 = (MR_Integer) 0;
#line 922 "mode_info.m"
        else
#line 923 "mode_info.m"
          check_hlds__mode_info__Live_8 = (MR_Integer) 1;
#line 916 "mode_info.m"
        {
#line 916 "mode_info.m"
          check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(check_hlds__mode_info__ModeInfo_1, check_hlds__mode_info__Vars_7, &check_hlds__mode_info__Lives_9);
        }
#line 914 "mode_info.m"
        {
#line 914 "mode_info.m"
          MR_Word base;
#line 914 "mode_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 914 "mode_info.m"
          *check_hlds__mode_info__HeadVar__3_3 = base;
#line 914 "mode_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_info__Live_8));
#line 914 "mode_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_info__Lives_9));
#line 914 "mode_info.m"
        }
#line 914 "mode_info.m"
      }
#line 913 "mode_info.m"
  }
#line 309 "mode_info.m"
}

#line 304 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_call_id_3_p_0(
#line 304 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 304 "mode_info.m"
  MR_Word check_hlds__mode_info__PredId_5,
#line 304 "mode_info.m"
  MR_Word * check_hlds__mode_info__CallId_6)
#line 304 "mode_info.m"
{
#line 1000 "mode_info.m"
  {
#line 1000 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1000 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 1000 "mode_info.m"
    MR_Word check_hlds__mode_info__PredInfo_8;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));

#line 1002 "mode_info.m"
    {
#line 1002 "mode_info.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__mode_info__ModuleInfo_7, check_hlds__mode_info__PredId_5, &check_hlds__mode_info__PredInfo_8);
    }
#line 1003 "mode_info.m"
    {
#line 1003 "mode_info.m"
      hlds__hlds_pred__pred_info_get_call_id_2_p_0(check_hlds__mode_info__PredInfo_8, check_hlds__mode_info__CallId_6);
#line 1003 "mode_info.m"
      return;
    }
#line 1000 "mode_info.m"
  }
#line 304 "mode_info.m"
}

#line 298 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_3_p_0(
#line 298 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 298 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_5,
#line 298 "mode_info.m"
  MR_Word * check_hlds__mode_info__Reason_6)
#line 298 "mode_info.m"
{
#line 970 "mode_info.m"
  {
#line 970 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 970 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVarsList_7;
#line 970 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 0)));
#line 604 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 1)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 2)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 3)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 4)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;

#line 604 "mode_info.m"
    check_hlds__mode_info__LockedVarsList_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 5)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 6)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 7)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 8)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 13)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 972 "mode_info.m"
    {
#line 972 "mode_info.m"
      return check_hlds__mode_info__succeeded = check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(check_hlds__mode_info__LockedVarsList_7, check_hlds__mode_info__Var_5, check_hlds__mode_info__Reason_6);
    }
#line 970 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 970 "mode_info.m"
  }
#line 298 "mode_info.m"
}

#line 295 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_unlock_vars_4_p_0(
#line 295 "mode_info.m"
  MR_Word check_hlds__mode_info__Reason_5,
#line 295 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_6,
#line 295 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12,
#line 295 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_13)
#line 295 "mode_info.m"
{
#line 958 "mode_info.m"
  {
#line 958 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 958 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars0_8;
#line 958 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars_11;
#line 958 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 7)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 0)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 1)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 2)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 3)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 4)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 5)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 6)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 0)));
#line 604 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 1)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 2)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 3)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 4)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_47_47;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_48_48;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_49_49;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_50_50;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_51_51;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_52_52;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_53_53;
#line 965 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars1_10;
#line 961 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeCtorInfo_19_19;
#line 961 "mode_info.m"
    MR_Word check_hlds__mode_info__TheseVars_9;
#line 961 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 961 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;

#line 604 "mode_info.m"
    check_hlds__mode_info__LockedVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 5)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 6)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 7)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 8)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 10)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 12)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 13)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 14)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 961 "mode_info.m"
    check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__LockedVars0_8)) == (MR_mktag((MR_Integer) 1)));
#line 961 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 961 "mode_info.m"
      {
#line 961 "mode_info.m"
        check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__LockedVars0_8, (MR_Integer) 0)));
#line 961 "mode_info.m"
        check_hlds__mode_info__LockedVars1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__LockedVars0_8, (MR_Integer) 1)));
#line 961 "mode_info.m"
        check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, (MR_Integer) 0)));
#line 961 "mode_info.m"
        check_hlds__mode_info__TheseVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, (MR_Integer) 1)));
#line 961 "mode_info.m"
        {
#line 961 "mode_info.m"
          check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____var_lock_reason_0_0(check_hlds__mode_info__Reason_5, check_hlds__mode_info__V_20_20);
        }
#line 961 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 961 "mode_info.m"
          {
#line 8668 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 962 "mode_info.m"
            {
#line 962 "mode_info.m"
              check_hlds__mode_info__succeeded = parse_tree__set_of_var__equal_2_p_0(check_hlds__mode_info__TypeCtorInfo_19_19, check_hlds__mode_info__TheseVars_9, check_hlds__mode_info__Vars_6);
            }
#line 961 "mode_info.m"
          }
#line 961 "mode_info.m"
      }
#line 965 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 964 "mode_info.m"
      check_hlds__mode_info__LockedVars_11 = check_hlds__mode_info__LockedVars1_10;
#line 965 "mode_info.m"
    else
#line 966 "mode_info.m"
      {
#line 966 "mode_info.m"
        {
#line 966 "mode_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_unlock_vars\'/4", (MR_String) "some kind of nesting error");
#line 966 "mode_info.m"
          return;
        }
#line 966 "mode_info.m"
      }
#line 968 "mode_info.m"
    {
#line 968 "mode_info.m"
      check_hlds__mode_info__mode_info_set_locked_vars_3_p_0(check_hlds__mode_info__LockedVars_11, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_13);
#line 968 "mode_info.m"
      return;
    }
#line 958 "mode_info.m"
  }
#line 295 "mode_info.m"
}

#line 292 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_lock_vars_4_p_0(
#line 292 "mode_info.m"
  MR_Word check_hlds__mode_info__Reason_5,
#line 292 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_6,
#line 292 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9,
#line 292 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10)
#line 292 "mode_info.m"
{
#line 954 "mode_info.m"
  {
#line 954 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars_8;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 7)));
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 0)));
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 1)));
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 2)));
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 3)));
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 4)));
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 5)));
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 6)));
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 0)));
#line 954 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 1)));
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 2)));
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 3)));
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 4)));
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__V_53_53;

#line 604 "mode_info.m"
    check_hlds__mode_info__LockedVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 5)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 6)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 7)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 8)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 10)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 12)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 13)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 14)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 956 "mode_info.m"
    {
#line 956 "mode_info.m"
      check_hlds__mode_info__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 956 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, 0) = ((MR_Box) (check_hlds__mode_info__Reason_5));
#line 956 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, 1) = ((MR_Box) (check_hlds__mode_info__Vars_6));
#line 956 "mode_info.m"
    }
#line 956 "mode_info.m"
    {
#line 956 "mode_info.m"
      check_hlds__mode_info__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 956 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_11_11, 0) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 956 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_11_11, 1) = ((MR_Box) (check_hlds__mode_info__LockedVars_8));
#line 956 "mode_info.m"
    }
#line 669 "mode_info.m"
    {
#line 669 "mode_info.m"
      check_hlds__mode_info__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 0) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 1) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 2) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 3) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 4) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 5) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 6) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 7) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 8) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 9) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)))))));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 10) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 11) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)))));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 12) = ((MR_Box) (check_hlds__mode_info__V_38_38));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 13) = ((MR_Box) (check_hlds__mode_info__V_39_39));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 14) = ((MR_Box) (check_hlds__mode_info__V_40_40));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 15) = ((MR_Box) ((check_hlds__mode_info__V_41_41 | ((((check_hlds__mode_info__V_42_42 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_43_43 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_44_44 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_45_45 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_46_46 << (MR_Integer) 5)))))))))))));
#line 669 "mode_info.m"
    }
#line 669 "mode_info.m"
    {
#line 669 "mode_info.m"
      MR_Word base;
#line 669 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 669 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10 = base;
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 669 "mode_info.m"
    }
#line 954 "mode_info.m"
  }
#line 292 "mode_info.m"
}

#line 289 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_types_of_vars_3_p_0(
#line 289 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 289 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_5,
#line 289 "mode_info.m"
  MR_Word * check_hlds__mode_info__TypesOfVars_6)
#line 289 "mode_info.m"
{
#line 941 "mode_info.m"
  {
#line 941 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 941 "mode_info.m"
    MR_Word check_hlds__mode_info__VarTypes_7;
#line 941 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 0)));
#line 594 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 1)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 2)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;

#line 594 "mode_info.m"
    check_hlds__mode_info__VarTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 3)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 4)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 5)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 6)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 7)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 8)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 13)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 943 "mode_info.m"
    {
#line 943 "mode_info.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__mode_info__VarTypes_7, check_hlds__mode_info__Vars_5, check_hlds__mode_info__TypesOfVars_6);
#line 943 "mode_info.m"
      return;
    }
#line 941 "mode_info.m"
  }
#line 289 "mode_info.m"
}

#line 284 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(
#line 284 "mode_info.m"
  MR_Word check_hlds__mode_info__OldLiveVars_4,
#line 284 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_13,
#line 284 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_14)
#line 284 "mode_info.m"
{
#line 898 "mode_info.m"
  {
#line 898 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 898 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeInfo_19_19;
#line 898 "mode_info.m"
    MR_Word check_hlds__mode_info__OldLiveVarsList_6;
#line 898 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 898 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars0_8;
#line 898 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars_9;
#line 898 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars_10;
#line 898 "mode_info.m"
    MR_Word check_hlds__mode_info__DelayInfo0_11;
#line 898 "mode_info.m"
    MR_Word check_hlds__mode_info__DelayInfo_12;
#line 898 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_15_15;
#line 898 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_16_16;
#line 898 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 616 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_31_31;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_47_47;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_48_48;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_49_49;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_50_50;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_51_51;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_52_52;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_64_64;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_65_65;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_70_70;

#line 899 "mode_info.m"
    {
#line 899 "mode_info.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_info__OldLiveVars_4, &check_hlds__mode_info__OldLiveVarsList_6);
    }
#line 616 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 0)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 1)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 2)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 3)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 4)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 5)));
#line 616 "mode_info.m"
    check_hlds__mode_info__NondetLiveVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 6)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 7)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 0)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 1)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 2)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 3)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 4)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 5)));
#line 616 "mode_info.m"
    check_hlds__mode_info__LiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 6)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 7)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 8)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 10)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 12)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 13)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 14)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 9236 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeInfo_19_19 = (MR_Word) &check_hlds__mode_info_scalar_common_1[0];
#line 902 "mode_info.m"
    {
#line 902 "mode_info.m"
      mercury__bag__det_remove_list_3_p_0(check_hlds__mode_info__TypeInfo_19_19, check_hlds__mode_info__OldLiveVarsList_6, check_hlds__mode_info__LiveVars0_7, &check_hlds__mode_info__LiveVars_9);
    }
#line 903 "mode_info.m"
    {
#line 903 "mode_info.m"
      mercury__bag__det_remove_list_3_p_0(check_hlds__mode_info__TypeInfo_19_19, check_hlds__mode_info__OldLiveVarsList_6, check_hlds__mode_info__NondetLiveVars0_8, &check_hlds__mode_info__NondetLiveVars_10);
    }
#line 904 "mode_info.m"
    {
#line 904 "mode_info.m"
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__mode_info__LiveVars_9, check_hlds__mode_info__STATE_VARIABLE_MI_0_13, &check_hlds__mode_info__STATE_VARIABLE_MI_15_15);
    }
#line 905 "mode_info.m"
    {
#line 905 "mode_info.m"
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__mode_info__NondetLiveVars_10, check_hlds__mode_info__STATE_VARIABLE_MI_15_15, &check_hlds__mode_info__STATE_VARIABLE_MI_16_16);
    }
#line 614 "mode_info.m"
    check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 0)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 1)));
#line 614 "mode_info.m"
    check_hlds__mode_info__DelayInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 2)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 3)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 4)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 5)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 6)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 7)));
#line 910 "mode_info.m"
    {
#line 910 "mode_info.m"
      check_hlds__delay_info__delay_info_bind_var_list_3_p_0(check_hlds__mode_info__OldLiveVarsList_6, check_hlds__mode_info__DelayInfo0_11, &check_hlds__mode_info__DelayInfo_12);
    }
#line 911 "mode_info.m"
    {
#line 911 "mode_info.m"
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__mode_info__DelayInfo_12, check_hlds__mode_info__STATE_VARIABLE_MI_16_16, check_hlds__mode_info__STATE_VARIABLE_MI_14);
#line 911 "mode_info.m"
      return;
    }
#line 898 "mode_info.m"
  }
#line 284 "mode_info.m"
}

#line 282 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_add_live_vars_3_p_0(
#line 282 "mode_info.m"
  MR_Word check_hlds__mode_info__NewLiveVars_4,
#line 282 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_11,
#line 282 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_12)
#line 282 "mode_info.m"
{
#line 889 "mode_info.m"
  {
#line 889 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 889 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeInfo_16_16;
#line 889 "mode_info.m"
    MR_Word check_hlds__mode_info__NewLiveVarsList_6;
#line 889 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 889 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars0_8;
#line 889 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars_9;
#line 889 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars_10;
#line 889 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_13_13;
#line 889 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 616 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_28_28;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_47_47;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_48_48;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_49_49;

#line 890 "mode_info.m"
    {
#line 890 "mode_info.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_info__NewLiveVars_4, &check_hlds__mode_info__NewLiveVarsList_6);
    }
#line 616 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 0)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 1)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 2)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 3)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 4)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 5)));
#line 616 "mode_info.m"
    check_hlds__mode_info__NondetLiveVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 6)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 7)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 0)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 1)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 2)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 3)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 4)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 5)));
#line 616 "mode_info.m"
    check_hlds__mode_info__LiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 6)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 7)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 8)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 10)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 12)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 13)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 14)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 9450 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeInfo_16_16 = (MR_Word) &check_hlds__mode_info_scalar_common_1[0];
#line 893 "mode_info.m"
    {
#line 893 "mode_info.m"
      mercury__bag__insert_list_3_p_0(check_hlds__mode_info__TypeInfo_16_16, check_hlds__mode_info__NewLiveVarsList_6, check_hlds__mode_info__LiveVars0_7, &check_hlds__mode_info__LiveVars_9);
    }
#line 894 "mode_info.m"
    {
#line 894 "mode_info.m"
      mercury__bag__insert_list_3_p_0(check_hlds__mode_info__TypeInfo_16_16, check_hlds__mode_info__NewLiveVarsList_6, check_hlds__mode_info__NondetLiveVars0_8, &check_hlds__mode_info__NondetLiveVars_10);
    }
#line 895 "mode_info.m"
    {
#line 895 "mode_info.m"
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__mode_info__LiveVars_9, check_hlds__mode_info__STATE_VARIABLE_MI_0_11, &check_hlds__mode_info__STATE_VARIABLE_MI_13_13);
    }
#line 896 "mode_info.m"
    {
#line 896 "mode_info.m"
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__mode_info__NondetLiveVars_10, check_hlds__mode_info__STATE_VARIABLE_MI_13_13, check_hlds__mode_info__STATE_VARIABLE_MI_12);
#line 896 "mode_info.m"
      return;
    }
#line 889 "mode_info.m"
  }
#line 282 "mode_info.m"
}

#line 269 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(
#line 269 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 269 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 269 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 269 "mode_info.m"
{
#line 741 "mode_info.m"
  {
#line 741 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 742 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 742 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 742 "mode_info.m"
    {
#line 742 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__X_4 << (MR_Integer) 5)))))))))))));
#line 742 "mode_info.m"
    }
#line 742 "mode_info.m"
    {
#line 742 "mode_info.m"
      MR_Word base;
#line 742 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 742 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 742 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 742 "mode_info.m"
    }
#line 741 "mode_info.m"
  }
#line 269 "mode_info.m"
}

#line 267 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_make_ground_terms_unique_3_p_0(
#line 267 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 267 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 267 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 267 "mode_info.m"
{
#line 739 "mode_info.m"
  {
#line 739 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 740 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 740 "mode_info.m"
    {
#line 740 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__X_4 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 740 "mode_info.m"
    }
#line 740 "mode_info.m"
    {
#line 740 "mode_info.m"
      MR_Word base;
#line 740 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 740 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 740 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 740 "mode_info.m"
    }
#line 739 "mode_info.m"
  }
#line 267 "mode_info.m"
}

#line 265 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_had_from_ground_term_3_p_0(
#line 265 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 265 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 265 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 265 "mode_info.m"
{
#line 736 "mode_info.m"
  {
#line 736 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 732 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;

#line 732 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 732 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 732 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 732 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 736 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 736 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 736 "mode_info.m"
    else
#line 737 "mode_info.m"
      {
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12;
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 737 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 737 "mode_info.m"
        {
#line 737 "mode_info.m"
          check_hlds__mode_info__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 0) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 1) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 2) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 3) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 4) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 5) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 6) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 7) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 8) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) ((check_hlds__mode_info__V_59_59 | ((((check_hlds__mode_info__V_60_60 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_61_61 << (MR_Integer) 2)))))));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 10) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 11) = ((MR_Box) ((check_hlds__mode_info__V_63_63 | ((check_hlds__mode_info__V_64_64 << (MR_Integer) 1)))));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 12) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 13) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 14) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) ((check_hlds__mode_info__V_68_68 | ((((check_hlds__mode_info__V_69_69 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_70_70 << (MR_Integer) 2)) | ((((check_hlds__mode_info__X_4 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_73_73 << (MR_Integer) 5)))))))))))));
#line 737 "mode_info.m"
        }
#line 737 "mode_info.m"
        {
#line 737 "mode_info.m"
          MR_Word base;
#line 737 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 737 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_47_47));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 737 "mode_info.m"
        }
#line 737 "mode_info.m"
      }
#line 736 "mode_info.m"
  }
#line 265 "mode_info.m"
}

#line 263 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_in_from_ground_term_3_p_0(
#line 263 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 263 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 263 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 263 "mode_info.m"
{
#line 728 "mode_info.m"
  {
#line 728 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 729 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 729 "mode_info.m"
    {
#line 729 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__X_4 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 729 "mode_info.m"
    }
#line 729 "mode_info.m"
    {
#line 729 "mode_info.m"
      MR_Word base;
#line 729 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 729 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 729 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 729 "mode_info.m"
    }
#line 728 "mode_info.m"
  }
#line 263 "mode_info.m"
}

#line 261 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0(
#line 261 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 261 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 261 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 261 "mode_info.m"
{
#line 725 "mode_info.m"
  {
#line 725 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 721 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;

#line 721 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 721 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 721 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 721 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 721 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 721 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 721 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 721 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 721 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 721 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 721 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 721 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 721 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 721 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 725 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 725 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 725 "mode_info.m"
    else
#line 726 "mode_info.m"
      {
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12;
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 726 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 726 "mode_info.m"
        {
#line 726 "mode_info.m"
          check_hlds__mode_info__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 0) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 1) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 2) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 3) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 4) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 5) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 6) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 7) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 8) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) ((check_hlds__mode_info__V_59_59 | ((((check_hlds__mode_info__V_60_60 << (MR_Integer) 1)) | ((check_hlds__mode_info__X_4 << (MR_Integer) 2)))))));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 10) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 11) = ((MR_Box) ((check_hlds__mode_info__V_63_63 | ((check_hlds__mode_info__V_64_64 << (MR_Integer) 1)))));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 12) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 13) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 14) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) ((check_hlds__mode_info__V_68_68 | ((((check_hlds__mode_info__V_69_69 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_70_70 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_71_71 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_73_73 << (MR_Integer) 5)))))))))))));
#line 726 "mode_info.m"
        }
#line 726 "mode_info.m"
        {
#line 726 "mode_info.m"
          MR_Word base;
#line 726 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 726 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_47_47));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 726 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 726 "mode_info.m"
        }
#line 726 "mode_info.m"
      }
#line 725 "mode_info.m"
  }
#line 261 "mode_info.m"
}

#line 259 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_checking_extra_goals_3_p_0(
#line 259 "mode_info.m"
  MR_Word check_hlds__mode_info__Checking_4,
#line 259 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_7,
#line 259 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_8)
#line 259 "mode_info.m"
{
#line 984 "mode_info.m"
  {
#line 984 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 984 "mode_info.m"
    MR_Word check_hlds__mode_info__Checking0_6;
#line 984 "mode_info.m"
    MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 7)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 0)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 1)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 2)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 3)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 4)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 5)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 6)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 0)));
#line 636 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 1)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 2)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 3)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 4)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 5)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 6)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 7)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 8)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_73_73 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 10)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_77_77 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_78_78;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_79_79;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_80_80;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_81_81;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_82_82;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_83_83;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_84_84;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_85_85;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_86_86;

#line 636 "mode_info.m"
    check_hlds__mode_info__Checking0_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    check_hlds__mode_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 12)));
#line 636 "mode_info.m"
    check_hlds__mode_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 13)));
#line 636 "mode_info.m"
    check_hlds__mode_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 14)));
#line 636 "mode_info.m"
    check_hlds__mode_info__V_81_81 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 636 "mode_info.m"
    check_hlds__mode_info__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    check_hlds__mode_info__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    check_hlds__mode_info__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    check_hlds__mode_info__V_85_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    check_hlds__mode_info__V_86_86 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 987 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__Checking0_6 == (MR_Integer) 1);
#line 987 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 988 "mode_info.m"
      check_hlds__mode_info__succeeded = (check_hlds__mode_info__Checking_4 == (MR_Integer) 1);
#line 994 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 992 "mode_info.m"
      {
#line 992 "mode_info.m"
        {
#line 992 "mode_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_set_checking_extra_goals\'/3", (MR_String) "rechecking extra goals adds more extra goals");
#line 992 "mode_info.m"
          return;
        }
#line 992 "mode_info.m"
      }
#line 994 "mode_info.m"
    else
#line 995 "mode_info.m"
      {
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 7)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14;
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 0)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 1)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 2)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 3)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 4)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 5)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 6)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 0)));
#line 995 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 1)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 2)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 3)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 4)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 5)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 6)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 7)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 8)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 10)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 12)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 13)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 14)));
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 995 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 995 "mode_info.m"
        {
#line 995 "mode_info.m"
          check_hlds__mode_info__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 0) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 1) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 2) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 3) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 4) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 5) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 6) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 7) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 8) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 9) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 2)))))));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 10) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 11) = ((MR_Box) ((check_hlds__mode_info__V_35_35 | ((check_hlds__mode_info__Checking_4 << (MR_Integer) 1)))));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 12) = ((MR_Box) (check_hlds__mode_info__V_37_37));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 13) = ((MR_Box) (check_hlds__mode_info__V_38_38));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 14) = ((MR_Box) (check_hlds__mode_info__V_39_39));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 15) = ((MR_Box) ((check_hlds__mode_info__V_40_40 | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_42_42 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_43_43 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_44_44 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_45_45 << (MR_Integer) 5)))))))))))));
#line 995 "mode_info.m"
        }
#line 995 "mode_info.m"
        {
#line 995 "mode_info.m"
          MR_Word base;
#line 995 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 995 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_8 = base;
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 995 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 995 "mode_info.m"
        }
#line 995 "mode_info.m"
      }
#line 984 "mode_info.m"
  }
#line 259 "mode_info.m"
}

#line 257 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_may_change_called_proc_3_p_0(
#line 257 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 257 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 257 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 257 "mode_info.m"
{
#line 717 "mode_info.m"
  {
#line 717 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 718 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 718 "mode_info.m"
    {
#line 718 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__X_4 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 718 "mode_info.m"
    }
#line 718 "mode_info.m"
    {
#line 718 "mode_info.m"
      MR_Word base;
#line 718 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 718 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 718 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 718 "mode_info.m"
    }
#line 717 "mode_info.m"
  }
#line 257 "mode_info.m"
}

#line 255 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_how_to_check_3_p_0(
#line 255 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 255 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 255 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 255 "mode_info.m"
{
#line 715 "mode_info.m"
  {
#line 715 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 716 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);

#line 716 "mode_info.m"
    {
#line 716 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__X_4 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 716 "mode_info.m"
    }
#line 716 "mode_info.m"
    {
#line 716 "mode_info.m"
      MR_Word base;
#line 716 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 716 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 716 "mode_info.m"
    }
#line 715 "mode_info.m"
  }
#line 255 "mode_info.m"
}

#line 253 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(
#line 253 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 253 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 253 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 253 "mode_info.m"
{
#line 712 "mode_info.m"
  {
#line 712 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 710 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;

#line 710 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 710 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 710 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 710 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 710 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 710 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 710 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 710 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 710 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 710 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 710 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 710 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 712 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 712 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 712 "mode_info.m"
    else
#line 713 "mode_info.m"
      {
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12;
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 713 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);

#line 713 "mode_info.m"
        {
#line 713 "mode_info.m"
          check_hlds__mode_info__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 0) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 1) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 2) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 3) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 4) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 5) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 6) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 7) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 8) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) ((check_hlds__mode_info__V_59_59 | ((((check_hlds__mode_info__V_60_60 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_61_61 << (MR_Integer) 2)))))));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 10) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 11) = ((MR_Box) ((check_hlds__mode_info__X_4 | ((check_hlds__mode_info__V_64_64 << (MR_Integer) 1)))));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 12) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 13) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 14) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) ((check_hlds__mode_info__V_68_68 | ((((check_hlds__mode_info__V_69_69 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_70_70 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_71_71 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_73_73 << (MR_Integer) 5)))))))))))));
#line 713 "mode_info.m"
        }
#line 713 "mode_info.m"
        {
#line 713 "mode_info.m"
          MR_Word base;
#line 713 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 713 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_47_47));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 713 "mode_info.m"
        }
#line 713 "mode_info.m"
      }
#line 712 "mode_info.m"
  }
#line 253 "mode_info.m"
}

#line 251 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_parallel_vars_3_p_0(
#line 251 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 251 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 251 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 251 "mode_info.m"
{
#line 707 "mode_info.m"
  {
#line 707 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 708 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));

#line 708 "mode_info.m"
    {
#line 708 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 708 "mode_info.m"
    }
#line 708 "mode_info.m"
    {
#line 708 "mode_info.m"
      MR_Word base;
#line 708 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 708 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 708 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 708 "mode_info.m"
    }
#line 707 "mode_info.m"
  }
#line 251 "mode_info.m"
}

#line 249 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_last_checkpoint_insts_3_p_0(
#line 249 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 249 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 249 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 249 "mode_info.m"
{
#line 705 "mode_info.m"
  {
#line 705 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 706 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));

#line 706 "mode_info.m"
    {
#line 706 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 706 "mode_info.m"
    }
#line 706 "mode_info.m"
    {
#line 706 "mode_info.m"
      MR_Word base;
#line 706 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 706 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 706 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 706 "mode_info.m"
    }
#line 705 "mode_info.m"
  }
#line 249 "mode_info.m"
}

#line 247 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(
#line 247 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 247 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 247 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 247 "mode_info.m"
{
#line 702 "mode_info.m"
  {
#line 702 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 700 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 700 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 700 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 700 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 700 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 700 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 700 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 700 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));

#line 700 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 702 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 702 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 702 "mode_info.m"
    else
#line 703 "mode_info.m"
      {
#line 703 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 703 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 703 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 703 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 703 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 703 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 703 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 703 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));

#line 703 "mode_info.m"
        {
#line 703 "mode_info.m"
          MR_Word base;
#line 703 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 703 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 703 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 703 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 703 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 703 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 703 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 703 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 703 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 703 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 703 "mode_info.m"
        }
#line 703 "mode_info.m"
      }
#line 702 "mode_info.m"
  }
#line 247 "mode_info.m"
}

#line 245 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_live_vars_3_p_0(
#line 245 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 245 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 245 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 245 "mode_info.m"
{
#line 697 "mode_info.m"
  {
#line 697 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 698 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 698 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));

#line 698 "mode_info.m"
    {
#line 698 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 698 "mode_info.m"
    }
#line 698 "mode_info.m"
    {
#line 698 "mode_info.m"
      MR_Word base;
#line 698 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 698 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 698 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 698 "mode_info.m"
    }
#line 697 "mode_info.m"
  }
#line 245 "mode_info.m"
}

#line 243 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_delay_info_3_p_0(
#line 243 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 243 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 243 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 243 "mode_info.m"
{
#line 694 "mode_info.m"
  {
#line 694 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));

#line 692 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 694 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 694 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 694 "mode_info.m"
    else
#line 695 "mode_info.m"
      {
#line 695 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 695 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 695 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 695 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 695 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 695 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 695 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 695 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));

#line 695 "mode_info.m"
        {
#line 695 "mode_info.m"
          MR_Word base;
#line 695 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 695 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 695 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 695 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 695 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 695 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 695 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 695 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 695 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 695 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 695 "mode_info.m"
        }
#line 695 "mode_info.m"
      }
#line 694 "mode_info.m"
  }
#line 243 "mode_info.m"
}

#line 241 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_var_types_3_p_0(
#line 241 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 241 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 241 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 241 "mode_info.m"
{
#line 658 "mode_info.m"
  {
#line 658 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 659 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));

#line 659 "mode_info.m"
    {
#line 659 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 659 "mode_info.m"
    }
#line 659 "mode_info.m"
    {
#line 659 "mode_info.m"
      MR_Word base;
#line 659 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 659 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 659 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 659 "mode_info.m"
    }
#line 658 "mode_info.m"
  }
#line 241 "mode_info.m"
}

#line 239 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_varset_3_p_0(
#line 239 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 239 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 239 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 239 "mode_info.m"
{
#line 656 "mode_info.m"
  {
#line 656 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 657 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));

#line 657 "mode_info.m"
    {
#line 657 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 657 "mode_info.m"
    }
#line 657 "mode_info.m"
    {
#line 657 "mode_info.m"
      MR_Word base;
#line 657 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 657 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 657 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 657 "mode_info.m"
    }
#line 656 "mode_info.m"
  }
#line 239 "mode_info.m"
}

#line 237 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_p_0(
#line 237 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 237 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 237 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 237 "mode_info.m"
{
#line 689 "mode_info.m"
  {
#line 689 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 690 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 690 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 690 "mode_info.m"
    {
#line 690 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__X_4 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 690 "mode_info.m"
    }
#line 690 "mode_info.m"
    {
#line 690 "mode_info.m"
      MR_Word base;
#line 690 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 690 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 690 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 690 "mode_info.m"
    }
#line 689 "mode_info.m"
  }
#line 237 "mode_info.m"
}

#line 235 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_need_to_requantify_3_p_0(
#line 235 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 235 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 235 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 235 "mode_info.m"
{
#line 686 "mode_info.m"
  {
#line 686 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 682 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;

#line 682 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 682 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 682 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 682 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 682 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 682 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 682 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 686 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 686 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 686 "mode_info.m"
    else
#line 687 "mode_info.m"
      {
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12;
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 687 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);

#line 687 "mode_info.m"
        {
#line 687 "mode_info.m"
          check_hlds__mode_info__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 0) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 1) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 2) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 3) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 4) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 5) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 6) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 7) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 8) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) ((check_hlds__mode_info__V_59_59 | ((((check_hlds__mode_info__V_60_60 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_61_61 << (MR_Integer) 2)))))));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 10) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 11) = ((MR_Box) ((check_hlds__mode_info__V_63_63 | ((check_hlds__mode_info__V_64_64 << (MR_Integer) 1)))));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 12) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 13) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 14) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) ((check_hlds__mode_info__X_4 | ((((check_hlds__mode_info__V_69_69 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_70_70 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_71_71 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_73_73 << (MR_Integer) 5)))))))))))));
#line 687 "mode_info.m"
        }
#line 687 "mode_info.m"
        {
#line 687 "mode_info.m"
          MR_Word base;
#line 687 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 687 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_47_47));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 687 "mode_info.m"
        }
#line 687 "mode_info.m"
      }
#line 686 "mode_info.m"
  }
#line 235 "mode_info.m"
}

#line 233 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_warnings_3_p_0(
#line 233 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 233 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 233 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 233 "mode_info.m"
{
#line 678 "mode_info.m"
  {
#line 678 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 679 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));

#line 679 "mode_info.m"
    {
#line 679 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 679 "mode_info.m"
    }
#line 679 "mode_info.m"
    {
#line 679 "mode_info.m"
      MR_Word base;
#line 679 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 679 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 679 "mode_info.m"
    }
#line 678 "mode_info.m"
  }
#line 233 "mode_info.m"
}

#line 231 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_errors_3_p_0(
#line 231 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 231 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 231 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 231 "mode_info.m"
{
#line 675 "mode_info.m"
  {
#line 675 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 673 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 673 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 673 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 673 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 673 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 673 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 673 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 673 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));

#line 673 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 675 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 675 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 675 "mode_info.m"
    else
#line 676 "mode_info.m"
      {
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));

#line 676 "mode_info.m"
        {
#line 676 "mode_info.m"
          MR_Word base;
#line 676 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 676 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 676 "mode_info.m"
        }
#line 676 "mode_info.m"
      }
#line 675 "mode_info.m"
  }
#line 231 "mode_info.m"
}

#line 229 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_instvarset_3_p_0(
#line 229 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 229 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 229 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 229 "mode_info.m"
{
#line 670 "mode_info.m"
  {
#line 670 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 671 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));

#line 671 "mode_info.m"
    {
#line 671 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 671 "mode_info.m"
    }
#line 671 "mode_info.m"
    {
#line 671 "mode_info.m"
      MR_Word base;
#line 671 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 671 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 671 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 671 "mode_info.m"
    }
#line 670 "mode_info.m"
  }
#line 229 "mode_info.m"
}

#line 227 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_locked_vars_3_p_0(
#line 227 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 227 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 227 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 227 "mode_info.m"
{
#line 668 "mode_info.m"
  {
#line 668 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 669 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));

#line 669 "mode_info.m"
    {
#line 669 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 669 "mode_info.m"
    }
#line 669 "mode_info.m"
    {
#line 669 "mode_info.m"
      MR_Word base;
#line 669 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 669 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 669 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 669 "mode_info.m"
    }
#line 668 "mode_info.m"
  }
#line 227 "mode_info.m"
}

#line 225 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_instmap_3_p_0(
#line 225 "mode_info.m"
  MR_Word check_hlds__mode_info__InstMap_4,
#line 225 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_9,
#line 225 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_10)
#line 225 "mode_info.m"
{
#line 867 "mode_info.m"
  {
#line 867 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 867 "mode_info.m"
    MR_Word check_hlds__mode_info__InstMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 1)));
#line 867 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_11_11;
#line 867 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 0)));
#line 867 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 2)));
#line 867 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 3)));
#line 867 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 4)));
#line 867 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 5)));
#line 867 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 6)));
#line 867 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 7)));

#line 869 "mode_info.m"
    {
#line 869 "mode_info.m"
      check_hlds__mode_info__STATE_VARIABLE_MI_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 869 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 0) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 869 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 1) = ((MR_Box) (check_hlds__mode_info__InstMap_4));
#line 869 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 2) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 869 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 3) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 869 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 4) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 869 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 5) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 869 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 6) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 869 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 7) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 869 "mode_info.m"
    }
#line 871 "mode_info.m"
    {
#line 871 "mode_info.m"
      check_hlds__mode_info__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__mode_info__InstMap_4);
    }
#line 871 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 872 "mode_info.m"
      {
#line 872 "mode_info.m"
        check_hlds__mode_info__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__mode_info__InstMap0_6);
      }
#line 877 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 874 "mode_info.m"
      {
#line 874 "mode_info.m"
        MR_Word check_hlds__mode_info__DelayInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 2)));
#line 874 "mode_info.m"
        MR_Word check_hlds__mode_info__DelayInfo_8;
#line 614 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 0)));
#line 614 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 1)));
#line 614 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 3)));
#line 614 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 4)));
#line 614 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 5)));
#line 614 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 6)));
#line 614 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 7)));

#line 875 "mode_info.m"
        {
#line 875 "mode_info.m"
          check_hlds__delay_info__delay_info_bind_all_vars_2_p_0(check_hlds__mode_info__DelayInfo0_7, &check_hlds__mode_info__DelayInfo_8);
        }
#line 876 "mode_info.m"
        {
#line 876 "mode_info.m"
          check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__mode_info__DelayInfo_8, check_hlds__mode_info__STATE_VARIABLE_MI_11_11, check_hlds__mode_info__STATE_VARIABLE_MI_10);
#line 876 "mode_info.m"
          return;
        }
#line 874 "mode_info.m"
      }
#line 877 "mode_info.m"
    else
#line 877 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_10 = check_hlds__mode_info__STATE_VARIABLE_MI_11_11;
#line 867 "mode_info.m"
  }
#line 225 "mode_info.m"
}

#line 223 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_unset_call_context_2_p_0(
#line 223 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_4,
#line 223 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_5)
#line 223 "mode_info.m"
{
#line 862 "mode_info.m"
  {
#line 862 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 0)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 1)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 2)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 3)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 5)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 6)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 7)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 4)));

#line 667 "mode_info.m"
    {
#line 667 "mode_info.m"
      MR_Word base;
#line 667 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 667 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_5 = base;
#line 667 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 667 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 667 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 667 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 667 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 667 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 667 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 667 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 667 "mode_info.m"
    }
#line 862 "mode_info.m"
  }
#line 223 "mode_info.m"
}

#line 221 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(
#line 221 "mode_info.m"
  MR_Integer check_hlds__mode_info__ArgNum_4,
#line 221 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11,
#line 221 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12)
#line 221 "mode_info.m"
{
#line 845 "mode_info.m"
  {
#line 845 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 845 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 4)));
#line 845 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 0)));
#line 845 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 1)));
#line 845 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 2)));
#line 845 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 3)));
#line 845 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 5)));
#line 845 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 6)));
#line 845 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 7)));

#line 851 "mode_info.m"
#line 851 "mode_info.m"
    switch (MR_tag((MR_Word) check_hlds__mode_info__ModeContext0_6)) {
#line 851 "mode_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 851 "mode_info.m"
      case (MR_Integer) 0:
#line 858 "mode_info.m"
        {
#line 859 "mode_info.m"
          {
#line 859 "mode_info.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_set_call_arg_context\'/3", (MR_String) "uninitialized");
#line 859 "mode_info.m"
            return;
          }
#line 858 "mode_info.m"
        }
#line 851 "mode_info.m"
        break;
#line 851 "mode_info.m"
      case (MR_Integer) 1:
#line 848 "mode_info.m"
        {
#line 848 "mode_info.m"
          MR_Word check_hlds__mode_info__CallId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__ModeContext0_6, (MR_Integer) 0)));
#line 848 "mode_info.m"
          MR_Word check_hlds__mode_info__V_16_16;
#line 848 "mode_info.m"
          MR_Integer check_hlds__mode_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__ModeContext0_6, (MR_Integer) 1)));

#line 849 "mode_info.m"
          {
#line 849 "mode_info.m"
            check_hlds__mode_info__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 849 "mode_info.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_16_16, 0) = ((MR_Box) (check_hlds__mode_info__CallId_7));
#line 849 "mode_info.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_16_16, 1) = ((MR_Box) (check_hlds__mode_info__ArgNum_4));
#line 849 "mode_info.m"
          }
#line 667 "mode_info.m"
          {
#line 667 "mode_info.m"
            MR_Word base;
#line 667 "mode_info.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 667 "mode_info.m"
            *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12 = base;
#line 667 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 667 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 667 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 667 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 667 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 667 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 667 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 667 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 667 "mode_info.m"
          }
#line 848 "mode_info.m"
        }
#line 851 "mode_info.m"
        break;
#line 851 "mode_info.m"
      case (MR_Integer) 2:
#line 852 "mode_info.m"
        *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12 = check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11;
#line 851 "mode_info.m"
        break;
#line 851 "mode_info.m"
    }
#line 845 "mode_info.m"
  }
#line 221 "mode_info.m"
}

#line 219 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_call_context_3_p_0(
#line 219 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 219 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_2,
#line 219 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_3)
#line 219 "mode_info.m"
{
#line 840 "mode_info.m"
  {
#line 840 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;

#line 840 "mode_info.m"
    if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 842 "mode_info.m"
      {
#line 842 "mode_info.m"
        MR_Word check_hlds__mode_info__CallId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 842 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15;
#line 667 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23;
#line 667 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24;
#line 667 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25;
#line 667 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26;
#line 667 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28;
#line 667 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29;
#line 667 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30;
#line 667 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27;

#line 843 "mode_info.m"
        {
#line 843 "mode_info.m"
          check_hlds__mode_info__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 843 "mode_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_15_15, 0) = ((MR_Box) (check_hlds__mode_info__CallId_11));
#line 843 "mode_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 843 "mode_info.m"
        }
#line 667 "mode_info.m"
        check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 0)));
#line 667 "mode_info.m"
        check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 1)));
#line 667 "mode_info.m"
        check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 2)));
#line 667 "mode_info.m"
        check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 3)));
#line 667 "mode_info.m"
        check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 4)));
#line 667 "mode_info.m"
        check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 5)));
#line 667 "mode_info.m"
        check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 6)));
#line 667 "mode_info.m"
        check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 7)));
#line 667 "mode_info.m"
        {
#line 667 "mode_info.m"
          MR_Word base;
#line 667 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 667 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_3 = base;
#line 667 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 667 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 667 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 667 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 667 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 667 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 667 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 667 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 667 "mode_info.m"
        }
#line 842 "mode_info.m"
      }
#line 840 "mode_info.m"
    else
#line 840 "mode_info.m"
      {
#line 840 "mode_info.m"
        MR_Word check_hlds__mode_info__UnifyContext_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 840 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8;
#line 667 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36;
#line 667 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37;
#line 667 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38;
#line 667 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39;
#line 667 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41;
#line 667 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42;
#line 667 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43;
#line 667 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40;

#line 841 "mode_info.m"
        {
#line 841 "mode_info.m"
          check_hlds__mode_info__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 841 "mode_info.m"
          MR_hl_field(MR_mktag(2), check_hlds__mode_info__V_8_8, 0) = ((MR_Box) (check_hlds__mode_info__UnifyContext_4));
#line 841 "mode_info.m"
          MR_hl_field(MR_mktag(2), check_hlds__mode_info__V_8_8, 1) = ((MR_Box) ((MR_Integer) 0));
#line 841 "mode_info.m"
        }
#line 667 "mode_info.m"
        check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 0)));
#line 667 "mode_info.m"
        check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 1)));
#line 667 "mode_info.m"
        check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 2)));
#line 667 "mode_info.m"
        check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 3)));
#line 667 "mode_info.m"
        check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 4)));
#line 667 "mode_info.m"
        check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 5)));
#line 667 "mode_info.m"
        check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 6)));
#line 667 "mode_info.m"
        check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 7)));
#line 667 "mode_info.m"
        {
#line 667 "mode_info.m"
          MR_Word base;
#line 667 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 667 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_3 = base;
#line 667 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 667 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_37_37));
#line 667 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_38_38));
#line 667 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_39_39));
#line 667 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 667 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_41_41));
#line 667 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_42_42));
#line 667 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 667 "mode_info.m"
        }
#line 840 "mode_info.m"
      }
#line 840 "mode_info.m"
  }
#line 219 "mode_info.m"
}

#line 217 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_mode_context_3_p_0(
#line 217 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 217 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 217 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 217 "mode_info.m"
{
#line 667 "mode_info.m"
  {
#line 667 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));

#line 667 "mode_info.m"
    {
#line 667 "mode_info.m"
      MR_Word base;
#line 667 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 667 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 667 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 667 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 667 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 667 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 667 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 667 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 667 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 667 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 667 "mode_info.m"
    }
#line 667 "mode_info.m"
  }
#line 217 "mode_info.m"
}

#line 215 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_context_3_p_0(
#line 215 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 215 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 215 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 215 "mode_info.m"
{
#line 663 "mode_info.m"
  {
#line 663 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 661 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 661 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 661 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 661 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 661 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 661 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 661 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 661 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));

#line 661 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 663 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 663 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 663 "mode_info.m"
    else
#line 664 "mode_info.m"
      {
#line 664 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 664 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 664 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 664 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 664 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 664 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 664 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 664 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));

#line 664 "mode_info.m"
        {
#line 664 "mode_info.m"
          MR_Word base;
#line 664 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 664 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 664 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 664 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 664 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 664 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 664 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 664 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 664 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 664 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 664 "mode_info.m"
        }
#line 664 "mode_info.m"
      }
#line 663 "mode_info.m"
  }
#line 215 "mode_info.m"
}

#line 213 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_proc_id_3_p_0(
#line 213 "mode_info.m"
  MR_Integer check_hlds__mode_info__X_4,
#line 213 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 213 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 213 "mode_info.m"
{
#line 654 "mode_info.m"
  {
#line 654 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 655 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));

#line 655 "mode_info.m"
    {
#line 655 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 655 "mode_info.m"
    }
#line 655 "mode_info.m"
    {
#line 655 "mode_info.m"
      MR_Word base;
#line 655 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 655 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 655 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 655 "mode_info.m"
    }
#line 654 "mode_info.m"
  }
#line 213 "mode_info.m"
}

#line 211 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_pred_id_3_p_0(
#line 211 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 211 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 211 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 211 "mode_info.m"
{
#line 652 "mode_info.m"
  {
#line 652 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 653 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));

#line 653 "mode_info.m"
    {
#line 653 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 653 "mode_info.m"
    }
#line 653 "mode_info.m"
    {
#line 653 "mode_info.m"
      MR_Word base;
#line 653 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 653 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 653 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 653 "mode_info.m"
    }
#line 652 "mode_info.m"
  }
#line 211 "mode_info.m"
}

#line 209 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_module_info_3_p_0(
#line 209 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 209 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 209 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 209 "mode_info.m"
{
#line 649 "mode_info.m"
  {
#line 649 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));

#line 647 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 649 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 649 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 649 "mode_info.m"
    else
#line 650 "mode_info.m"
      {
#line 650 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 650 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 650 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 650 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 650 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 650 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 650 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 650 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));

#line 650 "mode_info.m"
        {
#line 650 "mode_info.m"
          MR_Word base;
#line 650 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 650 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 650 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 650 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 650 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 650 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 650 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 650 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 650 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 650 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 650 "mode_info.m"
        }
#line 650 "mode_info.m"
      }
#line 649 "mode_info.m"
  }
#line 209 "mode_info.m"
}

#line 204 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(
#line 204 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 204 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 204 "mode_info.m"
{
#line 643 "mode_info.m"
  {
#line 643 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 644 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 644 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 643 "mode_info.m"
  }
#line 204 "mode_info.m"
}

#line 202 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_make_ground_terms_unique_2_p_0(
#line 202 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 202 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 202 "mode_info.m"
{
#line 641 "mode_info.m"
  {
#line 641 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 642 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 642 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 641 "mode_info.m"
  }
#line 202 "mode_info.m"
}

#line 200 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_had_from_ground_term_2_p_0(
#line 200 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 200 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 200 "mode_info.m"
{
#line 639 "mode_info.m"
  {
#line 639 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 640 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 640 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 640 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 640 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 639 "mode_info.m"
  }
#line 200 "mode_info.m"
}

#line 198 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_in_from_ground_term_2_p_0(
#line 198 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 198 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 198 "mode_info.m"
{
#line 637 "mode_info.m"
  {
#line 637 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 638 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 638 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 638 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 638 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 638 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 637 "mode_info.m"
  }
#line 198 "mode_info.m"
}

#line 196 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_p_0(
#line 196 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 196 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 196 "mode_info.m"
{
#line 629 "mode_info.m"
  {
#line 629 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 630 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 630 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 629 "mode_info.m"
  }
#line 196 "mode_info.m"
}

#line 195 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_checking_extra_goals_2_p_0(
#line 195 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 195 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 195 "mode_info.m"
{
#line 635 "mode_info.m"
  {
#line 635 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 636 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 636 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 636 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 636 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 636 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 636 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 635 "mode_info.m"
  }
#line 195 "mode_info.m"
}

#line 193 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_head_inst_vars_2_p_0(
#line 193 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 193 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 193 "mode_info.m"
{
#line 633 "mode_info.m"
  {
#line 633 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 634 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 634 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 634 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 634 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 634 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 633 "mode_info.m"
  }
#line 193 "mode_info.m"
}

#line 192 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_initial_instmap_2_p_0(
#line 192 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 192 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 192 "mode_info.m"
{
#line 631 "mode_info.m"
  {
#line 631 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 632 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 632 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 632 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 632 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 632 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 632 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 632 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 632 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 632 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 632 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 631 "mode_info.m"
  }
#line 192 "mode_info.m"
}

#line 190 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(
#line 190 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 190 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 190 "mode_info.m"
{
#line 627 "mode_info.m"
  {
#line 627 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 628 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 628 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 628 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 628 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 628 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 628 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 628 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 628 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 627 "mode_info.m"
  }
#line 190 "mode_info.m"
}

#line 188 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_how_to_check_2_p_0(
#line 188 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 188 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 188 "mode_info.m"
{
#line 625 "mode_info.m"
  {
#line 625 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 626 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 626 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 626 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 626 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 626 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 626 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 626 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 626 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 626 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 626 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 626 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 626 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 626 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 626 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 626 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 626 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 625 "mode_info.m"
  }
#line 188 "mode_info.m"
}

#line 187 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(
#line 187 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 187 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 187 "mode_info.m"
{
#line 623 "mode_info.m"
  {
#line 623 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 624 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 624 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 624 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 624 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 624 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 624 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 624 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 624 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 624 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 624 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 624 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 624 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 623 "mode_info.m"
  }
#line 187 "mode_info.m"
}

#line 185 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_parallel_vars_2_p_0(
#line 185 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 185 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 185 "mode_info.m"
{
#line 621 "mode_info.m"
  {
#line 621 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 622 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 622 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 622 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 622 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 622 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 622 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 622 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 622 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 622 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 622 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 621 "mode_info.m"
  }
#line 185 "mode_info.m"
}

#line 183 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_last_checkpoint_insts_2_p_0(
#line 183 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 183 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 183 "mode_info.m"
{
#line 619 "mode_info.m"
  {
#line 619 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 620 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 620 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 620 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 620 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 620 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 620 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 620 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 620 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 619 "mode_info.m"
  }
#line 183 "mode_info.m"
}

#line 181 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(
#line 181 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 181 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 181 "mode_info.m"
{
#line 618 "mode_info.m"
  {
#line 618 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 618 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 618 "mode_info.m"
  }
#line 181 "mode_info.m"
}

#line 180 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_live_vars_2_p_0(
#line 180 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 180 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 180 "mode_info.m"
{
#line 615 "mode_info.m"
  {
#line 615 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 616 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 616 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 615 "mode_info.m"
  }
#line 180 "mode_info.m"
}

#line 179 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_delay_info_2_p_0(
#line 179 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 179 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 179 "mode_info.m"
{
#line 614 "mode_info.m"
  {
#line 614 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 614 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 614 "mode_info.m"
  }
#line 179 "mode_info.m"
}

#line 178 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_var_types_2_p_0(
#line 178 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 178 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 178 "mode_info.m"
{
#line 593 "mode_info.m"
  {
#line 593 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 594 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 594 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 594 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 594 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 594 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 593 "mode_info.m"
  }
#line 178 "mode_info.m"
}

#line 177 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_instvarset_2_p_0(
#line 177 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_3,
#line 177 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 177 "mode_info.m"
{
#line 601 "mode_info.m"
  {
#line 601 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 602 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 602 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 602 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 602 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 602 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 602 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 602 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 602 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 602 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 602 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 602 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 602 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 602 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 602 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 602 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 602 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 602 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 602 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 601 "mode_info.m"
  }
#line 177 "mode_info.m"
}

#line 176 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_varset_2_p_0(
#line 176 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 176 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 176 "mode_info.m"
{
#line 591 "mode_info.m"
  {
#line 591 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 592 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 592 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 592 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 592 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 592 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 592 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 592 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 592 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 592 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 592 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 592 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 592 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 592 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 592 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 592 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 592 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 592 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 592 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 592 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 592 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 592 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 592 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 592 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 591 "mode_info.m"
  }
#line 176 "mode_info.m"
}

#line 175 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_liveness_2_p_0(
#line 175 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_3,
#line 175 "mode_info.m"
  MR_Word * check_hlds__mode_info__LiveVars_4)
#line 175 "mode_info.m"
{
#line 934 "mode_info.m"
  {
#line 934 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 934 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVarsBag_5;
#line 934 "mode_info.m"
    MR_Word check_hlds__mode_info__SortedList_6;
#line 934 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 616 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;

#line 616 "mode_info.m"
    check_hlds__mode_info__LiveVarsBag_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 936 "mode_info.m"
    {
#line 936 "mode_info.m"
      mercury__bag__to_list_without_duplicates_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVarsBag_5, &check_hlds__mode_info__SortedList_6);
    }
#line 937 "mode_info.m"
    {
#line 937 "mode_info.m"
      parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_info__SortedList_6, check_hlds__mode_info__LiveVars_4);
#line 937 "mode_info.m"
      return;
    }
#line 934 "mode_info.m"
  }
#line 175 "mode_info.m"
}

#line 174 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_num_errors_2_p_0(
#line 174 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_3,
#line 174 "mode_info.m"
  MR_Integer * check_hlds__mode_info__NumErrors_4)
#line 174 "mode_info.m"
{
#line 883 "mode_info.m"
  {
#line 883 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 883 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 885 "mode_info.m"
    {
#line 885 "mode_info.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__mode_info__Errors_5, check_hlds__mode_info__NumErrors_4);
#line 885 "mode_info.m"
      return;
    }
#line 883 "mode_info.m"
  }
#line 174 "mode_info.m"
}

#line 172 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(
#line 172 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 172 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 172 "mode_info.m"
{
#line 611 "mode_info.m"
  {
#line 611 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 612 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 612 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 612 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 612 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 612 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 612 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 611 "mode_info.m"
  }
#line 172 "mode_info.m"
}

#line 170 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_need_to_requantify_2_p_0(
#line 170 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 170 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 170 "mode_info.m"
{
#line 609 "mode_info.m"
  {
#line 609 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 610 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 610 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 610 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 610 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 610 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 610 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 610 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 609 "mode_info.m"
  }
#line 170 "mode_info.m"
}

#line 168 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_warnings_2_p_0(
#line 168 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 168 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 168 "mode_info.m"
{
#line 607 "mode_info.m"
  {
#line 607 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 608 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 608 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 608 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 608 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 607 "mode_info.m"
  }
#line 168 "mode_info.m"
}

#line 167 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_errors_2_p_0(
#line 167 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 167 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 167 "mode_info.m"
{
#line 606 "mode_info.m"
  {
#line 606 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 606 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 606 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 606 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 606 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 606 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 606 "mode_info.m"
  }
#line 167 "mode_info.m"
}

#line 166 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_locked_vars_2_p_0(
#line 166 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 166 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 166 "mode_info.m"
{
#line 603 "mode_info.m"
  {
#line 603 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 604 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 604 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 603 "mode_info.m"
  }
#line 166 "mode_info.m"
}

#line 165 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_instmap_2_p_0(
#line 165 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 165 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 165 "mode_info.m"
{
#line 600 "mode_info.m"
  {
#line 600 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 600 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 600 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6;
#line 600 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 600 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 600 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 600 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 600 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 600 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 600 "mode_info.m"
    check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 600 "mode_info.m"
    check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 600 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 600 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 600 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 600 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 600 "mode_info.m"
  }
#line 165 "mode_info.m"
}

#line 164 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_mode_context_2_p_0(
#line 164 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 164 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 164 "mode_info.m"
{
#line 598 "mode_info.m"
  {
#line 598 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 598 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 598 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 598 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 598 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 598 "mode_info.m"
  }
#line 164 "mode_info.m"
}

#line 163 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_context_2_p_0(
#line 163 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 163 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 163 "mode_info.m"
{
#line 596 "mode_info.m"
  {
#line 596 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 596 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 596 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 596 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 596 "mode_info.m"
  }
#line 163 "mode_info.m"
}

#line 161 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_debug_modes_2_p_0(
#line 161 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 161 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 161 "mode_info.m"
{
#line 589 "mode_info.m"
  {
#line 589 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 590 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 590 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 590 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 590 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 590 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 590 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 590 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 590 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 590 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 590 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 590 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 590 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 590 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 590 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 590 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 590 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 590 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 590 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 590 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 590 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 590 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 589 "mode_info.m"
  }
#line 161 "mode_info.m"
}

#line 160 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_proc_id_2_p_0(
#line 160 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 160 "mode_info.m"
  MR_Integer * check_hlds__mode_info__X_4)
#line 160 "mode_info.m"
{
#line 587 "mode_info.m"
  {
#line 587 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 588 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 588 "mode_info.m"
    check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 588 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 588 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 588 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 588 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 588 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 588 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 588 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 588 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 588 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 588 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 588 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 588 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 588 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 588 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 588 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 588 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 588 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 588 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 588 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 588 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 588 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 587 "mode_info.m"
  }
#line 160 "mode_info.m"
}

#line 159 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_pred_id_2_p_0(
#line 159 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 159 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 159 "mode_info.m"
{
#line 585 "mode_info.m"
  {
#line 585 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 586 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 586 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 586 "mode_info.m"
    check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 586 "mode_info.m"
    check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 586 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 586 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 586 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 586 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 586 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 586 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 586 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 586 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 586 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 586 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 586 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 585 "mode_info.m"
  }
#line 159 "mode_info.m"
}

#line 158 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_insts_2_p_0(
#line 158 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_3,
#line 158 "mode_info.m"
  MR_Word * check_hlds__mode_info__Insts_4)
#line 158 "mode_info.m"
{
#line 836 "mode_info.m"
  {
#line 836 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 836 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 838 "mode_info.m"
    {
#line 838 "mode_info.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Insts_4);
#line 838 "mode_info.m"
      return;
    }
#line 836 "mode_info.m"
  }
#line 158 "mode_info.m"
}

#line 157 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_modes_2_p_0(
#line 157 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_3,
#line 157 "mode_info.m"
  MR_Word * check_hlds__mode_info__Modes_4)
#line 157 "mode_info.m"
{
#line 832 "mode_info.m"
  {
#line 832 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 832 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 834 "mode_info.m"
    {
#line 834 "mode_info.m"
      hlds__hlds_module__module_info_get_mode_table_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Modes_4);
#line 834 "mode_info.m"
      return;
    }
#line 832 "mode_info.m"
  }
#line 157 "mode_info.m"
}

#line 156 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_preds_2_p_0(
#line 156 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_3,
#line 156 "mode_info.m"
  MR_Word * check_hlds__mode_info__Preds_4)
#line 156 "mode_info.m"
{
#line 828 "mode_info.m"
  {
#line 828 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 828 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 830 "mode_info.m"
    {
#line 830 "mode_info.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Preds_4);
#line 830 "mode_info.m"
      return;
    }
#line 828 "mode_info.m"
  }
#line 156 "mode_info.m"
}

#line 155 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_module_info_2_p_0(
#line 155 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 155 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 155 "mode_info.m"
{
#line 584 "mode_info.m"
  {
#line 584 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 584 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 584 "mode_info.m"
    check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 584 "mode_info.m"
    check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 584 "mode_info.m"
    check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 584 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 584 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 584 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 584 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 584 "mode_info.m"
  }
#line 155 "mode_info.m"
}

#line 109 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_init_10_p_0(
#line 109 "mode_info.m"
  MR_Word check_hlds__mode_info__ModuleInfo_11,
#line 109 "mode_info.m"
  MR_Word check_hlds__mode_info__PredId_12,
#line 109 "mode_info.m"
  MR_Integer check_hlds__mode_info__ProcId_13,
#line 109 "mode_info.m"
  MR_Word check_hlds__mode_info__Context_14,
#line 109 "mode_info.m"
  MR_Word check_hlds__mode_info__LiveVars_15,
#line 109 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadInstVars_16,
#line 109 "mode_info.m"
  MR_Word check_hlds__mode_info__InstMap0_17,
#line 109 "mode_info.m"
  MR_Word check_hlds__mode_info__HowToCheck_18,
#line 109 "mode_info.m"
  MR_Word check_hlds__mode_info__MayChangeProc_19,
#line 109 "mode_info.m"
  MR_Word * check_hlds__mode_info__ModeInfo_20)
#line 109 "mode_info.m"
{
#line 514 "mode_info.m"
  {
#line 514 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 514 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeCtorInfo_61_61;
#line 514 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeInfo_62_62;
#line 514 "mode_info.m"
    MR_Word check_hlds__mode_info__Globals_21;
#line 514 "mode_info.m"
    MR_Word check_hlds__mode_info__DebugModes_22;
#line 514 "mode_info.m"
    MR_Integer check_hlds__mode_info__DebugModesPredId_23;
#line 514 "mode_info.m"
    MR_Integer check_hlds__mode_info__PredIdInt_24;
#line 514 "mode_info.m"
    MR_Word check_hlds__mode_info__Debug_29;
#line 514 "mode_info.m"
    MR_Word check_hlds__mode_info__ProcInfo_30;
#line 514 "mode_info.m"
    MR_Word check_hlds__mode_info__VarSet_31;
#line 514 "mode_info.m"
    MR_Word check_hlds__mode_info__VarTypes_32;
#line 514 "mode_info.m"
    MR_Word check_hlds__mode_info__InstVarSet_33;
#line 514 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVarsBag_34;
#line 514 "mode_info.m"
    MR_Word check_hlds__mode_info__LastCheckpointInstMap_35;
#line 514 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeSubInfo_48;
#line 514 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext_49;
#line 514 "mode_info.m"
    MR_Word check_hlds__mode_info__DelayInfo_50;
#line 514 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVarsBag_52;
#line 514 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59;
#line 514 "mode_info.m"
    MR_Word check_hlds__mode_info__V_60_60;
#line 522 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_55_55;

#line 515 "mode_info.m"
    {
#line 515 "mode_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__mode_info__ModuleInfo_11, &check_hlds__mode_info__Globals_21);
    }
#line 516 "mode_info.m"
    {
#line 516 "mode_info.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 60, &check_hlds__mode_info__DebugModes_22);
    }
#line 517 "mode_info.m"
    {
#line 517 "mode_info.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 64, &check_hlds__mode_info__DebugModesPredId_23);
    }
#line 519 "mode_info.m"
    {
#line 519 "mode_info.m"
      hlds__hlds_pred__pred_id_to_int_2_p_0(check_hlds__mode_info__PredId_12, &check_hlds__mode_info__PredIdInt_24);
    }
#line 521 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__DebugModes_22 == (MR_Integer) 1);
#line 521 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 521 "mode_info.m"
      {
#line 522 "mode_info.m"
        check_hlds__mode_info__V_55_55 = (MR_Integer) 0;
#line 522 "mode_info.m"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__DebugModesPredId_23 >= check_hlds__mode_info__V_55_55);
#line 522 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 522 "mode_info.m"
          {
#line 522 "mode_info.m"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__DebugModesPredId_23 == check_hlds__mode_info__PredIdInt_24);
#line 522 "mode_info.m"
            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 522 "mode_info.m"
          }
#line 522 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 521 "mode_info.m"
      }
#line 530 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 524 "mode_info.m"
      {
#line 524 "mode_info.m"
        MR_Word check_hlds__mode_info__DebugVerbose_25;
#line 524 "mode_info.m"
        MR_Word check_hlds__mode_info__DebugMinimal_26;
#line 524 "mode_info.m"
        MR_Word check_hlds__mode_info__Statistics_27;
#line 524 "mode_info.m"
        MR_Word check_hlds__mode_info__Flags_28;

#line 524 "mode_info.m"
        {
#line 524 "mode_info.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 63, &check_hlds__mode_info__DebugVerbose_25);
        }
#line 525 "mode_info.m"
        {
#line 525 "mode_info.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 62, &check_hlds__mode_info__DebugMinimal_26);
        }
#line 526 "mode_info.m"
        {
#line 526 "mode_info.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 61, &check_hlds__mode_info__Statistics_27);
        }
#line 528 "mode_info.m"
        {
#line 528 "mode_info.m"
          check_hlds__mode_info__Flags_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 528 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__Flags_28, 0) = ((MR_Box) ((check_hlds__mode_info__DebugVerbose_25 | ((((check_hlds__mode_info__DebugMinimal_26 << (MR_Integer) 1)) | ((check_hlds__mode_info__Statistics_27 << (MR_Integer) 2)))))));
#line 528 "mode_info.m"
        }
#line 529 "mode_info.m"
        {
#line 529 "mode_info.m"
          check_hlds__mode_info__Debug_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 529 "mode_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_info__Debug_29, 0) = ((MR_Box) (check_hlds__mode_info__Flags_28));
#line 529 "mode_info.m"
        }
#line 524 "mode_info.m"
      }
#line 530 "mode_info.m"
    else
#line 531 "mode_info.m"
      check_hlds__mode_info__Debug_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 534 "mode_info.m"
    {
#line 534 "mode_info.m"
      hlds__hlds_module__module_info_proc_info_4_p_0(check_hlds__mode_info__ModuleInfo_11, check_hlds__mode_info__PredId_12, check_hlds__mode_info__ProcId_13, &check_hlds__mode_info__ProcInfo_30);
    }
#line 535 "mode_info.m"
    {
#line 535 "mode_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__mode_info__ProcInfo_30, &check_hlds__mode_info__VarSet_31);
    }
#line 536 "mode_info.m"
    {
#line 536 "mode_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__mode_info__ProcInfo_30, &check_hlds__mode_info__VarTypes_32);
    }
#line 537 "mode_info.m"
    {
#line 537 "mode_info.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__mode_info__ProcInfo_30, &check_hlds__mode_info__InstVarSet_33);
    }
#line 17457 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 539 "mode_info.m"
    {
#line 539 "mode_info.m"
      check_hlds__mode_info__V_59_59 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__mode_info__TypeCtorInfo_61_61, check_hlds__mode_info__LiveVars_15);
    }
#line 17464 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeInfo_62_62 = (MR_Word) &check_hlds__mode_info_scalar_common_1[0];
#line 539 "mode_info.m"
    {
#line 539 "mode_info.m"
      mercury__bag__from_sorted_list_2_p_0(check_hlds__mode_info__TypeInfo_62_62, check_hlds__mode_info__V_59_59, &check_hlds__mode_info__LiveVarsBag_34);
    }
#line 540 "mode_info.m"
    {
#line 540 "mode_info.m"
      hlds__instmap__init_unreachable_1_p_0(&check_hlds__mode_info__LastCheckpointInstMap_35);
    }
#line 555 "mode_info.m"
    {
#line 555 "mode_info.m"
      check_hlds__mode_info__ModeSubInfo_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 555 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 0) = ((MR_Box) (check_hlds__mode_info__PredId_12));
#line 555 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 1) = ((MR_Box) (check_hlds__mode_info__ProcId_13));
#line 555 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 2) = ((MR_Box) (check_hlds__mode_info__VarSet_31));
#line 555 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 3) = ((MR_Box) (check_hlds__mode_info__VarTypes_32));
#line 555 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 4) = ((MR_Box) (check_hlds__mode_info__Debug_29));
#line 555 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 6) = ((MR_Box) (check_hlds__mode_info__LiveVarsBag_34));
#line 555 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 7) = ((MR_Box) (check_hlds__mode_info__InstVarSet_33));
#line 555 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 9) = ((MR_Box) ((check_hlds__mode_info__HowToCheck_18 | ((((check_hlds__mode_info__MayChangeProc_19 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))));
#line 555 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 10) = ((MR_Box) (check_hlds__mode_info__LastCheckpointInstMap_35));
#line 555 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 11) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 555 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 12) = ((MR_Box) (check_hlds__mode_info__InstMap0_17));
#line 555 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 13) = ((MR_Box) (check_hlds__mode_info__HeadInstVars_16));
#line 555 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 14) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 15) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((MR_Integer) 1 << (MR_Integer) 5)))))))))))));
#line 555 "mode_info.m"
    }
#line 562 "mode_info.m"
    {
#line 562 "mode_info.m"
      check_hlds__mode_errors__mode_context_init_1_p_0(&check_hlds__mode_info__ModeContext_49);
    }
#line 563 "mode_info.m"
    {
#line 563 "mode_info.m"
      check_hlds__delay_info__delay_info_init_1_p_0(&check_hlds__mode_info__DelayInfo_50);
    }
#line 565 "mode_info.m"
    {
#line 565 "mode_info.m"
      check_hlds__mode_info__V_60_60 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__mode_info__TypeCtorInfo_61_61, check_hlds__mode_info__LiveVars_15);
    }
#line 565 "mode_info.m"
    {
#line 565 "mode_info.m"
      mercury__bag__from_sorted_list_2_p_0(check_hlds__mode_info__TypeInfo_62_62, check_hlds__mode_info__V_60_60, &check_hlds__mode_info__NondetLiveVarsBag_52);
    }
#line 568 "mode_info.m"
    {
#line 568 "mode_info.m"
      MR_Word base;
#line 568 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 568 "mode_info.m"
      *check_hlds__mode_info__ModeInfo_20 = base;
#line 568 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__ModuleInfo_11));
#line 568 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__InstMap0_17));
#line 568 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__DelayInfo_50));
#line 568 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 568 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__ModeContext_49));
#line 568 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__Context_14));
#line 568 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__NondetLiveVarsBag_52));
#line 568 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__ModeSubInfo_48));
#line 568 "mode_info.m"
    }
#line 514 "mode_info.m"
  }
#line 109 "mode_info.m"
}

void mercury__check_hlds__mode_info__init(void)
{
}

void mercury__check_hlds__mode_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_call_context_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_debug_flags_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_had_from_ground_term_scope_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_how_to_check_goal_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_dupl_for_switch_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_from_ground_term_scope_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_promise_purity_scope_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_locked_vars_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_make_ground_terms_unique_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_may_change_called_proc_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_may_init_solver_vars_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_context_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_sub_info_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_stack_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_side_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_var_lock_reason_0);
}

void mercury__check_hlds__mode_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.mode_info. */
