/*
** Automatically generated from `mode_info.m'
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




#line 131 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_0[1];

#line 134 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0;

#line 137 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_1[1];

#line 140 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1;

#line 143 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_0[1];

#line 146 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_1[1];

#line 149 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_call_context_0[2];

#line 152 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_call_context_0[2];

#line 155 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_call_context_0[2];

#line 158 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_debug_flags_0_0[3];

#line 161 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_debug_flags_0_0[3];

#line 164 "check_hlds.mode_info.c"
static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_debug_flags_0_0[3];

#line 167 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0;

#line 170 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0[1];

#line 173 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_debug_flags_0[1];

#line 176 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_debug_flags_0[1];

#line 179 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_debug_flags_0[1];

#line 182 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0;

#line 185 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1;

#line 188 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_had_from_ground_term_scope_0[2];

#line 191 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_had_from_ground_term_scope_0[2];

#line 194 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_had_from_ground_term_scope_0[2];

#line 197 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0;

#line 200 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1;

#line 203 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_how_to_check_goal_0[2];

#line 206 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_how_to_check_goal_0[2];

#line 209 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_how_to_check_goal_0[2];

#line 212 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0;

#line 215 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1;

#line 218 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_dupl_for_switch_0[2];

#line 221 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_dupl_for_switch_0[2];

#line 224 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_dupl_for_switch_0[2];

#line 227 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0;

#line 230 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1;

#line 233 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_from_ground_term_scope_0[2];

#line 236 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_from_ground_term_scope_0[2];

#line 239 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_from_ground_term_scope_0[2];

#line 242 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0;

#line 245 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1;

#line 248 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_promise_purity_scope_0[2];

#line 251 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_promise_purity_scope_0[2];

#line 254 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_promise_purity_scope_0[2];

#line 257 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 260 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 263 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 266 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 269 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0;

#line 272 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1;

#line 275 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_make_ground_terms_unique_0[2];

#line 278 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_make_ground_terms_unique_0[2];

#line 281 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_make_ground_terms_unique_0[2];

#line 284 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0;

#line 287 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1;

#line 290 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_change_called_proc_0[2];

#line 293 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_change_called_proc_0[2];

#line 296 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_change_called_proc_0[2];

#line 299 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0;

#line 302 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1;

#line 305 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_init_solver_vars_0[2];

#line 308 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_init_solver_vars_0[2];

#line 311 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_init_solver_vars_0[2];

#line 314 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_0[2];

#line 317 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0;

#line 320 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_1[2];

#line 323 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1;

#line 326 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2;

#line 329 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_0[1];

#line 332 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_1[1];

#line 335 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_2[1];

#line 338 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_context_0[3];

#line 341 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_context_0[3];

#line 344 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_context_0[3];

#line 347 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

#line 350 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 353 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_info_0_0[8];

#line 356 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_info_0_0[8];

#line 359 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0;

#line 362 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0[1];

#line 365 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_info_0[1];

#line 368 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_info_0[1];

#line 371 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_info_0[1];

#line 374 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 377 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 380 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0;

#line 383 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 386 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0;

#line 389 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 392 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 395 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_warning_info_0;

#line 398 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_sub_info_0_0[24];

#line 401 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_sub_info_0_0[24];

#line 404 "check_hlds.mode_info.c"
static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_mode_sub_info_0_0[24];

#line 407 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0;

#line 410 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0[1];

#line 413 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_sub_info_0[1];

#line 416 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_sub_info_0[1];

#line 419 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_sub_info_0[1];

#line 422 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_par_conj_mode_check_0_0[2];

#line 425 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_par_conj_mode_check_0_0[2];

#line 428 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0;

#line 431 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0[1];

#line 434 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_par_conj_mode_check_0[1];

#line 437 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_par_conj_mode_check_0[1];

#line 440 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_par_conj_mode_check_0[1];

#line 443 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0;

#line 446 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1;

#line 449 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_side_0[2];

#line 452 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_side_0[2];

#line 455 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_side_0[2];

#line 458 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0;

#line 461 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1;

#line 464 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_var_lock_reason_0_2[1];

#line 467 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2;

#line 470 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3;

#line 473 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4;

#line 476 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5;

#line 479 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_0[5];

#line 482 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_1[1];

#line 485 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_var_lock_reason_0[2];

#line 488 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_var_lock_reason_0[6];

#line 491 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_var_lock_reason_0[6];

#line 494 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____call_context_0_0_10001(
#line 497 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 499 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 502 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____call_context_0_0_10001(
#line 505 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 507 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 509 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 512 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____debug_flags_0_0_10001(
#line 515 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 517 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 520 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0_10001(
#line 523 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 525 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 527 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 530 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0_10001(
#line 533 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 535 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 538 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0_10001(
#line 541 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 543 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 545 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 548 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____how_to_check_goal_0_0_10001(
#line 551 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 553 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 556 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____how_to_check_goal_0_0_10001(
#line 559 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 561 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 563 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 566 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0_10001(
#line 569 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 571 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 574 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0_10001(
#line 577 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 579 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 581 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 584 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0_10001(
#line 587 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 589 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 592 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0_10001(
#line 595 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 597 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 599 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 602 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0_10001(
#line 605 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 607 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 610 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0_10001(
#line 613 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 615 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 617 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 620 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____locked_vars_0_0_10001(
#line 623 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 625 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 628 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____locked_vars_0_0_10001(
#line 631 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 633 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 635 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 638 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0_10001(
#line 641 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 643 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 646 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0_10001(
#line 649 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 651 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 653 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 656 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_change_called_proc_0_0_10001(
#line 659 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 661 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 664 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_change_called_proc_0_0_10001(
#line 667 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 669 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 671 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 674 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_init_solver_vars_0_0_10001(
#line 677 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 679 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 682 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_init_solver_vars_0_0_10001(
#line 685 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 687 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 689 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 692 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_context_0_0_10001(
#line 695 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 697 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 700 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_context_0_0_10001(
#line 703 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 705 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 707 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 710 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0_10001(
#line 713 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 715 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 718 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0_10001(
#line 721 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 723 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 725 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 728 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0_10001(
#line 731 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 733 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 736 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0_10001(
#line 739 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 741 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 743 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 746 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0_10001(
#line 749 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 751 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 754 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0_10001(
#line 757 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 759 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 761 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 764 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0_10001(
#line 767 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 769 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 772 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0_10001(
#line 775 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 777 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 779 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 782 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____side_0_0_10001(
#line 785 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 787 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 790 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____side_0_0_10001(
#line 793 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 795 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 797 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 800 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____var_lock_reason_0_0_10001(
#line 803 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 805 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 808 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____var_lock_reason_0_0_10001(
#line 811 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 813 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 815 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 739 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_108_100_95_97_110_100_95_110_101_119_95_109_97_121_95_100_105_102_102_101_114_95_95_91_49_93_95_48_2_p_0(
#line 739 "mode_info.m"
  MR_Box check_hlds__mode_info__HeadVar__1_1,
#line 739 "mode_info.m"
  MR_Box check_hlds__mode_info__HeadVar__2_2);

#line 354 "mode_info.m"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0(
#line 354 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 354 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 354 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3);

#line 354 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0(
#line 354 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 354 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2);

#line 998 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(
#line 998 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 998 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_7,
#line 998 "mode_info.m"
  MR_Word * check_hlds__mode_info__Reason_8);

#line 739 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info__old_and_new_may_differ_2_p_0(
#line 739 "mode_info.m"
  MR_Word check_hlds__mode_info__TypeInfo_for_T_5,
#line 739 "mode_info.m"
  MR_Box check_hlds__mode_info__HeadVar__1_1,
#line 739 "mode_info.m"
  MR_Box check_hlds__mode_info__HeadVar__2_2);


static /* final */ const MR_Box check_hlds__mode_info_scalar_common_1[11][2];

static /* final */ const MR_Box check_hlds__mode_info_scalar_common_2[2][3];




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
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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

static /* final */ const MR_Box check_hlds__mode_info_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_var_lock_reason_0)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_1[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_1[9])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};



#include "check_hlds.mode_info.mh"
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



#line 963 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0
};

#line 968 "check_hlds.mode_info.c"
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

#line 983 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0
};

#line 988 "check_hlds.mode_info.c"
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

#line 1003 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0
};

#line 1008 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1
};

#line 1013 "check_hlds.mode_info.c"
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

#line 1027 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_call_context_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0
};

#line 1033 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_call_context_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1039 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_call_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____call_context_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____call_context_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "call_context",
  {
    check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_call_context_0
  },
  {
    check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_call_context_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_call_context_0
};

#line 1060 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_debug_flags_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1067 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_debug_flags_0_0[3] = {
  (MR_String) "verbose",
  (MR_String) "minimal",
  (MR_String) "statistics"
};

#line 1074 "check_hlds.mode_info.c"
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

#line 1093 "check_hlds.mode_info.c"
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

#line 1108 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0
};

#line 1113 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_debug_flags_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0
  }
};

#line 1122 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_debug_flags_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0
};

#line 1127 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_debug_flags_0[1] = {
  (MR_Integer) 0
};

#line 1132 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_debug_flags_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____debug_flags_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____debug_flags_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "debug_flags",
  {
    check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_debug_flags_0
  },
  {
    check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_debug_flags_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_debug_flags_0
};

#line 1153 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0 = {
  (MR_String) "had_from_ground_term_scope",
  (MR_Integer) 0
};

#line 1159 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1 = {
  (MR_String) "did_not_have_from_ground_term_scope",
  (MR_Integer) 1
};

#line 1165 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_had_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1
};

#line 1171 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_had_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0
};

#line 1177 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_had_from_ground_term_scope_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1183 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_had_from_ground_term_scope_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "had_from_ground_term_scope",
  {
    check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_had_from_ground_term_scope_0
  },
  {
    check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_had_from_ground_term_scope_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_had_from_ground_term_scope_0
};

#line 1204 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0 = {
  (MR_String) "check_modes",
  (MR_Integer) 0
};

#line 1210 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1 = {
  (MR_String) "check_unique_modes",
  (MR_Integer) 1
};

#line 1216 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_how_to_check_goal_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1
};

#line 1222 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_how_to_check_goal_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1
};

#line 1228 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_how_to_check_goal_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1234 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_how_to_check_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____how_to_check_goal_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____how_to_check_goal_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "how_to_check_goal",
  {
    check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_how_to_check_goal_0
  },
  {
    check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_how_to_check_goal_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_how_to_check_goal_0
};

#line 1255 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0 = {
  (MR_String) "in_dupl_for_switch",
  (MR_Integer) 0
};

#line 1261 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1 = {
  (MR_String) "not_in_dupl_for_switch",
  (MR_Integer) 1
};

#line 1267 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_dupl_for_switch_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1
};

#line 1273 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_dupl_for_switch_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1
};

#line 1279 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_dupl_for_switch_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1285 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_dupl_for_switch_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____in_dupl_for_switch_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____in_dupl_for_switch_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "in_dupl_for_switch",
  {
    check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_dupl_for_switch_0
  },
  {
    check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_dupl_for_switch_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_dupl_for_switch_0
};

#line 1306 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0 = {
  (MR_String) "in_from_ground_term_scope",
  (MR_Integer) 0
};

#line 1312 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1 = {
  (MR_String) "not_in_from_ground_term_scope",
  (MR_Integer) 1
};

#line 1318 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1
};

#line 1324 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1
};

#line 1330 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_from_ground_term_scope_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1336 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_from_ground_term_scope_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "in_from_ground_term_scope",
  {
    check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_from_ground_term_scope_0
  },
  {
    check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_from_ground_term_scope_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_from_ground_term_scope_0
};

#line 1357 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0 = {
  (MR_String) "in_promise_purity_scope",
  (MR_Integer) 0
};

#line 1363 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1 = {
  (MR_String) "not_in_promise_purity_scope",
  (MR_Integer) 1
};

#line 1369 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_promise_purity_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1
};

#line 1375 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_promise_purity_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1
};

#line 1381 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_promise_purity_scope_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1387 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_promise_purity_scope_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____in_promise_purity_scope_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____in_promise_purity_scope_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "in_promise_purity_scope",
  {
    check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_promise_purity_scope_0
  },
  {
    check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_promise_purity_scope_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_promise_purity_scope_0
};

#line 1408 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1416 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1424 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_var_lock_reason_0,
    (MR_TypeInfo) &check_hlds__mode_info__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1433 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1441 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_locked_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_info____Unify____locked_vars_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____locked_vars_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "locked_vars",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1462 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0 = {
  (MR_String) "make_ground_terms_unique",
  (MR_Integer) 0
};

#line 1468 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1 = {
  (MR_String) "do_not_make_ground_terms_unique",
  (MR_Integer) 1
};

#line 1474 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_make_ground_terms_unique_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1
};

#line 1480 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_make_ground_terms_unique_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0
};

#line 1486 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_make_ground_terms_unique_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1492 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_make_ground_terms_unique_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____make_ground_terms_unique_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____make_ground_terms_unique_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "make_ground_terms_unique",
  {
    check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_make_ground_terms_unique_0
  },
  {
    check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_make_ground_terms_unique_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_make_ground_terms_unique_0
};

#line 1513 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0 = {
  (MR_String) "may_change_called_proc",
  (MR_Integer) 0
};

#line 1519 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1 = {
  (MR_String) "may_not_change_called_proc",
  (MR_Integer) 1
};

#line 1525 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_change_called_proc_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1
};

#line 1531 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_change_called_proc_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1
};

#line 1537 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_change_called_proc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1543 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_may_change_called_proc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____may_change_called_proc_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____may_change_called_proc_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "may_change_called_proc",
  {
    check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_change_called_proc_0
  },
  {
    check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_change_called_proc_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_change_called_proc_0
};

#line 1564 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0 = {
  (MR_String) "may_init_solver_vars",
  (MR_Integer) 0
};

#line 1570 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1 = {
  (MR_String) "may_not_init_solver_vars",
  (MR_Integer) 1
};

#line 1576 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_init_solver_vars_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1
};

#line 1582 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_init_solver_vars_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1
};

#line 1588 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_init_solver_vars_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1594 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_may_init_solver_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____may_init_solver_vars_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____may_init_solver_vars_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "may_init_solver_vars",
  {
    check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_init_solver_vars_0
  },
  {
    check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_init_solver_vars_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_init_solver_vars_0
};

#line 1615 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1621 "check_hlds.mode_info.c"
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

#line 1636 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_side_0
};

#line 1642 "check_hlds.mode_info.c"
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

#line 1657 "check_hlds.mode_info.c"
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

#line 1672 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2
};

#line 1677 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0
};

#line 1682 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_2[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1
};

#line 1687 "check_hlds.mode_info.c"
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

#line 1706 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_context_0[3] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2
};

#line 1713 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_context_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1720 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____mode_context_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____mode_context_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "mode_context",
  {
    check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_context_0
  },
  {
    check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_context_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_context_0
};

#line 1741 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0
  }
};

#line 1749 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1757 "check_hlds.mode_info.c"
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

#line 1769 "check_hlds.mode_info.c"
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

#line 1781 "check_hlds.mode_info.c"
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

#line 1796 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0
};

#line 1801 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0
  }
};

#line 1810 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_info_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0
};

#line 1815 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_info_0[1] = {
  (MR_Integer) 0
};

#line 1820 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____mode_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____mode_info_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "mode_info",
  {
    check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_info_0
  },
  {
    check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_info_0
};

#line 1841 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1849 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1858 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_debug_flags_0
  }
};

#line 1866 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1874 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0
  }
};

#line 1882 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1890 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1899 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_warning_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0
  }
};

#line 1907 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_sub_info_0_0[24] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
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

#line 1935 "check_hlds.mode_info.c"
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

#line 1963 "check_hlds.mode_info.c"
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

#line 2087 "check_hlds.mode_info.c"
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

#line 2102 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0
};

#line 2107 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0
  }
};

#line 2116 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_sub_info_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0
};

#line 2121 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_sub_info_0[1] = {
  (MR_Integer) 0
};

#line 2126 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_sub_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____mode_sub_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____mode_sub_info_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "mode_sub_info",
  {
    check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_sub_info_0
  },
  {
    check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_sub_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_sub_info_0
};

#line 2147 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_par_conj_mode_check_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_info__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2153 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_par_conj_mode_check_0_0[2] = {
  (MR_String) "par_conj_nonlocals",
  (MR_String) "par_conj_bound"
};

#line 2159 "check_hlds.mode_info.c"
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

#line 2174 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0
};

#line 2179 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_par_conj_mode_check_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0
  }
};

#line 2188 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_par_conj_mode_check_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0
};

#line 2193 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_par_conj_mode_check_0[1] = {
  (MR_Integer) 0
};

#line 2198 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____par_conj_mode_check_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____par_conj_mode_check_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "par_conj_mode_check",
  {
    check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_par_conj_mode_check_0
  },
  {
    check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_par_conj_mode_check_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_par_conj_mode_check_0
};

#line 2219 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_stack_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "par_conj_mode_check_stack",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2240 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0 = {
  (MR_String) "left",
  (MR_Integer) 0
};

#line 2246 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1 = {
  (MR_String) "right",
  (MR_Integer) 1
};

#line 2252 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_side_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1
};

#line 2258 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_side_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1
};

#line 2264 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_side_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2270 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_side_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____side_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____side_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "side",
  {
    check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_side_0
  },
  {
    check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_side_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_side_0
};

#line 2291 "check_hlds.mode_info.c"
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

#line 2306 "check_hlds.mode_info.c"
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

#line 2321 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_var_lock_reason_0_2[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
};

#line 2326 "check_hlds.mode_info.c"
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

#line 2341 "check_hlds.mode_info.c"
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

#line 2356 "check_hlds.mode_info.c"
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

#line 2371 "check_hlds.mode_info.c"
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

#line 2386 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_0[5] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5
};

#line 2395 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2
};

#line 2400 "check_hlds.mode_info.c"
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

#line 2414 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_var_lock_reason_0[6] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3
};

#line 2424 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_var_lock_reason_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 4
};

#line 2434 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_var_lock_reason_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____var_lock_reason_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____var_lock_reason_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "var_lock_reason",
  {
    check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_var_lock_reason_0
  },
  {
    check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_var_lock_reason_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_var_lock_reason_0
};

