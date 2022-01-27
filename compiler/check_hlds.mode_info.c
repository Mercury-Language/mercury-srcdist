/*
** Automatically generated from `mode_info.m'
** by the Mercury compiler,
** version rotd-2014-09-30
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

#line 810 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(
#line 810 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 810 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_7,
#line 810 "mode_info.m"
  MR_Word * check_hlds__mode_info__Reason_8);


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
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__bag__bag__type_ctor_info_bag_1)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_1[0]))
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
    ((MR_Box) (&check_hlds__mode_info_scalar_common_1[1]))
  },
  /* row 1 */
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
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 944 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0
};

#line 949 "check_hlds.mode_info.c"
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

#line 964 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0
};

#line 969 "check_hlds.mode_info.c"
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

#line 984 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0
};

#line 989 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1
};

#line 994 "check_hlds.mode_info.c"
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

#line 1008 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_call_context_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0
};

#line 1014 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_call_context_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1020 "check_hlds.mode_info.c"
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

#line 1134 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0 = {
  (MR_String) "had_from_ground_term_scope",
  (MR_Integer) 0
};

#line 1140 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1 = {
  (MR_String) "did_not_have_from_ground_term_scope",
  (MR_Integer) 1
};

#line 1146 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_had_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1
};

#line 1152 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_had_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0
};

#line 1158 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_had_from_ground_term_scope_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1164 "check_hlds.mode_info.c"
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

#line 1185 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0 = {
  (MR_String) "check_modes",
  (MR_Integer) 0
};

#line 1191 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1 = {
  (MR_String) "check_unique_modes",
  (MR_Integer) 1
};

#line 1197 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_how_to_check_goal_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1
};

#line 1203 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_how_to_check_goal_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1
};

#line 1209 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_how_to_check_goal_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1215 "check_hlds.mode_info.c"
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

#line 1236 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0 = {
  (MR_String) "in_dupl_for_switch",
  (MR_Integer) 0
};

#line 1242 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1 = {
  (MR_String) "not_in_dupl_for_switch",
  (MR_Integer) 1
};

#line 1248 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_dupl_for_switch_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1
};

#line 1254 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_dupl_for_switch_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1
};

#line 1260 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_dupl_for_switch_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1266 "check_hlds.mode_info.c"
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

#line 1287 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0 = {
  (MR_String) "in_from_ground_term_scope",
  (MR_Integer) 0
};

#line 1293 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1 = {
  (MR_String) "not_in_from_ground_term_scope",
  (MR_Integer) 1
};

#line 1299 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1
};

#line 1305 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1
};

#line 1311 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_from_ground_term_scope_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1317 "check_hlds.mode_info.c"
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

#line 1338 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0 = {
  (MR_String) "in_promise_purity_scope",
  (MR_Integer) 0
};

#line 1344 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1 = {
  (MR_String) "not_in_promise_purity_scope",
  (MR_Integer) 1
};

#line 1350 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_promise_purity_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1
};

#line 1356 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_promise_purity_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1
};

#line 1362 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_promise_purity_scope_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1368 "check_hlds.mode_info.c"
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

#line 1389 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1397 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1405 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_var_lock_reason_0,
    (MR_TypeInfo) &check_hlds__mode_info__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1414 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1422 "check_hlds.mode_info.c"
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

#line 1443 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0 = {
  (MR_String) "make_ground_terms_unique",
  (MR_Integer) 0
};

#line 1449 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1 = {
  (MR_String) "do_not_make_ground_terms_unique",
  (MR_Integer) 1
};

#line 1455 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_make_ground_terms_unique_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1
};

#line 1461 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_make_ground_terms_unique_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0
};

#line 1467 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_make_ground_terms_unique_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1473 "check_hlds.mode_info.c"
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

#line 1494 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0 = {
  (MR_String) "may_change_called_proc",
  (MR_Integer) 0
};

#line 1500 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1 = {
  (MR_String) "may_not_change_called_proc",
  (MR_Integer) 1
};

#line 1506 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_change_called_proc_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1
};

#line 1512 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_change_called_proc_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1
};

#line 1518 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_change_called_proc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1524 "check_hlds.mode_info.c"
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

#line 1545 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0 = {
  (MR_String) "may_init_solver_vars",
  (MR_Integer) 0
};

#line 1551 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1 = {
  (MR_String) "may_not_init_solver_vars",
  (MR_Integer) 1
};

#line 1557 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_init_solver_vars_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1
};

#line 1563 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_init_solver_vars_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1
};

#line 1569 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_init_solver_vars_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1575 "check_hlds.mode_info.c"
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

#line 1596 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1602 "check_hlds.mode_info.c"
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

#line 1617 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_side_0
};

#line 1623 "check_hlds.mode_info.c"
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

#line 1638 "check_hlds.mode_info.c"
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

#line 1653 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2
};

#line 1658 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0
};

#line 1663 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_2[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1
};

#line 1668 "check_hlds.mode_info.c"
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

#line 1687 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_context_0[3] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2
};

#line 1694 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_context_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1701 "check_hlds.mode_info.c"
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

#line 1722 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0
  }
};

#line 1730 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1738 "check_hlds.mode_info.c"
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

#line 1750 "check_hlds.mode_info.c"
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

#line 1762 "check_hlds.mode_info.c"
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

#line 1777 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0
};

#line 1782 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0
  }
};

#line 1791 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_info_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0
};

#line 1796 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_info_0[1] = {
  (MR_Integer) 0
};

#line 1801 "check_hlds.mode_info.c"
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

#line 1822 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1830 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1839 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_debug_flags_0
  }
};

#line 1847 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1855 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0
  }
};

#line 1863 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1871 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1880 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_warning_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0
  }
};

#line 1888 "check_hlds.mode_info.c"
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

#line 1916 "check_hlds.mode_info.c"
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

#line 1944 "check_hlds.mode_info.c"
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

#line 2068 "check_hlds.mode_info.c"
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

#line 2083 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0
};

#line 2088 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0
  }
};

#line 2097 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_sub_info_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0
};

#line 2102 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_sub_info_0[1] = {
  (MR_Integer) 0
};

#line 2107 "check_hlds.mode_info.c"
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

#line 2128 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_par_conj_mode_check_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_info__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2134 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_par_conj_mode_check_0_0[2] = {
  (MR_String) "par_conj_nonlocals",
  (MR_String) "par_conj_bound"
};

#line 2140 "check_hlds.mode_info.c"
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

#line 2155 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0
};

#line 2160 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_par_conj_mode_check_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0
  }
};

#line 2169 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_par_conj_mode_check_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0
};

#line 2174 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_par_conj_mode_check_0[1] = {
  (MR_Integer) 0
};

#line 2179 "check_hlds.mode_info.c"
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

#line 2200 "check_hlds.mode_info.c"
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

#line 2221 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0 = {
  (MR_String) "left",
  (MR_Integer) 0
};

#line 2227 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1 = {
  (MR_String) "right",
  (MR_Integer) 1
};

#line 2233 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_side_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1
};

#line 2239 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_side_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1
};

#line 2245 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_side_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2251 "check_hlds.mode_info.c"
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

#line 2272 "check_hlds.mode_info.c"
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

#line 2287 "check_hlds.mode_info.c"
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

#line 2302 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_var_lock_reason_0_2[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
};

#line 2307 "check_hlds.mode_info.c"
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

#line 2322 "check_hlds.mode_info.c"
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

#line 2337 "check_hlds.mode_info.c"
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

#line 2352 "check_hlds.mode_info.c"
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

#line 2367 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_0[5] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5
};

#line 2376 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2
};

#line 2381 "check_hlds.mode_info.c"
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

#line 2395 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_var_lock_reason_0[6] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3
};

#line 2405 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_var_lock_reason_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 4
};

#line 2415 "check_hlds.mode_info.c"
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