#line 2455 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____call_context_0_0_10001(
#line 2458 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2460 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2462 "check_hlds.mode_info.c"
{
#line 2464 "check_hlds.mode_info.c"
  {
#line 2466 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2469 "check_hlds.mode_info.c"
    {
#line 2471 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____call_context_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2474 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2476 "check_hlds.mode_info.c"
  }
#line 2478 "check_hlds.mode_info.c"
}

#line 2481 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____call_context_0_0_10001(
#line 2484 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2486 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2488 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2490 "check_hlds.mode_info.c"
{
#line 2492 "check_hlds.mode_info.c"
  {
#line 2494 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2497 "check_hlds.mode_info.c"
    {
#line 2499 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____call_context_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2502 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2504 "check_hlds.mode_info.c"
  }
#line 2506 "check_hlds.mode_info.c"
}

#line 2509 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____debug_flags_0_0_10001(
#line 2512 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2514 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2516 "check_hlds.mode_info.c"
{
#line 2518 "check_hlds.mode_info.c"
  {
#line 2520 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2523 "check_hlds.mode_info.c"
    {
#line 2525 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____debug_flags_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2528 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2530 "check_hlds.mode_info.c"
  }
#line 2532 "check_hlds.mode_info.c"
}

#line 2535 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0_10001(
#line 2538 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2540 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2542 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2544 "check_hlds.mode_info.c"
{
#line 2546 "check_hlds.mode_info.c"
  {
#line 2548 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2551 "check_hlds.mode_info.c"
    {
#line 2553 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____debug_flags_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2556 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2558 "check_hlds.mode_info.c"
  }
#line 2560 "check_hlds.mode_info.c"
}

#line 2563 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0_10001(
#line 2566 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2568 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2570 "check_hlds.mode_info.c"
{
#line 2572 "check_hlds.mode_info.c"
  {
#line 2574 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2577 "check_hlds.mode_info.c"
    {
#line 2579 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2582 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2584 "check_hlds.mode_info.c"
  }
#line 2586 "check_hlds.mode_info.c"
}

#line 2589 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0_10001(
#line 2592 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2594 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2596 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2598 "check_hlds.mode_info.c"
{
#line 2600 "check_hlds.mode_info.c"
  {
#line 2602 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2605 "check_hlds.mode_info.c"
    {
#line 2607 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2610 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2612 "check_hlds.mode_info.c"
  }
#line 2614 "check_hlds.mode_info.c"
}

#line 2617 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____how_to_check_goal_0_0_10001(
#line 2620 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2622 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2624 "check_hlds.mode_info.c"
{
#line 2626 "check_hlds.mode_info.c"
  {
#line 2628 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2631 "check_hlds.mode_info.c"
    {
#line 2633 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____how_to_check_goal_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2636 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2638 "check_hlds.mode_info.c"
  }
#line 2640 "check_hlds.mode_info.c"
}

#line 2643 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____how_to_check_goal_0_0_10001(
#line 2646 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2648 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2650 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2652 "check_hlds.mode_info.c"
{
#line 2654 "check_hlds.mode_info.c"
  {
#line 2656 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2659 "check_hlds.mode_info.c"
    {
#line 2661 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____how_to_check_goal_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2664 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2666 "check_hlds.mode_info.c"
  }
#line 2668 "check_hlds.mode_info.c"
}

#line 2671 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0_10001(
#line 2674 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2676 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2678 "check_hlds.mode_info.c"
{
#line 2680 "check_hlds.mode_info.c"
  {
#line 2682 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2685 "check_hlds.mode_info.c"
    {
#line 2687 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____in_dupl_for_switch_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2690 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2692 "check_hlds.mode_info.c"
  }
#line 2694 "check_hlds.mode_info.c"
}

#line 2697 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0_10001(
#line 2700 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2702 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2704 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2706 "check_hlds.mode_info.c"
{
#line 2708 "check_hlds.mode_info.c"
  {
#line 2710 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2713 "check_hlds.mode_info.c"
    {
#line 2715 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____in_dupl_for_switch_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2718 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2720 "check_hlds.mode_info.c"
  }
#line 2722 "check_hlds.mode_info.c"
}

#line 2725 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0_10001(
#line 2728 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2730 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2732 "check_hlds.mode_info.c"
{
#line 2734 "check_hlds.mode_info.c"
  {
#line 2736 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2739 "check_hlds.mode_info.c"
    {
#line 2741 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2744 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2746 "check_hlds.mode_info.c"
  }
#line 2748 "check_hlds.mode_info.c"
}

#line 2751 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0_10001(
#line 2754 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2756 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2758 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2760 "check_hlds.mode_info.c"
{
#line 2762 "check_hlds.mode_info.c"
  {
#line 2764 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2767 "check_hlds.mode_info.c"
    {
#line 2769 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2772 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2774 "check_hlds.mode_info.c"
  }
#line 2776 "check_hlds.mode_info.c"
}

#line 2779 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0_10001(
#line 2782 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2784 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2786 "check_hlds.mode_info.c"
{
#line 2788 "check_hlds.mode_info.c"
  {
#line 2790 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2793 "check_hlds.mode_info.c"
    {
#line 2795 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____in_promise_purity_scope_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2798 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2800 "check_hlds.mode_info.c"
  }
#line 2802 "check_hlds.mode_info.c"
}

#line 2805 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0_10001(
#line 2808 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2810 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2812 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2814 "check_hlds.mode_info.c"
{
#line 2816 "check_hlds.mode_info.c"
  {
#line 2818 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2821 "check_hlds.mode_info.c"
    {
#line 2823 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____in_promise_purity_scope_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2826 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2828 "check_hlds.mode_info.c"
  }
#line 2830 "check_hlds.mode_info.c"
}

#line 2833 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____locked_vars_0_0_10001(
#line 2836 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2838 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2840 "check_hlds.mode_info.c"
{
#line 2842 "check_hlds.mode_info.c"
  {
#line 2844 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2847 "check_hlds.mode_info.c"
    {
#line 2849 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____locked_vars_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2852 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2854 "check_hlds.mode_info.c"
  }
#line 2856 "check_hlds.mode_info.c"
}

#line 2859 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____locked_vars_0_0_10001(
#line 2862 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2864 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2866 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2868 "check_hlds.mode_info.c"
{
#line 2870 "check_hlds.mode_info.c"
  {
#line 2872 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2875 "check_hlds.mode_info.c"
    {
#line 2877 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____locked_vars_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2880 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2882 "check_hlds.mode_info.c"
  }
#line 2884 "check_hlds.mode_info.c"
}

#line 2887 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0_10001(
#line 2890 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2892 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2894 "check_hlds.mode_info.c"
{
#line 2896 "check_hlds.mode_info.c"
  {
#line 2898 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2901 "check_hlds.mode_info.c"
    {
#line 2903 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____make_ground_terms_unique_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2906 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2908 "check_hlds.mode_info.c"
  }
#line 2910 "check_hlds.mode_info.c"
}

#line 2913 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0_10001(
#line 2916 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2918 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2920 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2922 "check_hlds.mode_info.c"
{
#line 2924 "check_hlds.mode_info.c"
  {
#line 2926 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2929 "check_hlds.mode_info.c"
    {
#line 2931 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____make_ground_terms_unique_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2934 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2936 "check_hlds.mode_info.c"
  }
#line 2938 "check_hlds.mode_info.c"
}

#line 2941 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_change_called_proc_0_0_10001(
#line 2944 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2946 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2948 "check_hlds.mode_info.c"
{
#line 2950 "check_hlds.mode_info.c"
  {
#line 2952 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2955 "check_hlds.mode_info.c"
    {
#line 2957 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____may_change_called_proc_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2960 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2962 "check_hlds.mode_info.c"
  }
#line 2964 "check_hlds.mode_info.c"
}

#line 2967 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_change_called_proc_0_0_10001(
#line 2970 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2972 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2974 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2976 "check_hlds.mode_info.c"
{
#line 2978 "check_hlds.mode_info.c"
  {
#line 2980 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2983 "check_hlds.mode_info.c"
    {
#line 2985 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____may_change_called_proc_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2988 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2990 "check_hlds.mode_info.c"
  }
#line 2992 "check_hlds.mode_info.c"
}

#line 2995 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_init_solver_vars_0_0_10001(
#line 2998 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3000 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3002 "check_hlds.mode_info.c"
{
#line 3004 "check_hlds.mode_info.c"
  {
#line 3006 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3009 "check_hlds.mode_info.c"
    {
#line 3011 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____may_init_solver_vars_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3014 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3016 "check_hlds.mode_info.c"
  }
#line 3018 "check_hlds.mode_info.c"
}

#line 3021 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_init_solver_vars_0_0_10001(
#line 3024 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3026 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3028 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3030 "check_hlds.mode_info.c"
{
#line 3032 "check_hlds.mode_info.c"
  {
#line 3034 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3037 "check_hlds.mode_info.c"
    {
#line 3039 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____may_init_solver_vars_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3042 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3044 "check_hlds.mode_info.c"
  }
#line 3046 "check_hlds.mode_info.c"
}

#line 3049 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_context_0_0_10001(
#line 3052 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3054 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3056 "check_hlds.mode_info.c"
{
#line 3058 "check_hlds.mode_info.c"
  {
#line 3060 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3063 "check_hlds.mode_info.c"
    {
#line 3065 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_context_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3068 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3070 "check_hlds.mode_info.c"
  }
#line 3072 "check_hlds.mode_info.c"
}

#line 3075 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_context_0_0_10001(
#line 3078 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3080 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3082 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3084 "check_hlds.mode_info.c"
{
#line 3086 "check_hlds.mode_info.c"
  {
#line 3088 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3091 "check_hlds.mode_info.c"
    {
#line 3093 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____mode_context_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3096 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3098 "check_hlds.mode_info.c"
  }
#line 3100 "check_hlds.mode_info.c"
}

#line 3103 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0_10001(
#line 3106 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3108 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3110 "check_hlds.mode_info.c"
{
#line 3112 "check_hlds.mode_info.c"
  {
#line 3114 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3117 "check_hlds.mode_info.c"
    {
#line 3119 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_info_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3122 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3124 "check_hlds.mode_info.c"
  }
#line 3126 "check_hlds.mode_info.c"
}

#line 3129 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0_10001(
#line 3132 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3134 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3136 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3138 "check_hlds.mode_info.c"
{
#line 3140 "check_hlds.mode_info.c"
  {
#line 3142 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3145 "check_hlds.mode_info.c"
    {
#line 3147 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____mode_info_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3150 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3152 "check_hlds.mode_info.c"
  }
#line 3154 "check_hlds.mode_info.c"
}

#line 3157 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0_10001(
#line 3160 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3162 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3164 "check_hlds.mode_info.c"
{
#line 3166 "check_hlds.mode_info.c"
  {
#line 3168 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3171 "check_hlds.mode_info.c"
    {
#line 3173 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_sub_info_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3176 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3178 "check_hlds.mode_info.c"
  }
#line 3180 "check_hlds.mode_info.c"
}

#line 3183 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0_10001(
#line 3186 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3188 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3190 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3192 "check_hlds.mode_info.c"
{
#line 3194 "check_hlds.mode_info.c"
  {
#line 3196 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3199 "check_hlds.mode_info.c"
    {
#line 3201 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____mode_sub_info_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3204 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3206 "check_hlds.mode_info.c"
  }
#line 3208 "check_hlds.mode_info.c"
}

#line 3211 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0_10001(
#line 3214 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3216 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3218 "check_hlds.mode_info.c"
{
#line 3220 "check_hlds.mode_info.c"
  {
#line 3222 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3225 "check_hlds.mode_info.c"
    {
#line 3227 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____par_conj_mode_check_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3230 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3232 "check_hlds.mode_info.c"
  }
#line 3234 "check_hlds.mode_info.c"
}

#line 3237 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0_10001(
#line 3240 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3242 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3244 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3246 "check_hlds.mode_info.c"
{
#line 3248 "check_hlds.mode_info.c"
  {
#line 3250 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3253 "check_hlds.mode_info.c"
    {
#line 3255 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____par_conj_mode_check_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3258 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3260 "check_hlds.mode_info.c"
  }
#line 3262 "check_hlds.mode_info.c"
}

#line 3265 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0_10001(
#line 3268 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3270 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3272 "check_hlds.mode_info.c"
{
#line 3274 "check_hlds.mode_info.c"
  {
#line 3276 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3279 "check_hlds.mode_info.c"
    {
#line 3281 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3284 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3286 "check_hlds.mode_info.c"
  }
#line 3288 "check_hlds.mode_info.c"
}

#line 3291 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0_10001(
#line 3294 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3296 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3298 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3300 "check_hlds.mode_info.c"
{
#line 3302 "check_hlds.mode_info.c"
  {
#line 3304 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3307 "check_hlds.mode_info.c"
    {
#line 3309 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3312 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3314 "check_hlds.mode_info.c"
  }
#line 3316 "check_hlds.mode_info.c"
}

#line 3319 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____side_0_0_10001(
#line 3322 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3324 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3326 "check_hlds.mode_info.c"
{
#line 3328 "check_hlds.mode_info.c"
  {
#line 3330 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3333 "check_hlds.mode_info.c"
    {
#line 3335 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____side_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3338 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3340 "check_hlds.mode_info.c"
  }
#line 3342 "check_hlds.mode_info.c"
}

#line 3345 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____side_0_0_10001(
#line 3348 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3350 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3352 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3354 "check_hlds.mode_info.c"
{
#line 3356 "check_hlds.mode_info.c"
  {
#line 3358 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3361 "check_hlds.mode_info.c"
    {
#line 3363 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____side_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3366 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3368 "check_hlds.mode_info.c"
  }
#line 3370 "check_hlds.mode_info.c"
}

#line 3373 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____var_lock_reason_0_0_10001(
#line 3376 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3378 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3380 "check_hlds.mode_info.c"
{
#line 3382 "check_hlds.mode_info.c"
  {
#line 3384 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3387 "check_hlds.mode_info.c"
    {
#line 3389 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____var_lock_reason_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3392 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3394 "check_hlds.mode_info.c"
  }
#line 3396 "check_hlds.mode_info.c"
}

#line 3399 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____var_lock_reason_0_0_10001(
#line 3402 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3404 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3406 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3408 "check_hlds.mode_info.c"
{
#line 3410 "check_hlds.mode_info.c"
  {
#line 3412 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3415 "check_hlds.mode_info.c"
    {
#line 3417 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____var_lock_reason_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3420 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3422 "check_hlds.mode_info.c"
  }
#line 3424 "check_hlds.mode_info.c"
}

#line 739 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_108_100_95_97_110_100_95_110_101_119_95_109_97_121_95_100_105_102_102_101_114_95_95_91_49_93_95_48_2_p_0(
#line 739 "mode_info.m"
  MR_Box check_hlds__mode_info__HeadVar__1_1,
#line 739 "mode_info.m"
  MR_Box check_hlds__mode_info__HeadVar__2_2)
#line 739 "mode_info.m"
{
#line 744 "mode_info.m"
  {
#line 744 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeInfo_for_T_6;

#line 747 "mode_info.m"
{
#define MR_PROC_LABEL check_hlds__mode_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_108_100_95_97_110_100_95_110_101_119_95_109_97_121_95_100_105_102_102_101_114_95_95_91_49_93_95_48_2_p_0

	MR_Word Old;
	MR_Word New;
	MR_bool SUCCESS_INDICATOR;

	Old = (MR_Word) check_hlds__mode_info__HeadVar__1_1 ;
	New = (MR_Word) check_hlds__mode_info__HeadVar__2_2 ;
		{
#line 747 "mode_info.m"

    if (((MR_Unsigned) Old) == ((MR_Unsigned) New)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        SUCCESS_INDICATOR = MR_TRUE;
    }

#line 3462 "check_hlds.mode_info.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 747 "mode_info.m"
	}
check_hlds__mode_info__succeeded  = SUCCESS_INDICATOR;
}
#line 744 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 744 "mode_info.m"
  }
#line 739 "mode_info.m"
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
#line 3502 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "mode_info.m"
    else
#line 67 "mode_info.m"
      if ((check_hlds__mode_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 67 "mode_info.m"
        if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 67 "mode_info.m"
          *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "mode_info.m"
        else
#line 67 "mode_info.m"
          if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 67 "mode_info.m"
            *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
          else
#line 67 "mode_info.m"
            if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 67 "mode_info.m"
              *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
            else
#line 67 "mode_info.m"
              if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 67 "mode_info.m"
                *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
              else
#line 67 "mode_info.m"
                if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 67 "mode_info.m"
                  *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                else
#line 3538 "check_hlds.mode_info.c"
                  *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
      else
#line 67 "mode_info.m"
        if ((check_hlds__mode_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 67 "mode_info.m"
          if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 67 "mode_info.m"
            *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
          else
#line 67 "mode_info.m"
            if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 67 "mode_info.m"
              *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "mode_info.m"
            else
#line 67 "mode_info.m"
              if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 67 "mode_info.m"
                *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
              else
#line 67 "mode_info.m"
                if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 67 "mode_info.m"
                  *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                else
#line 67 "mode_info.m"
                  if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 67 "mode_info.m"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                  else
#line 3574 "check_hlds.mode_info.c"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
        else
#line 67 "mode_info.m"
          if ((check_hlds__mode_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 67 "mode_info.m"
            if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 67 "mode_info.m"
              *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
            else
#line 67 "mode_info.m"
              if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 67 "mode_info.m"
                *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
              else
#line 67 "mode_info.m"
                if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 67 "mode_info.m"
                  *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "mode_info.m"
                else
#line 67 "mode_info.m"
                  if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 67 "mode_info.m"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                  else
#line 67 "mode_info.m"
                    if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                    else
#line 3610 "check_hlds.mode_info.c"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
          else
#line 67 "mode_info.m"
            if ((check_hlds__mode_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 67 "mode_info.m"
              if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 67 "mode_info.m"
                *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
              else
#line 67 "mode_info.m"
                if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 67 "mode_info.m"
                  *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                else
#line 67 "mode_info.m"
                  if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 67 "mode_info.m"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                  else
#line 67 "mode_info.m"
                    if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "mode_info.m"
                    else
#line 67 "mode_info.m"
                      if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 67 "mode_info.m"
                        *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                      else
#line 3646 "check_hlds.mode_info.c"
                        *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
            else
#line 67 "mode_info.m"
              if ((check_hlds__mode_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 67 "mode_info.m"
                if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 67 "mode_info.m"
                  *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                else
#line 67 "mode_info.m"
                  if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 67 "mode_info.m"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                  else
#line 67 "mode_info.m"
                    if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 67 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                    else
#line 67 "mode_info.m"
                      if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 67 "mode_info.m"
                        *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                      else
#line 67 "mode_info.m"
                        if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 67 "mode_info.m"
                          *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "mode_info.m"
                        else
#line 3682 "check_hlds.mode_info.c"
                          *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
              else
#line 67 "mode_info.m"
                {
#line 67 "mode_info.m"
                  MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));

#line 67 "mode_info.m"
                  if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3693 "check_hlds.mode_info.c"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                  else
#line 67 "mode_info.m"
                    if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3699 "check_hlds.mode_info.c"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                    else
#line 67 "mode_info.m"
                      if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3705 "check_hlds.mode_info.c"
                        *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                      else
#line 67 "mode_info.m"
                        if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3711 "check_hlds.mode_info.c"
                          *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                        else
#line 67 "mode_info.m"
                          if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 3717 "check_hlds.mode_info.c"
                            *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                          else
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
      if ((check_hlds__mode_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
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
      else
#line 67 "mode_info.m"
        if ((check_hlds__mode_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
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
        else
#line 67 "mode_info.m"
          if ((check_hlds__mode_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
          else
#line 67 "mode_info.m"
            if ((check_hlds__mode_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
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
            else
#line 67 "mode_info.m"
              if ((check_hlds__mode_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
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
              else
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
#line 3862 "check_hlds.mode_info.c"
                      check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_7_7 == check_hlds__mode_info__V_8_8);
#line 67 "mode_info.m"
                    }
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
#line 3916 "check_hlds.mode_info.c"
  {
#line 3918 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 3921 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3923 "check_hlds.mode_info.c"
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
#line 4014 "check_hlds.mode_info.c"
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
#line 4036 "check_hlds.mode_info.c"
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

#line 4103 "check_hlds.mode_info.c"
        {
#line 4105 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[3], ((MR_Box) (check_hlds__mode_info__V_3_3)), ((MR_Box) (check_hlds__mode_info__V_5_5)));
        }
#line 147 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 147 "mode_info.m"
          {
#line 4112 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeInfo_10_10 = (MR_Word) &check_hlds__mode_info_scalar_common_1[3];
#line 4114 "check_hlds.mode_info.c"
            {
#line 4116 "check_hlds.mode_info.c"
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

#line 354 "mode_info.m"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0(
#line 354 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 354 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 354 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 354 "mode_info.m"
{
#line 354 "mode_info.m"
  {
#line 354 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 354 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_75 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 354 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_76 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 354 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_75 == check_hlds__mode_info__CastY_76);
#line 354 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 4154 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 354 "mode_info.m"
    else
#line 354 "mode_info.m"
      {
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 354 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 8)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 10)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 12)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 13)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));
#line 354 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 1)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 2)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 3)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 4)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 5)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 6)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 7)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 8)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 10)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 12)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 13)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 14)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52;

#line 354 "mode_info.m"
        {
#line 354 "mode_info.m"
          hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__mode_info__V_52_52, check_hlds__mode_info__V_4_4, check_hlds__mode_info__V_28_28);
        }
#line 4264 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_52_52 == (MR_Integer) 0);
#line 354 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_52_52;
#line 354 "mode_info.m"
        else
#line 354 "mode_info.m"
          {
#line 354 "mode_info.m"
            MR_Word check_hlds__mode_info__V_53_53;

#line 354 "mode_info.m"
            {
#line 354 "mode_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_53_53, check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_29_29);
            }
#line 4284 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_53_53 == (MR_Integer) 0);
#line 354 "mode_info.m"
            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_53_53;
#line 354 "mode_info.m"
            else
#line 354 "mode_info.m"
              {
#line 354 "mode_info.m"
                MR_Word check_hlds__mode_info__V_54_54;

#line 354 "mode_info.m"
                {
#line 354 "mode_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[5], &check_hlds__mode_info__V_54_54, ((MR_Box) (check_hlds__mode_info__V_6_6)), ((MR_Box) (check_hlds__mode_info__V_30_30)));
                }
#line 4304 "check_hlds.mode_info.c"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_54_54 == (MR_Integer) 0);
#line 354 "mode_info.m"
                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_54_54;
#line 354 "mode_info.m"
                else
#line 354 "mode_info.m"
                  {
#line 354 "mode_info.m"
                    MR_Word check_hlds__mode_info__V_55_55;

#line 354 "mode_info.m"
                    {
#line 354 "mode_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &check_hlds__mode_info__V_55_55, ((MR_Box) (check_hlds__mode_info__V_7_7)), ((MR_Box) (check_hlds__mode_info__V_31_31)));
                    }
#line 4324 "check_hlds.mode_info.c"
                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_55_55 == (MR_Integer) 0);
#line 354 "mode_info.m"
                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_55_55;
#line 354 "mode_info.m"
                    else
#line 354 "mode_info.m"
                      {
#line 354 "mode_info.m"
                        MR_Word check_hlds__mode_info__V_56_56;

#line 354 "mode_info.m"
                        {
#line 354 "mode_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[6], &check_hlds__mode_info__V_56_56, ((MR_Box) (check_hlds__mode_info__V_8_8)), ((MR_Box) (check_hlds__mode_info__V_32_32)));
                        }
#line 4344 "check_hlds.mode_info.c"
                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_56_56 == (MR_Integer) 0);
#line 354 "mode_info.m"
                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_56_56;
#line 354 "mode_info.m"
                        else
#line 354 "mode_info.m"
                          {
#line 354 "mode_info.m"
                            MR_Word check_hlds__mode_info__V_57_57;

#line 354 "mode_info.m"
                            {
#line 354 "mode_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[4], &check_hlds__mode_info__V_57_57, ((MR_Box) (check_hlds__mode_info__V_9_9)), ((MR_Box) (check_hlds__mode_info__V_33_33)));
                            }
#line 4364 "check_hlds.mode_info.c"
                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_57_57 == (MR_Integer) 0);
#line 354 "mode_info.m"
                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_57_57;
#line 354 "mode_info.m"
                            else
#line 354 "mode_info.m"
                              {
#line 354 "mode_info.m"
                                MR_Word check_hlds__mode_info__V_58_58;

#line 354 "mode_info.m"
                                {
#line 354 "mode_info.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[2], &check_hlds__mode_info__V_58_58, ((MR_Box) (check_hlds__mode_info__V_10_10)), ((MR_Box) (check_hlds__mode_info__V_34_34)));
                                }
#line 4384 "check_hlds.mode_info.c"
                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_58_58 == (MR_Integer) 0);
#line 354 "mode_info.m"
                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_58_58;
#line 354 "mode_info.m"
                                else
#line 354 "mode_info.m"
                                  {
#line 354 "mode_info.m"
                                    MR_Word check_hlds__mode_info__V_59_59;

#line 354 "mode_info.m"
                                    {
#line 354 "mode_info.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[7], &check_hlds__mode_info__V_59_59, ((MR_Box) (check_hlds__mode_info__V_11_11)), ((MR_Box) (check_hlds__mode_info__V_35_35)));
                                    }
#line 4404 "check_hlds.mode_info.c"
                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_59_59 == (MR_Integer) 0);
#line 354 "mode_info.m"
                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_59_59;
#line 354 "mode_info.m"
                                    else
#line 354 "mode_info.m"
                                      {
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_60_60;

#line 354 "mode_info.m"
                                        {
#line 354 "mode_info.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[8], &check_hlds__mode_info__V_60_60, ((MR_Box) (check_hlds__mode_info__V_12_12)), ((MR_Box) (check_hlds__mode_info__V_36_36)));
                                        }
#line 4424 "check_hlds.mode_info.c"
                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_60_60 == (MR_Integer) 0);
#line 354 "mode_info.m"
                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_60_60;
#line 354 "mode_info.m"
                                        else
#line 354 "mode_info.m"
                                          {
#line 354 "mode_info.m"
                                            MR_Word check_hlds__mode_info__V_61_61;
#line 354 "mode_info.m"
                                            MR_Integer check_hlds__mode_info__V_101_101 = (MR_Integer) check_hlds__mode_info__V_13_13;
#line 354 "mode_info.m"
                                            MR_Integer check_hlds__mode_info__V_102_102 = (MR_Integer) check_hlds__mode_info__V_37_37;

#line 354 "mode_info.m"
                                            {
#line 354 "mode_info.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_61_61, check_hlds__mode_info__V_101_101, check_hlds__mode_info__V_102_102);
                                            }
#line 4448 "check_hlds.mode_info.c"
                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_61_61 == (MR_Integer) 0);
#line 354 "mode_info.m"
                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_61_61;
#line 354 "mode_info.m"
                                            else
#line 354 "mode_info.m"
                                              {
#line 354 "mode_info.m"
                                                MR_Word check_hlds__mode_info__V_62_62;
#line 354 "mode_info.m"
                                                MR_Integer check_hlds__mode_info__V_103_103 = (MR_Integer) check_hlds__mode_info__V_14_14;
#line 354 "mode_info.m"
                                                MR_Integer check_hlds__mode_info__V_104_104 = (MR_Integer) check_hlds__mode_info__V_38_38;

#line 354 "mode_info.m"
                                                {
#line 354 "mode_info.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_62_62, check_hlds__mode_info__V_103_103, check_hlds__mode_info__V_104_104);
                                                }
#line 4472 "check_hlds.mode_info.c"
                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_62_62 == (MR_Integer) 0);
#line 354 "mode_info.m"
                                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_62_62;
#line 354 "mode_info.m"
                                                else
#line 354 "mode_info.m"
                                                  {
#line 354 "mode_info.m"
                                                    MR_Word check_hlds__mode_info__V_63_63;
#line 354 "mode_info.m"
                                                    MR_Integer check_hlds__mode_info__V_105_105 = (MR_Integer) check_hlds__mode_info__V_15_15;
#line 354 "mode_info.m"
                                                    MR_Integer check_hlds__mode_info__V_106_106 = (MR_Integer) check_hlds__mode_info__V_39_39;

#line 354 "mode_info.m"
                                                    {
#line 354 "mode_info.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_63_63, check_hlds__mode_info__V_105_105, check_hlds__mode_info__V_106_106);
                                                    }
#line 4496 "check_hlds.mode_info.c"
                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_63_63 == (MR_Integer) 0);
#line 354 "mode_info.m"
                                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_63_63;
#line 354 "mode_info.m"
                                                    else
#line 354 "mode_info.m"
                                                      {
#line 354 "mode_info.m"
                                                        MR_Word check_hlds__mode_info__V_64_64;

#line 354 "mode_info.m"
                                                        {
#line 354 "mode_info.m"
                                                          hlds__instmap____Compare____instmap_0_0(&check_hlds__mode_info__V_64_64, check_hlds__mode_info__V_16_16, check_hlds__mode_info__V_40_40);
                                                        }
#line 4516 "check_hlds.mode_info.c"
                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_64_64 == (MR_Integer) 0);
#line 354 "mode_info.m"
                                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_64_64;
#line 354 "mode_info.m"
                                                        else
#line 354 "mode_info.m"
                                                          {
#line 354 "mode_info.m"
                                                            MR_Word check_hlds__mode_info__V_65_65;
#line 354 "mode_info.m"
                                                            MR_Integer check_hlds__mode_info__V_107_107 = (MR_Integer) check_hlds__mode_info__V_17_17;
#line 354 "mode_info.m"
                                                            MR_Integer check_hlds__mode_info__V_108_108 = (MR_Integer) check_hlds__mode_info__V_41_41;

#line 354 "mode_info.m"
                                                            {
#line 354 "mode_info.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_65_65, check_hlds__mode_info__V_107_107, check_hlds__mode_info__V_108_108);
                                                            }
#line 4540 "check_hlds.mode_info.c"
                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_65_65 == (MR_Integer) 0);
#line 354 "mode_info.m"
                                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_65_65;
#line 354 "mode_info.m"
                                                            else
#line 354 "mode_info.m"
                                                              {
#line 354 "mode_info.m"
                                                                MR_Word check_hlds__mode_info__V_66_66;
#line 354 "mode_info.m"
                                                                MR_Integer check_hlds__mode_info__V_109_109 = (MR_Integer) check_hlds__mode_info__V_18_18;
#line 354 "mode_info.m"
                                                                MR_Integer check_hlds__mode_info__V_110_110 = (MR_Integer) check_hlds__mode_info__V_42_42;

#line 354 "mode_info.m"
                                                                {
#line 354 "mode_info.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_66_66, check_hlds__mode_info__V_109_109, check_hlds__mode_info__V_110_110);
                                                                }
#line 4564 "check_hlds.mode_info.c"
                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_66_66 == (MR_Integer) 0);
#line 354 "mode_info.m"
                                                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_66_66;
#line 354 "mode_info.m"
                                                                else
#line 354 "mode_info.m"
                                                                  {
#line 354 "mode_info.m"
                                                                    MR_Word check_hlds__mode_info__V_67_67;

#line 354 "mode_info.m"
                                                                    {
#line 354 "mode_info.m"
                                                                      hlds__instmap____Compare____instmap_0_0(&check_hlds__mode_info__V_67_67, check_hlds__mode_info__V_19_19, check_hlds__mode_info__V_43_43);
                                                                    }
#line 4584 "check_hlds.mode_info.c"
                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_67_67 == (MR_Integer) 0);
#line 354 "mode_info.m"
                                                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_67_67;
#line 354 "mode_info.m"
                                                                    else
#line 354 "mode_info.m"
                                                                      {
#line 354 "mode_info.m"
                                                                        MR_Word check_hlds__mode_info__V_68_68;

#line 354 "mode_info.m"
                                                                        {
#line 354 "mode_info.m"
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_2[1], &check_hlds__mode_info__V_68_68, ((MR_Box) (check_hlds__mode_info__V_20_20)), ((MR_Box) (check_hlds__mode_info__V_44_44)));
                                                                        }
#line 4604 "check_hlds.mode_info.c"
                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_68_68 == (MR_Integer) 0);
#line 354 "mode_info.m"
                                                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_68_68;
#line 354 "mode_info.m"
                                                                        else
#line 354 "mode_info.m"
                                                                          {
#line 354 "mode_info.m"
                                                                            MR_Word check_hlds__mode_info__V_69_69;

#line 354 "mode_info.m"
                                                                            {
#line 354 "mode_info.m"
                                                                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[10], &check_hlds__mode_info__V_69_69, ((MR_Box) (check_hlds__mode_info__V_21_21)), ((MR_Box) (check_hlds__mode_info__V_45_45)));
                                                                            }
#line 4624 "check_hlds.mode_info.c"
                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_69_69 == (MR_Integer) 0);
#line 354 "mode_info.m"
                                                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_69_69;
#line 354 "mode_info.m"
                                                                            else
#line 354 "mode_info.m"
                                                                              {
#line 354 "mode_info.m"
                                                                                MR_Word check_hlds__mode_info__V_70_70;
#line 354 "mode_info.m"
                                                                                MR_Integer check_hlds__mode_info__V_111_111 = (MR_Integer) check_hlds__mode_info__V_22_22;
#line 354 "mode_info.m"
                                                                                MR_Integer check_hlds__mode_info__V_112_112 = (MR_Integer) check_hlds__mode_info__V_46_46;

#line 354 "mode_info.m"
                                                                                {
#line 354 "mode_info.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_70_70, check_hlds__mode_info__V_111_111, check_hlds__mode_info__V_112_112);
                                                                                }
#line 4648 "check_hlds.mode_info.c"
                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_70_70 == (MR_Integer) 0);
#line 354 "mode_info.m"
                                                                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_70_70;
#line 354 "mode_info.m"
                                                                                else
#line 354 "mode_info.m"
                                                                                  {
#line 354 "mode_info.m"
                                                                                    MR_Word check_hlds__mode_info__V_71_71;
#line 354 "mode_info.m"
                                                                                    MR_Integer check_hlds__mode_info__V_113_113 = (MR_Integer) check_hlds__mode_info__V_23_23;
#line 354 "mode_info.m"
                                                                                    MR_Integer check_hlds__mode_info__V_114_114 = (MR_Integer) check_hlds__mode_info__V_47_47;

#line 354 "mode_info.m"
                                                                                    {
#line 354 "mode_info.m"
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_71_71, check_hlds__mode_info__V_113_113, check_hlds__mode_info__V_114_114);
                                                                                    }
#line 4672 "check_hlds.mode_info.c"
                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_71_71 == (MR_Integer) 0);
#line 354 "mode_info.m"
                                                                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_71_71;
#line 354 "mode_info.m"
                                                                                    else
#line 354 "mode_info.m"
                                                                                      {
#line 354 "mode_info.m"
                                                                                        MR_Word check_hlds__mode_info__V_72_72;
#line 354 "mode_info.m"
                                                                                        MR_Integer check_hlds__mode_info__V_115_115 = (MR_Integer) check_hlds__mode_info__V_24_24;
#line 354 "mode_info.m"
                                                                                        MR_Integer check_hlds__mode_info__V_116_116 = (MR_Integer) check_hlds__mode_info__V_48_48;

#line 354 "mode_info.m"
                                                                                        {
#line 354 "mode_info.m"
                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_72_72, check_hlds__mode_info__V_115_115, check_hlds__mode_info__V_116_116);
                                                                                        }
#line 4696 "check_hlds.mode_info.c"
                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_72_72 == (MR_Integer) 0);
#line 354 "mode_info.m"
                                                                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_72_72;
#line 354 "mode_info.m"
                                                                                        else
#line 354 "mode_info.m"
                                                                                          {
#line 354 "mode_info.m"
                                                                                            MR_Word check_hlds__mode_info__V_73_73;
#line 354 "mode_info.m"
                                                                                            MR_Integer check_hlds__mode_info__V_117_117 = (MR_Integer) check_hlds__mode_info__V_25_25;
#line 354 "mode_info.m"
                                                                                            MR_Integer check_hlds__mode_info__V_118_118 = (MR_Integer) check_hlds__mode_info__V_49_49;

#line 354 "mode_info.m"
                                                                                            {
#line 354 "mode_info.m"
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_73_73, check_hlds__mode_info__V_117_117, check_hlds__mode_info__V_118_118);
                                                                                            }
#line 4720 "check_hlds.mode_info.c"
                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_73_73 == (MR_Integer) 0);
#line 354 "mode_info.m"
                                                                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_73_73;
#line 354 "mode_info.m"
                                                                                            else
#line 354 "mode_info.m"
                                                                                              {
#line 354 "mode_info.m"
                                                                                                MR_Word check_hlds__mode_info__V_74_74;
#line 354 "mode_info.m"
                                                                                                MR_Integer check_hlds__mode_info__V_119_119 = (MR_Integer) check_hlds__mode_info__V_26_26;
#line 354 "mode_info.m"
                                                                                                MR_Integer check_hlds__mode_info__V_120_120 = (MR_Integer) check_hlds__mode_info__V_50_50;

#line 354 "mode_info.m"
                                                                                                {
#line 354 "mode_info.m"
                                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_74_74, check_hlds__mode_info__V_119_119, check_hlds__mode_info__V_120_120);
                                                                                                }
#line 4744 "check_hlds.mode_info.c"
                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_74_74 == (MR_Integer) 0);
#line 354 "mode_info.m"
                                                                                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 354 "mode_info.m"
                                                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_74_74;
#line 354 "mode_info.m"
                                                                                                else
#line 354 "mode_info.m"
                                                                                                  {
#line 354 "mode_info.m"
                                                                                                    MR_Integer check_hlds__mode_info__V_121_121 = (MR_Integer) check_hlds__mode_info__V_27_27;
#line 354 "mode_info.m"
                                                                                                    MR_Integer check_hlds__mode_info__V_122_122 = (MR_Integer) check_hlds__mode_info__V_51_51;

#line 354 "mode_info.m"
                                                                                                    {
#line 354 "mode_info.m"
                                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_121_121, check_hlds__mode_info__V_122_122);
#line 354 "mode_info.m"
                                                                                                      return;
                                                                                                    }
#line 354 "mode_info.m"
                                                                                                  }
#line 354 "mode_info.m"
                                                                                              }
#line 354 "mode_info.m"
                                                                                          }
#line 354 "mode_info.m"
                                                                                      }
#line 354 "mode_info.m"
                                                                                  }
#line 354 "mode_info.m"
                                                                              }
#line 354 "mode_info.m"
                                                                          }
#line 354 "mode_info.m"
                                                                      }
#line 354 "mode_info.m"
                                                                  }
#line 354 "mode_info.m"
                                                              }
#line 354 "mode_info.m"
                                                          }
#line 354 "mode_info.m"
                                                      }
#line 354 "mode_info.m"
                                                  }
#line 354 "mode_info.m"
                                              }
#line 354 "mode_info.m"
                                          }
#line 354 "mode_info.m"
                                      }
#line 354 "mode_info.m"
                                  }
#line 354 "mode_info.m"
                              }
#line 354 "mode_info.m"
                          }
#line 354 "mode_info.m"
                      }
#line 354 "mode_info.m"
                  }
#line 354 "mode_info.m"
              }
#line 354 "mode_info.m"
          }
#line 354 "mode_info.m"
      }
#line 354 "mode_info.m"
  }
#line 354 "mode_info.m"
}

#line 354 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0(
#line 354 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 354 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 354 "mode_info.m"
{
#line 354 "mode_info.m"
  {
#line 354 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 354 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_51 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 354 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_52 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 354 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_51 == check_hlds__mode_info__CastY_52);
#line 354 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 354 "mode_info.m"
    else
#line 354 "mode_info.m"
      {
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_55_55;
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeCtorInfo_56_56;
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_57_57;
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_58_58;
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_59_59;
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_60_60;
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_61_61;
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_64_64;
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_65_65;
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 354 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 2)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 3)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 4)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 5)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 6)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 7)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 8)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 10)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 12)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 13)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 14)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 354 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 8)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 10)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 12)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 13)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)));
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 354 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 4964 "check_hlds.mode_info.c"
        {
#line 4966 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_27_27);
        }
#line 354 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
          {
#line 4973 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_4_4 == check_hlds__mode_info__V_28_28);
#line 354 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
              {
#line 4979 "check_hlds.mode_info.c"
                check_hlds__mode_info__TypeInfo_55_55 = (MR_Word) &check_hlds__mode_info_scalar_common_1[5];
#line 4981 "check_hlds.mode_info.c"
                {
#line 4983 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_55_55, ((MR_Box) (check_hlds__mode_info__V_5_5)), ((MR_Box) (check_hlds__mode_info__V_29_29)));
                }
#line 354 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                  {
#line 4990 "check_hlds.mode_info.c"
                    check_hlds__mode_info__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 4992 "check_hlds.mode_info.c"
                    {
#line 4994 "check_hlds.mode_info.c"
                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeCtorInfo_56_56, ((MR_Box) (check_hlds__mode_info__V_6_6)), ((MR_Box) (check_hlds__mode_info__V_30_30)));
                    }
#line 354 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                      {
#line 5001 "check_hlds.mode_info.c"
                        check_hlds__mode_info__TypeInfo_57_57 = (MR_Word) &check_hlds__mode_info_scalar_common_1[6];
#line 5003 "check_hlds.mode_info.c"
                        {
#line 5005 "check_hlds.mode_info.c"
                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_57_57, ((MR_Box) (check_hlds__mode_info__V_7_7)), ((MR_Box) (check_hlds__mode_info__V_31_31)));
                        }
#line 354 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                          {
#line 5012 "check_hlds.mode_info.c"
                            check_hlds__mode_info__TypeInfo_58_58 = (MR_Word) &check_hlds__mode_info_scalar_common_1[4];
#line 5014 "check_hlds.mode_info.c"
                            {
#line 5016 "check_hlds.mode_info.c"
                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_58_58, ((MR_Box) (check_hlds__mode_info__V_8_8)), ((MR_Box) (check_hlds__mode_info__V_32_32)));
                            }
#line 354 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                              {
#line 5023 "check_hlds.mode_info.c"
                                check_hlds__mode_info__TypeInfo_59_59 = (MR_Word) &check_hlds__mode_info_scalar_common_1[2];
#line 5025 "check_hlds.mode_info.c"
                                {
#line 5027 "check_hlds.mode_info.c"
                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_59_59, ((MR_Box) (check_hlds__mode_info__V_9_9)), ((MR_Box) (check_hlds__mode_info__V_33_33)));
                                }
#line 354 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                  {
#line 5034 "check_hlds.mode_info.c"
                                    check_hlds__mode_info__TypeInfo_60_60 = (MR_Word) &check_hlds__mode_info_scalar_common_1[7];
#line 5036 "check_hlds.mode_info.c"
                                    {
#line 5038 "check_hlds.mode_info.c"
                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_60_60, ((MR_Box) (check_hlds__mode_info__V_10_10)), ((MR_Box) (check_hlds__mode_info__V_34_34)));
                                    }
#line 354 "mode_info.m"
                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                      {
#line 5045 "check_hlds.mode_info.c"
                                        check_hlds__mode_info__TypeInfo_61_61 = (MR_Word) &check_hlds__mode_info_scalar_common_1[8];
#line 5047 "check_hlds.mode_info.c"
                                        {
#line 5049 "check_hlds.mode_info.c"
                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_61_61, ((MR_Box) (check_hlds__mode_info__V_11_11)), ((MR_Box) (check_hlds__mode_info__V_35_35)));
                                        }
#line 354 "mode_info.m"
                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                          {
#line 5056 "check_hlds.mode_info.c"
                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_12_12 == check_hlds__mode_info__V_36_36);
#line 354 "mode_info.m"
                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                              {
#line 5062 "check_hlds.mode_info.c"
                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_13_13 == check_hlds__mode_info__V_37_37);
#line 354 "mode_info.m"
                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                  {
#line 5068 "check_hlds.mode_info.c"
                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_14_14 == check_hlds__mode_info__V_38_38);
#line 354 "mode_info.m"
                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                      {
#line 5074 "check_hlds.mode_info.c"
                                                        {
#line 5076 "check_hlds.mode_info.c"
                                                          check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_15_15, check_hlds__mode_info__V_39_39);
                                                        }
#line 354 "mode_info.m"
                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                          {
#line 5083 "check_hlds.mode_info.c"
                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_16_16 == check_hlds__mode_info__V_40_40);
#line 354 "mode_info.m"
                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                              {
#line 5089 "check_hlds.mode_info.c"
                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_17_17 == check_hlds__mode_info__V_41_41);
#line 354 "mode_info.m"
                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                  {
#line 5095 "check_hlds.mode_info.c"
                                                                    {
#line 5097 "check_hlds.mode_info.c"
                                                                      check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_18_18, check_hlds__mode_info__V_42_42);
                                                                    }
#line 354 "mode_info.m"
                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                      {
#line 5104 "check_hlds.mode_info.c"
                                                                        check_hlds__mode_info__TypeInfo_64_64 = (MR_Word) &check_hlds__mode_info_scalar_common_2[1];
#line 5106 "check_hlds.mode_info.c"
                                                                        {
#line 5108 "check_hlds.mode_info.c"
                                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_64_64, ((MR_Box) (check_hlds__mode_info__V_19_19)), ((MR_Box) (check_hlds__mode_info__V_43_43)));
                                                                        }
#line 354 "mode_info.m"
                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                          {
#line 5115 "check_hlds.mode_info.c"
                                                                            check_hlds__mode_info__TypeInfo_65_65 = (MR_Word) &check_hlds__mode_info_scalar_common_1[10];
#line 5117 "check_hlds.mode_info.c"
                                                                            {
#line 5119 "check_hlds.mode_info.c"
                                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_65_65, ((MR_Box) (check_hlds__mode_info__V_20_20)), ((MR_Box) (check_hlds__mode_info__V_44_44)));
                                                                            }
#line 354 "mode_info.m"
                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                              {
#line 5126 "check_hlds.mode_info.c"
                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_21_21 == check_hlds__mode_info__V_45_45);
#line 354 "mode_info.m"
                                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                  {
#line 5132 "check_hlds.mode_info.c"
                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_22_22 == check_hlds__mode_info__V_46_46);
#line 354 "mode_info.m"
                                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                      {
#line 5138 "check_hlds.mode_info.c"
                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_23_23 == check_hlds__mode_info__V_47_47);
#line 354 "mode_info.m"
                                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                          {
#line 5144 "check_hlds.mode_info.c"
                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_24_24 == check_hlds__mode_info__V_48_48);
#line 354 "mode_info.m"
                                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                              {
#line 5150 "check_hlds.mode_info.c"
                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_25_25 == check_hlds__mode_info__V_49_49);
#line 354 "mode_info.m"
                                                                                                if (check_hlds__mode_info__succeeded)
#line 5154 "check_hlds.mode_info.c"
                                                                                                  check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_26_26 == check_hlds__mode_info__V_50_50);
#line 354 "mode_info.m"
                                                                                              }
#line 354 "mode_info.m"
                                                                                          }
#line 354 "mode_info.m"
                                                                                      }