#line 2436 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____call_context_0_0_10001(
#line 2439 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2441 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2443 "check_hlds.mode_info.c"
{
#line 2445 "check_hlds.mode_info.c"
  {
#line 2447 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2450 "check_hlds.mode_info.c"
    {
#line 2452 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____call_context_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2455 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2457 "check_hlds.mode_info.c"
  }
#line 2459 "check_hlds.mode_info.c"
}

#line 2462 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____call_context_0_0_10001(
#line 2465 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2467 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2469 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2471 "check_hlds.mode_info.c"
{
#line 2473 "check_hlds.mode_info.c"
  {
#line 2475 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2478 "check_hlds.mode_info.c"
    {
#line 2480 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____call_context_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2483 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2485 "check_hlds.mode_info.c"
  }
#line 2487 "check_hlds.mode_info.c"
}

#line 2490 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____debug_flags_0_0_10001(
#line 2493 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2495 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2497 "check_hlds.mode_info.c"
{
#line 2499 "check_hlds.mode_info.c"
  {
#line 2501 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2504 "check_hlds.mode_info.c"
    {
#line 2506 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____debug_flags_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2509 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2511 "check_hlds.mode_info.c"
  }
#line 2513 "check_hlds.mode_info.c"
}

#line 2516 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0_10001(
#line 2519 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2521 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2523 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2525 "check_hlds.mode_info.c"
{
#line 2527 "check_hlds.mode_info.c"
  {
#line 2529 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2532 "check_hlds.mode_info.c"
    {
#line 2534 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____debug_flags_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2537 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2539 "check_hlds.mode_info.c"
  }
#line 2541 "check_hlds.mode_info.c"
}

#line 2544 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0_10001(
#line 2547 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2549 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2551 "check_hlds.mode_info.c"
{
#line 2553 "check_hlds.mode_info.c"
  {
#line 2555 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2558 "check_hlds.mode_info.c"
    {
#line 2560 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2563 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2565 "check_hlds.mode_info.c"
  }
#line 2567 "check_hlds.mode_info.c"
}

#line 2570 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0_10001(
#line 2573 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2575 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2577 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2579 "check_hlds.mode_info.c"
{
#line 2581 "check_hlds.mode_info.c"
  {
#line 2583 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2586 "check_hlds.mode_info.c"
    {
#line 2588 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2591 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2593 "check_hlds.mode_info.c"
  }
#line 2595 "check_hlds.mode_info.c"
}

#line 2598 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____how_to_check_goal_0_0_10001(
#line 2601 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2603 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2605 "check_hlds.mode_info.c"
{
#line 2607 "check_hlds.mode_info.c"
  {
#line 2609 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2612 "check_hlds.mode_info.c"
    {
#line 2614 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____how_to_check_goal_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2617 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2619 "check_hlds.mode_info.c"
  }
#line 2621 "check_hlds.mode_info.c"
}

#line 2624 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____how_to_check_goal_0_0_10001(
#line 2627 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2629 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2631 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2633 "check_hlds.mode_info.c"
{
#line 2635 "check_hlds.mode_info.c"
  {
#line 2637 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2640 "check_hlds.mode_info.c"
    {
#line 2642 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____how_to_check_goal_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2645 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2647 "check_hlds.mode_info.c"
  }
#line 2649 "check_hlds.mode_info.c"
}

#line 2652 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0_10001(
#line 2655 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2657 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2659 "check_hlds.mode_info.c"
{
#line 2661 "check_hlds.mode_info.c"
  {
#line 2663 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2666 "check_hlds.mode_info.c"
    {
#line 2668 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____in_dupl_for_switch_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2671 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2673 "check_hlds.mode_info.c"
  }
#line 2675 "check_hlds.mode_info.c"
}

#line 2678 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0_10001(
#line 2681 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2683 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2685 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2687 "check_hlds.mode_info.c"
{
#line 2689 "check_hlds.mode_info.c"
  {
#line 2691 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2694 "check_hlds.mode_info.c"
    {
#line 2696 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____in_dupl_for_switch_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2699 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2701 "check_hlds.mode_info.c"
  }
#line 2703 "check_hlds.mode_info.c"
}

#line 2706 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0_10001(
#line 2709 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2711 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2713 "check_hlds.mode_info.c"
{
#line 2715 "check_hlds.mode_info.c"
  {
#line 2717 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2720 "check_hlds.mode_info.c"
    {
#line 2722 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2725 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2727 "check_hlds.mode_info.c"
  }
#line 2729 "check_hlds.mode_info.c"
}

#line 2732 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0_10001(
#line 2735 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2737 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2739 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2741 "check_hlds.mode_info.c"
{
#line 2743 "check_hlds.mode_info.c"
  {
#line 2745 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2748 "check_hlds.mode_info.c"
    {
#line 2750 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2753 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2755 "check_hlds.mode_info.c"
  }
#line 2757 "check_hlds.mode_info.c"
}

#line 2760 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0_10001(
#line 2763 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2765 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2767 "check_hlds.mode_info.c"
{
#line 2769 "check_hlds.mode_info.c"
  {
#line 2771 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2774 "check_hlds.mode_info.c"
    {
#line 2776 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____in_promise_purity_scope_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2779 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2781 "check_hlds.mode_info.c"
  }
#line 2783 "check_hlds.mode_info.c"
}

#line 2786 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0_10001(
#line 2789 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2791 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2793 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2795 "check_hlds.mode_info.c"
{
#line 2797 "check_hlds.mode_info.c"
  {
#line 2799 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2802 "check_hlds.mode_info.c"
    {
#line 2804 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____in_promise_purity_scope_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2807 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2809 "check_hlds.mode_info.c"
  }
#line 2811 "check_hlds.mode_info.c"
}

#line 2814 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____locked_vars_0_0_10001(
#line 2817 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2819 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2821 "check_hlds.mode_info.c"
{
#line 2823 "check_hlds.mode_info.c"
  {
#line 2825 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2828 "check_hlds.mode_info.c"
    {
#line 2830 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____locked_vars_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2833 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2835 "check_hlds.mode_info.c"
  }
#line 2837 "check_hlds.mode_info.c"
}

#line 2840 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____locked_vars_0_0_10001(
#line 2843 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2845 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2847 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2849 "check_hlds.mode_info.c"
{
#line 2851 "check_hlds.mode_info.c"
  {
#line 2853 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2856 "check_hlds.mode_info.c"
    {
#line 2858 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____locked_vars_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2861 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2863 "check_hlds.mode_info.c"
  }
#line 2865 "check_hlds.mode_info.c"
}

#line 2868 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0_10001(
#line 2871 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2873 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2875 "check_hlds.mode_info.c"
{
#line 2877 "check_hlds.mode_info.c"
  {
#line 2879 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2882 "check_hlds.mode_info.c"
    {
#line 2884 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____make_ground_terms_unique_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2887 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2889 "check_hlds.mode_info.c"
  }
#line 2891 "check_hlds.mode_info.c"
}

#line 2894 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0_10001(
#line 2897 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2899 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2901 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2903 "check_hlds.mode_info.c"
{
#line 2905 "check_hlds.mode_info.c"
  {
#line 2907 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2910 "check_hlds.mode_info.c"
    {
#line 2912 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____make_ground_terms_unique_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2915 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2917 "check_hlds.mode_info.c"
  }
#line 2919 "check_hlds.mode_info.c"
}

#line 2922 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_change_called_proc_0_0_10001(
#line 2925 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2927 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2929 "check_hlds.mode_info.c"
{
#line 2931 "check_hlds.mode_info.c"
  {
#line 2933 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2936 "check_hlds.mode_info.c"
    {
#line 2938 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____may_change_called_proc_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2941 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2943 "check_hlds.mode_info.c"
  }
#line 2945 "check_hlds.mode_info.c"
}

#line 2948 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_change_called_proc_0_0_10001(
#line 2951 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2953 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2955 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2957 "check_hlds.mode_info.c"
{
#line 2959 "check_hlds.mode_info.c"
  {
#line 2961 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2964 "check_hlds.mode_info.c"
    {
#line 2966 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____may_change_called_proc_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2969 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2971 "check_hlds.mode_info.c"
  }
#line 2973 "check_hlds.mode_info.c"
}

#line 2976 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_init_solver_vars_0_0_10001(
#line 2979 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2981 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2983 "check_hlds.mode_info.c"
{
#line 2985 "check_hlds.mode_info.c"
  {
#line 2987 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2990 "check_hlds.mode_info.c"
    {
#line 2992 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____may_init_solver_vars_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2995 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2997 "check_hlds.mode_info.c"
  }
#line 2999 "check_hlds.mode_info.c"
}

#line 3002 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_init_solver_vars_0_0_10001(
#line 3005 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3007 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3009 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3011 "check_hlds.mode_info.c"
{
#line 3013 "check_hlds.mode_info.c"
  {
#line 3015 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3018 "check_hlds.mode_info.c"
    {
#line 3020 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____may_init_solver_vars_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3023 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3025 "check_hlds.mode_info.c"
  }
#line 3027 "check_hlds.mode_info.c"
}

#line 3030 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_context_0_0_10001(
#line 3033 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3035 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3037 "check_hlds.mode_info.c"
{
#line 3039 "check_hlds.mode_info.c"
  {
#line 3041 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3044 "check_hlds.mode_info.c"
    {
#line 3046 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_context_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3049 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3051 "check_hlds.mode_info.c"
  }
#line 3053 "check_hlds.mode_info.c"
}

#line 3056 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_context_0_0_10001(
#line 3059 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3061 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3063 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3065 "check_hlds.mode_info.c"
{
#line 3067 "check_hlds.mode_info.c"
  {
#line 3069 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3072 "check_hlds.mode_info.c"
    {
#line 3074 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____mode_context_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3077 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3079 "check_hlds.mode_info.c"
  }
#line 3081 "check_hlds.mode_info.c"
}

#line 3084 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0_10001(
#line 3087 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3089 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3091 "check_hlds.mode_info.c"
{
#line 3093 "check_hlds.mode_info.c"
  {
#line 3095 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3098 "check_hlds.mode_info.c"
    {
#line 3100 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_info_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3103 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3105 "check_hlds.mode_info.c"
  }
#line 3107 "check_hlds.mode_info.c"
}

#line 3110 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0_10001(
#line 3113 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3115 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3117 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3119 "check_hlds.mode_info.c"
{
#line 3121 "check_hlds.mode_info.c"
  {
#line 3123 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3126 "check_hlds.mode_info.c"
    {
#line 3128 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____mode_info_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3131 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3133 "check_hlds.mode_info.c"
  }
#line 3135 "check_hlds.mode_info.c"
}

#line 3138 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0_10001(
#line 3141 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3143 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3145 "check_hlds.mode_info.c"
{
#line 3147 "check_hlds.mode_info.c"
  {
#line 3149 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3152 "check_hlds.mode_info.c"
    {
#line 3154 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_sub_info_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3157 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3159 "check_hlds.mode_info.c"
  }
#line 3161 "check_hlds.mode_info.c"
}

#line 3164 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0_10001(
#line 3167 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3169 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3171 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3173 "check_hlds.mode_info.c"
{
#line 3175 "check_hlds.mode_info.c"
  {
#line 3177 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3180 "check_hlds.mode_info.c"
    {
#line 3182 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____mode_sub_info_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3185 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3187 "check_hlds.mode_info.c"
  }
#line 3189 "check_hlds.mode_info.c"
}

#line 3192 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0_10001(
#line 3195 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3197 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3199 "check_hlds.mode_info.c"
{
#line 3201 "check_hlds.mode_info.c"
  {
#line 3203 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3206 "check_hlds.mode_info.c"
    {
#line 3208 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____par_conj_mode_check_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3211 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3213 "check_hlds.mode_info.c"
  }
#line 3215 "check_hlds.mode_info.c"
}

#line 3218 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0_10001(
#line 3221 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3223 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3225 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3227 "check_hlds.mode_info.c"
{
#line 3229 "check_hlds.mode_info.c"
  {
#line 3231 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3234 "check_hlds.mode_info.c"
    {
#line 3236 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____par_conj_mode_check_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3239 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3241 "check_hlds.mode_info.c"
  }
#line 3243 "check_hlds.mode_info.c"
}

#line 3246 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0_10001(
#line 3249 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3251 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3253 "check_hlds.mode_info.c"
{
#line 3255 "check_hlds.mode_info.c"
  {
#line 3257 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3260 "check_hlds.mode_info.c"
    {
#line 3262 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3265 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3267 "check_hlds.mode_info.c"
  }
#line 3269 "check_hlds.mode_info.c"
}

#line 3272 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0_10001(
#line 3275 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3277 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3279 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3281 "check_hlds.mode_info.c"
{
#line 3283 "check_hlds.mode_info.c"
  {
#line 3285 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3288 "check_hlds.mode_info.c"
    {
#line 3290 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3293 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3295 "check_hlds.mode_info.c"
  }
#line 3297 "check_hlds.mode_info.c"
}

#line 3300 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____side_0_0_10001(
#line 3303 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3305 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3307 "check_hlds.mode_info.c"
{
#line 3309 "check_hlds.mode_info.c"
  {
#line 3311 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3314 "check_hlds.mode_info.c"
    {
#line 3316 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____side_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3319 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3321 "check_hlds.mode_info.c"
  }
#line 3323 "check_hlds.mode_info.c"
}

#line 3326 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____side_0_0_10001(
#line 3329 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3331 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3333 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3335 "check_hlds.mode_info.c"
{
#line 3337 "check_hlds.mode_info.c"
  {
#line 3339 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3342 "check_hlds.mode_info.c"
    {
#line 3344 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____side_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3347 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3349 "check_hlds.mode_info.c"
  }
#line 3351 "check_hlds.mode_info.c"
}

#line 3354 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____var_lock_reason_0_0_10001(
#line 3357 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3359 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3361 "check_hlds.mode_info.c"
{
#line 3363 "check_hlds.mode_info.c"
  {
#line 3365 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3368 "check_hlds.mode_info.c"
    {
#line 3370 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____var_lock_reason_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3373 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3375 "check_hlds.mode_info.c"
  }
#line 3377 "check_hlds.mode_info.c"
}

#line 3380 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____var_lock_reason_0_0_10001(
#line 3383 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3385 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3387 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3389 "check_hlds.mode_info.c"
{
#line 3391 "check_hlds.mode_info.c"
  {
#line 3393 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3396 "check_hlds.mode_info.c"
    {
#line 3398 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____var_lock_reason_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3401 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3403 "check_hlds.mode_info.c"
  }
#line 3405 "check_hlds.mode_info.c"
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
#line 3432 "check_hlds.mode_info.c"
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
#line 3468 "check_hlds.mode_info.c"
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
#line 3504 "check_hlds.mode_info.c"
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
#line 3540 "check_hlds.mode_info.c"
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
#line 3576 "check_hlds.mode_info.c"
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
#line 3612 "check_hlds.mode_info.c"
                          *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
              else
#line 67 "mode_info.m"
                {
#line 67 "mode_info.m"
                  MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));

#line 67 "mode_info.m"
                  if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3623 "check_hlds.mode_info.c"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                  else
#line 67 "mode_info.m"
                    if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3629 "check_hlds.mode_info.c"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                    else
#line 67 "mode_info.m"
                      if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3635 "check_hlds.mode_info.c"
                        *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                      else
#line 67 "mode_info.m"
                        if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3641 "check_hlds.mode_info.c"
                          *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                        else
#line 67 "mode_info.m"
                          if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 3647 "check_hlds.mode_info.c"
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
#line 3792 "check_hlds.mode_info.c"
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
#line 3846 "check_hlds.mode_info.c"
  {
#line 3848 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 3851 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3853 "check_hlds.mode_info.c"
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
#line 3944 "check_hlds.mode_info.c"
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
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[1], &check_hlds__mode_info__V_8_8, ((MR_Box) (check_hlds__mode_info__V_4_4)), ((MR_Box) (check_hlds__mode_info__V_6_6)));
        }
#line 3966 "check_hlds.mode_info.c"
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
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[1], check_hlds__mode_info__HeadVar__1_1, ((MR_Box) (check_hlds__mode_info__V_5_5)), ((MR_Box) (check_hlds__mode_info__V_7_7)));
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

#line 4033 "check_hlds.mode_info.c"
        {
#line 4035 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[1], ((MR_Box) (check_hlds__mode_info__V_3_3)), ((MR_Box) (check_hlds__mode_info__V_5_5)));
        }
#line 147 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 147 "mode_info.m"
          {
#line 4042 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeInfo_10_10 = (MR_Word) &check_hlds__mode_info_scalar_common_1[1];
#line 4044 "check_hlds.mode_info.c"
            {
#line 4046 "check_hlds.mode_info.c"
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
#line 4084 "check_hlds.mode_info.c"
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
#line 4194 "check_hlds.mode_info.c"
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
#line 4214 "check_hlds.mode_info.c"
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
#line 4234 "check_hlds.mode_info.c"
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
#line 4254 "check_hlds.mode_info.c"
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
#line 4274 "check_hlds.mode_info.c"
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
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[2], &check_hlds__mode_info__V_57_57, ((MR_Box) (check_hlds__mode_info__V_9_9)), ((MR_Box) (check_hlds__mode_info__V_33_33)));
                            }
#line 4294 "check_hlds.mode_info.c"
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
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[4], &check_hlds__mode_info__V_58_58, ((MR_Box) (check_hlds__mode_info__V_10_10)), ((MR_Box) (check_hlds__mode_info__V_34_34)));
                                }
#line 4314 "check_hlds.mode_info.c"
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
#line 4334 "check_hlds.mode_info.c"
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
#line 4354 "check_hlds.mode_info.c"
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
#line 4378 "check_hlds.mode_info.c"
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
#line 4402 "check_hlds.mode_info.c"
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
#line 4426 "check_hlds.mode_info.c"
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
#line 4446 "check_hlds.mode_info.c"
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
#line 4470 "check_hlds.mode_info.c"
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
#line 4494 "check_hlds.mode_info.c"
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
#line 4514 "check_hlds.mode_info.c"
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
#line 4534 "check_hlds.mode_info.c"
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
#line 4554 "check_hlds.mode_info.c"
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
#line 4578 "check_hlds.mode_info.c"
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
#line 4602 "check_hlds.mode_info.c"
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
#line 4626 "check_hlds.mode_info.c"
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
#line 4650 "check_hlds.mode_info.c"
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
#line 4674 "check_hlds.mode_info.c"
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

#line 4894 "check_hlds.mode_info.c"
        {
#line 4896 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_27_27);
        }
#line 354 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
          {
#line 4903 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_4_4 == check_hlds__mode_info__V_28_28);
#line 354 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
              {
#line 4909 "check_hlds.mode_info.c"
                check_hlds__mode_info__TypeInfo_55_55 = (MR_Word) &check_hlds__mode_info_scalar_common_1[5];
#line 4911 "check_hlds.mode_info.c"
                {
#line 4913 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_55_55, ((MR_Box) (check_hlds__mode_info__V_5_5)), ((MR_Box) (check_hlds__mode_info__V_29_29)));
                }
#line 354 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                  {
#line 4920 "check_hlds.mode_info.c"
                    check_hlds__mode_info__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 4922 "check_hlds.mode_info.c"
                    {
#line 4924 "check_hlds.mode_info.c"
                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeCtorInfo_56_56, ((MR_Box) (check_hlds__mode_info__V_6_6)), ((MR_Box) (check_hlds__mode_info__V_30_30)));
                    }
#line 354 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                      {
#line 4931 "check_hlds.mode_info.c"
                        check_hlds__mode_info__TypeInfo_57_57 = (MR_Word) &check_hlds__mode_info_scalar_common_1[6];
#line 4933 "check_hlds.mode_info.c"
                        {
#line 4935 "check_hlds.mode_info.c"
                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_57_57, ((MR_Box) (check_hlds__mode_info__V_7_7)), ((MR_Box) (check_hlds__mode_info__V_31_31)));
                        }
#line 354 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                          {
#line 4942 "check_hlds.mode_info.c"
                            check_hlds__mode_info__TypeInfo_58_58 = (MR_Word) &check_hlds__mode_info_scalar_common_1[2];
#line 4944 "check_hlds.mode_info.c"
                            {
#line 4946 "check_hlds.mode_info.c"
                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_58_58, ((MR_Box) (check_hlds__mode_info__V_8_8)), ((MR_Box) (check_hlds__mode_info__V_32_32)));
                            }
#line 354 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                              {
#line 4953 "check_hlds.mode_info.c"
                                check_hlds__mode_info__TypeInfo_59_59 = (MR_Word) &check_hlds__mode_info_scalar_common_1[4];
#line 4955 "check_hlds.mode_info.c"
                                {
#line 4957 "check_hlds.mode_info.c"
                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_59_59, ((MR_Box) (check_hlds__mode_info__V_9_9)), ((MR_Box) (check_hlds__mode_info__V_33_33)));
                                }
#line 354 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                  {
#line 4964 "check_hlds.mode_info.c"
                                    check_hlds__mode_info__TypeInfo_60_60 = (MR_Word) &check_hlds__mode_info_scalar_common_1[7];
#line 4966 "check_hlds.mode_info.c"
                                    {
#line 4968 "check_hlds.mode_info.c"
                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_60_60, ((MR_Box) (check_hlds__mode_info__V_10_10)), ((MR_Box) (check_hlds__mode_info__V_34_34)));
                                    }
#line 354 "mode_info.m"
                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                      {
#line 4975 "check_hlds.mode_info.c"
                                        check_hlds__mode_info__TypeInfo_61_61 = (MR_Word) &check_hlds__mode_info_scalar_common_1[8];
#line 4977 "check_hlds.mode_info.c"
                                        {
#line 4979 "check_hlds.mode_info.c"
                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_61_61, ((MR_Box) (check_hlds__mode_info__V_11_11)), ((MR_Box) (check_hlds__mode_info__V_35_35)));
                                        }
#line 354 "mode_info.m"
                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                          {
#line 4986 "check_hlds.mode_info.c"
                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_12_12 == check_hlds__mode_info__V_36_36);
#line 354 "mode_info.m"
                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                              {
#line 4992 "check_hlds.mode_info.c"
                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_13_13 == check_hlds__mode_info__V_37_37);
#line 354 "mode_info.m"
                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                  {
#line 4998 "check_hlds.mode_info.c"
                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_14_14 == check_hlds__mode_info__V_38_38);
#line 354 "mode_info.m"
                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                      {
#line 5004 "check_hlds.mode_info.c"
                                                        {
#line 5006 "check_hlds.mode_info.c"
                                                          check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_15_15, check_hlds__mode_info__V_39_39);
                                                        }
#line 354 "mode_info.m"
                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                          {
#line 5013 "check_hlds.mode_info.c"
                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_16_16 == check_hlds__mode_info__V_40_40);
#line 354 "mode_info.m"
                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                              {
#line 5019 "check_hlds.mode_info.c"
                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_17_17 == check_hlds__mode_info__V_41_41);
#line 354 "mode_info.m"
                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                  {
#line 5025 "check_hlds.mode_info.c"
                                                                    {
#line 5027 "check_hlds.mode_info.c"
                                                                      check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_18_18, check_hlds__mode_info__V_42_42);
                                                                    }
#line 354 "mode_info.m"
                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                      {
#line 5034 "check_hlds.mode_info.c"
                                                                        check_hlds__mode_info__TypeInfo_64_64 = (MR_Word) &check_hlds__mode_info_scalar_common_2[1];
#line 5036 "check_hlds.mode_info.c"
                                                                        {
#line 5038 "check_hlds.mode_info.c"
                                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_64_64, ((MR_Box) (check_hlds__mode_info__V_19_19)), ((MR_Box) (check_hlds__mode_info__V_43_43)));
                                                                        }
#line 354 "mode_info.m"
                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                          {
#line 5045 "check_hlds.mode_info.c"
                                                                            check_hlds__mode_info__TypeInfo_65_65 = (MR_Word) &check_hlds__mode_info_scalar_common_1[10];
#line 5047 "check_hlds.mode_info.c"
                                                                            {
#line 5049 "check_hlds.mode_info.c"
                                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_65_65, ((MR_Box) (check_hlds__mode_info__V_20_20)), ((MR_Box) (check_hlds__mode_info__V_44_44)));
                                                                            }
#line 354 "mode_info.m"
                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                              {
#line 5056 "check_hlds.mode_info.c"
                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_21_21 == check_hlds__mode_info__V_45_45);
#line 354 "mode_info.m"
                                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                  {
#line 5062 "check_hlds.mode_info.c"
                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_22_22 == check_hlds__mode_info__V_46_46);
#line 354 "mode_info.m"
                                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                      {
#line 5068 "check_hlds.mode_info.c"
                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_23_23 == check_hlds__mode_info__V_47_47);
#line 354 "mode_info.m"
                                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                          {
#line 5074 "check_hlds.mode_info.c"
                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_24_24 == check_hlds__mode_info__V_48_48);
#line 354 "mode_info.m"
                                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                              {
#line 5080 "check_hlds.mode_info.c"
                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_25_25 == check_hlds__mode_info__V_49_49);
#line 354 "mode_info.m"
                                                                                                if (check_hlds__mode_info__succeeded)
#line 5084 "check_hlds.mode_info.c"
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
#line 5163 "check_hlds.mode_info.c"
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
#line 5209 "check_hlds.mode_info.c"
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
#line 5229 "check_hlds.mode_info.c"
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
#line 5249 "check_hlds.mode_info.c"
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
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[3], &check_hlds__mode_info__V_23_23, ((MR_Box) (check_hlds__mode_info__V_7_7)), ((MR_Box) (check_hlds__mode_info__V_15_15)));
                    }
#line 5269 "check_hlds.mode_info.c"
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
#line 5289 "check_hlds.mode_info.c"
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
#line 5309 "check_hlds.mode_info.c"
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
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[4], &check_hlds__mode_info__V_26_26, ((MR_Box) (check_hlds__mode_info__V_10_10)), ((MR_Box) (check_hlds__mode_info__V_18_18)));
                                }
#line 5329 "check_hlds.mode_info.c"
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

#line 5434 "check_hlds.mode_info.c"
        {
#line 5436 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_11_11);
        }
#line 467 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
          {
#line 5443 "check_hlds.mode_info.c"
            {
#line 5445 "check_hlds.mode_info.c"
              check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_4_4, check_hlds__mode_info__V_12_12);
            }
#line 467 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
              {
#line 5452 "check_hlds.mode_info.c"
                {
#line 5454 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = check_hlds__delay_info____Unify____delay_info_0_0(check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_13_13);
                }
#line 467 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
                  {
#line 5461 "check_hlds.mode_info.c"
                    check_hlds__mode_info__TypeInfo_24_24 = (MR_Word) &check_hlds__mode_info_scalar_common_1[3];
#line 5463 "check_hlds.mode_info.c"
                    {
#line 5465 "check_hlds.mode_info.c"
                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_24_24, ((MR_Box) (check_hlds__mode_info__V_6_6)), ((MR_Box) (check_hlds__mode_info__V_14_14)));
                    }
#line 467 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
                      {
#line 5472 "check_hlds.mode_info.c"
                        {
#line 5474 "check_hlds.mode_info.c"
                          check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_context_0_0(check_hlds__mode_info__V_7_7, check_hlds__mode_info__V_15_15);
                        }
#line 467 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
                          {
#line 5481 "check_hlds.mode_info.c"
                            {
#line 5483 "check_hlds.mode_info.c"
                              check_hlds__mode_info__succeeded = mercury__term____Unify____context_0_0(check_hlds__mode_info__V_8_8, check_hlds__mode_info__V_16_16);
                            }
#line 467 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
                              {
#line 5490 "check_hlds.mode_info.c"
                                check_hlds__mode_info__TypeInfo_26_26 = (MR_Word) &check_hlds__mode_info_scalar_common_1[4];
#line 5492 "check_hlds.mode_info.c"
                                {
#line 5494 "check_hlds.mode_info.c"
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

#line 5630 "check_hlds.mode_info.c"
                                        {
#line 5632 "check_hlds.mode_info.c"
                                          check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_info__V_27_27, check_hlds__mode_info__V_51_51);
                                        }
#line 354 "mode_info.m"
                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                          {
#line 5639 "check_hlds.mode_info.c"
                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_28_28 == check_hlds__mode_info__V_52_52);
#line 354 "mode_info.m"
                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                              {
#line 5645 "check_hlds.mode_info.c"
                                                check_hlds__mode_info__TypeInfo_55_79 = (MR_Word) &check_hlds__mode_info_scalar_common_1[5];
#line 5647 "check_hlds.mode_info.c"
                                                {
#line 5649 "check_hlds.mode_info.c"
                                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_55_79, ((MR_Box) (check_hlds__mode_info__V_29_29)), ((MR_Box) (check_hlds__mode_info__V_53_53)));
                                                }
#line 354 "mode_info.m"
                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                  {
#line 5656 "check_hlds.mode_info.c"
                                                    check_hlds__mode_info__TypeCtorInfo_56_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 5658 "check_hlds.mode_info.c"
                                                    {
#line 5660 "check_hlds.mode_info.c"
                                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeCtorInfo_56_80, ((MR_Box) (check_hlds__mode_info__V_30_30)), ((MR_Box) (check_hlds__mode_info__V_54_54)));
                                                    }
#line 354 "mode_info.m"
                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                      {
#line 5667 "check_hlds.mode_info.c"
                                                        check_hlds__mode_info__TypeInfo_57_81 = (MR_Word) &check_hlds__mode_info_scalar_common_1[6];
#line 5669 "check_hlds.mode_info.c"
                                                        {
#line 5671 "check_hlds.mode_info.c"
                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_57_81, ((MR_Box) (check_hlds__mode_info__V_31_31)), ((MR_Box) (check_hlds__mode_info__V_55_55)));
                                                        }
#line 354 "mode_info.m"
                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                          {
#line 5678 "check_hlds.mode_info.c"
                                                            check_hlds__mode_info__TypeInfo_58_82 = (MR_Word) &check_hlds__mode_info_scalar_common_1[2];
#line 5680 "check_hlds.mode_info.c"
                                                            {
#line 5682 "check_hlds.mode_info.c"
                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_58_82, ((MR_Box) (check_hlds__mode_info__V_32_32)), ((MR_Box) (check_hlds__mode_info__V_56_56)));
                                                            }
#line 354 "mode_info.m"
                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                              {
#line 5689 "check_hlds.mode_info.c"
                                                                check_hlds__mode_info__TypeInfo_59_83 = (MR_Word) &check_hlds__mode_info_scalar_common_1[4];
#line 5691 "check_hlds.mode_info.c"
                                                                {
#line 5693 "check_hlds.mode_info.c"
                                                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_59_83, ((MR_Box) (check_hlds__mode_info__V_33_33)), ((MR_Box) (check_hlds__mode_info__V_57_57)));
                                                                }
#line 354 "mode_info.m"
                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                  {
#line 5700 "check_hlds.mode_info.c"
                                                                    check_hlds__mode_info__TypeInfo_60_84 = (MR_Word) &check_hlds__mode_info_scalar_common_1[7];
#line 5702 "check_hlds.mode_info.c"
                                                                    {
#line 5704 "check_hlds.mode_info.c"
                                                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_60_84, ((MR_Box) (check_hlds__mode_info__V_34_34)), ((MR_Box) (check_hlds__mode_info__V_58_58)));
                                                                    }
#line 354 "mode_info.m"
                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                      {
#line 5711 "check_hlds.mode_info.c"
                                                                        check_hlds__mode_info__TypeInfo_61_85 = (MR_Word) &check_hlds__mode_info_scalar_common_1[8];
#line 5713 "check_hlds.mode_info.c"
                                                                        {
#line 5715 "check_hlds.mode_info.c"
                                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_61_85, ((MR_Box) (check_hlds__mode_info__V_35_35)), ((MR_Box) (check_hlds__mode_info__V_59_59)));
                                                                        }
#line 354 "mode_info.m"
                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                          {
#line 5722 "check_hlds.mode_info.c"
                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_36_36 == check_hlds__mode_info__V_60_60);
#line 354 "mode_info.m"
                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                              {
#line 5728 "check_hlds.mode_info.c"
                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_37_37 == check_hlds__mode_info__V_61_61);
#line 354 "mode_info.m"
                                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                  {
#line 5734 "check_hlds.mode_info.c"
                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_38_38 == check_hlds__mode_info__V_62_62);
#line 354 "mode_info.m"
                                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                      {
#line 5740 "check_hlds.mode_info.c"
                                                                                        {
#line 5742 "check_hlds.mode_info.c"
                                                                                          check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_39_39, check_hlds__mode_info__V_63_63);
                                                                                        }
#line 354 "mode_info.m"
                                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                          {
#line 5749 "check_hlds.mode_info.c"
                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_40_40 == check_hlds__mode_info__V_64_64);
#line 354 "mode_info.m"
                                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                              {
#line 5755 "check_hlds.mode_info.c"
                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_41_41 == check_hlds__mode_info__V_65_65);
#line 354 "mode_info.m"
                                                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                  {
#line 5761 "check_hlds.mode_info.c"
                                                                                                    {
#line 5763 "check_hlds.mode_info.c"
                                                                                                      check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_42_42, check_hlds__mode_info__V_66_66);
                                                                                                    }
#line 354 "mode_info.m"
                                                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                      {
#line 5770 "check_hlds.mode_info.c"
                                                                                                        check_hlds__mode_info__TypeInfo_64_88 = (MR_Word) &check_hlds__mode_info_scalar_common_2[1];
#line 5772 "check_hlds.mode_info.c"
                                                                                                        {
#line 5774 "check_hlds.mode_info.c"
                                                                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_64_88, ((MR_Box) (check_hlds__mode_info__V_43_43)), ((MR_Box) (check_hlds__mode_info__V_67_67)));
                                                                                                        }
#line 354 "mode_info.m"
                                                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                          {
#line 5781 "check_hlds.mode_info.c"
                                                                                                            check_hlds__mode_info__TypeInfo_65_89 = (MR_Word) &check_hlds__mode_info_scalar_common_1[10];
#line 5783 "check_hlds.mode_info.c"
                                                                                                            {
#line 5785 "check_hlds.mode_info.c"
                                                                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_65_89, ((MR_Box) (check_hlds__mode_info__V_44_44)), ((MR_Box) (check_hlds__mode_info__V_68_68)));
                                                                                                            }
#line 354 "mode_info.m"
                                                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                              {
#line 5792 "check_hlds.mode_info.c"
                                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_45_45 == check_hlds__mode_info__V_69_69);
#line 354 "mode_info.m"
                                                                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                                  {
#line 5798 "check_hlds.mode_info.c"
                                                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_46_46 == check_hlds__mode_info__V_70_70);
#line 354 "mode_info.m"
                                                                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                                      {
#line 5804 "check_hlds.mode_info.c"
                                                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_47_47 == check_hlds__mode_info__V_71_71);
#line 354 "mode_info.m"
                                                                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                                          {
#line 5810 "check_hlds.mode_info.c"
                                                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_48_48 == check_hlds__mode_info__V_72_72);
#line 354 "mode_info.m"
                                                                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                                              {
#line 5816 "check_hlds.mode_info.c"
                                                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_49_49 == check_hlds__mode_info__V_73_73);
#line 354 "mode_info.m"
                                                                                                                                if (check_hlds__mode_info__succeeded)
#line 5820 "check_hlds.mode_info.c"
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
#line 5915 "check_hlds.mode_info.c"
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
#line 5929 "check_hlds.mode_info.c"
            *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 46 "mode_info.m"
          else
#line 5933 "check_hlds.mode_info.c"
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
#line 5948 "check_hlds.mode_info.c"
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
#line 5968 "check_hlds.mode_info.c"
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
#line 5989 "check_hlds.mode_info.c"
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
#line 6004 "check_hlds.mode_info.c"
              *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 46 "mode_info.m"
            else
#line 46 "mode_info.m"
              if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6010 "check_hlds.mode_info.c"
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
#line 6028 "check_hlds.mode_info.c"
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
#line 6127 "check_hlds.mode_info.c"
                {
#line 6129 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____call_id_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_5_5);
                }
#line 46 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 6134 "check_hlds.mode_info.c"
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
#line 6163 "check_hlds.mode_info.c"
                {
#line 6165 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = hlds__hlds_goal____Unify____unify_context_0_0(check_hlds__mode_info__V_7_7, check_hlds__mode_info__V_9_9);
                }
#line 46 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 6170 "check_hlds.mode_info.c"
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
#line 6224 "check_hlds.mode_info.c"
  {
#line 6226 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6229 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6231 "check_hlds.mode_info.c"
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
#line 6277 "check_hlds.mode_info.c"
  {
#line 6279 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6282 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6284 "check_hlds.mode_info.c"
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
#line 6330 "check_hlds.mode_info.c"
  {
#line 6332 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6335 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6337 "check_hlds.mode_info.c"
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
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[2], check_hlds__mode_info__HeadVar__1_1, ((MR_Box) (check_hlds__mode_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_info__Cast_HeadVar2_5)));
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
      return check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[2], ((MR_Box) (check_hlds__mode_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_info__Cast_HeadVar2_4)));
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
#line 6445 "check_hlds.mode_info.c"
  {
#line 6447 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6450 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6452 "check_hlds.mode_info.c"
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
#line 6498 "check_hlds.mode_info.c"
  {
#line 6500 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6503 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6505 "check_hlds.mode_info.c"
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
#line 6551 "check_hlds.mode_info.c"
  {
#line 6553 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6556 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6558 "check_hlds.mode_info.c"
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
#line 6604 "check_hlds.mode_info.c"
  {
#line 6606 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6609 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6611 "check_hlds.mode_info.c"
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
#line 6657 "check_hlds.mode_info.c"
  {
#line 6659 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6662 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6664 "check_hlds.mode_info.c"
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
#line 6693 "check_hlds.mode_info.c"
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
#line 6723 "check_hlds.mode_info.c"
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
#line 6747 "check_hlds.mode_info.c"
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

#line 6823 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_3_3 == check_hlds__mode_info__V_6_6);
#line 95 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 95 "mode_info.m"
          {
#line 6829 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_4_4 == check_hlds__mode_info__V_7_7);
#line 95 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 6833 "check_hlds.mode_info.c"
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
#line 6870 "check_hlds.mode_info.c"
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
#line 6899 "check_hlds.mode_info.c"
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
#line 6912 "check_hlds.mode_info.c"
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
#line 6980 "check_hlds.mode_info.c"
              {
#line 6982 "check_hlds.mode_info.c"
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
#line 7006 "check_hlds.mode_info.c"
              {
#line 7008 "check_hlds.mode_info.c"
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

#line 810 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(
#line 810 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 810 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_7,
#line 810 "mode_info.m"
  MR_Word * check_hlds__mode_info__Reason_8)
#line 810 "mode_info.m"
{
#line 813 "mode_info.m"
  while (MR_TRUE)
#line 813 "mode_info.m"
    {
#line 813 "mode_info.m"
      /* tailcall optimized into a loop */
#line 813 "mode_info.m"
      {
#line 813 "mode_info.m"
        MR_bool check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 813 "mode_info.m"
        MR_Word check_hlds__mode_info__ThisReason_4;
#line 813 "mode_info.m"
        MR_Word check_hlds__mode_info__Set_5;
#line 813 "mode_info.m"
        MR_Word check_hlds__mode_info__Sets_6;
#line 813 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9;
#line 814 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeCtorInfo_10_10;

#line 813 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 813 "mode_info.m"
          {
#line 813 "mode_info.m"
            check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 813 "mode_info.m"
            check_hlds__mode_info__Sets_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 813 "mode_info.m"
            check_hlds__mode_info__ThisReason_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 813 "mode_info.m"
            check_hlds__mode_info__Set_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 7066 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 814 "mode_info.m"
            {
#line 814 "mode_info.m"
              check_hlds__mode_info__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__mode_info__TypeCtorInfo_10_10, check_hlds__mode_info__Set_5, check_hlds__mode_info__Var_7);
            }
#line 816 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 815 "mode_info.m"
              {
#line 815 "mode_info.m"
                *check_hlds__mode_info__Reason_8 = check_hlds__mode_info__ThisReason_4;
#line 815 "mode_info.m"
                check_hlds__mode_info__succeeded = MR_TRUE;
#line 815 "mode_info.m"
              }
#line 816 "mode_info.m"
            else
#line 817 "mode_info.m"
              {
#line 817 "mode_info.m"
                /* direct tailcall eliminated */
#line 817 "mode_info.m"
                {
#line 817 "mode_info.m"
                  MR_Word check_hlds__mode_info__HeadVar__1__tmp_copy_1 = check_hlds__mode_info__Sets_6;

#line 817 "mode_info.m"
                  check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__HeadVar__1__tmp_copy_1;
#line 817 "mode_info.m"
                }
#line 817 "mode_info.m"
                continue;
#line 817 "mode_info.m"
              }
#line 813 "mode_info.m"
          }
#line 813 "mode_info.m"
        return check_hlds__mode_info__succeeded;
#line 813 "mode_info.m"
      }
#line 813 "mode_info.m"
      break;
#line 813 "mode_info.m"
    }
#line 810 "mode_info.m"
}

#line 334 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(
#line 334 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_2)
#line 334 "mode_info.m"
{
#line 876 "mode_info.m"
  {
#line 876 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 876 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 0)));
#line 876 "mode_info.m"
    MR_Word check_hlds__mode_info__Globals_4;
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 1)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 2)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 3)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 4)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 5)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 6)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 7)));

#line 878 "mode_info.m"
    {
#line 878 "mode_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__mode_info__ModuleInfo_3, &check_hlds__mode_info__Globals_4);
    }
#line 879 "mode_info.m"
    {
#line 879 "mode_info.m"
      return check_hlds__mode_info__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__mode_info__Globals_4, (MR_Integer) 293, (MR_Integer) 1);
    }
#line 876 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 876 "mode_info.m"
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
#line 870 "mode_info.m"
  {
#line 870 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 870 "mode_info.m"
    MR_Word check_hlds__mode_info__MayInitSolverVars_3;
#line 870 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 7)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 0)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 1)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 2)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 3)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 4)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 5)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 6)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 589 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 589 "mode_info.m"
    check_hlds__mode_info__MayInitSolverVars_3 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 589 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 589 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 589 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 589 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 589 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 589 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 589 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 589 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 589 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 589 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 589 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 589 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 872 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__MayInitSolverVars_3 == (MR_Integer) 0);
#line 870 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 870 "mode_info.m"
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
#line 865 "mode_info.m"
  {
#line 865 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 865 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, (MR_Integer) 7)));
#line 865 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;
#line 865 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, (MR_Integer) 0)));
#line 865 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, (MR_Integer) 1)));
#line 865 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, (MR_Integer) 2)));
#line 865 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, (MR_Integer) 3)));
#line 865 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, (MR_Integer) 4)));
#line 865 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, (MR_Integer) 5)));
#line 865 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, (MR_Integer) 6)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 0)));
#line 620 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 1)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 2)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 3)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 4)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 5)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 6)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 7)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 8)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 13)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) & (MR_Integer) 1);

#line 620 "mode_info.m"
    {
#line 620 "mode_info.m"
      check_hlds__mode_info__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 0) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 1) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 2) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 3) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 4) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 5) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 6) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 7) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 8) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 9) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_30_30 << (MR_Integer) 2)))))));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 10) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 11) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)))));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 12) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 13) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 14) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 15) = ((MR_Box) (((MR_Integer) 0 | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_42_42 << (MR_Integer) 5)))))))))))));
#line 620 "mode_info.m"
    }
#line 620 "mode_info.m"
    {
#line 620 "mode_info.m"
      MR_Word base;
#line 620 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 620 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_5 = base;
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 620 "mode_info.m"
    }
#line 865 "mode_info.m"
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
#line 860 "mode_info.m"
  {
#line 860 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 860 "mode_info.m"
    MR_Word check_hlds__mode_info__Warnings0_6;
#line 860 "mode_info.m"
    MR_Word check_hlds__mode_info__Warnings_7;
#line 860 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 860 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));
#line 860 "mode_info.m"
    MR_Word check_hlds__mode_info__V_48_48;
#line 860 "mode_info.m"
    MR_Word check_hlds__mode_info__V_49_49;
#line 860 "mode_info.m"
    MR_Word check_hlds__mode_info__V_50_50;
#line 860 "mode_info.m"
    MR_Word check_hlds__mode_info__V_51_51;
#line 860 "mode_info.m"
    MR_Word check_hlds__mode_info__V_52_52;
#line 860 "mode_info.m"
    MR_Word check_hlds__mode_info__V_53_53;
#line 860 "mode_info.m"
    MR_Word check_hlds__mode_info__V_54_54;
#line 860 "mode_info.m"
    MR_Word check_hlds__mode_info__V_55_55;
#line 860 "mode_info.m"
    MR_Word check_hlds__mode_info__V_56_56;
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 0)));
#line 574 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 1)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 2)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 3)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 4)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 5)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 6)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 7)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 8)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 10)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 12)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 13)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_57_57;
#line 618 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_58_58;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_60_60;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_61_61;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_62_62;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_63_63;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_64_64;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_65_65;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_70_70;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_71_71;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_72_72;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_73_73;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_75_75;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_76_76;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_77_77;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_78_78;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_79_79;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_80_80;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_74_74;