#line 354 "mode_info.m"
                                                                                  }
#line 354 "mode_info.m"
                                                                              }
#line 354 "mode_info.m"
                                                                          }
#line 354 "mode_info.m"
                                                                      }
#line 354 "mode_info.m"
                                                                  }
#line 354 "mode_info.m"
                                                              }
#line 354 "mode_info.m"
                                                          }
#line 354 "mode_info.m"
                                                      }
#line 354 "mode_info.m"
                                                  }
#line 354 "mode_info.m"
                                              }
#line 354 "mode_info.m"
                                          }
#line 354 "mode_info.m"
                                      }
#line 354 "mode_info.m"
                                  }
#line 354 "mode_info.m"
                              }
#line 354 "mode_info.m"
                          }
#line 354 "mode_info.m"
                      }
#line 354 "mode_info.m"
                  }
#line 354 "mode_info.m"
              }
#line 354 "mode_info.m"
          }
#line 354 "mode_info.m"
      }
#line 354 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 354 "mode_info.m"
  }
#line 354 "mode_info.m"
}

#line 467 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0(
#line 467 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 467 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 467 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 467 "mode_info.m"
{
#line 467 "mode_info.m"
  {
#line 467 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 467 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_27 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 467 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_28 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 467 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_27 == check_hlds__mode_info__CastY_28);
#line 467 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 5233 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 467 "mode_info.m"
    else
#line 467 "mode_info.m"
      {
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 1)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 2)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 3)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 4)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 5)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 6)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 7)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20;