#line 574 "mode_info.m"
    check_hlds__mode_info__Warnings0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 14)));
#line 574 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 574 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 574 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 574 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 574 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 574 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 862 "mode_info.m"
    {
#line 862 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__ModeWarningInfo_4));
#line 862 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 862 "mode_info.m"
    }
#line 862 "mode_info.m"
    {
#line 862 "mode_info.m"
      mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0, check_hlds__mode_info__Warnings0_6, check_hlds__mode_info__V_10_10, &check_hlds__mode_info__Warnings_7);
    }
#line 618 "mode_info.m"
    check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 0)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 1)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 2)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 3)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 4)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 5)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 6)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 7)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 8)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_66_66 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 10)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_70_70 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 12)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 13)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 14)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_75_75 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    {
#line 618 "mode_info.m"
      check_hlds__mode_info__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 0) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 1) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 2) = ((MR_Box) (check_hlds__mode_info__V_59_59));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 3) = ((MR_Box) (check_hlds__mode_info__V_60_60));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 4) = ((MR_Box) (check_hlds__mode_info__V_61_61));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 5) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 6) = ((MR_Box) (check_hlds__mode_info__V_63_63));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 7) = ((MR_Box) (check_hlds__mode_info__V_64_64));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 8) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 9) = ((MR_Box) ((check_hlds__mode_info__V_66_66 | ((((check_hlds__mode_info__V_67_67 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_68_68 << (MR_Integer) 2)))))));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 10) = ((MR_Box) (check_hlds__mode_info__V_69_69));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 11) = ((MR_Box) ((check_hlds__mode_info__V_70_70 | ((check_hlds__mode_info__V_71_71 << (MR_Integer) 1)))));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 12) = ((MR_Box) (check_hlds__mode_info__V_72_72));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 13) = ((MR_Box) (check_hlds__mode_info__V_73_73));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 14) = ((MR_Box) (check_hlds__mode_info__Warnings_7));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 15) = ((MR_Box) ((check_hlds__mode_info__V_75_75 | ((((check_hlds__mode_info__V_76_76 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_77_77 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_78_78 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_79_79 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_80_80 << (MR_Integer) 5)))))))))))));
#line 618 "mode_info.m"
    }
#line 618 "mode_info.m"
    {
#line 618 "mode_info.m"
      MR_Word base;
#line 618 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 618 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9 = base;
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 618 "mode_info.m"
    }
#line 860 "mode_info.m"
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
#line 854 "mode_info.m"
  {
#line 854 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 854 "mode_info.m"
    MR_Word check_hlds__mode_info__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 5)));
#line 854 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 4)));
#line 854 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeWarningInfo_8;
#line 568 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 0)));
#line 568 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 1)));
#line 568 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 2)));
#line 568 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 3)));
#line 568 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 6)));
#line 568 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 7)));

#line 857 "mode_info.m"
    {
#line 857 "mode_info.m"
      check_hlds__mode_info__ModeWarningInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 857 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 0) = ((MR_Box) (check_hlds__mode_info__ModeWarning_4));
#line 857 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 1) = ((MR_Box) (check_hlds__mode_info__Context_6));
#line 857 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 2) = ((MR_Box) (check_hlds__mode_info__ModeContext_7));
#line 857 "mode_info.m"
    }
#line 858 "mode_info.m"
    {
#line 858 "mode_info.m"
      check_hlds__mode_info__mode_info_add_warning_3_p_0(check_hlds__mode_info__ModeWarningInfo_8, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10);
#line 858 "mode_info.m"
      return;
    }
#line 854 "mode_info.m"
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
#line 849 "mode_info.m"
  {
#line 849 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 849 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 849 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors_7;
#line 849 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;

#line 851 "mode_info.m"
    {
#line 851 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__ModeErrorInfo_4));
#line 851 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 851 "mode_info.m"
    }
#line 851 "mode_info.m"
    {
#line 851 "mode_info.m"
      mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__mode_info__Errors0_6, check_hlds__mode_info__V_10_10, &check_hlds__mode_info__Errors_7);
    }
#line 617 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 617 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 617 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 617 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 617 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 617 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 617 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 617 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));
#line 617 "mode_info.m"
    {
#line 617 "mode_info.m"
      MR_Word base;
#line 617 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 617 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9 = base;
#line 617 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 617 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 617 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 617 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__Errors_7));
#line 617 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 617 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 617 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 617 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 617 "mode_info.m"
    }
#line 849 "mode_info.m"
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
#line 843 "mode_info.m"
  {
#line 843 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 843 "mode_info.m"
    MR_Word check_hlds__mode_info__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 5)));
#line 843 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 4)));
#line 843 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeErrorInfo_10;
#line 568 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 0)));
#line 568 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 1)));
#line 568 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 2)));
#line 568 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 3)));
#line 568 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 6)));
#line 568 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 7)));

#line 846 "mode_info.m"
    {
#line 846 "mode_info.m"
      check_hlds__mode_info__ModeErrorInfo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 846 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 0) = ((MR_Box) (check_hlds__mode_info__Vars_5));
#line 846 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 1) = ((MR_Box) (check_hlds__mode_info__ModeError_6));
#line 846 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 2) = ((MR_Box) (check_hlds__mode_info__Context_8));
#line 846 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 3) = ((MR_Box) (check_hlds__mode_info__ModeContext_9));
#line 846 "mode_info.m"
    }
#line 847 "mode_info.m"
    {
#line 847 "mode_info.m"
      check_hlds__mode_info__mode_info_add_error_3_p_0(check_hlds__mode_info__ModeErrorInfo_10, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12);
#line 847 "mode_info.m"
      return;
    }
#line 843 "mode_info.m"
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
#line 762 "mode_info.m"
  {
#line 762 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 762 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));

#line 764 "mode_info.m"
    {
#line 764 "mode_info.m"
      check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__NondetLiveVars0_7, ((MR_Box) (check_hlds__mode_info__Var_5)));
    }
#line 766 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 765 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 0;
#line 766 "mode_info.m"
    else
#line 767 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 1;
#line 762 "mode_info.m"
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
#line 754 "mode_info.m"
  {
#line 754 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 754 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 754 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 0)));
#line 580 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 1)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 2)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 3)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 4)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 5)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;

#line 580 "mode_info.m"
    check_hlds__mode_info__LiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 6)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 7)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 8)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 13)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 756 "mode_info.m"
    {
#line 756 "mode_info.m"
      check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVars0_7, ((MR_Box) (check_hlds__mode_info__Var_5)));
    }
#line 758 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 757 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 0;
#line 758 "mode_info.m"
    else
#line 759 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 1;
#line 754 "mode_info.m"
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
#line 747 "mode_info.m"
  {
#line 747 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;

#line 747 "mode_info.m"
    if ((check_hlds__mode_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 747 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 747 "mode_info.m"
    else
#line 748 "mode_info.m"
      {
#line 748 "mode_info.m"
        MR_Word check_hlds__mode_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 748 "mode_info.m"
        MR_Word check_hlds__mode_info__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 748 "mode_info.m"
        MR_Word check_hlds__mode_info__Live_8;
#line 748 "mode_info.m"
        MR_Word check_hlds__mode_info__Lives_9;
#line 748 "mode_info.m"
        MR_Word check_hlds__mode_info__LiveVars0_13;
#line 748 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 7)));
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 0)));
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 1)));
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 2)));
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 3)));
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 4)));
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 5)));
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 6)));
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 0)));
#line 580 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 1)));
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 2)));
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 3)));
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 4)));
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 5)));
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30;
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31;
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32;
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33;
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34;
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35;
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36;
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37;
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38;
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39;
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40;
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41;
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42;
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43;
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44;
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45;
#line 580 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46;

#line 580 "mode_info.m"
        check_hlds__mode_info__LiveVars0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 6)));
#line 580 "mode_info.m"
        check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 7)));
#line 580 "mode_info.m"
        check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 8)));
#line 580 "mode_info.m"
        check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 580 "mode_info.m"
        check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "mode_info.m"
        check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 580 "mode_info.m"
        check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 10)));
#line 580 "mode_info.m"
        check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 580 "mode_info.m"
        check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "mode_info.m"
        check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 12)));
#line 580 "mode_info.m"
        check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 13)));
#line 580 "mode_info.m"
        check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 14)));
#line 580 "mode_info.m"
        check_hlds__mode_info__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 580 "mode_info.m"
        check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "mode_info.m"
        check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 580 "mode_info.m"
        check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 580 "mode_info.m"
        check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 580 "mode_info.m"
        check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 756 "mode_info.m"
        {
#line 756 "mode_info.m"
          check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVars0_13, ((MR_Box) (check_hlds__mode_info__Var_6)));
        }
#line 758 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 757 "mode_info.m"
          check_hlds__mode_info__Live_8 = (MR_Integer) 0;
#line 758 "mode_info.m"
        else
#line 759 "mode_info.m"
          check_hlds__mode_info__Live_8 = (MR_Integer) 1;
#line 750 "mode_info.m"
        {
#line 750 "mode_info.m"
          check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(check_hlds__mode_info__ModeInfo_1, check_hlds__mode_info__Vars_7, &check_hlds__mode_info__Lives_9);
        }
#line 748 "mode_info.m"
        {
#line 748 "mode_info.m"
          MR_Word base;
#line 748 "mode_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "mode_info.m"
          *check_hlds__mode_info__HeadVar__3_3 = base;
#line 748 "mode_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_info__Live_8));
#line 748 "mode_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_info__Lives_9));
#line 748 "mode_info.m"
        }
#line 748 "mode_info.m"
      }
#line 747 "mode_info.m"
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
#line 836 "mode_info.m"
  {
#line 836 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 836 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 836 "mode_info.m"
    MR_Word check_hlds__mode_info__PredInfo_8;
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));

#line 838 "mode_info.m"
    {
#line 838 "mode_info.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__mode_info__ModuleInfo_7, check_hlds__mode_info__PredId_5, &check_hlds__mode_info__PredInfo_8);
    }
#line 839 "mode_info.m"
    {
#line 839 "mode_info.m"
      hlds__hlds_pred__pred_info_get_call_id_2_p_0(check_hlds__mode_info__PredInfo_8, check_hlds__mode_info__CallId_6);
#line 839 "mode_info.m"
      return;
    }
#line 836 "mode_info.m"
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
#line 806 "mode_info.m"
  {
#line 806 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 806 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVarsList_7;
#line 806 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 572 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;

#line 572 "mode_info.m"
    check_hlds__mode_info__LockedVarsList_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 808 "mode_info.m"
    {
#line 808 "mode_info.m"
      return check_hlds__mode_info__succeeded = check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(check_hlds__mode_info__LockedVarsList_7, check_hlds__mode_info__Var_5, check_hlds__mode_info__Reason_6);
    }
#line 806 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 806 "mode_info.m"
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
#line 794 "mode_info.m"
  {
#line 794 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 794 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars0_8;
#line 794 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars_11;
#line 794 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 7)));
#line 794 "mode_info.m"
    MR_Word check_hlds__mode_info__V_55_55;
#line 794 "mode_info.m"
    MR_Word check_hlds__mode_info__V_56_56;
#line 794 "mode_info.m"
    MR_Word check_hlds__mode_info__V_57_57;
#line 794 "mode_info.m"
    MR_Word check_hlds__mode_info__V_58_58;
#line 794 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59;
#line 794 "mode_info.m"
    MR_Word check_hlds__mode_info__V_60_60;
#line 794 "mode_info.m"
    MR_Word check_hlds__mode_info__V_61_61;
#line 794 "mode_info.m"
    MR_Word check_hlds__mode_info__V_62_62;
#line 794 "mode_info.m"
    MR_Word check_hlds__mode_info__V_63_63;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 0)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 1)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 2)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 3)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 4)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 5)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 6)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 0)));
#line 572 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 1)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 2)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 3)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 4)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_47_47;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_48_48;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_49_49;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_50_50;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_51_51;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_52_52;
#line 801 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars1_10;
#line 797 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeCtorInfo_19_19;
#line 797 "mode_info.m"
    MR_Word check_hlds__mode_info__TheseVars_9;
#line 797 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 797 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_64_64;
#line 613 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_65_65;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_70_70;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_71_71;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_72_72;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_73_73;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_74_74;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_75_75;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_76_76;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_77_77;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_78_78;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_79_79;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_80_80;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_81_81;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_82_82;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_83_83;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_84_84;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_85_85;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_86_86;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_87_87;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69;

#line 572 "mode_info.m"
    check_hlds__mode_info__LockedVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 5)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 6)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 7)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 8)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 10)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 12)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 13)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 14)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 797 "mode_info.m"
    check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__LockedVars0_8)) == (MR_mktag((MR_Integer) 1)));
#line 797 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 797 "mode_info.m"
      {
#line 797 "mode_info.m"
        check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__LockedVars0_8, (MR_Integer) 0)));
#line 797 "mode_info.m"
        check_hlds__mode_info__LockedVars1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__LockedVars0_8, (MR_Integer) 1)));
#line 797 "mode_info.m"
        check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, (MR_Integer) 0)));
#line 797 "mode_info.m"
        check_hlds__mode_info__TheseVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, (MR_Integer) 1)));
#line 797 "mode_info.m"
        {
#line 797 "mode_info.m"
          check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____var_lock_reason_0_0(check_hlds__mode_info__Reason_5, check_hlds__mode_info__V_20_20);
        }
#line 797 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 797 "mode_info.m"
          {
#line 8726 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 798 "mode_info.m"
            {
#line 798 "mode_info.m"
              check_hlds__mode_info__succeeded = parse_tree__set_of_var__equal_2_p_0(check_hlds__mode_info__TypeCtorInfo_19_19, check_hlds__mode_info__TheseVars_9, check_hlds__mode_info__Vars_6);
            }
#line 797 "mode_info.m"
          }
#line 797 "mode_info.m"
      }
#line 801 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 800 "mode_info.m"
      check_hlds__mode_info__LockedVars_11 = check_hlds__mode_info__LockedVars1_10;
#line 801 "mode_info.m"
    else
#line 802 "mode_info.m"
      {
#line 802 "mode_info.m"
        {
#line 802 "mode_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_unlock_vars\'/4", (MR_String) "some kind of nesting error");
#line 802 "mode_info.m"
          return;
        }
#line 802 "mode_info.m"
      }
#line 613 "mode_info.m"
    check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 0)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 1)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 2)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 3)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 4)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 5)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 6)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 7)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 0)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 1)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 2)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 3)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 4)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 5)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 6)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 7)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 8)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_73_73 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 613 "mode_info.m"
    check_hlds__mode_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    check_hlds__mode_info__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    check_hlds__mode_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 10)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_77_77 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 613 "mode_info.m"
    check_hlds__mode_info__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    check_hlds__mode_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 12)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 13)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 14)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_82_82 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 613 "mode_info.m"
    check_hlds__mode_info__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    check_hlds__mode_info__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    check_hlds__mode_info__V_85_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    check_hlds__mode_info__V_86_86 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    check_hlds__mode_info__V_87_87 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    {
#line 613 "mode_info.m"
      check_hlds__mode_info__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, 0) = ((MR_Box) (check_hlds__mode_info__V_64_64));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, 1) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, 2) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, 3) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, 4) = ((MR_Box) (check_hlds__mode_info__V_68_68));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, 5) = ((MR_Box) (check_hlds__mode_info__LockedVars_11));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, 6) = ((MR_Box) (check_hlds__mode_info__V_70_70));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, 7) = ((MR_Box) (check_hlds__mode_info__V_71_71));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, 8) = ((MR_Box) (check_hlds__mode_info__V_72_72));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, 9) = ((MR_Box) ((check_hlds__mode_info__V_73_73 | ((((check_hlds__mode_info__V_74_74 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_75_75 << (MR_Integer) 2)))))));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, 10) = ((MR_Box) (check_hlds__mode_info__V_76_76));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, 11) = ((MR_Box) ((check_hlds__mode_info__V_77_77 | ((check_hlds__mode_info__V_78_78 << (MR_Integer) 1)))));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, 12) = ((MR_Box) (check_hlds__mode_info__V_79_79));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, 13) = ((MR_Box) (check_hlds__mode_info__V_80_80));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, 14) = ((MR_Box) (check_hlds__mode_info__V_81_81));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, 15) = ((MR_Box) ((check_hlds__mode_info__V_82_82 | ((((check_hlds__mode_info__V_83_83 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_84_84 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_85_85 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_86_86 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_87_87 << (MR_Integer) 5)))))))))))));
#line 613 "mode_info.m"
    }
#line 613 "mode_info.m"
    {
#line 613 "mode_info.m"
      MR_Word base;
#line 613 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 613 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_13 = base;
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_59_59));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_60_60));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_61_61));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_63_63));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 613 "mode_info.m"
    }
#line 794 "mode_info.m"
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
#line 790 "mode_info.m"
  {
#line 790 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars_8;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 7)));
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 0)));
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 1)));
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 2)));
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 3)));
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 4)));
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 5)));
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 6)));
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 0)));
#line 790 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 1)));
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 2)));
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 3)));
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 4)));
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__V_49_49;

#line 572 "mode_info.m"
    check_hlds__mode_info__LockedVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 5)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 6)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 7)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 8)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 10)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 12)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 13)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 14)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 792 "mode_info.m"
    {
#line 792 "mode_info.m"
      check_hlds__mode_info__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 792 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, 0) = ((MR_Box) (check_hlds__mode_info__Reason_5));
#line 792 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, 1) = ((MR_Box) (check_hlds__mode_info__Vars_6));
#line 792 "mode_info.m"
    }
#line 792 "mode_info.m"
    {
#line 792 "mode_info.m"
      check_hlds__mode_info__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_11_11, 0) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 792 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_11_11, 1) = ((MR_Box) (check_hlds__mode_info__LockedVars_8));
#line 792 "mode_info.m"
    }
#line 613 "mode_info.m"
    {
#line 613 "mode_info.m"
      check_hlds__mode_info__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 0) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 1) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 2) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 3) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 4) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 5) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 6) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 7) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 8) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 9) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 2)))))));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 10) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 11) = ((MR_Box) ((check_hlds__mode_info__V_35_35 | ((check_hlds__mode_info__V_36_36 << (MR_Integer) 1)))));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 12) = ((MR_Box) (check_hlds__mode_info__V_37_37));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 13) = ((MR_Box) (check_hlds__mode_info__V_38_38));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 14) = ((MR_Box) (check_hlds__mode_info__V_39_39));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_49_49, 15) = ((MR_Box) ((check_hlds__mode_info__V_40_40 | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_42_42 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_43_43 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_44_44 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_45_45 << (MR_Integer) 5)))))))))))));
#line 613 "mode_info.m"
    }
#line 613 "mode_info.m"
    {
#line 613 "mode_info.m"
      MR_Word base;
#line 613 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 613 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10 = base;
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 613 "mode_info.m"
    }
#line 790 "mode_info.m"
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
#line 777 "mode_info.m"
  {
#line 777 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 777 "mode_info.m"
    MR_Word check_hlds__mode_info__VarTypes_7;
#line 777 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 567 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;

#line 567 "mode_info.m"
    check_hlds__mode_info__VarTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 779 "mode_info.m"
    {
#line 779 "mode_info.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__mode_info__VarTypes_7, check_hlds__mode_info__Vars_5, check_hlds__mode_info__TypesOfVars_6);
#line 779 "mode_info.m"
      return;
    }
#line 777 "mode_info.m"
  }
#line 278 "mode_info.m"
}

#line 273 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(
#line 273 "mode_info.m"
  MR_Word check_hlds__mode_info__INFS_4,
#line 273 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 273 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 273 "mode_info.m"
{
#line 647 "mode_info.m"
  {
#line 647 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 647 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 647 "mode_info.m"
    {
#line 647 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 4)) | ((check_hlds__mode_info__INFS_4 << (MR_Integer) 5)))))))))))));
#line 647 "mode_info.m"
    }
#line 647 "mode_info.m"
    {
#line 647 "mode_info.m"
      MR_Word base;
#line 647 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 647 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 647 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 647 "mode_info.m"
    }
#line 647 "mode_info.m"
  }
#line 273 "mode_info.m"
}

#line 271 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_make_ground_terms_unique_3_p_0(
#line 271 "mode_info.m"
  MR_Word check_hlds__mode_info__MGTU_4,
#line 271 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 271 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 271 "mode_info.m"
{
#line 645 "mode_info.m"
  {
#line 645 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 645 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 645 "mode_info.m"
    {
#line 645 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 3)) | ((((check_hlds__mode_info__MGTU_4 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 5)))))))))))));
#line 645 "mode_info.m"
    }
#line 645 "mode_info.m"
    {
#line 645 "mode_info.m"
      MR_Word base;
#line 645 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 645 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 645 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 645 "mode_info.m"
    }
#line 645 "mode_info.m"
  }
#line 271 "mode_info.m"
}

#line 269 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_had_from_ground_term_3_p_0(
#line 269 "mode_info.m"
  MR_Word check_hlds__mode_info__HFGI_4,
#line 269 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 269 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 269 "mode_info.m"
{
#line 643 "mode_info.m"
  {
#line 643 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 643 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 643 "mode_info.m"
    {
#line 643 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)) | ((((check_hlds__mode_info__HFGI_4 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 5)))))))))))));
#line 643 "mode_info.m"
    }
#line 643 "mode_info.m"
    {
#line 643 "mode_info.m"
      MR_Word base;
#line 643 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 643 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 643 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 643 "mode_info.m"
    }
#line 643 "mode_info.m"
  }
#line 269 "mode_info.m"
}

#line 267 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_in_from_ground_term_3_p_0(
#line 267 "mode_info.m"
  MR_Word check_hlds__mode_info__IFGI_4,
#line 267 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 267 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 267 "mode_info.m"
{
#line 641 "mode_info.m"
  {
#line 641 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 641 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 641 "mode_info.m"
    {
#line 641 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((((check_hlds__mode_info__IFGI_4 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 5)))))))))))));
#line 641 "mode_info.m"
    }
#line 641 "mode_info.m"
    {
#line 641 "mode_info.m"
      MR_Word base;
#line 641 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 641 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 641 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 641 "mode_info.m"
    }
#line 641 "mode_info.m"
  }
#line 267 "mode_info.m"
}

#line 265 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0(
#line 265 "mode_info.m"
  MR_Word check_hlds__mode_info__MayInit_4,