#line 467 "mode_info.m"
        {
#line 467 "mode_info.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__mode_info__V_20_20, check_hlds__mode_info__V_4_4, check_hlds__mode_info__V_12_12);
        }
#line 5279 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_20_20 == (MR_Integer) 0);
#line 467 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 467 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_20_20;
#line 467 "mode_info.m"
        else
#line 467 "mode_info.m"
          {
#line 467 "mode_info.m"
            MR_Word check_hlds__mode_info__V_21_21;

#line 467 "mode_info.m"
            {
#line 467 "mode_info.m"
              hlds__instmap____Compare____instmap_0_0(&check_hlds__mode_info__V_21_21, check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_13_13);
            }
#line 5299 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_21_21 == (MR_Integer) 0);
#line 467 "mode_info.m"
            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 467 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_21_21;
#line 467 "mode_info.m"
            else
#line 467 "mode_info.m"
              {
#line 467 "mode_info.m"
                MR_Word check_hlds__mode_info__V_22_22;

#line 467 "mode_info.m"
                {
#line 467 "mode_info.m"
                  check_hlds__delay_info____Compare____delay_info_0_0(&check_hlds__mode_info__V_22_22, check_hlds__mode_info__V_6_6, check_hlds__mode_info__V_14_14);
                }
#line 5319 "check_hlds.mode_info.c"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_22_22 == (MR_Integer) 0);
#line 467 "mode_info.m"
                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 467 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_22_22;
#line 467 "mode_info.m"
                else
#line 467 "mode_info.m"
                  {
#line 467 "mode_info.m"
                    MR_Word check_hlds__mode_info__V_23_23;

#line 467 "mode_info.m"
                    {
#line 467 "mode_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[1], &check_hlds__mode_info__V_23_23, ((MR_Box) (check_hlds__mode_info__V_7_7)), ((MR_Box) (check_hlds__mode_info__V_15_15)));
                    }
#line 5339 "check_hlds.mode_info.c"
                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_23_23 == (MR_Integer) 0);
#line 467 "mode_info.m"
                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 467 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_23_23;
#line 467 "mode_info.m"
                    else
#line 467 "mode_info.m"
                      {
#line 467 "mode_info.m"
                        MR_Word check_hlds__mode_info__V_24_24;

#line 467 "mode_info.m"
                        {
#line 467 "mode_info.m"
                          check_hlds__mode_info____Compare____mode_context_0_0(&check_hlds__mode_info__V_24_24, check_hlds__mode_info__V_8_8, check_hlds__mode_info__V_16_16);
                        }
#line 5359 "check_hlds.mode_info.c"
                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_24_24 == (MR_Integer) 0);
#line 467 "mode_info.m"
                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 467 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_24_24;
#line 467 "mode_info.m"
                        else
#line 467 "mode_info.m"
                          {
#line 467 "mode_info.m"
                            MR_Word check_hlds__mode_info__V_25_25;

#line 467 "mode_info.m"
                            {
#line 467 "mode_info.m"
                              mercury__term____Compare____context_0_0(&check_hlds__mode_info__V_25_25, check_hlds__mode_info__V_9_9, check_hlds__mode_info__V_17_17);
                            }
#line 5379 "check_hlds.mode_info.c"
                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_25_25 == (MR_Integer) 0);
#line 467 "mode_info.m"
                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 467 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_25_25;
#line 467 "mode_info.m"
                            else
#line 467 "mode_info.m"
                              {
#line 467 "mode_info.m"
                                MR_Word check_hlds__mode_info__V_26_26;

#line 467 "mode_info.m"
                                {
#line 467 "mode_info.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[2], &check_hlds__mode_info__V_26_26, ((MR_Box) (check_hlds__mode_info__V_10_10)), ((MR_Box) (check_hlds__mode_info__V_18_18)));
                                }
#line 5399 "check_hlds.mode_info.c"
                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_26_26 == (MR_Integer) 0);
#line 467 "mode_info.m"
                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 467 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_26_26;
#line 467 "mode_info.m"
                                else
#line 467 "mode_info.m"
                                  {
#line 467 "mode_info.m"
                                    check_hlds__mode_info____Compare____mode_sub_info_0_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_11_11, check_hlds__mode_info__V_19_19);
#line 467 "mode_info.m"
                                    return;
                                  }
#line 467 "mode_info.m"
                              }
#line 467 "mode_info.m"
                          }
#line 467 "mode_info.m"
                      }
#line 467 "mode_info.m"
                  }
#line 467 "mode_info.m"
              }
#line 467 "mode_info.m"
          }
#line 467 "mode_info.m"
      }
#line 467 "mode_info.m"
  }
#line 467 "mode_info.m"
}

#line 467 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0(
#line 467 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 467 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 467 "mode_info.m"
{
#line 467 "mode_info.m"
  {
#line 467 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 467 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_19 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 467 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_20 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 467 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_19 == check_hlds__mode_info__CastY_20);
#line 467 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 467 "mode_info.m"
    else
#line 467 "mode_info.m"
      {
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_24_24;
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_26_26;
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 2)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 3)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 4)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 5)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 6)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 7)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 467 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 354 "mode_info.m"
        MR_Integer check_hlds__mode_info__CastX_75;
#line 354 "mode_info.m"
        MR_Integer check_hlds__mode_info__CastY_76;

#line 5504 "check_hlds.mode_info.c"
        {
#line 5506 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_11_11);
        }
#line 467 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
          {
#line 5513 "check_hlds.mode_info.c"
            {
#line 5515 "check_hlds.mode_info.c"
              check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_4_4, check_hlds__mode_info__V_12_12);
            }
#line 467 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
              {
#line 5522 "check_hlds.mode_info.c"
                {
#line 5524 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = check_hlds__delay_info____Unify____delay_info_0_0(check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_13_13);
                }
#line 467 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
                  {
#line 5531 "check_hlds.mode_info.c"
                    check_hlds__mode_info__TypeInfo_24_24 = (MR_Word) &check_hlds__mode_info_scalar_common_1[1];
#line 5533 "check_hlds.mode_info.c"
                    {
#line 5535 "check_hlds.mode_info.c"
                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_24_24, ((MR_Box) (check_hlds__mode_info__V_6_6)), ((MR_Box) (check_hlds__mode_info__V_14_14)));
                    }
#line 467 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
                      {
#line 5542 "check_hlds.mode_info.c"
                        {
#line 5544 "check_hlds.mode_info.c"
                          check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_context_0_0(check_hlds__mode_info__V_7_7, check_hlds__mode_info__V_15_15);
                        }
#line 467 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
                          {
#line 5551 "check_hlds.mode_info.c"
                            {
#line 5553 "check_hlds.mode_info.c"
                              check_hlds__mode_info__succeeded = mercury__term____Unify____context_0_0(check_hlds__mode_info__V_8_8, check_hlds__mode_info__V_16_16);
                            }
#line 467 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
                              {
#line 5560 "check_hlds.mode_info.c"
                                check_hlds__mode_info__TypeInfo_26_26 = (MR_Word) &check_hlds__mode_info_scalar_common_1[2];
#line 5562 "check_hlds.mode_info.c"
                                {
#line 5564 "check_hlds.mode_info.c"
                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_26_26, ((MR_Box) (check_hlds__mode_info__V_9_9)), ((MR_Box) (check_hlds__mode_info__V_17_17)));
                                }
#line 467 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
                                  {
#line 354 "mode_info.m"
                                    check_hlds__mode_info__CastX_75 = (MR_Integer) check_hlds__mode_info__V_10_10;
#line 354 "mode_info.m"
                                    check_hlds__mode_info__CastY_76 = (MR_Integer) check_hlds__mode_info__V_18_18;
#line 354 "mode_info.m"
                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_75 == check_hlds__mode_info__CastY_76);
#line 354 "mode_info.m"
                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                      check_hlds__mode_info__succeeded = MR_TRUE;
#line 354 "mode_info.m"
                                    else
#line 354 "mode_info.m"
                                      {
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_55_79;
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeCtorInfo_56_80;
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_57_81;
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_58_82;
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_59_83;
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_60_84;
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_61_85;
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_64_88;
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_65_89;
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 0)));
#line 354 "mode_info.m"
                                        MR_Integer check_hlds__mode_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 1)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 2)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 3)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 4)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 5)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 6)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 7)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 8)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 13)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 0)));
#line 354 "mode_info.m"
                                        MR_Integer check_hlds__mode_info__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 1)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 2)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 3)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 4)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 5)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 6)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 7)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 8)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_60_60 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 10)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_64_64 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 12)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 13)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 14)));
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_69_69 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 354 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 5700 "check_hlds.mode_info.c"
                                        {
#line 5702 "check_hlds.mode_info.c"
                                          check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_info__V_27_27, check_hlds__mode_info__V_51_51);
                                        }
#line 354 "mode_info.m"
                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                          {
#line 5709 "check_hlds.mode_info.c"
                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_28_28 == check_hlds__mode_info__V_52_52);
#line 354 "mode_info.m"
                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                              {
#line 5715 "check_hlds.mode_info.c"
                                                check_hlds__mode_info__TypeInfo_55_79 = (MR_Word) &check_hlds__mode_info_scalar_common_1[5];
#line 5717 "check_hlds.mode_info.c"
                                                {
#line 5719 "check_hlds.mode_info.c"
                                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_55_79, ((MR_Box) (check_hlds__mode_info__V_29_29)), ((MR_Box) (check_hlds__mode_info__V_53_53)));
                                                }
#line 354 "mode_info.m"
                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                  {
#line 5726 "check_hlds.mode_info.c"
                                                    check_hlds__mode_info__TypeCtorInfo_56_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 5728 "check_hlds.mode_info.c"
                                                    {
#line 5730 "check_hlds.mode_info.c"
                                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeCtorInfo_56_80, ((MR_Box) (check_hlds__mode_info__V_30_30)), ((MR_Box) (check_hlds__mode_info__V_54_54)));
                                                    }
#line 354 "mode_info.m"
                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                      {
#line 5737 "check_hlds.mode_info.c"
                                                        check_hlds__mode_info__TypeInfo_57_81 = (MR_Word) &check_hlds__mode_info_scalar_common_1[6];
#line 5739 "check_hlds.mode_info.c"
                                                        {
#line 5741 "check_hlds.mode_info.c"
                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_57_81, ((MR_Box) (check_hlds__mode_info__V_31_31)), ((MR_Box) (check_hlds__mode_info__V_55_55)));
                                                        }
#line 354 "mode_info.m"
                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                          {
#line 5748 "check_hlds.mode_info.c"
                                                            check_hlds__mode_info__TypeInfo_58_82 = (MR_Word) &check_hlds__mode_info_scalar_common_1[4];
#line 5750 "check_hlds.mode_info.c"
                                                            {
#line 5752 "check_hlds.mode_info.c"
                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_58_82, ((MR_Box) (check_hlds__mode_info__V_32_32)), ((MR_Box) (check_hlds__mode_info__V_56_56)));
                                                            }
#line 354 "mode_info.m"
                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                              {
#line 5759 "check_hlds.mode_info.c"
                                                                check_hlds__mode_info__TypeInfo_59_83 = (MR_Word) &check_hlds__mode_info_scalar_common_1[2];
#line 5761 "check_hlds.mode_info.c"
                                                                {
#line 5763 "check_hlds.mode_info.c"
                                                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_59_83, ((MR_Box) (check_hlds__mode_info__V_33_33)), ((MR_Box) (check_hlds__mode_info__V_57_57)));
                                                                }
#line 354 "mode_info.m"
                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                  {
#line 5770 "check_hlds.mode_info.c"
                                                                    check_hlds__mode_info__TypeInfo_60_84 = (MR_Word) &check_hlds__mode_info_scalar_common_1[7];
#line 5772 "check_hlds.mode_info.c"
                                                                    {
#line 5774 "check_hlds.mode_info.c"
                                                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_60_84, ((MR_Box) (check_hlds__mode_info__V_34_34)), ((MR_Box) (check_hlds__mode_info__V_58_58)));
                                                                    }
#line 354 "mode_info.m"
                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                      {
#line 5781 "check_hlds.mode_info.c"
                                                                        check_hlds__mode_info__TypeInfo_61_85 = (MR_Word) &check_hlds__mode_info_scalar_common_1[8];
#line 5783 "check_hlds.mode_info.c"
                                                                        {
#line 5785 "check_hlds.mode_info.c"
                                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_61_85, ((MR_Box) (check_hlds__mode_info__V_35_35)), ((MR_Box) (check_hlds__mode_info__V_59_59)));
                                                                        }
#line 354 "mode_info.m"
                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                          {
#line 5792 "check_hlds.mode_info.c"
                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_36_36 == check_hlds__mode_info__V_60_60);
#line 354 "mode_info.m"
                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                              {
#line 5798 "check_hlds.mode_info.c"
                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_37_37 == check_hlds__mode_info__V_61_61);
#line 354 "mode_info.m"
                                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                  {
#line 5804 "check_hlds.mode_info.c"
                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_38_38 == check_hlds__mode_info__V_62_62);
#line 354 "mode_info.m"
                                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                      {
#line 5810 "check_hlds.mode_info.c"
                                                                                        {
#line 5812 "check_hlds.mode_info.c"
                                                                                          check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_39_39, check_hlds__mode_info__V_63_63);
                                                                                        }
#line 354 "mode_info.m"
                                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                          {
#line 5819 "check_hlds.mode_info.c"
                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_40_40 == check_hlds__mode_info__V_64_64);
#line 354 "mode_info.m"
                                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                              {
#line 5825 "check_hlds.mode_info.c"
                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_41_41 == check_hlds__mode_info__V_65_65);
#line 354 "mode_info.m"
                                                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                  {
#line 5831 "check_hlds.mode_info.c"
                                                                                                    {
#line 5833 "check_hlds.mode_info.c"
                                                                                                      check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_42_42, check_hlds__mode_info__V_66_66);
                                                                                                    }
#line 354 "mode_info.m"
                                                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                      {
#line 5840 "check_hlds.mode_info.c"
                                                                                                        check_hlds__mode_info__TypeInfo_64_88 = (MR_Word) &check_hlds__mode_info_scalar_common_2[1];
#line 5842 "check_hlds.mode_info.c"
                                                                                                        {
#line 5844 "check_hlds.mode_info.c"
                                                                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_64_88, ((MR_Box) (check_hlds__mode_info__V_43_43)), ((MR_Box) (check_hlds__mode_info__V_67_67)));
                                                                                                        }
#line 354 "mode_info.m"
                                                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                          {
#line 5851 "check_hlds.mode_info.c"
                                                                                                            check_hlds__mode_info__TypeInfo_65_89 = (MR_Word) &check_hlds__mode_info_scalar_common_1[10];
#line 5853 "check_hlds.mode_info.c"
                                                                                                            {
#line 5855 "check_hlds.mode_info.c"
                                                                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_65_89, ((MR_Box) (check_hlds__mode_info__V_44_44)), ((MR_Box) (check_hlds__mode_info__V_68_68)));
                                                                                                            }
#line 354 "mode_info.m"
                                                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                              {
#line 5862 "check_hlds.mode_info.c"
                                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_45_45 == check_hlds__mode_info__V_69_69);
#line 354 "mode_info.m"
                                                                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                                  {
#line 5868 "check_hlds.mode_info.c"
                                                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_46_46 == check_hlds__mode_info__V_70_70);
#line 354 "mode_info.m"
                                                                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                                      {
#line 5874 "check_hlds.mode_info.c"
                                                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_47_47 == check_hlds__mode_info__V_71_71);
#line 354 "mode_info.m"
                                                                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                                          {
#line 5880 "check_hlds.mode_info.c"
                                                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_48_48 == check_hlds__mode_info__V_72_72);
#line 354 "mode_info.m"
                                                                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                                              {
#line 5886 "check_hlds.mode_info.c"
                                                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_49_49 == check_hlds__mode_info__V_73_73);
#line 354 "mode_info.m"
                                                                                                                                if (check_hlds__mode_info__succeeded)
#line 5890 "check_hlds.mode_info.c"
                                                                                                                                  check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_50_50 == check_hlds__mode_info__V_74_74);
#line 354 "mode_info.m"
                                                                                                                              }
#line 354 "mode_info.m"
                                                                                                                          }
#line 354 "mode_info.m"
                                                                                                                      }
#line 354 "mode_info.m"
                                                                                                                  }
#line 354 "mode_info.m"
                                                                                                              }
#line 354 "mode_info.m"
                                                                                                          }
#line 354 "mode_info.m"
                                                                                                      }
#line 354 "mode_info.m"
                                                                                                  }
#line 354 "mode_info.m"
                                                                                              }
#line 354 "mode_info.m"
                                                                                          }
#line 354 "mode_info.m"
                                                                                      }
#line 354 "mode_info.m"
                                                                                  }
#line 354 "mode_info.m"
                                                                              }
#line 354 "mode_info.m"
                                                                          }
#line 354 "mode_info.m"
                                                                      }
#line 354 "mode_info.m"
                                                                  }
#line 354 "mode_info.m"
                                                              }
#line 354 "mode_info.m"
                                                          }
#line 354 "mode_info.m"
                                                      }
#line 354 "mode_info.m"
                                                  }
#line 354 "mode_info.m"
                                              }
#line 354 "mode_info.m"
                                          }
#line 354 "mode_info.m"
                                      }
#line 467 "mode_info.m"
                                  }
#line 467 "mode_info.m"
                              }
#line 467 "mode_info.m"
                          }
#line 467 "mode_info.m"
                      }
#line 467 "mode_info.m"
                  }
#line 467 "mode_info.m"
              }
#line 467 "mode_info.m"
          }
#line 467 "mode_info.m"
      }
#line 467 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 467 "mode_info.m"
  }
#line 467 "mode_info.m"
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
#line 5985 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 46 "mode_info.m"
    else
#line 46 "mode_info.m"
      if ((check_hlds__mode_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 46 "mode_info.m"
        if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 46 "mode_info.m"
          *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 46 "mode_info.m"
        else
#line 46 "mode_info.m"
          if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5999 "check_hlds.mode_info.c"
            *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 46 "mode_info.m"
          else
#line 6003 "check_hlds.mode_info.c"
            *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 46 "mode_info.m"
      else
#line 46 "mode_info.m"
        if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 46 "mode_info.m"
          {
#line 46 "mode_info.m"
            MR_Integer check_hlds__mode_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 46 "mode_info.m"
            MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));

#line 46 "mode_info.m"
            if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6018 "check_hlds.mode_info.c"
              *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 46 "mode_info.m"
            else
#line 46 "mode_info.m"
              if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
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
#line 6038 "check_hlds.mode_info.c"
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
              else
#line 6059 "check_hlds.mode_info.c"
                *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 46 "mode_info.m"
          }
#line 46 "mode_info.m"
        else
#line 46 "mode_info.m"
          {
#line 46 "mode_info.m"
            MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 46 "mode_info.m"
            MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));

#line 46 "mode_info.m"
            if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6074 "check_hlds.mode_info.c"
              *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 46 "mode_info.m"
            else
#line 46 "mode_info.m"
              if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6080 "check_hlds.mode_info.c"
                *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 46 "mode_info.m"
              else
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
#line 6098 "check_hlds.mode_info.c"
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
      if ((check_hlds__mode_info__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      else
#line 46 "mode_info.m"
        if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
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
#line 6197 "check_hlds.mode_info.c"
                {
#line 6199 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____call_id_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_5_5);
                }
#line 46 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 6204 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_4_4 == check_hlds__mode_info__V_6_6);
#line 46 "mode_info.m"
              }
#line 46 "mode_info.m"
          }
#line 46 "mode_info.m"
        else
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
#line 6233 "check_hlds.mode_info.c"
                {
#line 6235 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = hlds__hlds_goal____Unify____unify_context_0_0(check_hlds__mode_info__V_7_7, check_hlds__mode_info__V_9_9);
                }