#line 265 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 265 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 265 "mode_info.m"
{
#line 639 "mode_info.m"
  {
#line 639 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 639 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 639 "mode_info.m"
    {
#line 639 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__MayInit_4 << (MR_Integer) 2)))))));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 5)))))))))))));
#line 639 "mode_info.m"
    }
#line 639 "mode_info.m"
    {
#line 639 "mode_info.m"
      MR_Word base;
#line 639 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 639 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 639 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 639 "mode_info.m"
    }
#line 639 "mode_info.m"
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
#line 820 "mode_info.m"
  {
#line 820 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 820 "mode_info.m"
    MR_Word check_hlds__mode_info__Checking0_6;
#line 820 "mode_info.m"
    MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 7)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 0)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 1)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 2)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 3)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 4)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 5)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 6)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 0)));
#line 593 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 1)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 2)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 3)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 4)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 5)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 6)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 7)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 8)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_72_72 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 10)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_76_76 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_77_77;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_78_78;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_79_79;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_80_80;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_81_81;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_82_82;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_83_83;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_84_84;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_85_85;

#line 593 "mode_info.m"
    check_hlds__mode_info__Checking0_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 12)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 13)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 14)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_80_80 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_85_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 823 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__Checking0_6 == (MR_Integer) 1);
#line 823 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 824 "mode_info.m"
      check_hlds__mode_info__succeeded = (check_hlds__mode_info__Checking_4 == (MR_Integer) 1);
#line 830 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 828 "mode_info.m"
      {
#line 828 "mode_info.m"
        {
#line 828 "mode_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_set_checking_extra_goals\'/3", (MR_String) "rechecking extra goals adds more extra goals");
#line 828 "mode_info.m"
          return;
        }
#line 828 "mode_info.m"
      }
#line 830 "mode_info.m"
    else
#line 831 "mode_info.m"
      {
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 7)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14;
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 0)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 1)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 2)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 3)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 4)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 5)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 6)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 0)));
#line 831 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 1)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 2)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 3)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 4)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 5)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 6)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 7)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 8)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 10)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 12)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 13)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 14)));
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 831 "mode_info.m"
        {
#line 831 "mode_info.m"
          check_hlds__mode_info__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 0) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 1) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 2) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 3) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 4) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 5) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 6) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 7) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 8) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 9) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 2)))))));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 10) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 11) = ((MR_Box) ((check_hlds__mode_info__V_35_35 | ((check_hlds__mode_info__Checking_4 << (MR_Integer) 1)))));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 12) = ((MR_Box) (check_hlds__mode_info__V_37_37));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 13) = ((MR_Box) (check_hlds__mode_info__V_38_38));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 14) = ((MR_Box) (check_hlds__mode_info__V_39_39));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 15) = ((MR_Box) ((check_hlds__mode_info__V_40_40 | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_42_42 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_43_43 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_44_44 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_45_45 << (MR_Integer) 5)))))))))))));
#line 831 "mode_info.m"
        }
#line 831 "mode_info.m"
        {
#line 831 "mode_info.m"
          MR_Word base;
#line 831 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 831 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_8 = base;
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 831 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 831 "mode_info.m"
        }
#line 831 "mode_info.m"
      }
#line 820 "mode_info.m"
  }
#line 263 "mode_info.m"
}

#line 261 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_may_change_called_proc_3_p_0(
#line 261 "mode_info.m"
  MR_Word check_hlds__mode_info__MayChange_4,
#line 261 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 261 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 261 "mode_info.m"
{
#line 637 "mode_info.m"
  {
#line 637 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 637 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 637 "mode_info.m"
    {
#line 637 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__MayChange_4 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 5)))))))))))));
#line 637 "mode_info.m"
    }
#line 637 "mode_info.m"
    {
#line 637 "mode_info.m"
      MR_Word base;
#line 637 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 637 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 637 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 637 "mode_info.m"
    }
#line 637 "mode_info.m"
  }
#line 261 "mode_info.m"
}

#line 259 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_how_to_check_3_p_0(
#line 259 "mode_info.m"
  MR_Word check_hlds__mode_info__How_4,
#line 259 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 259 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 259 "mode_info.m"
{
#line 635 "mode_info.m"
  {
#line 635 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 635 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);

#line 635 "mode_info.m"
    {
#line 635 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__How_4 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 5)))))))))))));
#line 635 "mode_info.m"
    }
#line 635 "mode_info.m"
    {
#line 635 "mode_info.m"
      MR_Word base;
#line 635 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 635 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 635 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 635 "mode_info.m"
    }
#line 635 "mode_info.m"
  }
#line 259 "mode_info.m"
}

#line 257 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(
#line 257 "mode_info.m"
  MR_Word check_hlds__mode_info__Changed_4,
#line 257 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 257 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 257 "mode_info.m"
{
#line 633 "mode_info.m"
  {
#line 633 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 633 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);

#line 633 "mode_info.m"
    {
#line 633 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__Changed_4 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 5)))))))))))));
#line 633 "mode_info.m"
    }
#line 633 "mode_info.m"
    {
#line 633 "mode_info.m"
      MR_Word base;
#line 633 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 633 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 633 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 633 "mode_info.m"
    }
#line 633 "mode_info.m"
  }
#line 257 "mode_info.m"
}

#line 255 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_parallel_vars_3_p_0(
#line 255 "mode_info.m"
  MR_Word check_hlds__mode_info__PVars_4,
#line 255 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 255 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 255 "mode_info.m"
{
#line 631 "mode_info.m"
  {
#line 631 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 631 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));

#line 631 "mode_info.m"
    {
#line 631 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__PVars_4));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 5)))))))))))));
#line 631 "mode_info.m"
    }
#line 631 "mode_info.m"
    {
#line 631 "mode_info.m"
      MR_Word base;
#line 631 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 631 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 631 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 631 "mode_info.m"
    }
#line 631 "mode_info.m"
  }
#line 255 "mode_info.m"
}

#line 253 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_last_checkpoint_insts_3_p_0(
#line 253 "mode_info.m"
  MR_Word check_hlds__mode_info__LastCheckpointInsts_4,
#line 253 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 253 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 253 "mode_info.m"
{
#line 629 "mode_info.m"
  {
#line 629 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 629 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));

#line 629 "mode_info.m"
    {
#line 629 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__LastCheckpointInsts_4));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 5)))))))))))));
#line 629 "mode_info.m"
    }
#line 629 "mode_info.m"
    {
#line 629 "mode_info.m"
      MR_Word base;
#line 629 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 629 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 629 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 629 "mode_info.m"
    }
#line 629 "mode_info.m"
  }
#line 253 "mode_info.m"
}

#line 251 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(
#line 251 "mode_info.m"
  MR_Word check_hlds__mode_info__NondetLiveVars_4,
#line 251 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 251 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 251 "mode_info.m"
{
#line 627 "mode_info.m"
  {
#line 627 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));

#line 627 "mode_info.m"
    {
#line 627 "mode_info.m"
      MR_Word base;
#line 627 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 627 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_6_6));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__NondetLiveVars_4));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 627 "mode_info.m"
    }
#line 627 "mode_info.m"
  }
#line 251 "mode_info.m"
}

#line 249 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_live_vars_3_p_0(
#line 249 "mode_info.m"
  MR_Word check_hlds__mode_info__LiveVarsList_4,
#line 249 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 249 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 249 "mode_info.m"
{
#line 625 "mode_info.m"
  {
#line 625 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 625 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));

#line 625 "mode_info.m"
    {
#line 625 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__LiveVarsList_4));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 5)))))))))))));
#line 625 "mode_info.m"
    }
#line 625 "mode_info.m"
    {
#line 625 "mode_info.m"
      MR_Word base;
#line 625 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 625 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 625 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 625 "mode_info.m"
    }
#line 625 "mode_info.m"
  }
#line 249 "mode_info.m"
}

#line 247 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_delay_info_3_p_0(
#line 247 "mode_info.m"
  MR_Word check_hlds__mode_info__DelayInfo_4,
#line 247 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 247 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 247 "mode_info.m"
{
#line 624 "mode_info.m"
  {
#line 624 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));

#line 624 "mode_info.m"
    {
#line 624 "mode_info.m"
      MR_Word base;
#line 624 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 624 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_6_6));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__DelayInfo_4));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 624 "mode_info.m"
    }
#line 624 "mode_info.m"
  }
#line 247 "mode_info.m"
}

#line 245 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_var_types_3_p_0(
#line 245 "mode_info.m"
  MR_Word check_hlds__mode_info__VarTypes_4,
#line 245 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 245 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 245 "mode_info.m"
{
#line 608 "mode_info.m"
  {
#line 608 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 608 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));

#line 608 "mode_info.m"
    {
#line 608 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__VarTypes_4));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 5)))))))))))));
#line 608 "mode_info.m"
    }
#line 608 "mode_info.m"
    {
#line 608 "mode_info.m"
      MR_Word base;
#line 608 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 608 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 608 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 608 "mode_info.m"
    }
#line 608 "mode_info.m"
  }
#line 245 "mode_info.m"
}

#line 243 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_varset_3_p_0(
#line 243 "mode_info.m"
  MR_Word check_hlds__mode_info__VarSet_4,
#line 243 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 243 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 243 "mode_info.m"
{
#line 607 "mode_info.m"
  {
#line 607 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 607 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));

#line 607 "mode_info.m"
    {
#line 607 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__VarSet_4));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 5)))))))))))));
#line 607 "mode_info.m"
    }
#line 607 "mode_info.m"
    {
#line 607 "mode_info.m"
      MR_Word base;
#line 607 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 607 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 607 "mode_info.m"
    }
#line 607 "mode_info.m"
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
#line 732 "mode_info.m"
  {
#line 732 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeInfo_19_19;
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__OldLiveVarsList_6;
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars0_8;
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars_9;
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars_10;
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__DelayInfo0_11;
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__DelayInfo_12;
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_15_15;
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_16_16;
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 580 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_30_30;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_47_47;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_48_48;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_49_49;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_50_50;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_51_51;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_62_62;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_63_63;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_65_65;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_80_80;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_81_81;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_83_83;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_84_84;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_85_85;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_86_86;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_87_87;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_82_82;

#line 733 "mode_info.m"
    {
#line 733 "mode_info.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_info__OldLiveVars_4, &check_hlds__mode_info__OldLiveVarsList_6);
    }
#line 580 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 0)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 1)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 2)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 3)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 4)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 5)));
#line 580 "mode_info.m"
    check_hlds__mode_info__NondetLiveVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 6)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 7)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 0)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 1)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 2)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 3)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 4)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 5)));
#line 580 "mode_info.m"
    check_hlds__mode_info__LiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 6)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 7)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 8)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 10)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 12)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 13)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 14)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 11781 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeInfo_19_19 = (MR_Word) &check_hlds__mode_info_scalar_common_1[0];
#line 736 "mode_info.m"
    {
#line 736 "mode_info.m"
      mercury__bag__det_remove_list_3_p_0(check_hlds__mode_info__TypeInfo_19_19, check_hlds__mode_info__OldLiveVarsList_6, check_hlds__mode_info__LiveVars0_7, &check_hlds__mode_info__LiveVars_9);
    }
#line 737 "mode_info.m"
    {
#line 737 "mode_info.m"
      mercury__bag__det_remove_list_3_p_0(check_hlds__mode_info__TypeInfo_19_19, check_hlds__mode_info__OldLiveVarsList_6, check_hlds__mode_info__NondetLiveVars0_8, &check_hlds__mode_info__NondetLiveVars_10);
    }
#line 738 "mode_info.m"
    {
#line 738 "mode_info.m"
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__mode_info__LiveVars_9, check_hlds__mode_info__STATE_VARIABLE_MI_0_13, &check_hlds__mode_info__STATE_VARIABLE_MI_15_15);
    }
#line 627 "mode_info.m"
    check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_15_15, (MR_Integer) 0)));
#line 627 "mode_info.m"
    check_hlds__mode_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_15_15, (MR_Integer) 1)));
#line 627 "mode_info.m"
    check_hlds__mode_info__DelayInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_15_15, (MR_Integer) 2)));
#line 627 "mode_info.m"
    check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_15_15, (MR_Integer) 3)));
#line 627 "mode_info.m"
    check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_15_15, (MR_Integer) 4)));
#line 627 "mode_info.m"
    check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_15_15, (MR_Integer) 5)));
#line 627 "mode_info.m"
    check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_15_15, (MR_Integer) 6)));
#line 627 "mode_info.m"
    check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_15_15, (MR_Integer) 7)));
#line 627 "mode_info.m"
    {
#line 627 "mode_info.m"
      check_hlds__mode_info__STATE_VARIABLE_MI_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, 0) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, 1) = ((MR_Box) (check_hlds__mode_info__V_63_63));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, 2) = ((MR_Box) (check_hlds__mode_info__DelayInfo0_11));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, 3) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, 4) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, 5) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, 6) = ((MR_Box) (check_hlds__mode_info__NondetLiveVars_10));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, 7) = ((MR_Box) (check_hlds__mode_info__V_69_69));
#line 627 "mode_info.m"
    }
#line 744 "mode_info.m"
    {
#line 744 "mode_info.m"
      check_hlds__delay_info__delay_info_bind_var_list_3_p_0(check_hlds__mode_info__OldLiveVarsList_6, check_hlds__mode_info__DelayInfo0_11, &check_hlds__mode_info__DelayInfo_12);
    }
#line 624 "mode_info.m"
    check_hlds__mode_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 0)));
#line 624 "mode_info.m"
    check_hlds__mode_info__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 1)));
#line 624 "mode_info.m"
    check_hlds__mode_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 2)));
#line 624 "mode_info.m"
    check_hlds__mode_info__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 3)));
#line 624 "mode_info.m"
    check_hlds__mode_info__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 4)));
#line 624 "mode_info.m"
    check_hlds__mode_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 5)));
#line 624 "mode_info.m"
    check_hlds__mode_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 6)));
#line 624 "mode_info.m"
    check_hlds__mode_info__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 7)));
#line 624 "mode_info.m"
    {
#line 624 "mode_info.m"
      MR_Word base;
#line 624 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 624 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_14 = base;
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_80_80));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_81_81));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__DelayInfo_12));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_83_83));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_84_84));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_85_85));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_86_86));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_87_87));
#line 624 "mode_info.m"
    }
#line 732 "mode_info.m"
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
#line 720 "mode_info.m"
  {
#line 720 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeInfo_16_16;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__NewLiveVarsList_6;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars0_8;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars_9;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars_10;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_13_13;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 580 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_27_27;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_47_47;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_48_48;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_60_60;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_61_61;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_62_62;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_63_63;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_64_64;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_65_65;

#line 721 "mode_info.m"
    {
#line 721 "mode_info.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_info__NewLiveVars_4, &check_hlds__mode_info__NewLiveVarsList_6);
    }
#line 580 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 0)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 1)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 2)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 3)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 4)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 5)));
#line 580 "mode_info.m"
    check_hlds__mode_info__NondetLiveVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 6)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 7)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 0)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 1)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 2)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 3)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 4)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 5)));
#line 580 "mode_info.m"
    check_hlds__mode_info__LiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 6)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 7)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 8)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 10)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 12)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 13)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 14)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 12063 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeInfo_16_16 = (MR_Word) &check_hlds__mode_info_scalar_common_1[0];
#line 724 "mode_info.m"
    {
#line 724 "mode_info.m"
      mercury__bag__insert_list_3_p_0(check_hlds__mode_info__TypeInfo_16_16, check_hlds__mode_info__NewLiveVarsList_6, check_hlds__mode_info__LiveVars0_7, &check_hlds__mode_info__LiveVars_9);
    }
#line 725 "mode_info.m"
    {
#line 725 "mode_info.m"
      mercury__bag__insert_list_3_p_0(check_hlds__mode_info__TypeInfo_16_16, check_hlds__mode_info__NewLiveVarsList_6, check_hlds__mode_info__NondetLiveVars0_8, &check_hlds__mode_info__NondetLiveVars_10);
    }
#line 726 "mode_info.m"
    {
#line 726 "mode_info.m"
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__mode_info__LiveVars_9, check_hlds__mode_info__STATE_VARIABLE_MI_0_11, &check_hlds__mode_info__STATE_VARIABLE_MI_13_13);
    }
#line 627 "mode_info.m"
    check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_13_13, (MR_Integer) 0)));
#line 627 "mode_info.m"
    check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_13_13, (MR_Integer) 1)));
#line 627 "mode_info.m"
    check_hlds__mode_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_13_13, (MR_Integer) 2)));
#line 627 "mode_info.m"
    check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_13_13, (MR_Integer) 3)));
#line 627 "mode_info.m"
    check_hlds__mode_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_13_13, (MR_Integer) 4)));
#line 627 "mode_info.m"
    check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_13_13, (MR_Integer) 5)));
#line 627 "mode_info.m"
    check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_13_13, (MR_Integer) 6)));
#line 627 "mode_info.m"
    check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_13_13, (MR_Integer) 7)));
#line 627 "mode_info.m"
    {
#line 627 "mode_info.m"
      MR_Word base;
#line 627 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 627 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_12 = base;
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_59_59));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_60_60));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_61_61));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_63_63));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_64_64));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__NondetLiveVars_10));
#line 627 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 627 "mode_info.m"
    }
#line 720 "mode_info.m"
  }
#line 239 "mode_info.m"
}

#line 237 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_p_0(
#line 237 "mode_info.m"
  MR_Word check_hlds__mode_info__INC_4,
#line 237 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 237 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 237 "mode_info.m"
{
#line 622 "mode_info.m"
  {
#line 622 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 622 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 622 "mode_info.m"
    {
#line 622 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__INC_4 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 5)))))))))))));
#line 622 "mode_info.m"
    }
#line 622 "mode_info.m"
    {
#line 622 "mode_info.m"
      MR_Word base;
#line 622 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 622 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 622 "mode_info.m"
    }
#line 622 "mode_info.m"
  }
#line 237 "mode_info.m"
}

#line 235 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_need_to_requantify_3_p_0(
#line 235 "mode_info.m"
  MR_Word check_hlds__mode_info__NTRQ_4,
#line 235 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 235 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 235 "mode_info.m"
{
#line 620 "mode_info.m"
  {
#line 620 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 620 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);

#line 620 "mode_info.m"
    {
#line 620 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__NTRQ_4 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 5)))))))))))));
#line 620 "mode_info.m"
    }
#line 620 "mode_info.m"
    {
#line 620 "mode_info.m"
      MR_Word base;
#line 620 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 620 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 620 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 620 "mode_info.m"
    }
#line 620 "mode_info.m"
  }
#line 235 "mode_info.m"
}

#line 233 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_warnings_3_p_0(
#line 233 "mode_info.m"
  MR_Word check_hlds__mode_info__Warnings_4,
#line 233 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 233 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 233 "mode_info.m"
{
#line 618 "mode_info.m"
  {
#line 618 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 618 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));

#line 618 "mode_info.m"
    {
#line 618 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__Warnings_4));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 5)))))))))))));
#line 618 "mode_info.m"
    }
#line 618 "mode_info.m"
    {
#line 618 "mode_info.m"
      MR_Word base;
#line 618 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 618 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 618 "mode_info.m"
    }
#line 618 "mode_info.m"
  }
#line 233 "mode_info.m"
}

#line 231 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_errors_3_p_0(
#line 231 "mode_info.m"
  MR_Word check_hlds__mode_info__Errors_4,
#line 231 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 231 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 231 "mode_info.m"
{
#line 617 "mode_info.m"
  {
#line 617 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));

#line 617 "mode_info.m"
    {
#line 617 "mode_info.m"
      MR_Word base;
#line 617 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 617 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 617 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_6_6));
#line 617 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 617 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 617 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__Errors_4));
#line 617 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 617 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 617 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 617 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 617 "mode_info.m"
    }
#line 617 "mode_info.m"
  }
#line 231 "mode_info.m"
}

#line 229 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_instvarset_3_p_0(
#line 229 "mode_info.m"
  MR_Word check_hlds__mode_info__InstVarSet_4,
#line 229 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 229 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 229 "mode_info.m"
{
#line 615 "mode_info.m"
  {
#line 615 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 615 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));

#line 615 "mode_info.m"
    {
#line 615 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__InstVarSet_4));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 5)))))))))))));
#line 615 "mode_info.m"
    }
#line 615 "mode_info.m"
    {
#line 615 "mode_info.m"
      MR_Word base;
#line 615 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 615 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 615 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 615 "mode_info.m"
    }
#line 615 "mode_info.m"
  }
#line 229 "mode_info.m"
}

#line 227 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_locked_vars_3_p_0(
#line 227 "mode_info.m"
  MR_Word check_hlds__mode_info__LockedVars_4,
#line 227 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 227 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 227 "mode_info.m"
{
#line 613 "mode_info.m"
  {
#line 613 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 613 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));

#line 613 "mode_info.m"
    {
#line 613 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__LockedVars_4));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 5)))))))))))));
#line 613 "mode_info.m"
    }
#line 613 "mode_info.m"
    {
#line 613 "mode_info.m"
      MR_Word base;
#line 613 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 613 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 613 "mode_info.m"
    }
#line 613 "mode_info.m"
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
#line 691 "mode_info.m"
  {
#line 691 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__InstMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 1)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_11_11;
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 0)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 2)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 3)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 4)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 5)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 6)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 7)));

#line 693 "mode_info.m"
    {
#line 693 "mode_info.m"
      check_hlds__mode_info__STATE_VARIABLE_MI_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 0) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 1) = ((MR_Box) (check_hlds__mode_info__InstMap_4));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 2) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 3) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 4) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 5) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 6) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 7) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 693 "mode_info.m"
    }
#line 695 "mode_info.m"
    {
#line 695 "mode_info.m"
      check_hlds__mode_info__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__mode_info__InstMap_4);
    }
#line 695 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 696 "mode_info.m"
      {
#line 696 "mode_info.m"
        check_hlds__mode_info__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__mode_info__InstMap0_6);
      }
#line 701 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 698 "mode_info.m"
      {
#line 698 "mode_info.m"
        MR_Word check_hlds__mode_info__DelayInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 2)));
#line 698 "mode_info.m"
        MR_Word check_hlds__mode_info__DelayInfo_8;
#line 579 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 0)));
#line 579 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 1)));
#line 579 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 3)));
#line 579 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 4)));
#line 579 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 5)));
#line 579 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 6)));
#line 579 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 7)));
#line 624 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39;
#line 624 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40;
#line 624 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42;
#line 624 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43;
#line 624 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44;
#line 624 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45;
#line 624 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46;
#line 624 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41;

#line 699 "mode_info.m"
        {
#line 699 "mode_info.m"
          check_hlds__delay_info__delay_info_bind_all_vars_2_p_0(check_hlds__mode_info__DelayInfo0_7, &check_hlds__mode_info__DelayInfo_8);
        }
#line 624 "mode_info.m"
        check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 0)));
#line 624 "mode_info.m"
        check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 1)));
#line 624 "mode_info.m"
        check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 2)));
#line 624 "mode_info.m"
        check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 3)));
#line 624 "mode_info.m"
        check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 4)));
#line 624 "mode_info.m"
        check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 5)));
#line 624 "mode_info.m"
        check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 6)));
#line 624 "mode_info.m"
        check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 7)));
#line 624 "mode_info.m"
        {
#line 624 "mode_info.m"
          MR_Word base;
#line 624 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 624 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_10 = base;
#line 624 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_39_39));
#line 624 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_40_40));
#line 624 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__DelayInfo_8));
#line 624 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_42_42));
#line 624 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 624 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 624 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 624 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 624 "mode_info.m"
        }
#line 698 "mode_info.m"
      }
#line 701 "mode_info.m"
    else
#line 700 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_10 = check_hlds__mode_info__STATE_VARIABLE_MI_11_11;
#line 691 "mode_info.m"
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
#line 686 "mode_info.m"
  {
#line 686 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 0)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 1)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 2)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 3)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 5)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 6)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 7)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 4)));

#line 611 "mode_info.m"
    {
#line 611 "mode_info.m"
      MR_Word base;
#line 611 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 611 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_5 = base;
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 611 "mode_info.m"
    }
#line 686 "mode_info.m"
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
#line 669 "mode_info.m"
  {
#line 669 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 4)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 0)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 1)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 2)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 3)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 5)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 6)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 7)));

#line 675 "mode_info.m"
    if ((check_hlds__mode_info__ModeContext0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 682 "mode_info.m"
      {
#line 683 "mode_info.m"
        {
#line 683 "mode_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_set_call_arg_context\'/3", (MR_String) "uninitialized");
#line 683 "mode_info.m"
          return;
        }
#line 682 "mode_info.m"
      }
#line 675 "mode_info.m"
    else
#line 675 "mode_info.m"
      if (((MR_tag((MR_Word) check_hlds__mode_info__ModeContext0_6)) == (MR_mktag((MR_Integer) 1))))
#line 672 "mode_info.m"
        {
#line 672 "mode_info.m"
          MR_Word check_hlds__mode_info__CallId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__ModeContext0_6, (MR_Integer) 0)));
#line 672 "mode_info.m"
          MR_Word check_hlds__mode_info__V_16_16;
#line 672 "mode_info.m"
          MR_Integer check_hlds__mode_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__ModeContext0_6, (MR_Integer) 1)));

#line 673 "mode_info.m"
          {
#line 673 "mode_info.m"
            check_hlds__mode_info__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "mode_info.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_16_16, 0) = ((MR_Box) (check_hlds__mode_info__CallId_7));
#line 673 "mode_info.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_16_16, 1) = ((MR_Box) (check_hlds__mode_info__ArgNum_4));
#line 673 "mode_info.m"
          }
#line 611 "mode_info.m"
          {
#line 611 "mode_info.m"
            MR_Word base;
#line 611 "mode_info.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 611 "mode_info.m"
            *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12 = base;
#line 611 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 611 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 611 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 611 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 611 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 611 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 611 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 611 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 611 "mode_info.m"
          }
#line 672 "mode_info.m"
        }
#line 675 "mode_info.m"
      else
#line 676 "mode_info.m"
        *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12 = check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11;
#line 669 "mode_info.m"
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
#line 664 "mode_info.m"
  {
#line 664 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;

#line 664 "mode_info.m"
    if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 666 "mode_info.m"
      {
#line 666 "mode_info.m"
        MR_Word check_hlds__mode_info__CallId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 666 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15;
#line 611 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20;
#line 611 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21;
#line 611 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22;
#line 611 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23;
#line 611 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25;
#line 611 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26;
#line 611 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27;
#line 611 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24;

#line 667 "mode_info.m"
        {
#line 667 "mode_info.m"
          check_hlds__mode_info__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "mode_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_15_15, 0) = ((MR_Box) (check_hlds__mode_info__CallId_11));
#line 667 "mode_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 667 "mode_info.m"
        }
#line 611 "mode_info.m"
        check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 0)));
#line 611 "mode_info.m"
        check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 1)));
#line 611 "mode_info.m"
        check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 2)));
#line 611 "mode_info.m"
        check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 3)));
#line 611 "mode_info.m"
        check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 4)));
#line 611 "mode_info.m"
        check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 5)));
#line 611 "mode_info.m"
        check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 6)));
#line 611 "mode_info.m"
        check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 7)));
#line 611 "mode_info.m"
        {
#line 611 "mode_info.m"
          MR_Word base;
#line 611 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 611 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_3 = base;
#line 611 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 611 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 611 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 611 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 611 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 611 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 611 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 611 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 611 "mode_info.m"
        }
#line 666 "mode_info.m"
      }
#line 664 "mode_info.m"
    else
#line 664 "mode_info.m"
      {
#line 664 "mode_info.m"
        MR_Word check_hlds__mode_info__UnifyContext_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 664 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8;
#line 611 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30;
#line 611 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31;
#line 611 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32;
#line 611 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33;
#line 611 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35;
#line 611 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36;
#line 611 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37;
#line 611 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34;

#line 665 "mode_info.m"
        {
#line 665 "mode_info.m"
          check_hlds__mode_info__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "mode_info.m"
          MR_hl_field(MR_mktag(2), check_hlds__mode_info__V_8_8, 0) = ((MR_Box) (check_hlds__mode_info__UnifyContext_4));
#line 665 "mode_info.m"
          MR_hl_field(MR_mktag(2), check_hlds__mode_info__V_8_8, 1) = ((MR_Box) ((MR_Integer) 0));
#line 665 "mode_info.m"
        }
#line 611 "mode_info.m"
        check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 0)));
#line 611 "mode_info.m"
        check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 1)));
#line 611 "mode_info.m"
        check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 2)));
#line 611 "mode_info.m"
        check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 3)));
#line 611 "mode_info.m"
        check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 4)));
#line 611 "mode_info.m"
        check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 5)));
#line 611 "mode_info.m"
        check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 6)));
#line 611 "mode_info.m"
        check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 7)));
#line 611 "mode_info.m"
        {
#line 611 "mode_info.m"
          MR_Word base;
#line 611 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 611 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_3 = base;
#line 611 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 611 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 611 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 611 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 611 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 611 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 611 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 611 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_37_37));
#line 611 "mode_info.m"
        }
#line 664 "mode_info.m"
      }
#line 664 "mode_info.m"
  }
#line 219 "mode_info.m"
}

#line 217 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_mode_context_3_p_0(
#line 217 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeContext_4,
#line 217 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 217 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 217 "mode_info.m"
{
#line 611 "mode_info.m"
  {
#line 611 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));

#line 611 "mode_info.m"
    {
#line 611 "mode_info.m"
      MR_Word base;
#line 611 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 611 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_6_6));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__ModeContext_4));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 611 "mode_info.m"
    }
#line 611 "mode_info.m"
  }
#line 217 "mode_info.m"
}

#line 215 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_context_3_p_0(
#line 215 "mode_info.m"
  MR_Word check_hlds__mode_info__Context_4,
#line 215 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 215 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 215 "mode_info.m"
{
#line 610 "mode_info.m"
  {
#line 610 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));

#line 610 "mode_info.m"
    {
#line 610 "mode_info.m"
      MR_Word base;
#line 610 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 610 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 610 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_6_6));
#line 610 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 610 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 610 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 610 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 610 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__Context_4));
#line 610 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 610 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 610 "mode_info.m"
    }
#line 610 "mode_info.m"
  }
#line 215 "mode_info.m"
}