#line 46 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 6240 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_8_8 == check_hlds__mode_info__V_10_10);
#line 46 "mode_info.m"
              }
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
#line 6294 "check_hlds.mode_info.c"
  {
#line 6296 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6299 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6301 "check_hlds.mode_info.c"
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
#line 6347 "check_hlds.mode_info.c"
  {
#line 6349 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6352 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6354 "check_hlds.mode_info.c"
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
#line 6400 "check_hlds.mode_info.c"
  {
#line 6402 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6405 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6407 "check_hlds.mode_info.c"
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
#line 6515 "check_hlds.mode_info.c"
  {
#line 6517 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6520 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6522 "check_hlds.mode_info.c"
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
#line 6568 "check_hlds.mode_info.c"
  {
#line 6570 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6573 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6575 "check_hlds.mode_info.c"
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
#line 6621 "check_hlds.mode_info.c"
  {
#line 6623 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6626 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6628 "check_hlds.mode_info.c"
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
#line 6674 "check_hlds.mode_info.c"
  {
#line 6676 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6679 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6681 "check_hlds.mode_info.c"
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
#line 6727 "check_hlds.mode_info.c"
  {
#line 6729 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6732 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6734 "check_hlds.mode_info.c"
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
#line 6763 "check_hlds.mode_info.c"
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
#line 6793 "check_hlds.mode_info.c"
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
#line 6817 "check_hlds.mode_info.c"
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

#line 6893 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_3_3 == check_hlds__mode_info__V_6_6);
#line 95 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 95 "mode_info.m"
          {
#line 6899 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_4_4 == check_hlds__mode_info__V_7_7);
#line 95 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 6903 "check_hlds.mode_info.c"
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
#line 6940 "check_hlds.mode_info.c"
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
#line 6969 "check_hlds.mode_info.c"
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
#line 6982 "check_hlds.mode_info.c"
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
#line 7050 "check_hlds.mode_info.c"
              {
#line 7052 "check_hlds.mode_info.c"
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
#line 7076 "check_hlds.mode_info.c"
              {
#line 7078 "check_hlds.mode_info.c"
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

#line 998 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(
#line 998 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 998 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_7,
#line 998 "mode_info.m"
  MR_Word * check_hlds__mode_info__Reason_8)
#line 998 "mode_info.m"
{
#line 1001 "mode_info.m"
  while (MR_TRUE)
#line 1001 "mode_info.m"
    {
#line 1001 "mode_info.m"
      /* tailcall optimized into a loop */
#line 1001 "mode_info.m"
      {
#line 1001 "mode_info.m"
        MR_bool check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1001 "mode_info.m"
        MR_Word check_hlds__mode_info__ThisReason_4;
#line 1001 "mode_info.m"
        MR_Word check_hlds__mode_info__Set_5;
#line 1001 "mode_info.m"
        MR_Word check_hlds__mode_info__Sets_6;
#line 1001 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9;
#line 1002 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeCtorInfo_10_10;

#line 1001 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 1001 "mode_info.m"
          {
#line 1001 "mode_info.m"
            check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 1001 "mode_info.m"
            check_hlds__mode_info__Sets_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 1001 "mode_info.m"
            check_hlds__mode_info__ThisReason_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 1001 "mode_info.m"
            check_hlds__mode_info__Set_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 7136 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1002 "mode_info.m"
            {
#line 1002 "mode_info.m"
              check_hlds__mode_info__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__mode_info__TypeCtorInfo_10_10, check_hlds__mode_info__Set_5, check_hlds__mode_info__Var_7);
            }
#line 1004 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 1003 "mode_info.m"
              {
#line 1003 "mode_info.m"
                *check_hlds__mode_info__Reason_8 = check_hlds__mode_info__ThisReason_4;
#line 1003 "mode_info.m"
                check_hlds__mode_info__succeeded = MR_TRUE;
#line 1003 "mode_info.m"
              }
#line 1004 "mode_info.m"
            else
#line 1005 "mode_info.m"
              {
#line 1005 "mode_info.m"
                /* direct tailcall eliminated */
#line 1005 "mode_info.m"
                {
#line 1005 "mode_info.m"
                  MR_Word check_hlds__mode_info__HeadVar__1__tmp_copy_1 = check_hlds__mode_info__Sets_6;

#line 1005 "mode_info.m"
                  check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__HeadVar__1__tmp_copy_1;
#line 1005 "mode_info.m"
                }
#line 1005 "mode_info.m"
                continue;
#line 1005 "mode_info.m"
              }
#line 1001 "mode_info.m"
          }
#line 1001 "mode_info.m"
        return check_hlds__mode_info__succeeded;
#line 1001 "mode_info.m"
      }
#line 1001 "mode_info.m"
      break;
#line 1001 "mode_info.m"
    }
#line 998 "mode_info.m"
}

#line 739 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info__old_and_new_may_differ_2_p_0(
#line 739 "mode_info.m"
  MR_Word check_hlds__mode_info__TypeInfo_for_T_5,
#line 739 "mode_info.m"
  MR_Box check_hlds__mode_info__HeadVar__1_1,
#line 739 "mode_info.m"
  MR_Box check_hlds__mode_info__HeadVar__2_2)
#line 739 "mode_info.m"
{
#line 744 "mode_info.m"
  {
#line 744 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;

#line 744 "mode_info.m"
    {
#line 744 "mode_info.m"
      return check_hlds__mode_info__succeeded = check_hlds__mode_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_108_100_95_97_110_100_95_110_101_119_95_109_97_121_95_100_105_102_102_101_114_95_95_91_49_93_95_48_2_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__HeadVar__2_2);
    }
#line 744 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 744 "mode_info.m"
  }
#line 739 "mode_info.m"
}

#line 334 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(
#line 334 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_2)
#line 334 "mode_info.m"
{
#line 1064 "mode_info.m"
  {
#line 1064 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1064 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 0)));
#line 1064 "mode_info.m"
    MR_Word check_hlds__mode_info__Globals_4;
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 1)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 2)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 3)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 4)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 5)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 6)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 7)));

#line 1066 "mode_info.m"
    {
#line 1066 "mode_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__mode_info__ModuleInfo_3, &check_hlds__mode_info__Globals_4);
    }
#line 1067 "mode_info.m"
    {
#line 1067 "mode_info.m"
      return check_hlds__mode_info__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__mode_info__Globals_4, (MR_Integer) 296, (MR_Integer) 1);
    }
#line 1064 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 1064 "mode_info.m"
  }
#line 334 "mode_info.m"
}

#line 328 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info__mode_info_may_init_solver_vars_1_p_0(
#line 328 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_2)
#line 328 "mode_info.m"
{
#line 1058 "mode_info.m"
  {
#line 1058 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1058 "mode_info.m"
    MR_Word check_hlds__mode_info__MayInitSolverVars_3;
#line 1058 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 7)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 0)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 1)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 2)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 3)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 4)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 5)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 6)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 619 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 619 "mode_info.m"
    check_hlds__mode_info__MayInitSolverVars_3 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 619 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 619 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 619 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 619 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 619 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 619 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 619 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 619 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 619 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 619 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 619 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 619 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1060 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__MayInitSolverVars_3 == (MR_Integer) 0);
#line 1058 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 1058 "mode_info.m"
  }
#line 328 "mode_info.m"
}

#line 324 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_need_to_requantify_2_p_0(
#line 324 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4,
#line 324 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_5)
#line 324 "mode_info.m"
{
#line 1053 "mode_info.m"
  {
#line 1053 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;

#line 1054 "mode_info.m"
    {
#line 1054 "mode_info.m"
      check_hlds__mode_info__mode_info_set_need_to_requantify_3_p_0((MR_Integer) 0, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_5);
#line 1054 "mode_info.m"
      return;
    }
#line 1053 "mode_info.m"
  }
#line 324 "mode_info.m"
}

#line 321 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_add_warning_3_p_0(
#line 321 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeWarningInfo_4,
#line 321 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8,
#line 321 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9)
#line 321 "mode_info.m"
{
#line 1048 "mode_info.m"
  {
#line 1048 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1048 "mode_info.m"
    MR_Word check_hlds__mode_info__Warnings0_6;
#line 1048 "mode_info.m"
    MR_Word check_hlds__mode_info__Warnings_7;
#line 1048 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 1048 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));
#line 1048 "mode_info.m"
    MR_Word check_hlds__mode_info__V_52_52;
#line 1048 "mode_info.m"
    MR_Word check_hlds__mode_info__V_53_53;
#line 1048 "mode_info.m"
    MR_Word check_hlds__mode_info__V_54_54;
#line 1048 "mode_info.m"
    MR_Word check_hlds__mode_info__V_55_55;
#line 1048 "mode_info.m"
    MR_Word check_hlds__mode_info__V_56_56;
#line 1048 "mode_info.m"
    MR_Word check_hlds__mode_info__V_57_57;
#line 1048 "mode_info.m"
    MR_Word check_hlds__mode_info__V_58_58;
#line 1048 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59;
#line 1048 "mode_info.m"
    MR_Word check_hlds__mode_info__V_60_60;
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 0)));
#line 597 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 1)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 2)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 3)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 4)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 5)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 6)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 7)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 8)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 10)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 12)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 13)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_61_61;
#line 668 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_62_62;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_63_63;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_64_64;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_65_65;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_70_70;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_71_71;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_72_72;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_73_73;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_74_74;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_75_75;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_76_76;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_77_77;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_79_79;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_80_80;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_81_81;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_82_82;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_83_83;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_84_84;
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_78_78;

#line 597 "mode_info.m"
    check_hlds__mode_info__Warnings0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 14)));
#line 597 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 597 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1050 "mode_info.m"
    {
#line 1050 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__ModeWarningInfo_4));
#line 1050 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1050 "mode_info.m"
    }
#line 1050 "mode_info.m"
    {
#line 1050 "mode_info.m"
      mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0, check_hlds__mode_info__Warnings0_6, check_hlds__mode_info__V_10_10, &check_hlds__mode_info__Warnings_7);
    }
#line 668 "mode_info.m"
    check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 0)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 1)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 2)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 3)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 4)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 5)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 6)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 7)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 8)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_70_70 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 668 "mode_info.m"
    check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    check_hlds__mode_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 10)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_74_74 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 668 "mode_info.m"
    check_hlds__mode_info__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    check_hlds__mode_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 12)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 13)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 14)));
#line 668 "mode_info.m"
    check_hlds__mode_info__V_79_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 668 "mode_info.m"
    check_hlds__mode_info__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    check_hlds__mode_info__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    check_hlds__mode_info__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    check_hlds__mode_info__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    check_hlds__mode_info__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    {
#line 668 "mode_info.m"
      check_hlds__mode_info__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 0) = ((MR_Box) (check_hlds__mode_info__V_61_61));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 1) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 2) = ((MR_Box) (check_hlds__mode_info__V_63_63));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 3) = ((MR_Box) (check_hlds__mode_info__V_64_64));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 4) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 5) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 6) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 7) = ((MR_Box) (check_hlds__mode_info__V_68_68));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 8) = ((MR_Box) (check_hlds__mode_info__V_69_69));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 9) = ((MR_Box) ((check_hlds__mode_info__V_70_70 | ((((check_hlds__mode_info__V_71_71 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_72_72 << (MR_Integer) 2)))))));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 10) = ((MR_Box) (check_hlds__mode_info__V_73_73));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 11) = ((MR_Box) ((check_hlds__mode_info__V_74_74 | ((check_hlds__mode_info__V_75_75 << (MR_Integer) 1)))));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 12) = ((MR_Box) (check_hlds__mode_info__V_76_76));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 13) = ((MR_Box) (check_hlds__mode_info__V_77_77));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 14) = ((MR_Box) (check_hlds__mode_info__Warnings_7));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 15) = ((MR_Box) ((check_hlds__mode_info__V_79_79 | ((((check_hlds__mode_info__V_80_80 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_81_81 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_82_82 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_83_83 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_84_84 << (MR_Integer) 5)))))))))))));
#line 668 "mode_info.m"
    }
#line 668 "mode_info.m"
    {
#line 668 "mode_info.m"
      MR_Word base;
#line 668 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 668 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9 = base;
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_59_59));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_60_60));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 668 "mode_info.m"
    }
#line 1048 "mode_info.m"
  }
#line 321 "mode_info.m"
}

#line 318 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_warning_3_p_0(
#line 318 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeWarning_4,
#line 318 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9,
#line 318 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10)
#line 318 "mode_info.m"
{
#line 1042 "mode_info.m"
  {
#line 1042 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1042 "mode_info.m"
    MR_Word check_hlds__mode_info__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 5)));
#line 1042 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 4)));
#line 1042 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeWarningInfo_8;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 0)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 1)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 2)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 3)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 6)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 7)));

#line 1045 "mode_info.m"
    {
#line 1045 "mode_info.m"
      check_hlds__mode_info__ModeWarningInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1045 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 0) = ((MR_Box) (check_hlds__mode_info__ModeWarning_4));
#line 1045 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 1) = ((MR_Box) (check_hlds__mode_info__Context_6));
#line 1045 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 2) = ((MR_Box) (check_hlds__mode_info__ModeContext_7));
#line 1045 "mode_info.m"
    }
#line 1046 "mode_info.m"
    {
#line 1046 "mode_info.m"
      check_hlds__mode_info__mode_info_add_warning_3_p_0(check_hlds__mode_info__ModeWarningInfo_8, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10);
#line 1046 "mode_info.m"
      return;
    }
#line 1042 "mode_info.m"
  }
#line 318 "mode_info.m"
}

#line 315 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_add_error_3_p_0(
#line 315 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeErrorInfo_4,
#line 315 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8,
#line 315 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9)
#line 315 "mode_info.m"
{
#line 1037 "mode_info.m"
  {
#line 1037 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1037 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 1037 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors_7;
#line 1037 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));

#line 1039 "mode_info.m"
    {
#line 1039 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__ModeErrorInfo_4));
#line 1039 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "mode_info.m"
    }
#line 1039 "mode_info.m"
    {
#line 1039 "mode_info.m"
      mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__mode_info__Errors0_6, check_hlds__mode_info__V_10_10, &check_hlds__mode_info__Errors_7);
    }
#line 1040 "mode_info.m"
    {
#line 1040 "mode_info.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__mode_info__Errors_7, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9);
#line 1040 "mode_info.m"
      return;
    }
#line 1037 "mode_info.m"
  }
#line 315 "mode_info.m"
}

#line 312 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_error_4_p_0(
#line 312 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_5,
#line 312 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeError_6,
#line 312 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11,
#line 312 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12)
#line 312 "mode_info.m"
{
#line 1031 "mode_info.m"
  {
#line 1031 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1031 "mode_info.m"
    MR_Word check_hlds__mode_info__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 5)));
#line 1031 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 4)));
#line 1031 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeErrorInfo_10;
#line 1031 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 3)));
#line 1031 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors_37;
#line 1031 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 0)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 1)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 2)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 6)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 7)));

#line 1034 "mode_info.m"
    {
#line 1034 "mode_info.m"
      check_hlds__mode_info__ModeErrorInfo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1034 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 0) = ((MR_Box) (check_hlds__mode_info__Vars_5));
#line 1034 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 1) = ((MR_Box) (check_hlds__mode_info__ModeError_6));
#line 1034 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 2) = ((MR_Box) (check_hlds__mode_info__Context_8));
#line 1034 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 3) = ((MR_Box) (check_hlds__mode_info__ModeContext_9));
#line 1034 "mode_info.m"
    }
#line 1039 "mode_info.m"
    {
#line 1039 "mode_info.m"
      check_hlds__mode_info__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_38_38, 0) = ((MR_Box) (check_hlds__mode_info__ModeErrorInfo_10));
#line 1039 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "mode_info.m"
    }
#line 1039 "mode_info.m"
    {
#line 1039 "mode_info.m"
      mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__mode_info__Errors0_36, check_hlds__mode_info__V_38_38, &check_hlds__mode_info__Errors_37);
    }
#line 1040 "mode_info.m"
    {
#line 1040 "mode_info.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__mode_info__Errors_37, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12);
#line 1040 "mode_info.m"
      return;
    }
#line 1031 "mode_info.m"
  }
#line 312 "mode_info.m"
}

#line 305 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_var_is_nondet_live_3_p_0(
#line 305 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 305 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_5,
#line 305 "mode_info.m"
  MR_Word * check_hlds__mode_info__Result_6)
#line 305 "mode_info.m"
{
#line 950 "mode_info.m"
  {
#line 950 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 950 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));

#line 952 "mode_info.m"
    {
#line 952 "mode_info.m"
      check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__NondetLiveVars0_7, ((MR_Box) (check_hlds__mode_info__Var_5)));
    }
#line 954 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 953 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 0;
#line 954 "mode_info.m"
    else
#line 955 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 1;
#line 950 "mode_info.m"
  }
#line 305 "mode_info.m"
}

#line 300 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_var_is_live_3_p_0(
#line 300 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 300 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_5,
#line 300 "mode_info.m"
  MR_Word * check_hlds__mode_info__Result_6)
#line 300 "mode_info.m"
{
#line 942 "mode_info.m"
  {
#line 942 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 942 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 942 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 605 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;

#line 605 "mode_info.m"
    check_hlds__mode_info__LiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 944 "mode_info.m"
    {
#line 944 "mode_info.m"
      check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVars0_7, ((MR_Box) (check_hlds__mode_info__Var_5)));
    }
#line 946 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 945 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 0;
#line 946 "mode_info.m"
    else
#line 947 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 1;
#line 942 "mode_info.m"
  }
#line 300 "mode_info.m"
}

#line 298 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(
#line 298 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_1,
#line 298 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 298 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 298 "mode_info.m"
{
#line 935 "mode_info.m"
  {
#line 935 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;

#line 935 "mode_info.m"
    if ((check_hlds__mode_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 935 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 935 "mode_info.m"
    else
#line 936 "mode_info.m"
      {
#line 936 "mode_info.m"
        MR_Word check_hlds__mode_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 936 "mode_info.m"
        MR_Word check_hlds__mode_info__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 936 "mode_info.m"
        MR_Word check_hlds__mode_info__Live_8;
#line 936 "mode_info.m"
        MR_Word check_hlds__mode_info__Lives_9;
#line 936 "mode_info.m"
        MR_Word check_hlds__mode_info__LiveVars0_13;
#line 936 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 7)));
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 0)));
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 1)));
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 2)));
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 3)));
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 4)));
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 5)));
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 6)));
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 0)));
#line 605 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 1)));
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 2)));
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 3)));
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 4)));
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 5)));
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31;
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32;
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33;
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34;
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35;
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36;
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37;
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38;
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39;
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40;
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41;
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42;
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43;
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44;
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45;
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46;
#line 605 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47;

#line 605 "mode_info.m"
        check_hlds__mode_info__LiveVars0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 6)));
#line 605 "mode_info.m"
        check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 7)));
#line 605 "mode_info.m"
        check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 8)));
#line 605 "mode_info.m"
        check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
        check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
        check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 605 "mode_info.m"
        check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 10)));
#line 605 "mode_info.m"
        check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
        check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
        check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 12)));
#line 605 "mode_info.m"
        check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 13)));
#line 605 "mode_info.m"
        check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 14)));
#line 605 "mode_info.m"
        check_hlds__mode_info__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
        check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
        check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 605 "mode_info.m"
        check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 605 "mode_info.m"
        check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 605 "mode_info.m"
        check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 944 "mode_info.m"
        {
#line 944 "mode_info.m"
          check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVars0_13, ((MR_Box) (check_hlds__mode_info__Var_6)));
        }
#line 946 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 945 "mode_info.m"
          check_hlds__mode_info__Live_8 = (MR_Integer) 0;
#line 946 "mode_info.m"
        else
#line 947 "mode_info.m"
          check_hlds__mode_info__Live_8 = (MR_Integer) 1;
#line 938 "mode_info.m"
        {
#line 938 "mode_info.m"
          check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(check_hlds__mode_info__ModeInfo_1, check_hlds__mode_info__Vars_7, &check_hlds__mode_info__Lives_9);
        }
#line 936 "mode_info.m"
        {
#line 936 "mode_info.m"
          MR_Word base;
#line 936 "mode_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 936 "mode_info.m"
          *check_hlds__mode_info__HeadVar__3_3 = base;
#line 936 "mode_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_info__Live_8));
#line 936 "mode_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_info__Lives_9));
#line 936 "mode_info.m"
        }
#line 936 "mode_info.m"
      }
#line 935 "mode_info.m"
  }
#line 298 "mode_info.m"
}

#line 293 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_call_id_3_p_0(
#line 293 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 293 "mode_info.m"
  MR_Word check_hlds__mode_info__PredId_5,
#line 293 "mode_info.m"
  MR_Word * check_hlds__mode_info__CallId_6)
#line 293 "mode_info.m"
{
#line 1024 "mode_info.m"
  {
#line 1024 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1024 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 1024 "mode_info.m"
    MR_Word check_hlds__mode_info__PredInfo_8;
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));

#line 1026 "mode_info.m"
    {
#line 1026 "mode_info.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__mode_info__ModuleInfo_7, check_hlds__mode_info__PredId_5, &check_hlds__mode_info__PredInfo_8);
    }
#line 1027 "mode_info.m"
    {
#line 1027 "mode_info.m"
      hlds__hlds_pred__pred_info_get_call_id_2_p_0(check_hlds__mode_info__PredInfo_8, check_hlds__mode_info__CallId_6);
#line 1027 "mode_info.m"
      return;
    }
#line 1024 "mode_info.m"
  }
#line 293 "mode_info.m"
}

#line 287 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_3_p_0(
#line 287 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 287 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_5,
#line 287 "mode_info.m"
  MR_Word * check_hlds__mode_info__Reason_6)