#line 213 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_proc_id_3_p_0(
#line 213 "mode_info.m"
  MR_Integer check_hlds__mode_info__ProcId_4,
#line 213 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 213 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 213 "mode_info.m"
{
#line 606 "mode_info.m"
  {
#line 606 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 606 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));

#line 606 "mode_info.m"
    {
#line 606 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__ProcId_4));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 5)))))))))))));
#line 606 "mode_info.m"
    }
#line 606 "mode_info.m"
    {
#line 606 "mode_info.m"
      MR_Word base;
#line 606 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 606 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 606 "mode_info.m"
    }
#line 606 "mode_info.m"
  }
#line 213 "mode_info.m"
}

#line 211 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_pred_id_3_p_0(
#line 211 "mode_info.m"
  MR_Word check_hlds__mode_info__PredId_4,
#line 211 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 211 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 211 "mode_info.m"
{
#line 605 "mode_info.m"
  {
#line 605 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 605 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));

#line 605 "mode_info.m"
    {
#line 605 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__PredId_4));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 15) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 5)))))))))))));
#line 605 "mode_info.m"
    }
#line 605 "mode_info.m"
    {
#line 605 "mode_info.m"
      MR_Word base;
#line 605 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 605 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 605 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 605 "mode_info.m"
    }
#line 605 "mode_info.m"
  }
#line 211 "mode_info.m"
}

#line 209 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_module_info_3_p_0(
#line 209 "mode_info.m"
  MR_Word check_hlds__mode_info__ModuleInfo_4,
#line 209 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 209 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 209 "mode_info.m"
{
#line 604 "mode_info.m"
  {
#line 604 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));

#line 604 "mode_info.m"
    {
#line 604 "mode_info.m"
      MR_Word base;
#line 604 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 604 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__ModuleInfo_4));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 604 "mode_info.m"
    }
#line 604 "mode_info.m"
  }
#line 209 "mode_info.m"
}

#line 204 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(
#line 204 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 204 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 204 "mode_info.m"
{
#line 601 "mode_info.m"
  {
#line 601 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 601 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 601 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 601 "mode_info.m"
  }
#line 204 "mode_info.m"
}

#line 202 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_make_ground_terms_unique_2_p_0(
#line 202 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 202 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 202 "mode_info.m"
{
#line 599 "mode_info.m"
  {
#line 599 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 599 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;

#line 599 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 599 "mode_info.m"
  }
#line 202 "mode_info.m"
}

#line 200 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_had_from_ground_term_2_p_0(
#line 200 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 200 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 200 "mode_info.m"
{
#line 597 "mode_info.m"
  {
#line 597 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 597 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;

#line 597 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 597 "mode_info.m"
  }
#line 200 "mode_info.m"
}

#line 198 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_in_from_ground_term_2_p_0(
#line 198 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 198 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 198 "mode_info.m"
{
#line 595 "mode_info.m"
  {
#line 595 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 595 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;

#line 595 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 595 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 595 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 595 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 595 "mode_info.m"
  }
#line 198 "mode_info.m"
}

#line 196 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_p_0(
#line 196 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 196 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 196 "mode_info.m"
{
#line 589 "mode_info.m"
  {
#line 589 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 589 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;

#line 589 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 589 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 589 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 589 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 589 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 589 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 589 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 589 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 589 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 589 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 589 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 589 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 589 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 589 "mode_info.m"
  }
#line 196 "mode_info.m"
}

#line 195 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_checking_extra_goals_2_p_0(
#line 195 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 195 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 195 "mode_info.m"
{
#line 593 "mode_info.m"
  {
#line 593 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 593 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
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
    *check_hlds__mode_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 593 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 593 "mode_info.m"
  }
#line 195 "mode_info.m"
}

#line 193 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_head_inst_vars_2_p_0(
#line 193 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 193 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 193 "mode_info.m"
{
#line 592 "mode_info.m"
  {
#line 592 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 592 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
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
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 592 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 592 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 592 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 592 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 592 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 592 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 592 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 592 "mode_info.m"
  }
#line 193 "mode_info.m"
}

#line 192 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_initial_instmap_2_p_0(
#line 192 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 192 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 192 "mode_info.m"
{
#line 591 "mode_info.m"
  {
#line 591 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 591 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
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
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 591 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 591 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 591 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 591 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 591 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 591 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 591 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 591 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 591 "mode_info.m"
  }
#line 192 "mode_info.m"
}

#line 190 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(
#line 190 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 190 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 190 "mode_info.m"
{
#line 587 "mode_info.m"
  {
#line 587 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 587 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;

#line 587 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 587 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 587 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 587 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 587 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 587 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 587 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 587 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 587 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 587 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 587 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 587 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 587 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 587 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 587 "mode_info.m"
  }
#line 190 "mode_info.m"
}

#line 188 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_how_to_check_2_p_0(
#line 188 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 188 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 188 "mode_info.m"
{
#line 586 "mode_info.m"
  {
#line 586 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 586 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
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
    *check_hlds__mode_info__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 586 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 586 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 586 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 586 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 586 "mode_info.m"
  }
#line 188 "mode_info.m"
}

#line 187 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(
#line 187 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 187 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 187 "mode_info.m"
{
#line 585 "mode_info.m"
  {
#line 585 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
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
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 585 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;

#line 585 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 585 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 585 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 585 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 585 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 585 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 585 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 585 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 585 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 585 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 585 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 585 "mode_info.m"
  }
#line 187 "mode_info.m"
}

#line 185 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_parallel_vars_2_p_0(
#line 185 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 185 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 185 "mode_info.m"
{
#line 584 "mode_info.m"
  {
#line 584 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 584 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;

#line 584 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 584 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 584 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 584 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 584 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 584 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 584 "mode_info.m"
  }
#line 185 "mode_info.m"
}

#line 183 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_last_checkpoint_insts_2_p_0(
#line 183 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 183 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 183 "mode_info.m"
{
#line 582 "mode_info.m"
  {
#line 582 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 582 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 582 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;

#line 582 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 582 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 582 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 582 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 582 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 582 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 582 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 582 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 582 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 582 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 582 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 582 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 582 "mode_info.m"
  }
#line 183 "mode_info.m"
}

#line 181 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(
#line 181 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 181 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 181 "mode_info.m"
{
#line 581 "mode_info.m"
  {
#line 581 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;

#line 581 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 581 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 581 "mode_info.m"
  }
#line 181 "mode_info.m"
}

#line 180 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_live_vars_2_p_0(
#line 180 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 180 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 180 "mode_info.m"
{
#line 580 "mode_info.m"
  {
#line 580 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 580 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;

#line 580 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 580 "mode_info.m"
  }
#line 180 "mode_info.m"
}

#line 179 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_delay_info_2_p_0(
#line 179 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 179 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 179 "mode_info.m"
{
#line 579 "mode_info.m"
  {
#line 579 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;

#line 579 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 579 "mode_info.m"
    check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 579 "mode_info.m"
    check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 579 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 579 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 579 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 579 "mode_info.m"
  }
#line 179 "mode_info.m"
}

#line 178 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_var_types_2_p_0(
#line 178 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 178 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 178 "mode_info.m"
{
#line 567 "mode_info.m"
  {
#line 567 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 567 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;

#line 567 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 567 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 567 "mode_info.m"
  }
#line 178 "mode_info.m"
}

#line 177 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_instvarset_2_p_0(
#line 177 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_3,
#line 177 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 177 "mode_info.m"
{
#line 571 "mode_info.m"
  {
#line 571 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 571 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;

#line 571 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 571 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 571 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 571 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 571 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 571 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 571 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 571 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 571 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 571 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 571 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 571 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 571 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 571 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 571 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 571 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 571 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 571 "mode_info.m"
  }
#line 177 "mode_info.m"
}

#line 176 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_varset_2_p_0(
#line 176 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 176 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 176 "mode_info.m"
{
#line 566 "mode_info.m"
  {
#line 566 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 566 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;

#line 566 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 566 "mode_info.m"
    check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 566 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 566 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 566 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 566 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 566 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 566 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 566 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 566 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 566 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 566 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 566 "mode_info.m"
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
#line 770 "mode_info.m"
  {
#line 770 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVarsBag_5;
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__SortedList_6;
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 0)));
#line 580 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 1)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 2)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 3)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 4)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 5)));
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 580 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;

#line 580 "mode_info.m"
    check_hlds__mode_info__LiveVarsBag_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 6)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 7)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 8)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 13)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)));
#line 580 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 580 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 772 "mode_info.m"
    {
#line 772 "mode_info.m"
      mercury__bag__to_list_without_duplicates_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVarsBag_5, &check_hlds__mode_info__SortedList_6);
    }
#line 773 "mode_info.m"
    {
#line 773 "mode_info.m"
      parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_info__SortedList_6, check_hlds__mode_info__LiveVars_4);
#line 773 "mode_info.m"
      return;
    }
#line 770 "mode_info.m"
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
#line 707 "mode_info.m"
  {
#line 707 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 709 "mode_info.m"
    {
#line 709 "mode_info.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__mode_info__Errors_5, check_hlds__mode_info__NumErrors_4);
#line 709 "mode_info.m"
      return;
    }
#line 707 "mode_info.m"
  }
#line 174 "mode_info.m"
}

#line 172 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(
#line 172 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 172 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 172 "mode_info.m"
{
#line 577 "mode_info.m"
  {
#line 577 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 577 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 577 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;

#line 577 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 577 "mode_info.m"
  }
#line 172 "mode_info.m"
}

#line 170 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_need_to_requantify_2_p_0(
#line 170 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 170 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 170 "mode_info.m"
{
#line 575 "mode_info.m"
  {
#line 575 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 575 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 575 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
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
    *check_hlds__mode_info__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 575 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 575 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 575 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 575 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 575 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 575 "mode_info.m"
  }
#line 170 "mode_info.m"
}

#line 168 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_warnings_2_p_0(
#line 168 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 168 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 168 "mode_info.m"
{
#line 574 "mode_info.m"
  {
#line 574 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 574 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;

#line 574 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 574 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 574 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 574 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 574 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 574 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 574 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 574 "mode_info.m"
  }
#line 168 "mode_info.m"
}

#line 167 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_errors_2_p_0(
#line 167 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 167 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 167 "mode_info.m"
{
#line 573 "mode_info.m"
  {
#line 573 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;

#line 573 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 573 "mode_info.m"
    check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 573 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 573 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 573 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 573 "mode_info.m"
  }
#line 167 "mode_info.m"
}

#line 166 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_locked_vars_2_p_0(
#line 166 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 166 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 166 "mode_info.m"
{
#line 572 "mode_info.m"
  {
#line 572 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 572 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;

#line 572 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 572 "mode_info.m"
  }
#line 166 "mode_info.m"
}

#line 165 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_instmap_2_p_0(
#line 165 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 165 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 165 "mode_info.m"
{
#line 570 "mode_info.m"
  {
#line 570 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 570 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 570 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5;
#line 570 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6;
#line 570 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 570 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 570 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 570 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;

#line 570 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 570 "mode_info.m"
    check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 570 "mode_info.m"
    check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 570 "mode_info.m"
    check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 570 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 570 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 570 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 570 "mode_info.m"
  }
#line 165 "mode_info.m"
}

#line 164 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_mode_context_2_p_0(
#line 164 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 164 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 164 "mode_info.m"
{
#line 569 "mode_info.m"
  {
#line 569 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;

#line 569 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 569 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 569 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 569 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 569 "mode_info.m"
  }
#line 164 "mode_info.m"
}

#line 163 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_context_2_p_0(
#line 163 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 163 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 163 "mode_info.m"
{
#line 568 "mode_info.m"
  {
#line 568 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 568 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 568 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 568 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 568 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 568 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 568 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 568 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;

#line 568 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 568 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 568 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 568 "mode_info.m"
  }
#line 163 "mode_info.m"
}

#line 161 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_debug_modes_2_p_0(
#line 161 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 161 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 161 "mode_info.m"
{
#line 565 "mode_info.m"
  {
#line 565 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 565 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;

#line 565 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 565 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 565 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 565 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 565 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 565 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 565 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 565 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 565 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 565 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 565 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 565 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 565 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 565 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 565 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 565 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 565 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 565 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 565 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 565 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 565 "mode_info.m"
  }
#line 161 "mode_info.m"
}

#line 160 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_proc_id_2_p_0(
#line 160 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 160 "mode_info.m"
  MR_Integer * check_hlds__mode_info__HeadVar__2_2)
#line 160 "mode_info.m"
{
#line 564 "mode_info.m"
  {
#line 564 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;

#line 564 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 564 "mode_info.m"
  }
#line 160 "mode_info.m"
}

#line 159 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_pred_id_2_p_0(
#line 159 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 159 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 159 "mode_info.m"
{
#line 563 "mode_info.m"
  {
#line 563 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 563 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_12_12;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;

#line 563 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 563 "mode_info.m"
    check_hlds__mode_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 563 "mode_info.m"
    check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 563 "mode_info.m"
    check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 563 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 563 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 563 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 563 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 563 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 563 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 563 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 563 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 563 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 563 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 563 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 563 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 563 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 563 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)));
#line 563 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 563 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 563 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 563 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 563 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 563 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 563 "mode_info.m"
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
#line 660 "mode_info.m"
  {
#line 660 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 662 "mode_info.m"
    {
#line 662 "mode_info.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Insts_4);
#line 662 "mode_info.m"
      return;
    }
#line 660 "mode_info.m"
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
#line 656 "mode_info.m"
  {
#line 656 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 658 "mode_info.m"
    {
#line 658 "mode_info.m"
      hlds__hlds_module__module_info_get_mode_table_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Modes_4);
#line 658 "mode_info.m"
      return;
    }
#line 656 "mode_info.m"
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
#line 652 "mode_info.m"
  {
#line 652 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 654 "mode_info.m"
    {
#line 654 "mode_info.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Preds_4);
#line 654 "mode_info.m"
      return;
    }
#line 652 "mode_info.m"
  }
#line 156 "mode_info.m"
}

#line 155 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_module_info_2_p_0(
#line 155 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 155 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 155 "mode_info.m"
{
#line 562 "mode_info.m"
  {
#line 562 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4;
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5;
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6;
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;

#line 562 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 562 "mode_info.m"
    check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 562 "mode_info.m"
    check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 562 "mode_info.m"
    check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 562 "mode_info.m"
    check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 562 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 562 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 562 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 562 "mode_info.m"
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
      libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 58, &check_hlds__mode_info__DebugModes_22);
    }
#line 506 "mode_info.m"
    {
#line 506 "mode_info.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 62, &check_hlds__mode_info__DebugModesPredId_23);
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
          libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 61, &check_hlds__mode_info__DebugVerbose_25);
        }
#line 514 "mode_info.m"
        {
#line 514 "mode_info.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 60, &check_hlds__mode_info__DebugMinimal_26);
        }
#line 515 "mode_info.m"
        {
#line 515 "mode_info.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 59, &check_hlds__mode_info__Statistics_27);
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
#line 17276 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 528 "mode_info.m"
    {
#line 528 "mode_info.m"
      check_hlds__mode_info__V_59_59 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__mode_info__TypeCtorInfo_61_61, check_hlds__mode_info__LiveVars_15);
    }
#line 17283 "check_hlds.mode_info.c"
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