#line 287 "mode_info.m"
{
#line 994 "mode_info.m"
  {
#line 994 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 994 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVarsList_7;
#line 994 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 0)));
#line 593 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 1)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 2)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 3)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 4)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;

#line 593 "mode_info.m"
    check_hlds__mode_info__LockedVarsList_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 5)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 6)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 7)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 8)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 13)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 996 "mode_info.m"
    {
#line 996 "mode_info.m"
      return check_hlds__mode_info__succeeded = check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(check_hlds__mode_info__LockedVarsList_7, check_hlds__mode_info__Var_5, check_hlds__mode_info__Reason_6);
    }
#line 994 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 994 "mode_info.m"
  }
#line 287 "mode_info.m"
}

#line 284 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_unlock_vars_4_p_0(
#line 284 "mode_info.m"
  MR_Word check_hlds__mode_info__Reason_5,
#line 284 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_6,
#line 284 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12,
#line 284 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_13)
#line 284 "mode_info.m"
{
#line 982 "mode_info.m"
  {
#line 982 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars0_8;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars_11;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 7)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 0)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 1)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 2)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 3)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 4)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 5)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 6)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 0)));
#line 593 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 1)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 2)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 3)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 4)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_47_47;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_48_48;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_49_49;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_50_50;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_51_51;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_52_52;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_53_53;
#line 989 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars1_10;
#line 985 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeCtorInfo_19_19;
#line 985 "mode_info.m"
    MR_Word check_hlds__mode_info__TheseVars_9;
#line 985 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 985 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;

#line 593 "mode_info.m"
    check_hlds__mode_info__LockedVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 5)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 6)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 7)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 8)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 10)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 12)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 13)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 14)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 985 "mode_info.m"
    check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__LockedVars0_8)) == (MR_mktag((MR_Integer) 1)));
#line 985 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 985 "mode_info.m"
      {
#line 985 "mode_info.m"
        check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__LockedVars0_8, (MR_Integer) 0)));
#line 985 "mode_info.m"
        check_hlds__mode_info__LockedVars1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__LockedVars0_8, (MR_Integer) 1)));
#line 985 "mode_info.m"
        check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, (MR_Integer) 0)));
#line 985 "mode_info.m"
        check_hlds__mode_info__TheseVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, (MR_Integer) 1)));
#line 985 "mode_info.m"
        {
#line 985 "mode_info.m"
          check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____var_lock_reason_0_0(check_hlds__mode_info__Reason_5, check_hlds__mode_info__V_20_20);
        }
#line 985 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 985 "mode_info.m"
          {
#line 8603 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 986 "mode_info.m"
            {
#line 986 "mode_info.m"
              check_hlds__mode_info__succeeded = parse_tree__set_of_var__equal_2_p_0(check_hlds__mode_info__TypeCtorInfo_19_19, check_hlds__mode_info__TheseVars_9, check_hlds__mode_info__Vars_6);
            }
#line 985 "mode_info.m"
          }
#line 985 "mode_info.m"
      }
#line 989 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 988 "mode_info.m"
      check_hlds__mode_info__LockedVars_11 = check_hlds__mode_info__LockedVars1_10;
#line 989 "mode_info.m"
    else
#line 990 "mode_info.m"
      {
#line 990 "mode_info.m"
        {
#line 990 "mode_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_unlock_vars\'/4", (MR_String) "some kind of nesting error");
#line 990 "mode_info.m"
          return;
        }
#line 990 "mode_info.m"
      }
#line 992 "mode_info.m"
    {
#line 992 "mode_info.m"
      check_hlds__mode_info__mode_info_set_locked_vars_3_p_0(check_hlds__mode_info__LockedVars_11, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_13);
#line 992 "mode_info.m"
      return;
    }
#line 982 "mode_info.m"
  }
#line 284 "mode_info.m"
}

#line 281 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_lock_vars_4_p_0(
#line 281 "mode_info.m"
  MR_Word check_hlds__mode_info__Reason_5,
#line 281 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_6,
#line 281 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9,
#line 281 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10)
#line 281 "mode_info.m"
{
#line 978 "mode_info.m"
  {
#line 978 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars_8;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 7)));
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 0)));
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 1)));
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 2)));
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 3)));
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 4)));
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 5)));
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 6)));
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 0)));
#line 978 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 1)));
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 2)));
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 3)));
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 4)));
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 978 "mode_info.m"
    MR_Word check_hlds__mode_info__V_53_53;

#line 593 "mode_info.m"
    check_hlds__mode_info__LockedVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 5)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 6)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 7)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 8)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 10)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 12)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 13)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 14)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 980 "mode_info.m"
    {
#line 980 "mode_info.m"
      check_hlds__mode_info__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 980 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, 0) = ((MR_Box) (check_hlds__mode_info__Reason_5));
#line 980 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, 1) = ((MR_Box) (check_hlds__mode_info__Vars_6));
#line 980 "mode_info.m"
    }
#line 980 "mode_info.m"
    {
#line 980 "mode_info.m"
      check_hlds__mode_info__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_11_11, 0) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 980 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_11_11, 1) = ((MR_Box) (check_hlds__mode_info__LockedVars_8));
#line 980 "mode_info.m"
    }
#line 658 "mode_info.m"
    {
#line 658 "mode_info.m"
      check_hlds__mode_info__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 0) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 1) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 2) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 3) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 4) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 5) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 6) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 7) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 8) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 9) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)))))));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 10) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 11) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)))));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 12) = ((MR_Box) (check_hlds__mode_info__V_38_38));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 13) = ((MR_Box) (check_hlds__mode_info__V_39_39));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 14) = ((MR_Box) (check_hlds__mode_info__V_40_40));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 15) = ((MR_Box) ((check_hlds__mode_info__V_41_41 | ((((check_hlds__mode_info__V_42_42 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_43_43 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_44_44 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_45_45 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_46_46 << (MR_Integer) 5)))))))))))));
#line 658 "mode_info.m"
    }
#line 658 "mode_info.m"
    {
#line 658 "mode_info.m"
      MR_Word base;
#line 658 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 658 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10 = base;
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 658 "mode_info.m"
    }
#line 978 "mode_info.m"
  }
#line 281 "mode_info.m"
}

#line 278 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_types_of_vars_3_p_0(
#line 278 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 278 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_5,
#line 278 "mode_info.m"
  MR_Word * check_hlds__mode_info__TypesOfVars_6)
#line 278 "mode_info.m"
{
#line 965 "mode_info.m"
  {
#line 965 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 965 "mode_info.m"
    MR_Word check_hlds__mode_info__VarTypes_7;
#line 965 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 0)));
#line 583 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 1)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 2)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;

#line 583 "mode_info.m"
    check_hlds__mode_info__VarTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 3)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 4)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 5)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 6)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 7)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 8)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 13)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 967 "mode_info.m"
    {
#line 967 "mode_info.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__mode_info__VarTypes_7, check_hlds__mode_info__Vars_5, check_hlds__mode_info__TypesOfVars_6);
#line 967 "mode_info.m"
      return;
    }
#line 965 "mode_info.m"
  }
#line 278 "mode_info.m"
}

#line 273 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(
#line 273 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 273 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 273 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 273 "mode_info.m"
{
#line 727 "mode_info.m"
  {
#line 727 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 727 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 727 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 727 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 727 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 727 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 727 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 727 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 727 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 727 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 728 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 728 "mode_info.m"
    {
#line 728 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__X_4 << (MR_Integer) 5)))))))))))));
#line 728 "mode_info.m"
    }
#line 728 "mode_info.m"
    {
#line 728 "mode_info.m"
      MR_Word base;
#line 728 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 728 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 728 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 728 "mode_info.m"
    }
#line 727 "mode_info.m"
  }
#line 273 "mode_info.m"
}

#line 271 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_make_ground_terms_unique_3_p_0(
#line 271 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 271 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 271 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 271 "mode_info.m"
{
#line 725 "mode_info.m"
  {
#line 725 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 725 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 725 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 725 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 725 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 725 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 725 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 725 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 725 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 725 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 726 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 726 "mode_info.m"
    {
#line 726 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__X_4 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 726 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 726 "mode_info.m"
    }
#line 725 "mode_info.m"
  }
#line 271 "mode_info.m"
}

#line 269 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_had_from_ground_term_3_p_0(
#line 269 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 269 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 269 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 269 "mode_info.m"
{
#line 722 "mode_info.m"
  {
#line 722 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 718 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_86_86;

#line 718 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 718 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 718 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 747 "mode_info.m"
{
#define MR_PROC_LABEL check_hlds__mode_info__mode_info_set_had_from_ground_term_3_p_0

	MR_Word Old;
	MR_Word New;
	MR_bool SUCCESS_INDICATOR;

	Old = (MR_Word) ((MR_Box) (check_hlds__mode_info__X_4)) ;
	New = (MR_Word) ((MR_Box) (check_hlds__mode_info__V_8_8)) ;
		{
#line 747 "mode_info.m"

    if (((MR_Unsigned) Old) == ((MR_Unsigned) New)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        SUCCESS_INDICATOR = MR_TRUE;
    }

#line 9401 "check_hlds.mode_info.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 747 "mode_info.m"
	}
check_hlds__mode_info__succeeded  = SUCCESS_INDICATOR;
}
#line 722 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 721 "mode_info.m"
      {
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12;
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 721 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 721 "mode_info.m"
        {
#line 721 "mode_info.m"
          check_hlds__mode_info__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 0) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 1) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 2) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 3) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 4) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 5) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 6) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 7) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 8) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) ((check_hlds__mode_info__V_59_59 | ((((check_hlds__mode_info__V_60_60 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_61_61 << (MR_Integer) 2)))))));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 10) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 11) = ((MR_Box) ((check_hlds__mode_info__V_63_63 | ((check_hlds__mode_info__V_64_64 << (MR_Integer) 1)))));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 12) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 13) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 14) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) ((check_hlds__mode_info__V_68_68 | ((((check_hlds__mode_info__V_69_69 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_70_70 << (MR_Integer) 2)) | ((((check_hlds__mode_info__X_4 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_73_73 << (MR_Integer) 5)))))))))))));
#line 721 "mode_info.m"
        }
#line 721 "mode_info.m"
        {
#line 721 "mode_info.m"
          MR_Word base;
#line 721 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 721 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_47_47));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 721 "mode_info.m"
        }
#line 721 "mode_info.m"
      }
#line 722 "mode_info.m"
    else
#line 721 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 722 "mode_info.m"
  }
#line 269 "mode_info.m"
}

#line 267 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_in_from_ground_term_3_p_0(
#line 267 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 267 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 267 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 267 "mode_info.m"
{
#line 714 "mode_info.m"
  {
#line 714 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 714 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 714 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 714 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 714 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 714 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 714 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 714 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 714 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 714 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 715 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 715 "mode_info.m"
    {
#line 715 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__X_4 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 715 "mode_info.m"
    }
#line 715 "mode_info.m"
    {
#line 715 "mode_info.m"
      MR_Word base;
#line 715 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 715 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 715 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 715 "mode_info.m"
    }
#line 714 "mode_info.m"
  }
#line 267 "mode_info.m"
}

#line 265 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0(
#line 265 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 265 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 265 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 265 "mode_info.m"
{
#line 711 "mode_info.m"
  {
#line 711 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 707 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_86_86;

#line 707 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 707 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 707 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 707 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 707 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 707 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 707 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 707 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 707 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 707 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 707 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 707 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 707 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 747 "mode_info.m"
{
#define MR_PROC_LABEL check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0

	MR_Word Old;
	MR_Word New;
	MR_bool SUCCESS_INDICATOR;

	Old = (MR_Word) ((MR_Box) (check_hlds__mode_info__X_4)) ;
	New = (MR_Word) ((MR_Box) (check_hlds__mode_info__V_8_8)) ;
		{
#line 747 "mode_info.m"

    if (((MR_Unsigned) Old) == ((MR_Unsigned) New)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        SUCCESS_INDICATOR = MR_TRUE;
    }

#line 9834 "check_hlds.mode_info.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 747 "mode_info.m"
	}
check_hlds__mode_info__succeeded  = SUCCESS_INDICATOR;
}
#line 711 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 710 "mode_info.m"
      {
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12;
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 710 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 710 "mode_info.m"
        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 710 "mode_info.m"
        {
#line 710 "mode_info.m"
          check_hlds__mode_info__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 0) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 1) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 2) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 3) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 4) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 5) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 6) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 7) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 8) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) ((check_hlds__mode_info__V_59_59 | ((((check_hlds__mode_info__V_60_60 << (MR_Integer) 1)) | ((check_hlds__mode_info__X_4 << (MR_Integer) 2)))))));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 10) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 11) = ((MR_Box) ((check_hlds__mode_info__V_63_63 | ((check_hlds__mode_info__V_64_64 << (MR_Integer) 1)))));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 12) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 13) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 14) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) ((check_hlds__mode_info__V_68_68 | ((((check_hlds__mode_info__V_69_69 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_70_70 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_71_71 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_73_73 << (MR_Integer) 5)))))))))))));
#line 710 "mode_info.m"
        }
#line 710 "mode_info.m"
        {
#line 710 "mode_info.m"
          MR_Word base;
#line 710 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 710 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_47_47));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 710 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 710 "mode_info.m"
        }
#line 710 "mode_info.m"
      }
#line 711 "mode_info.m"
    else
#line 710 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 711 "mode_info.m"
  }
#line 265 "mode_info.m"
}

#line 263 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_checking_extra_goals_3_p_0(
#line 263 "mode_info.m"
  MR_Word check_hlds__mode_info__Checking_4,
#line 263 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_7,
#line 263 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_8)
#line 263 "mode_info.m"
{
#line 1008 "mode_info.m"
  {
#line 1008 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1008 "mode_info.m"
    MR_Word check_hlds__mode_info__Checking0_6;
#line 1008 "mode_info.m"
    MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 7)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 0)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 1)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 2)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 3)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 4)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 5)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 6)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 0)));
#line 625 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 1)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 2)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 3)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 4)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 5)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 6)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 7)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 8)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_73_73 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 10)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_77_77 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_78_78;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_79_79;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_80_80;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_81_81;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_82_82;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_83_83;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_84_84;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_85_85;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_86_86;

#line 625 "mode_info.m"
    check_hlds__mode_info__Checking0_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    check_hlds__mode_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 12)));
#line 625 "mode_info.m"
    check_hlds__mode_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 13)));
#line 625 "mode_info.m"
    check_hlds__mode_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 14)));
#line 625 "mode_info.m"
    check_hlds__mode_info__V_81_81 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 625 "mode_info.m"
    check_hlds__mode_info__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    check_hlds__mode_info__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    check_hlds__mode_info__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    check_hlds__mode_info__V_85_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    check_hlds__mode_info__V_86_86 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1011 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__Checking0_6 == (MR_Integer) 1);
#line 1011 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 1012 "mode_info.m"
      check_hlds__mode_info__succeeded = (check_hlds__mode_info__Checking_4 == (MR_Integer) 1);
#line 1018 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 1016 "mode_info.m"
      {
#line 1016 "mode_info.m"
        {
#line 1016 "mode_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_set_checking_extra_goals\'/3", (MR_String) "rechecking extra goals adds more extra goals");
#line 1016 "mode_info.m"
          return;
        }
#line 1016 "mode_info.m"
      }
#line 1018 "mode_info.m"
    else
#line 1019 "mode_info.m"
      {
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 7)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14;
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 0)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 1)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 2)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 3)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 4)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 5)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 6)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 0)));
#line 1019 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 1)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 2)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 3)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 4)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 5)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 6)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 7)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 8)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 10)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 12)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 13)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 14)));
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1019 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 1019 "mode_info.m"
        {
#line 1019 "mode_info.m"
          check_hlds__mode_info__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 0) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 1) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 2) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 3) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 4) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 5) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 6) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 7) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 8) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 9) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 2)))))));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 10) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 11) = ((MR_Box) ((check_hlds__mode_info__V_35_35 | ((check_hlds__mode_info__Checking_4 << (MR_Integer) 1)))));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 12) = ((MR_Box) (check_hlds__mode_info__V_37_37));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 13) = ((MR_Box) (check_hlds__mode_info__V_38_38));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 14) = ((MR_Box) (check_hlds__mode_info__V_39_39));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 15) = ((MR_Box) ((check_hlds__mode_info__V_40_40 | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_42_42 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_43_43 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_44_44 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_45_45 << (MR_Integer) 5)))))))))))));
#line 1019 "mode_info.m"
        }
#line 1019 "mode_info.m"
        {
#line 1019 "mode_info.m"
          MR_Word base;
#line 1019 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1019 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_8 = base;
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 1019 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 1019 "mode_info.m"
        }
#line 1019 "mode_info.m"
      }
#line 1008 "mode_info.m"
  }
#line 263 "mode_info.m"
}

#line 261 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_may_change_called_proc_3_p_0(
#line 261 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 261 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 261 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 261 "mode_info.m"
{
#line 703 "mode_info.m"
  {
#line 703 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 703 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 703 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 703 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 703 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 703 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 703 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 703 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 703 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 703 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 704 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 704 "mode_info.m"
    {
#line 704 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__X_4 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 704 "mode_info.m"
    }
#line 704 "mode_info.m"
    {
#line 704 "mode_info.m"
      MR_Word base;
#line 704 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 704 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 704 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 704 "mode_info.m"
    }
#line 703 "mode_info.m"
  }
#line 261 "mode_info.m"
}

#line 259 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_how_to_check_3_p_0(
#line 259 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 259 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 259 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 259 "mode_info.m"
{
#line 701 "mode_info.m"
  {
#line 701 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 701 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 701 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 701 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 701 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 701 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 701 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 701 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 701 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 701 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 702 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 702 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);

#line 702 "mode_info.m"
    {
#line 702 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__X_4 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 702 "mode_info.m"
    }
#line 702 "mode_info.m"
    {
#line 702 "mode_info.m"
      MR_Word base;
#line 702 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 702 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 702 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 702 "mode_info.m"
    }
#line 701 "mode_info.m"
  }
#line 259 "mode_info.m"
}

#line 257 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(
#line 257 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 257 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 257 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 257 "mode_info.m"
{
#line 698 "mode_info.m"
  {
#line 698 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 696 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_86_86;

#line 696 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 696 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 696 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 696 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 696 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 696 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 696 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 696 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 696 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 696 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 696 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 747 "mode_info.m"
{
#define MR_PROC_LABEL check_hlds__mode_info__mode_info_set_changed_flag_3_p_0

	MR_Word Old;
	MR_Word New;
	MR_bool SUCCESS_INDICATOR;

	Old = (MR_Word) ((MR_Box) (check_hlds__mode_info__X_4)) ;
	New = (MR_Word) ((MR_Box) (check_hlds__mode_info__V_8_8)) ;
		{
#line 747 "mode_info.m"

    if (((MR_Unsigned) Old) == ((MR_Unsigned) New)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        SUCCESS_INDICATOR = MR_TRUE;
    }

#line 10675 "check_hlds.mode_info.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 747 "mode_info.m"
	}
check_hlds__mode_info__succeeded  = SUCCESS_INDICATOR;
}
#line 698 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 697 "mode_info.m"
      {
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12;
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 697 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 697 "mode_info.m"
        MR_Word check_hlds__mode_info__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);

#line 697 "mode_info.m"
        {
#line 697 "mode_info.m"
          check_hlds__mode_info__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 0) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 1) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 2) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 3) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 4) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 5) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 6) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 7) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 8) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) ((check_hlds__mode_info__V_59_59 | ((((check_hlds__mode_info__V_60_60 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_61_61 << (MR_Integer) 2)))))));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 10) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 11) = ((MR_Box) ((check_hlds__mode_info__X_4 | ((check_hlds__mode_info__V_64_64 << (MR_Integer) 1)))));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 12) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 13) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 14) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) ((check_hlds__mode_info__V_68_68 | ((((check_hlds__mode_info__V_69_69 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_70_70 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_71_71 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_73_73 << (MR_Integer) 5)))))))))))));
#line 697 "mode_info.m"
        }
#line 697 "mode_info.m"
        {
#line 697 "mode_info.m"
          MR_Word base;
#line 697 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 697 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_47_47));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 697 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 697 "mode_info.m"
        }
#line 697 "mode_info.m"
      }
#line 698 "mode_info.m"
    else
#line 697 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 698 "mode_info.m"
  }
#line 257 "mode_info.m"
}

#line 255 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_parallel_vars_3_p_0(
#line 255 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 255 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 255 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 255 "mode_info.m"
{
#line 693 "mode_info.m"
  {
#line 693 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 694 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));

#line 694 "mode_info.m"
    {
#line 694 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 694 "mode_info.m"
    }
#line 694 "mode_info.m"
    {
#line 694 "mode_info.m"
      MR_Word base;
#line 694 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 694 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 694 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 694 "mode_info.m"
    }
#line 693 "mode_info.m"
  }
#line 255 "mode_info.m"
}

#line 253 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_last_checkpoint_insts_3_p_0(
#line 253 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 253 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 253 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 253 "mode_info.m"
{
#line 691 "mode_info.m"
  {
#line 691 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 692 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 692 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));

#line 692 "mode_info.m"
    {
#line 692 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 692 "mode_info.m"
    }
#line 692 "mode_info.m"
    {
#line 692 "mode_info.m"
      MR_Word base;
#line 692 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 692 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 692 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 692 "mode_info.m"
    }
#line 691 "mode_info.m"
  }
#line 253 "mode_info.m"
}

#line 251 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(
#line 251 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 251 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 251 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 251 "mode_info.m"
{
#line 688 "mode_info.m"
  {
#line 688 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 686 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 686 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 686 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 686 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 686 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 686 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 686 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 686 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;

#line 747 "mode_info.m"
{
#define MR_PROC_LABEL check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0

	MR_Word Old;
	MR_Word New;
	MR_bool SUCCESS_INDICATOR;

	Old = (MR_Word) ((MR_Box) (check_hlds__mode_info__X_4)) ;
	New = (MR_Word) ((MR_Box) (check_hlds__mode_info__V_8_8)) ;
		{
#line 747 "mode_info.m"

    if (((MR_Unsigned) Old) == ((MR_Unsigned) New)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        SUCCESS_INDICATOR = MR_TRUE;
    }

#line 11185 "check_hlds.mode_info.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 747 "mode_info.m"
	}
check_hlds__mode_info__succeeded  = SUCCESS_INDICATOR;
}
#line 688 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 687 "mode_info.m"
      {
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));

#line 687 "mode_info.m"
        {
#line 687 "mode_info.m"
          MR_Word base;
#line 687 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 687 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 687 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 687 "mode_info.m"
        }
#line 687 "mode_info.m"
      }
#line 688 "mode_info.m"
    else
#line 687 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 688 "mode_info.m"
  }
#line 251 "mode_info.m"
}

#line 249 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_live_vars_3_p_0(
#line 249 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 249 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 249 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 249 "mode_info.m"
{
#line 683 "mode_info.m"
  {
#line 683 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 684 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));

#line 684 "mode_info.m"
    {
#line 684 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 684 "mode_info.m"
    }
#line 684 "mode_info.m"
    {
#line 684 "mode_info.m"
      MR_Word base;
#line 684 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 684 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 684 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 684 "mode_info.m"
    }
#line 683 "mode_info.m"
  }
#line 249 "mode_info.m"
}

#line 247 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_delay_info_3_p_0(
#line 247 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 247 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 247 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 247 "mode_info.m"
{
#line 680 "mode_info.m"
  {
#line 680 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;

#line 747 "mode_info.m"
{
#define MR_PROC_LABEL check_hlds__mode_info__mode_info_set_delay_info_3_p_0

	MR_Word Old;
	MR_Word New;
	MR_bool SUCCESS_INDICATOR;

	Old = (MR_Word) ((MR_Box) (check_hlds__mode_info__X_4)) ;
	New = (MR_Word) ((MR_Box) (check_hlds__mode_info__V_8_8)) ;
		{
#line 747 "mode_info.m"

    if (((MR_Unsigned) Old) == ((MR_Unsigned) New)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        SUCCESS_INDICATOR = MR_TRUE;
    }

#line 11456 "check_hlds.mode_info.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 747 "mode_info.m"
	}
check_hlds__mode_info__succeeded  = SUCCESS_INDICATOR;
}
#line 680 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 679 "mode_info.m"
      {
#line 679 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 679 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 679 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 679 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 679 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 679 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 679 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 679 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));

#line 679 "mode_info.m"
        {
#line 679 "mode_info.m"
          MR_Word base;
#line 679 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 679 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 679 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 679 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 679 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 679 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 679 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 679 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 679 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 679 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 679 "mode_info.m"
        }
#line 679 "mode_info.m"
      }
#line 680 "mode_info.m"
    else
#line 679 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 680 "mode_info.m"
  }
#line 247 "mode_info.m"
}

#line 245 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_var_types_3_p_0(
#line 245 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 245 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 245 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 245 "mode_info.m"
{
#line 647 "mode_info.m"
  {
#line 647 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 648 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));

#line 648 "mode_info.m"
    {
#line 648 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 648 "mode_info.m"
    }
#line 648 "mode_info.m"
    {
#line 648 "mode_info.m"
      MR_Word base;
#line 648 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 648 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 648 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 648 "mode_info.m"
    }
#line 647 "mode_info.m"
  }
#line 245 "mode_info.m"
}

#line 243 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_varset_3_p_0(
#line 243 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 243 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 243 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 243 "mode_info.m"
{
#line 645 "mode_info.m"
  {
#line 645 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 646 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));

#line 646 "mode_info.m"
    {
#line 646 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 646 "mode_info.m"
    }
#line 646 "mode_info.m"
    {
#line 646 "mode_info.m"
      MR_Word base;
#line 646 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 646 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 646 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 646 "mode_info.m"
    }
#line 645 "mode_info.m"
  }
#line 243 "mode_info.m"
}

#line 241 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(
#line 241 "mode_info.m"
  MR_Word check_hlds__mode_info__OldLiveVars_4,
#line 241 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_13,
#line 241 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_14)
#line 241 "mode_info.m"
{
#line 920 "mode_info.m"
  {
#line 920 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 920 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeInfo_19_19;
#line 920 "mode_info.m"
    MR_Word check_hlds__mode_info__OldLiveVarsList_6;
#line 920 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 920 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars0_8;
#line 920 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars_9;
#line 920 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars_10;
#line 920 "mode_info.m"
    MR_Word check_hlds__mode_info__DelayInfo0_11;
#line 920 "mode_info.m"
    MR_Word check_hlds__mode_info__DelayInfo_12;
#line 920 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_15_15;
#line 920 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_16_16;
#line 920 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 605 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_31_31;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_47_47;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_48_48;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_49_49;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_50_50;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_51_51;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_52_52;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_64_64;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_65_65;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_70_70;

#line 921 "mode_info.m"
    {
#line 921 "mode_info.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_info__OldLiveVars_4, &check_hlds__mode_info__OldLiveVarsList_6);
    }
#line 605 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 0)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 1)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 2)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 3)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 4)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 5)));
#line 605 "mode_info.m"
    check_hlds__mode_info__NondetLiveVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 6)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 7)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 0)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 1)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 2)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 3)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 4)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 5)));
#line 605 "mode_info.m"
    check_hlds__mode_info__LiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 6)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 7)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 8)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 10)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 12)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 13)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 14)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 12004 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeInfo_19_19 = (MR_Word) &check_hlds__mode_info_scalar_common_1[0];
#line 924 "mode_info.m"
    {
#line 924 "mode_info.m"
      mercury__bag__det_remove_list_3_p_0(check_hlds__mode_info__TypeInfo_19_19, check_hlds__mode_info__OldLiveVarsList_6, check_hlds__mode_info__LiveVars0_7, &check_hlds__mode_info__LiveVars_9);
    }
#line 925 "mode_info.m"
    {
#line 925 "mode_info.m"
      mercury__bag__det_remove_list_3_p_0(check_hlds__mode_info__TypeInfo_19_19, check_hlds__mode_info__OldLiveVarsList_6, check_hlds__mode_info__NondetLiveVars0_8, &check_hlds__mode_info__NondetLiveVars_10);
    }
#line 926 "mode_info.m"
    {
#line 926 "mode_info.m"
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__mode_info__LiveVars_9, check_hlds__mode_info__STATE_VARIABLE_MI_0_13, &check_hlds__mode_info__STATE_VARIABLE_MI_15_15);
    }
#line 927 "mode_info.m"
    {
#line 927 "mode_info.m"
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__mode_info__NondetLiveVars_10, check_hlds__mode_info__STATE_VARIABLE_MI_15_15, &check_hlds__mode_info__STATE_VARIABLE_MI_16_16);
    }
#line 603 "mode_info.m"
    check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 0)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 1)));
#line 603 "mode_info.m"
    check_hlds__mode_info__DelayInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 2)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 3)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 4)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 5)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 6)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 7)));
#line 932 "mode_info.m"
    {
#line 932 "mode_info.m"
      check_hlds__delay_info__delay_info_bind_var_list_3_p_0(check_hlds__mode_info__OldLiveVarsList_6, check_hlds__mode_info__DelayInfo0_11, &check_hlds__mode_info__DelayInfo_12);
    }
#line 933 "mode_info.m"
    {
#line 933 "mode_info.m"
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__mode_info__DelayInfo_12, check_hlds__mode_info__STATE_VARIABLE_MI_16_16, check_hlds__mode_info__STATE_VARIABLE_MI_14);
#line 933 "mode_info.m"
      return;
    }
#line 920 "mode_info.m"
  }
#line 241 "mode_info.m"
}

#line 239 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_add_live_vars_3_p_0(
#line 239 "mode_info.m"
  MR_Word check_hlds__mode_info__NewLiveVars_4,
#line 239 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_11,
#line 239 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_12)
#line 239 "mode_info.m"
{
#line 908 "mode_info.m"
  {
#line 908 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 908 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeInfo_16_16;
#line 908 "mode_info.m"
    MR_Word check_hlds__mode_info__NewLiveVarsList_6;
#line 908 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 908 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars0_8;
#line 908 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars_9;
#line 908 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars_10;
#line 908 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_13_13;
#line 908 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 605 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_28_28;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_47_47;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_48_48;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_49_49;

#line 909 "mode_info.m"
    {
#line 909 "mode_info.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_info__NewLiveVars_4, &check_hlds__mode_info__NewLiveVarsList_6);
    }
#line 605 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 0)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 1)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 2)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 3)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 4)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 5)));
#line 605 "mode_info.m"
    check_hlds__mode_info__NondetLiveVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 6)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 7)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 0)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 1)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 2)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 3)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 4)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 5)));
#line 605 "mode_info.m"
    check_hlds__mode_info__LiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 6)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 7)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 8)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 10)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 12)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 13)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 14)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 12218 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeInfo_16_16 = (MR_Word) &check_hlds__mode_info_scalar_common_1[0];
#line 912 "mode_info.m"
    {
#line 912 "mode_info.m"
      mercury__bag__insert_list_3_p_0(check_hlds__mode_info__TypeInfo_16_16, check_hlds__mode_info__NewLiveVarsList_6, check_hlds__mode_info__LiveVars0_7, &check_hlds__mode_info__LiveVars_9);
    }
#line 913 "mode_info.m"
    {
#line 913 "mode_info.m"
      mercury__bag__insert_list_3_p_0(check_hlds__mode_info__TypeInfo_16_16, check_hlds__mode_info__NewLiveVarsList_6, check_hlds__mode_info__NondetLiveVars0_8, &check_hlds__mode_info__NondetLiveVars_10);
    }
#line 914 "mode_info.m"
    {
#line 914 "mode_info.m"
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__mode_info__LiveVars_9, check_hlds__mode_info__STATE_VARIABLE_MI_0_11, &check_hlds__mode_info__STATE_VARIABLE_MI_13_13);
    }
#line 915 "mode_info.m"
    {
#line 915 "mode_info.m"
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__mode_info__NondetLiveVars_10, check_hlds__mode_info__STATE_VARIABLE_MI_13_13, check_hlds__mode_info__STATE_VARIABLE_MI_12);
#line 915 "mode_info.m"
      return;
    }
#line 908 "mode_info.m"
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
#line 675 "mode_info.m"
  {
#line 675 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 675 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 675 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 675 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 675 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 675 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 675 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 675 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 675 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 675 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 676 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 676 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 676 "mode_info.m"
    {
#line 676 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__X_4 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 676 "mode_info.m"
    }
#line 676 "mode_info.m"
    {
#line 676 "mode_info.m"
      MR_Word base;
#line 676 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 676 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 676 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 676 "mode_info.m"
    }
#line 675 "mode_info.m"
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
#line 672 "mode_info.m"
  {
#line 672 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 670 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_86_86;

#line 670 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 670 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 747 "mode_info.m"
{
#define MR_PROC_LABEL check_hlds__mode_info__mode_info_set_need_to_requantify_3_p_0

	MR_Word Old;
	MR_Word New;
	MR_bool SUCCESS_INDICATOR;

	Old = (MR_Word) ((MR_Box) (check_hlds__mode_info__X_4)) ;
	New = (MR_Word) ((MR_Box) (check_hlds__mode_info__V_8_8)) ;
		{
#line 747 "mode_info.m"

    if (((MR_Unsigned) Old) == ((MR_Unsigned) New)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        SUCCESS_INDICATOR = MR_TRUE;
    }

#line 12511 "check_hlds.mode_info.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 747 "mode_info.m"
	}
check_hlds__mode_info__succeeded  = SUCCESS_INDICATOR;
}
#line 672 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 671 "mode_info.m"
      {
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12;
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 671 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 671 "mode_info.m"
        MR_Word check_hlds__mode_info__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);

#line 671 "mode_info.m"
        {
#line 671 "mode_info.m"
          check_hlds__mode_info__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 0) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 1) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 2) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 3) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 4) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 5) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 6) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 7) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 8) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) ((check_hlds__mode_info__V_59_59 | ((((check_hlds__mode_info__V_60_60 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_61_61 << (MR_Integer) 2)))))));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 10) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 11) = ((MR_Box) ((check_hlds__mode_info__V_63_63 | ((check_hlds__mode_info__V_64_64 << (MR_Integer) 1)))));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 12) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 13) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 14) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) ((check_hlds__mode_info__X_4 | ((((check_hlds__mode_info__V_69_69 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_70_70 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_71_71 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_73_73 << (MR_Integer) 5)))))))))))));
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_47_47));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 671 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 671 "mode_info.m"
        }
#line 671 "mode_info.m"
      }
#line 672 "mode_info.m"
    else
#line 671 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 672 "mode_info.m"
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
#line 667 "mode_info.m"
  {
#line 667 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 668 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));

#line 668 "mode_info.m"
    {
#line 668 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 668 "mode_info.m"
    }
#line 668 "mode_info.m"
    {
#line 668 "mode_info.m"
      MR_Word base;
#line 668 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 668 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 668 "mode_info.m"
    }
#line 667 "mode_info.m"
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
#line 664 "mode_info.m"
  {
#line 664 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;

#line 747 "mode_info.m"
{
#define MR_PROC_LABEL check_hlds__mode_info__mode_info_set_errors_3_p_0

	MR_Word Old;
	MR_Word New;
	MR_bool SUCCESS_INDICATOR;

	Old = (MR_Word) ((MR_Box) (check_hlds__mode_info__X_4)) ;
	New = (MR_Word) ((MR_Box) (check_hlds__mode_info__V_8_8)) ;
		{
#line 747 "mode_info.m"

    if (((MR_Unsigned) Old) == ((MR_Unsigned) New)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        SUCCESS_INDICATOR = MR_TRUE;
    }

#line 12870 "check_hlds.mode_info.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 747 "mode_info.m"
	}
check_hlds__mode_info__succeeded  = SUCCESS_INDICATOR;
}
#line 664 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 663 "mode_info.m"
      {
#line 663 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 663 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 663 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 663 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 663 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 663 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 663 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 663 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));

#line 663 "mode_info.m"
        {
#line 663 "mode_info.m"
          MR_Word base;
#line 663 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 663 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 663 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 663 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 663 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 663 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 663 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 663 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 663 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 663 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 663 "mode_info.m"
        }
#line 663 "mode_info.m"
      }
#line 664 "mode_info.m"
    else
#line 663 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 664 "mode_info.m"
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
#line 659 "mode_info.m"
  {
#line 659 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 660 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));

#line 660 "mode_info.m"
    {
#line 660 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 660 "mode_info.m"
    }
#line 660 "mode_info.m"
    {
#line 660 "mode_info.m"
      MR_Word base;
#line 660 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 660 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 660 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 660 "mode_info.m"
    }
#line 659 "mode_info.m"
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
#line 657 "mode_info.m"
  {
#line 657 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 658 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));

#line 658 "mode_info.m"
    {
#line 658 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 658 "mode_info.m"
    }
#line 658 "mode_info.m"
    {
#line 658 "mode_info.m"
      MR_Word base;
#line 658 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 658 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 658 "mode_info.m"
    }
#line 657 "mode_info.m"
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
#line 879 "mode_info.m"
  {
#line 879 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 879 "mode_info.m"
    MR_Word check_hlds__mode_info__InstMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 1)));
#line 879 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_11_11;
#line 879 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 0)));
#line 879 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 2)));
#line 879 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 3)));
#line 879 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 4)));
#line 879 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 5)));
#line 879 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 6)));
#line 879 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 7)));

#line 881 "mode_info.m"
    {
#line 881 "mode_info.m"
      check_hlds__mode_info__STATE_VARIABLE_MI_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 881 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 0) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 881 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 1) = ((MR_Box) (check_hlds__mode_info__InstMap_4));
#line 881 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 2) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 881 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 3) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 881 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 4) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 881 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 5) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 881 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 6) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 881 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 7) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 881 "mode_info.m"
    }
#line 883 "mode_info.m"
    {
#line 883 "mode_info.m"
      check_hlds__mode_info__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__mode_info__InstMap_4);
    }
#line 883 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 884 "mode_info.m"
      {
#line 884 "mode_info.m"
        check_hlds__mode_info__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__mode_info__InstMap0_6);
      }
#line 889 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 886 "mode_info.m"
      {
#line 886 "mode_info.m"
        MR_Word check_hlds__mode_info__DelayInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 2)));
#line 886 "mode_info.m"
        MR_Word check_hlds__mode_info__DelayInfo_8;
#line 603 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 0)));
#line 603 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 1)));
#line 603 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 3)));
#line 603 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 4)));
#line 603 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 5)));
#line 603 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 6)));
#line 603 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 7)));

#line 887 "mode_info.m"
        {
#line 887 "mode_info.m"
          check_hlds__delay_info__delay_info_bind_all_vars_2_p_0(check_hlds__mode_info__DelayInfo0_7, &check_hlds__mode_info__DelayInfo_8);
        }
#line 888 "mode_info.m"
        {
#line 888 "mode_info.m"
          check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__mode_info__DelayInfo_8, check_hlds__mode_info__STATE_VARIABLE_MI_11_11, check_hlds__mode_info__STATE_VARIABLE_MI_10);
#line 888 "mode_info.m"
          return;
        }
#line 886 "mode_info.m"
      }
#line 889 "mode_info.m"
    else
#line 888 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_10 = check_hlds__mode_info__STATE_VARIABLE_MI_11_11;
#line 879 "mode_info.m"
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
#line 874 "mode_info.m"
  {
#line 874 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 0)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 1)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 2)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 3)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 5)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 6)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 7)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 4)));

#line 656 "mode_info.m"
    {
#line 656 "mode_info.m"
      MR_Word base;
#line 656 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 656 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_5 = base;
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 656 "mode_info.m"
    }
#line 874 "mode_info.m"
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
#line 857 "mode_info.m"
  {
#line 857 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 857 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 4)));
#line 857 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 0)));
#line 857 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 1)));
#line 857 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 2)));
#line 857 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 3)));
#line 857 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 5)));
#line 857 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 6)));
#line 857 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 7)));

#line 863 "mode_info.m"
    if ((check_hlds__mode_info__ModeContext0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 870 "mode_info.m"
      {
#line 871 "mode_info.m"
        {
#line 871 "mode_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_set_call_arg_context\'/3", (MR_String) "uninitialized");
#line 871 "mode_info.m"
          return;
        }
#line 870 "mode_info.m"
      }
#line 863 "mode_info.m"
    else
#line 863 "mode_info.m"
      if (((MR_tag((MR_Word) check_hlds__mode_info__ModeContext0_6)) == (MR_mktag((MR_Integer) 1))))
#line 860 "mode_info.m"
        {
#line 860 "mode_info.m"
          MR_Word check_hlds__mode_info__CallId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__ModeContext0_6, (MR_Integer) 0)));
#line 860 "mode_info.m"
          MR_Word check_hlds__mode_info__V_16_16;
#line 860 "mode_info.m"
          MR_Integer check_hlds__mode_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__ModeContext0_6, (MR_Integer) 1)));

#line 861 "mode_info.m"
          {
#line 861 "mode_info.m"
            check_hlds__mode_info__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "mode_info.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_16_16, 0) = ((MR_Box) (check_hlds__mode_info__CallId_7));
#line 861 "mode_info.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_16_16, 1) = ((MR_Box) (check_hlds__mode_info__ArgNum_4));
#line 861 "mode_info.m"
          }
#line 656 "mode_info.m"
          {
#line 656 "mode_info.m"
            MR_Word base;
#line 656 "mode_info.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 656 "mode_info.m"
            *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12 = base;
#line 656 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 656 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 656 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 656 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 656 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 656 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 656 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 656 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 656 "mode_info.m"
          }
#line 860 "mode_info.m"
        }
#line 863 "mode_info.m"
      else
#line 864 "mode_info.m"
        *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12 = check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11;
#line 857 "mode_info.m"
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
#line 852 "mode_info.m"
  {
#line 852 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;

#line 852 "mode_info.m"
    if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 854 "mode_info.m"
      {
#line 854 "mode_info.m"
        MR_Word check_hlds__mode_info__CallId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 854 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15;
#line 656 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23;
#line 656 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24;
#line 656 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25;
#line 656 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26;
#line 656 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28;
#line 656 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29;
#line 656 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30;
#line 656 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27;

#line 855 "mode_info.m"
        {
#line 855 "mode_info.m"
          check_hlds__mode_info__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 855 "mode_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_15_15, 0) = ((MR_Box) (check_hlds__mode_info__CallId_11));
#line 855 "mode_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 855 "mode_info.m"
        }
#line 656 "mode_info.m"
        check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 0)));
#line 656 "mode_info.m"
        check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 1)));
#line 656 "mode_info.m"
        check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 2)));
#line 656 "mode_info.m"
        check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 3)));
#line 656 "mode_info.m"
        check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 4)));
#line 656 "mode_info.m"
        check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 5)));
#line 656 "mode_info.m"
        check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 6)));
#line 656 "mode_info.m"
        check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 7)));
#line 656 "mode_info.m"
        {
#line 656 "mode_info.m"
          MR_Word base;
#line 656 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 656 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_3 = base;
#line 656 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 656 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 656 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 656 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 656 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 656 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 656 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 656 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 656 "mode_info.m"
        }
#line 854 "mode_info.m"
      }
#line 852 "mode_info.m"
    else
#line 852 "mode_info.m"
      {
#line 852 "mode_info.m"
        MR_Word check_hlds__mode_info__UnifyContext_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 852 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8;
#line 656 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36;
#line 656 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37;
#line 656 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38;
#line 656 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39;
#line 656 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41;
#line 656 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42;
#line 656 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43;
#line 656 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40;

#line 853 "mode_info.m"
        {
#line 853 "mode_info.m"
          check_hlds__mode_info__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "mode_info.m"
          MR_hl_field(MR_mktag(2), check_hlds__mode_info__V_8_8, 0) = ((MR_Box) (check_hlds__mode_info__UnifyContext_4));
#line 853 "mode_info.m"
          MR_hl_field(MR_mktag(2), check_hlds__mode_info__V_8_8, 1) = ((MR_Box) ((MR_Integer) 0));
#line 853 "mode_info.m"
        }
#line 656 "mode_info.m"
        check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 0)));
#line 656 "mode_info.m"
        check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 1)));
#line 656 "mode_info.m"
        check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 2)));
#line 656 "mode_info.m"
        check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 3)));
#line 656 "mode_info.m"
        check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 4)));
#line 656 "mode_info.m"
        check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 5)));
#line 656 "mode_info.m"
        check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 6)));
#line 656 "mode_info.m"
        check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 7)));
#line 656 "mode_info.m"
        {
#line 656 "mode_info.m"
          MR_Word base;
#line 656 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 656 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_3 = base;
#line 656 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 656 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_37_37));
#line 656 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_38_38));
#line 656 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_39_39));
#line 656 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 656 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_41_41));
#line 656 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_42_42));
#line 656 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 656 "mode_info.m"
        }
#line 852 "mode_info.m"
      }
#line 852 "mode_info.m"
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
#line 656 "mode_info.m"
  {
#line 656 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));

#line 656 "mode_info.m"
    {
#line 656 "mode_info.m"
      MR_Word base;
#line 656 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 656 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 656 "mode_info.m"
    }
#line 656 "mode_info.m"
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
#line 652 "mode_info.m"
  {
#line 652 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;

#line 747 "mode_info.m"
{
#define MR_PROC_LABEL check_hlds__mode_info__mode_info_set_context_3_p_0

	MR_Word Old;
	MR_Word New;
	MR_bool SUCCESS_INDICATOR;

	Old = (MR_Word) ((MR_Box) (check_hlds__mode_info__X_4)) ;
	New = (MR_Word) ((MR_Box) (check_hlds__mode_info__V_8_8)) ;
		{
#line 747 "mode_info.m"

    if (((MR_Unsigned) Old) == ((MR_Unsigned) New)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        SUCCESS_INDICATOR = MR_TRUE;
    }

#line 13814 "check_hlds.mode_info.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 747 "mode_info.m"
	}
check_hlds__mode_info__succeeded  = SUCCESS_INDICATOR;
}
#line 652 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 651 "mode_info.m"
      {
#line 651 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 651 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 651 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 651 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 651 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 651 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 651 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 651 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));

#line 651 "mode_info.m"
        {
#line 651 "mode_info.m"
          MR_Word base;
#line 651 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 651 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 651 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 651 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 651 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 651 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 651 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 651 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 651 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 651 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 651 "mode_info.m"
        }
#line 651 "mode_info.m"
      }
#line 652 "mode_info.m"
    else
#line 651 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 652 "mode_info.m"
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
#line 643 "mode_info.m"
  {
#line 643 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 644 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));

#line 644 "mode_info.m"
    {
#line 644 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 644 "mode_info.m"
    }
#line 644 "mode_info.m"
    {
#line 644 "mode_info.m"
      MR_Word base;
#line 644 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 644 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 644 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 644 "mode_info.m"
    }
#line 643 "mode_info.m"
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
#line 641 "mode_info.m"
  {
#line 641 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 642 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));

#line 642 "mode_info.m"
    {
#line 642 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 642 "mode_info.m"
    }
#line 642 "mode_info.m"
    {
#line 642 "mode_info.m"
      MR_Word base;
#line 642 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 642 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 642 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 642 "mode_info.m"
    }
#line 641 "mode_info.m"
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
#line 638 "mode_info.m"
  {
#line 638 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;

#line 747 "mode_info.m"
{
#define MR_PROC_LABEL check_hlds__mode_info__mode_info_set_module_info_3_p_0

	MR_Word Old;
	MR_Word New;
	MR_bool SUCCESS_INDICATOR;

	Old = (MR_Word) ((MR_Box) (check_hlds__mode_info__X_4)) ;
	New = (MR_Word) ((MR_Box) (check_hlds__mode_info__V_8_8)) ;
		{
#line 747 "mode_info.m"

    if (((MR_Unsigned) Old) == ((MR_Unsigned) New)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        SUCCESS_INDICATOR = MR_TRUE;
    }

#line 14236 "check_hlds.mode_info.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 747 "mode_info.m"
	}
check_hlds__mode_info__succeeded  = SUCCESS_INDICATOR;
}
#line 638 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 637 "mode_info.m"
      {
#line 637 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 637 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 637 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 637 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 637 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 637 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 637 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 637 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));

#line 637 "mode_info.m"
        {
#line 637 "mode_info.m"
          MR_Word base;
#line 637 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 637 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 637 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 637 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 637 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 637 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 637 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 637 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 637 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 637 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 637 "mode_info.m"
        }
#line 637 "mode_info.m"
      }
#line 638 "mode_info.m"
    else
#line 637 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 638 "mode_info.m"
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
#line 632 "mode_info.m"
  {
#line 632 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 633 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 633 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 632 "mode_info.m"
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
#line 630 "mode_info.m"
  {
#line 630 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 631 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 631 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 631 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 630 "mode_info.m"
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
#line 628 "mode_info.m"
  {
#line 628 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 629 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 629 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 628 "mode_info.m"
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
#line 626 "mode_info.m"
  {
#line 626 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 627 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 627 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 627 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 627 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 627 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 626 "mode_info.m"
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
#line 618 "mode_info.m"
  {
#line 618 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 619 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 619 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 619 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 619 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 619 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 619 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 619 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 619 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 619 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 619 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 619 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 619 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 619 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 619 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 619 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 618 "mode_info.m"
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
#line 624 "mode_info.m"
  {
#line 624 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 625 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 625 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 625 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 625 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 625 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 625 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 624 "mode_info.m"
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
#line 622 "mode_info.m"
  {
#line 622 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 623 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 623 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 623 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 623 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 623 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 623 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 623 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 623 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 623 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 622 "mode_info.m"
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
#line 620 "mode_info.m"
  {
#line 620 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 621 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 621 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 621 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 621 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 621 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 621 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 621 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 621 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 621 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 621 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 620 "mode_info.m"
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
#line 616 "mode_info.m"
  {
#line 616 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 617 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 617 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 617 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 617 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 617 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 617 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 617 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 617 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 617 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 617 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 617 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 617 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 617 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 617 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 617 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 616 "mode_info.m"
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
#line 614 "mode_info.m"
  {
#line 614 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 615 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 615 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 614 "mode_info.m"
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
#line 612 "mode_info.m"
  {
#line 612 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 613 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 613 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 613 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 613 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 612 "mode_info.m"
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
#line 610 "mode_info.m"
  {
#line 610 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 611 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 611 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 611 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 611 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 611 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 611 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 611 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 611 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 611 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 611 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 611 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 611 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 611 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 611 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 611 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 611 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 611 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 610 "mode_info.m"
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
#line 608 "mode_info.m"
  {
#line 608 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 609 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 609 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 609 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 609 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 609 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 609 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 609 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 609 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 608 "mode_info.m"
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
#line 607 "mode_info.m"
  {
#line 607 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 607 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 607 "mode_info.m"
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
#line 604 "mode_info.m"
  {
#line 604 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 605 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 605 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 604 "mode_info.m"
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
#line 603 "mode_info.m"
  {
#line 603 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 603 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 603 "mode_info.m"
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
#line 582 "mode_info.m"
  {
#line 582 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 583 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 583 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 582 "mode_info.m"
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
#line 590 "mode_info.m"
  {
#line 590 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 591 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 591 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 591 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 591 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 591 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 591 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 591 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 591 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 591 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 591 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 591 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 591 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 591 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 591 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 591 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 591 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 591 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 591 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 590 "mode_info.m"
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
#line 580 "mode_info.m"
  {
#line 580 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 581 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 581 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 581 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 581 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 581 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 581 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 581 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 581 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 581 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 581 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 581 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 581 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 581 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 580 "mode_info.m"
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
#line 958 "mode_info.m"
  {
#line 958 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 958 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVarsBag_5;
#line 958 "mode_info.m"
    MR_Word check_hlds__mode_info__SortedList_6;
#line 958 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 605 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;

#line 605 "mode_info.m"
    check_hlds__mode_info__LiveVarsBag_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 960 "mode_info.m"
    {
#line 960 "mode_info.m"
      mercury__bag__to_list_without_duplicates_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVarsBag_5, &check_hlds__mode_info__SortedList_6);
    }
#line 961 "mode_info.m"
    {
#line 961 "mode_info.m"
      parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_info__SortedList_6, check_hlds__mode_info__LiveVars_4);
#line 961 "mode_info.m"
      return;
    }
#line 958 "mode_info.m"
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
#line 895 "mode_info.m"
  {
#line 895 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 895 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 897 "mode_info.m"
    {
#line 897 "mode_info.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__mode_info__Errors_5, check_hlds__mode_info__NumErrors_4);
#line 897 "mode_info.m"
      return;
    }
#line 895 "mode_info.m"
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
#line 600 "mode_info.m"
  {
#line 600 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 600 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 601 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 601 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 601 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 601 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 601 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 601 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 600 "mode_info.m"
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
#line 598 "mode_info.m"
  {
#line 598 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 599 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 599 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 599 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 598 "mode_info.m"
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
#line 596 "mode_info.m"
  {
#line 596 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 597 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 597 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 597 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 597 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 596 "mode_info.m"
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
#line 595 "mode_info.m"
  {
#line 595 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 595 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 595 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 595 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 595 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 595 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 595 "mode_info.m"
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
#line 592 "mode_info.m"
  {
#line 592 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 593 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 593 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 592 "mode_info.m"
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
#line 589 "mode_info.m"
  {
#line 589 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 589 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 589 "mode_info.m"
    check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 589 "mode_info.m"
    check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 589 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 589 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 589 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 589 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 589 "mode_info.m"
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
#line 587 "mode_info.m"
  {
#line 587 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 587 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 587 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 587 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 587 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 587 "mode_info.m"
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
#line 585 "mode_info.m"
  {
#line 585 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 585 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 585 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 585 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 585 "mode_info.m"
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
#line 578 "mode_info.m"
  {
#line 578 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 579 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 579 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 579 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 579 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 579 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 579 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 579 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 579 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 579 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 579 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 579 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 579 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 579 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 579 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 579 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 579 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 579 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 579 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 579 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 579 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 579 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 578 "mode_info.m"
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
#line 576 "mode_info.m"
  {
#line 576 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 577 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 577 "mode_info.m"
    check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 577 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 577 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 577 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 577 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 577 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 577 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 577 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 577 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 577 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 577 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 577 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 576 "mode_info.m"
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
#line 574 "mode_info.m"
  {
#line 574 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 575 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 575 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 575 "mode_info.m"
    check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 575 "mode_info.m"
    check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 575 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 575 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 575 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 575 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 575 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 575 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 575 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 575 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 575 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 575 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 575 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 575 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 575 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 575 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 575 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 575 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 575 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 575 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 575 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 575 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 575 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 574 "mode_info.m"
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
#line 848 "mode_info.m"
  {
#line 848 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 848 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 850 "mode_info.m"
    {
#line 850 "mode_info.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Insts_4);
#line 850 "mode_info.m"
      return;
    }
#line 848 "mode_info.m"
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
#line 844 "mode_info.m"
  {
#line 844 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 844 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 846 "mode_info.m"
    {
#line 846 "mode_info.m"
      hlds__hlds_module__module_info_get_mode_table_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Modes_4);
#line 846 "mode_info.m"
      return;
    }
#line 844 "mode_info.m"
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
#line 840 "mode_info.m"
  {
#line 840 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 840 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 842 "mode_info.m"
    {
#line 842 "mode_info.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Preds_4);
#line 842 "mode_info.m"
      return;
    }
#line 840 "mode_info.m"
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
#line 573 "mode_info.m"
  {
#line 573 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5;
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6;
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 573 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 573 "mode_info.m"
    check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 573 "mode_info.m"
    check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 573 "mode_info.m"
    check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 573 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 573 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 573 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 573 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 573 "mode_info.m"
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
#line 503 "mode_info.m"
  {
#line 503 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 503 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeCtorInfo_61_61;
#line 503 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeInfo_62_62;
#line 503 "mode_info.m"
    MR_Word check_hlds__mode_info__Globals_21;
#line 503 "mode_info.m"
    MR_Word check_hlds__mode_info__DebugModes_22;
#line 503 "mode_info.m"
    MR_Integer check_hlds__mode_info__DebugModesPredId_23;
#line 503 "mode_info.m"
    MR_Integer check_hlds__mode_info__PredIdInt_24;
#line 503 "mode_info.m"
    MR_Word check_hlds__mode_info__Debug_29;
#line 503 "mode_info.m"
    MR_Word check_hlds__mode_info__ProcInfo_30;
#line 503 "mode_info.m"
    MR_Word check_hlds__mode_info__VarSet_31;
#line 503 "mode_info.m"
    MR_Word check_hlds__mode_info__VarTypes_32;
#line 503 "mode_info.m"
    MR_Word check_hlds__mode_info__InstVarSet_33;
#line 503 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVarsBag_34;
#line 503 "mode_info.m"
    MR_Word check_hlds__mode_info__LastCheckpointInstMap_35;
#line 503 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeSubInfo_48;
#line 503 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext_49;
#line 503 "mode_info.m"
    MR_Word check_hlds__mode_info__DelayInfo_50;
#line 503 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVarsBag_52;
#line 503 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59;
#line 503 "mode_info.m"
    MR_Word check_hlds__mode_info__V_60_60;
#line 511 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_55_55;

#line 504 "mode_info.m"
    {
#line 504 "mode_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__mode_info__ModuleInfo_11, &check_hlds__mode_info__Globals_21);
    }
#line 505 "mode_info.m"
    {
#line 505 "mode_info.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 59, &check_hlds__mode_info__DebugModes_22);
    }
#line 506 "mode_info.m"
    {
#line 506 "mode_info.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 63, &check_hlds__mode_info__DebugModesPredId_23);
    }
#line 508 "mode_info.m"
    {
#line 508 "mode_info.m"
      hlds__hlds_pred__pred_id_to_int_2_p_0(check_hlds__mode_info__PredId_12, &check_hlds__mode_info__PredIdInt_24);
    }
#line 510 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__DebugModes_22 == (MR_Integer) 1);
#line 510 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 510 "mode_info.m"
      {
#line 511 "mode_info.m"
        check_hlds__mode_info__V_55_55 = (MR_Integer) 0;
#line 511 "mode_info.m"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__DebugModesPredId_23 >= check_hlds__mode_info__V_55_55);
#line 511 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 511 "mode_info.m"
          {
#line 511 "mode_info.m"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__DebugModesPredId_23 == check_hlds__mode_info__PredIdInt_24);
#line 511 "mode_info.m"
            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 511 "mode_info.m"
          }
#line 511 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 510 "mode_info.m"
      }
#line 519 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 513 "mode_info.m"
      {
#line 513 "mode_info.m"
        MR_Word check_hlds__mode_info__DebugVerbose_25;
#line 513 "mode_info.m"
        MR_Word check_hlds__mode_info__DebugMinimal_26;
#line 513 "mode_info.m"
        MR_Word check_hlds__mode_info__Statistics_27;
#line 513 "mode_info.m"
        MR_Word check_hlds__mode_info__Flags_28;

#line 513 "mode_info.m"
        {
#line 513 "mode_info.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 62, &check_hlds__mode_info__DebugVerbose_25);
        }
#line 514 "mode_info.m"
        {
#line 514 "mode_info.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 61, &check_hlds__mode_info__DebugMinimal_26);
        }
#line 515 "mode_info.m"
        {
#line 515 "mode_info.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 60, &check_hlds__mode_info__Statistics_27);
        }
#line 517 "mode_info.m"
        {
#line 517 "mode_info.m"
          check_hlds__mode_info__Flags_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 517 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__Flags_28, 0) = ((MR_Box) ((check_hlds__mode_info__DebugVerbose_25 | ((((check_hlds__mode_info__DebugMinimal_26 << (MR_Integer) 1)) | ((check_hlds__mode_info__Statistics_27 << (MR_Integer) 2)))))));
#line 517 "mode_info.m"
        }
#line 518 "mode_info.m"
        {
#line 518 "mode_info.m"
          check_hlds__mode_info__Debug_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 518 "mode_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_info__Debug_29, 0) = ((MR_Box) (check_hlds__mode_info__Flags_28));
#line 518 "mode_info.m"
        }
#line 513 "mode_info.m"
      }
#line 519 "mode_info.m"
    else
#line 520 "mode_info.m"
      check_hlds__mode_info__Debug_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 523 "mode_info.m"
    {
#line 523 "mode_info.m"
      hlds__hlds_module__module_info_proc_info_4_p_0(check_hlds__mode_info__ModuleInfo_11, check_hlds__mode_info__PredId_12, check_hlds__mode_info__ProcId_13, &check_hlds__mode_info__ProcInfo_30);
    }
#line 524 "mode_info.m"
    {
#line 524 "mode_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__mode_info__ProcInfo_30, &check_hlds__mode_info__VarSet_31);
    }
#line 525 "mode_info.m"
    {
#line 525 "mode_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__mode_info__ProcInfo_30, &check_hlds__mode_info__VarTypes_32);
    }
#line 526 "mode_info.m"
    {
#line 526 "mode_info.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__mode_info__ProcInfo_30, &check_hlds__mode_info__InstVarSet_33);
    }
#line 17633 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 528 "mode_info.m"
    {
#line 528 "mode_info.m"
      check_hlds__mode_info__V_59_59 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__mode_info__TypeCtorInfo_61_61, check_hlds__mode_info__LiveVars_15);
    }
#line 17640 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeInfo_62_62 = (MR_Word) &check_hlds__mode_info_scalar_common_1[0];
#line 528 "mode_info.m"
    {
#line 528 "mode_info.m"
      mercury__bag__from_sorted_list_2_p_0(check_hlds__mode_info__TypeInfo_62_62, check_hlds__mode_info__V_59_59, &check_hlds__mode_info__LiveVarsBag_34);
    }
#line 529 "mode_info.m"
    {
#line 529 "mode_info.m"
      hlds__instmap__init_unreachable_1_p_0(&check_hlds__mode_info__LastCheckpointInstMap_35);
    }
#line 544 "mode_info.m"
    {
#line 544 "mode_info.m"
      check_hlds__mode_info__ModeSubInfo_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 544 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 0) = ((MR_Box) (check_hlds__mode_info__PredId_12));
#line 544 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 1) = ((MR_Box) (check_hlds__mode_info__ProcId_13));
#line 544 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 2) = ((MR_Box) (check_hlds__mode_info__VarSet_31));
#line 544 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 3) = ((MR_Box) (check_hlds__mode_info__VarTypes_32));
#line 544 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 4) = ((MR_Box) (check_hlds__mode_info__Debug_29));
#line 544 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 544 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 6) = ((MR_Box) (check_hlds__mode_info__LiveVarsBag_34));
#line 544 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 7) = ((MR_Box) (check_hlds__mode_info__InstVarSet_33));
#line 544 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 544 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 9) = ((MR_Box) ((check_hlds__mode_info__HowToCheck_18 | ((((check_hlds__mode_info__MayChangeProc_19 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))));
#line 544 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 10) = ((MR_Box) (check_hlds__mode_info__LastCheckpointInstMap_35));
#line 544 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 11) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 544 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 12) = ((MR_Box) (check_hlds__mode_info__InstMap0_17));
#line 544 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 13) = ((MR_Box) (check_hlds__mode_info__HeadInstVars_16));
#line 544 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 14) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 544 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 15) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((MR_Integer) 1 << (MR_Integer) 5)))))))))))));
#line 544 "mode_info.m"
    }
#line 551 "mode_info.m"
    {
#line 551 "mode_info.m"
      check_hlds__mode_errors__mode_context_init_1_p_0(&check_hlds__mode_info__ModeContext_49);
    }
#line 552 "mode_info.m"
    {
#line 552 "mode_info.m"
      check_hlds__delay_info__delay_info_init_1_p_0(&check_hlds__mode_info__DelayInfo_50);
    }
#line 554 "mode_info.m"
    {
#line 554 "mode_info.m"
      check_hlds__mode_info__V_60_60 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__mode_info__TypeCtorInfo_61_61, check_hlds__mode_info__LiveVars_15);
    }
#line 554 "mode_info.m"
    {
#line 554 "mode_info.m"
      mercury__bag__from_sorted_list_2_p_0(check_hlds__mode_info__TypeInfo_62_62, check_hlds__mode_info__V_60_60, &check_hlds__mode_info__NondetLiveVarsBag_52);
    }
#line 557 "mode_info.m"
    {
#line 557 "mode_info.m"
      MR_Word base;
#line 557 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 557 "mode_info.m"
      *check_hlds__mode_info__ModeInfo_20 = base;
#line 557 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__ModuleInfo_11));
#line 557 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__InstMap0_17));
#line 557 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__DelayInfo_50));
#line 557 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 557 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__ModeContext_49));
#line 557 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__Context_14));
#line 557 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__NondetLiveVarsBag_52));
#line 557 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__ModeSubInfo_48));
#line 557 "mode_info.m"
    }
#line 503 "mode_info.m"
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
