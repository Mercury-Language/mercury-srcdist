/*
** Automatically generated from `mode_info.m'
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




#line 130 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_0[1];

#line 133 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0;

#line 136 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_1[1];

#line 139 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1;

#line 142 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_0[1];

#line 145 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_1[1];

#line 148 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_call_context_0[2];

#line 151 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_call_context_0[2];

#line 154 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_call_context_0[2];

#line 157 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_debug_flags_0_0[3];

#line 160 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_debug_flags_0_0[3];

#line 163 "check_hlds.mode_info.c"
static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_debug_flags_0_0[3];

#line 166 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0;

#line 169 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0[1];

#line 172 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_debug_flags_0[1];

#line 175 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_debug_flags_0[1];

#line 178 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_debug_flags_0[1];

#line 181 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0;

#line 184 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1;

#line 187 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_had_from_ground_term_scope_0[2];

#line 190 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_had_from_ground_term_scope_0[2];

#line 193 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_had_from_ground_term_scope_0[2];

#line 196 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0;

#line 199 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1;

#line 202 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_how_to_check_goal_0[2];

#line 205 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_how_to_check_goal_0[2];

#line 208 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_how_to_check_goal_0[2];

#line 211 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0;

#line 214 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1;

#line 217 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_dupl_for_switch_0[2];

#line 220 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_dupl_for_switch_0[2];

#line 223 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_dupl_for_switch_0[2];

#line 226 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0;

#line 229 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1;

#line 232 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_from_ground_term_scope_0[2];

#line 235 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_from_ground_term_scope_0[2];

#line 238 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_from_ground_term_scope_0[2];

#line 241 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0;

#line 244 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1;

#line 247 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_promise_purity_scope_0[2];

#line 250 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_promise_purity_scope_0[2];

#line 253 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_promise_purity_scope_0[2];

#line 256 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 259 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 262 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 265 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 268 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0;

#line 271 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1;

#line 274 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_make_ground_terms_unique_0[2];

#line 277 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_make_ground_terms_unique_0[2];

#line 280 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_make_ground_terms_unique_0[2];

#line 283 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0;

#line 286 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1;

#line 289 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_change_called_proc_0[2];

#line 292 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_change_called_proc_0[2];

#line 295 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_change_called_proc_0[2];

#line 298 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0;

#line 301 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1;

#line 304 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_init_solver_vars_0[2];

#line 307 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_init_solver_vars_0[2];

#line 310 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_init_solver_vars_0[2];

#line 313 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_0[2];

#line 316 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0;

#line 319 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_1[2];

#line 322 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1;

#line 325 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2;

#line 328 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_0[1];

#line 331 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_1[1];

#line 334 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_2[1];

#line 337 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_context_0[3];

#line 340 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_context_0[3];

#line 343 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_context_0[3];

#line 346 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

#line 349 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 352 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_info_0_0[8];

#line 355 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_info_0_0[8];

#line 358 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0;

#line 361 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0[1];

#line 364 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_info_0[1];

#line 367 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_info_0[1];

#line 370 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_info_0[1];

#line 373 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 376 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 379 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0;

#line 382 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 385 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0;

#line 388 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_warning_info_0;

#line 391 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_sub_info_0_0[23];

#line 394 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_sub_info_0_0[23];

#line 397 "check_hlds.mode_info.c"
static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_mode_sub_info_0_0[23];

#line 400 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0;

#line 403 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0[1];

#line 406 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_sub_info_0[1];

#line 409 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_sub_info_0[1];

#line 412 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_sub_info_0[1];

#line 415 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_par_conj_mode_check_0_0[2];

#line 418 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_par_conj_mode_check_0_0[2];

#line 421 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0;

#line 424 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0[1];

#line 427 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_par_conj_mode_check_0[1];

#line 430 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_par_conj_mode_check_0[1];

#line 433 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_par_conj_mode_check_0[1];

#line 436 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0;

#line 439 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1;

#line 442 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_side_0[2];

#line 445 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_side_0[2];

#line 448 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_side_0[2];

#line 451 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0;

#line 454 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1;

#line 457 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_var_lock_reason_0_2[1];

#line 460 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2;

#line 463 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3;

#line 466 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4;

#line 469 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5;

#line 472 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_0[5];

#line 475 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_1[1];

#line 478 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_var_lock_reason_0[2];

#line 481 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_var_lock_reason_0[6];

#line 484 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_var_lock_reason_0[6];

#line 487 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____call_context_0_0_10001(
#line 490 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 492 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 495 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____call_context_0_0_10001(
#line 498 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 500 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 502 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 505 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____debug_flags_0_0_10001(
#line 508 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 510 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 513 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0_10001(
#line 516 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 518 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 520 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 523 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0_10001(
#line 526 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 528 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 531 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0_10001(
#line 534 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 536 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 538 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 541 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____how_to_check_goal_0_0_10001(
#line 544 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 546 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 549 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____how_to_check_goal_0_0_10001(
#line 552 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 554 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 556 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 559 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0_10001(
#line 562 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 564 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 567 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0_10001(
#line 570 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 572 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 574 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 577 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0_10001(
#line 580 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 582 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 585 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0_10001(
#line 588 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 590 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 592 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 595 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0_10001(
#line 598 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 600 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 603 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0_10001(
#line 606 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 608 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 610 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 613 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____locked_vars_0_0_10001(
#line 616 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 618 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 621 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____locked_vars_0_0_10001(
#line 624 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 626 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 628 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 631 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0_10001(
#line 634 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 636 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 639 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0_10001(
#line 642 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 644 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 646 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 649 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_change_called_proc_0_0_10001(
#line 652 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 654 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 657 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_change_called_proc_0_0_10001(
#line 660 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 662 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 664 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 667 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_init_solver_vars_0_0_10001(
#line 670 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 672 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 675 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_init_solver_vars_0_0_10001(
#line 678 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 680 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 682 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 685 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_context_0_0_10001(
#line 688 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 690 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 693 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_context_0_0_10001(
#line 696 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 698 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 700 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 703 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0_10001(
#line 706 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 708 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 711 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0_10001(
#line 714 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 716 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 718 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 721 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0_10001(
#line 724 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 726 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 729 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0_10001(
#line 732 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 734 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 736 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 739 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0_10001(
#line 742 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 744 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 747 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0_10001(
#line 750 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 752 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 754 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 757 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0_10001(
#line 760 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 762 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 765 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0_10001(
#line 768 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 770 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 772 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 775 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____side_0_0_10001(
#line 778 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 780 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 783 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____side_0_0_10001(
#line 786 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 788 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 790 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 793 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____var_lock_reason_0_0_10001(
#line 796 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 798 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 801 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____var_lock_reason_0_0_10001(
#line 804 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 806 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 808 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 350 "mode_info.m"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0(
#line 350 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 350 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 350 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3);

#line 350 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0(
#line 350 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 350 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2);

#line 799 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(
#line 799 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 799 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_7,
#line 799 "mode_info.m"
  MR_Word * check_hlds__mode_info__Reason_8);


static /* final */ const MR_Box check_hlds__mode_info_scalar_common_1[10][2];

static /* final */ const MR_Box check_hlds__mode_info_scalar_common_2[1][3];




static /* final */ const MR_Box check_hlds__mode_info_scalar_common_1[10][2] = {
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_info_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_var_lock_reason_0)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_1[1]))
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



#line 926 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0
};

#line 931 "check_hlds.mode_info.c"
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

#line 946 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0
};

#line 951 "check_hlds.mode_info.c"
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

#line 966 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0
};

#line 971 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1
};

#line 976 "check_hlds.mode_info.c"
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

#line 990 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_call_context_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0
};

#line 996 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_call_context_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1002 "check_hlds.mode_info.c"
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

#line 1023 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_debug_flags_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1030 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_debug_flags_0_0[3] = {
  (MR_String) "verbose",
  (MR_String) "minimal",
  (MR_String) "statistics"
};

#line 1037 "check_hlds.mode_info.c"
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

#line 1056 "check_hlds.mode_info.c"
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

#line 1071 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0
};

#line 1076 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_debug_flags_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0
  }
};

#line 1085 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_debug_flags_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0
};

#line 1090 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_debug_flags_0[1] = {
  (MR_Integer) 0
};

#line 1095 "check_hlds.mode_info.c"
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

#line 1116 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0 = {
  (MR_String) "had_from_ground_term_scope",
  (MR_Integer) 0
};

#line 1122 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1 = {
  (MR_String) "did_not_have_from_ground_term_scope",
  (MR_Integer) 1
};

#line 1128 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_had_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1
};

#line 1134 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_had_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0
};

#line 1140 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_had_from_ground_term_scope_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1146 "check_hlds.mode_info.c"
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

#line 1167 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0 = {
  (MR_String) "check_modes",
  (MR_Integer) 0
};

#line 1173 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1 = {
  (MR_String) "check_unique_modes",
  (MR_Integer) 1
};

#line 1179 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_how_to_check_goal_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1
};

#line 1185 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_how_to_check_goal_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1
};

#line 1191 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_how_to_check_goal_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1197 "check_hlds.mode_info.c"
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

#line 1218 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0 = {
  (MR_String) "in_dupl_for_switch",
  (MR_Integer) 0
};

#line 1224 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1 = {
  (MR_String) "not_in_dupl_for_switch",
  (MR_Integer) 1
};

#line 1230 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_dupl_for_switch_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1
};

#line 1236 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_dupl_for_switch_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1
};

#line 1242 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_dupl_for_switch_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1248 "check_hlds.mode_info.c"
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

#line 1269 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0 = {
  (MR_String) "in_from_ground_term_scope",
  (MR_Integer) 0
};

#line 1275 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1 = {
  (MR_String) "not_in_from_ground_term_scope",
  (MR_Integer) 1
};

#line 1281 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1
};

#line 1287 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1
};

#line 1293 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_from_ground_term_scope_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1299 "check_hlds.mode_info.c"
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

#line 1320 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0 = {
  (MR_String) "in_promise_purity_scope",
  (MR_Integer) 0
};

#line 1326 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1 = {
  (MR_String) "not_in_promise_purity_scope",
  (MR_Integer) 1
};

#line 1332 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_promise_purity_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1
};

#line 1338 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_promise_purity_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1
};

#line 1344 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_promise_purity_scope_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1350 "check_hlds.mode_info.c"
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

#line 1371 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1379 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1387 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_var_lock_reason_0,
    (MR_TypeInfo) &check_hlds__mode_info__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1396 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1404 "check_hlds.mode_info.c"
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

#line 1425 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0 = {
  (MR_String) "make_ground_terms_unique",
  (MR_Integer) 0
};

#line 1431 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1 = {
  (MR_String) "do_not_make_ground_terms_unique",
  (MR_Integer) 1
};

#line 1437 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_make_ground_terms_unique_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1
};

#line 1443 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_make_ground_terms_unique_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0
};

#line 1449 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_make_ground_terms_unique_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1455 "check_hlds.mode_info.c"
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

#line 1476 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0 = {
  (MR_String) "may_change_called_proc",
  (MR_Integer) 0
};

#line 1482 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1 = {
  (MR_String) "may_not_change_called_proc",
  (MR_Integer) 1
};

#line 1488 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_change_called_proc_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1
};

#line 1494 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_change_called_proc_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1
};

#line 1500 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_change_called_proc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1506 "check_hlds.mode_info.c"
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

#line 1527 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0 = {
  (MR_String) "may_init_solver_vars",
  (MR_Integer) 0
};

#line 1533 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1 = {
  (MR_String) "may_not_init_solver_vars",
  (MR_Integer) 1
};

#line 1539 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_init_solver_vars_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1
};

#line 1545 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_init_solver_vars_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1
};

#line 1551 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_init_solver_vars_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1557 "check_hlds.mode_info.c"
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

#line 1578 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1584 "check_hlds.mode_info.c"
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

#line 1599 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_side_0
};

#line 1605 "check_hlds.mode_info.c"
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

#line 1620 "check_hlds.mode_info.c"
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

#line 1635 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2
};

#line 1640 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0
};

#line 1645 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_2[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1
};

#line 1650 "check_hlds.mode_info.c"
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

#line 1669 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_context_0[3] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2
};

#line 1676 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_context_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1683 "check_hlds.mode_info.c"
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

#line 1704 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0
  }
};

#line 1712 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1720 "check_hlds.mode_info.c"
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

#line 1732 "check_hlds.mode_info.c"
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

#line 1744 "check_hlds.mode_info.c"
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

#line 1759 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0
};

#line 1764 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0
  }
};

#line 1773 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_info_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0
};

#line 1778 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_info_0[1] = {
  (MR_Integer) 0
};

#line 1783 "check_hlds.mode_info.c"
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

#line 1804 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1812 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1821 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_debug_flags_0
  }
};

#line 1829 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1837 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0
  }
};

#line 1845 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_warning_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0
  }
};

#line 1853 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_sub_info_0_0[23] = {
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
  (MR_PseudoTypeInfo) &check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_warning_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_need_to_requantify_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_promise_purity_scope_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_from_ground_term_scope_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_had_from_ground_term_scope_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_make_ground_terms_unique_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_dupl_for_switch_0
};

#line 1880 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_sub_info_0_0[23] = {
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
  (MR_String) "msi_warnings",
  (MR_String) "msi_need_to_requantify",
  (MR_String) "msi_in_promise_purity_scope",
  (MR_String) "msi_in_from_ground_term",
  (MR_String) "msi_had_from_ground_term",
  (MR_String) "msi_make_ground_terms_unique",
  (MR_String) "msi_in_dupl_for_switch"
};

#line 1907 "check_hlds.mode_info.c"
static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_mode_sub_info_0_0[23] = {
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 5,
    (MR_Integer) 1
  }
};

#line 2026 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0 = {
  (MR_String) "mode_sub_info",
  (MR_Integer) 23,
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

#line 2041 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0
};

#line 2046 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0
  }
};

#line 2055 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_sub_info_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0
};

#line 2060 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_sub_info_0[1] = {
  (MR_Integer) 0
};

#line 2065 "check_hlds.mode_info.c"
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

#line 2086 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_par_conj_mode_check_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_info__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2092 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_par_conj_mode_check_0_0[2] = {
  (MR_String) "par_conj_nonlocals",
  (MR_String) "par_conj_bound"
};

#line 2098 "check_hlds.mode_info.c"
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

#line 2113 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0
};

#line 2118 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_par_conj_mode_check_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0
  }
};

#line 2127 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_par_conj_mode_check_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0
};

#line 2132 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_par_conj_mode_check_0[1] = {
  (MR_Integer) 0
};

#line 2137 "check_hlds.mode_info.c"
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

#line 2158 "check_hlds.mode_info.c"
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

#line 2179 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0 = {
  (MR_String) "left",
  (MR_Integer) 0
};

#line 2185 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1 = {
  (MR_String) "right",
  (MR_Integer) 1
};

#line 2191 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_side_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1
};

#line 2197 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_side_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1
};

#line 2203 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_side_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2209 "check_hlds.mode_info.c"
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

#line 2230 "check_hlds.mode_info.c"
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

#line 2245 "check_hlds.mode_info.c"
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

#line 2260 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_var_lock_reason_0_2[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
};

#line 2265 "check_hlds.mode_info.c"
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

#line 2280 "check_hlds.mode_info.c"
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

#line 2295 "check_hlds.mode_info.c"
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

#line 2310 "check_hlds.mode_info.c"
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

#line 2325 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_0[5] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5
};

#line 2334 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2
};

#line 2339 "check_hlds.mode_info.c"
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

#line 2353 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_var_lock_reason_0[6] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3
};

#line 2363 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_var_lock_reason_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 4
};

#line 2373 "check_hlds.mode_info.c"
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

#line 2394 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____call_context_0_0_10001(
#line 2397 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2399 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2401 "check_hlds.mode_info.c"
{
#line 2403 "check_hlds.mode_info.c"
  {
#line 2405 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2408 "check_hlds.mode_info.c"
    {
#line 2410 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____call_context_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2413 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2415 "check_hlds.mode_info.c"
  }
#line 2417 "check_hlds.mode_info.c"
}

#line 2420 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____call_context_0_0_10001(
#line 2423 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2425 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2427 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2429 "check_hlds.mode_info.c"
{
#line 2431 "check_hlds.mode_info.c"
  {
#line 2433 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2436 "check_hlds.mode_info.c"
    {
#line 2438 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____call_context_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2441 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2443 "check_hlds.mode_info.c"
  }
#line 2445 "check_hlds.mode_info.c"
}

#line 2448 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____debug_flags_0_0_10001(
#line 2451 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2453 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2455 "check_hlds.mode_info.c"
{
#line 2457 "check_hlds.mode_info.c"
  {
#line 2459 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2462 "check_hlds.mode_info.c"
    {
#line 2464 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____debug_flags_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2467 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2469 "check_hlds.mode_info.c"
  }
#line 2471 "check_hlds.mode_info.c"
}

#line 2474 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0_10001(
#line 2477 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2479 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2481 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2483 "check_hlds.mode_info.c"
{
#line 2485 "check_hlds.mode_info.c"
  {
#line 2487 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2490 "check_hlds.mode_info.c"
    {
#line 2492 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____debug_flags_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2495 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2497 "check_hlds.mode_info.c"
  }
#line 2499 "check_hlds.mode_info.c"
}

#line 2502 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0_10001(
#line 2505 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2507 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2509 "check_hlds.mode_info.c"
{
#line 2511 "check_hlds.mode_info.c"
  {
#line 2513 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2516 "check_hlds.mode_info.c"
    {
#line 2518 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2521 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2523 "check_hlds.mode_info.c"
  }
#line 2525 "check_hlds.mode_info.c"
}

#line 2528 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0_10001(
#line 2531 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2533 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2535 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2537 "check_hlds.mode_info.c"
{
#line 2539 "check_hlds.mode_info.c"
  {
#line 2541 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2544 "check_hlds.mode_info.c"
    {
#line 2546 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2549 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2551 "check_hlds.mode_info.c"
  }
#line 2553 "check_hlds.mode_info.c"
}

#line 2556 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____how_to_check_goal_0_0_10001(
#line 2559 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2561 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2563 "check_hlds.mode_info.c"
{
#line 2565 "check_hlds.mode_info.c"
  {
#line 2567 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2570 "check_hlds.mode_info.c"
    {
#line 2572 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____how_to_check_goal_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2575 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2577 "check_hlds.mode_info.c"
  }
#line 2579 "check_hlds.mode_info.c"
}

#line 2582 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____how_to_check_goal_0_0_10001(
#line 2585 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2587 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2589 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2591 "check_hlds.mode_info.c"
{
#line 2593 "check_hlds.mode_info.c"
  {
#line 2595 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2598 "check_hlds.mode_info.c"
    {
#line 2600 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____how_to_check_goal_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2603 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2605 "check_hlds.mode_info.c"
  }
#line 2607 "check_hlds.mode_info.c"
}

#line 2610 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0_10001(
#line 2613 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2615 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2617 "check_hlds.mode_info.c"
{
#line 2619 "check_hlds.mode_info.c"
  {
#line 2621 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2624 "check_hlds.mode_info.c"
    {
#line 2626 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____in_dupl_for_switch_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2629 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2631 "check_hlds.mode_info.c"
  }
#line 2633 "check_hlds.mode_info.c"
}

#line 2636 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0_10001(
#line 2639 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2641 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2643 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2645 "check_hlds.mode_info.c"
{
#line 2647 "check_hlds.mode_info.c"
  {
#line 2649 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2652 "check_hlds.mode_info.c"
    {
#line 2654 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____in_dupl_for_switch_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2657 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2659 "check_hlds.mode_info.c"
  }
#line 2661 "check_hlds.mode_info.c"
}

#line 2664 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0_10001(
#line 2667 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2669 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2671 "check_hlds.mode_info.c"
{
#line 2673 "check_hlds.mode_info.c"
  {
#line 2675 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2678 "check_hlds.mode_info.c"
    {
#line 2680 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2683 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2685 "check_hlds.mode_info.c"
  }
#line 2687 "check_hlds.mode_info.c"
}

#line 2690 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0_10001(
#line 2693 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2695 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2697 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2699 "check_hlds.mode_info.c"
{
#line 2701 "check_hlds.mode_info.c"
  {
#line 2703 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2706 "check_hlds.mode_info.c"
    {
#line 2708 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2711 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2713 "check_hlds.mode_info.c"
  }
#line 2715 "check_hlds.mode_info.c"
}

#line 2718 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0_10001(
#line 2721 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2723 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2725 "check_hlds.mode_info.c"
{
#line 2727 "check_hlds.mode_info.c"
  {
#line 2729 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2732 "check_hlds.mode_info.c"
    {
#line 2734 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____in_promise_purity_scope_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2737 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2739 "check_hlds.mode_info.c"
  }
#line 2741 "check_hlds.mode_info.c"
}

#line 2744 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0_10001(
#line 2747 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2749 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2751 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2753 "check_hlds.mode_info.c"
{
#line 2755 "check_hlds.mode_info.c"
  {
#line 2757 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2760 "check_hlds.mode_info.c"
    {
#line 2762 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____in_promise_purity_scope_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2765 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2767 "check_hlds.mode_info.c"
  }
#line 2769 "check_hlds.mode_info.c"
}

#line 2772 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____locked_vars_0_0_10001(
#line 2775 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2777 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2779 "check_hlds.mode_info.c"
{
#line 2781 "check_hlds.mode_info.c"
  {
#line 2783 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2786 "check_hlds.mode_info.c"
    {
#line 2788 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____locked_vars_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2791 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2793 "check_hlds.mode_info.c"
  }
#line 2795 "check_hlds.mode_info.c"
}

#line 2798 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____locked_vars_0_0_10001(
#line 2801 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2803 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2805 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2807 "check_hlds.mode_info.c"
{
#line 2809 "check_hlds.mode_info.c"
  {
#line 2811 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2814 "check_hlds.mode_info.c"
    {
#line 2816 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____locked_vars_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2819 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2821 "check_hlds.mode_info.c"
  }
#line 2823 "check_hlds.mode_info.c"
}

#line 2826 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0_10001(
#line 2829 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2831 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2833 "check_hlds.mode_info.c"
{
#line 2835 "check_hlds.mode_info.c"
  {
#line 2837 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2840 "check_hlds.mode_info.c"
    {
#line 2842 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____make_ground_terms_unique_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2845 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2847 "check_hlds.mode_info.c"
  }
#line 2849 "check_hlds.mode_info.c"
}

#line 2852 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0_10001(
#line 2855 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2857 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2859 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2861 "check_hlds.mode_info.c"
{
#line 2863 "check_hlds.mode_info.c"
  {
#line 2865 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2868 "check_hlds.mode_info.c"
    {
#line 2870 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____make_ground_terms_unique_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2873 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2875 "check_hlds.mode_info.c"
  }
#line 2877 "check_hlds.mode_info.c"
}

#line 2880 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_change_called_proc_0_0_10001(
#line 2883 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2885 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2887 "check_hlds.mode_info.c"
{
#line 2889 "check_hlds.mode_info.c"
  {
#line 2891 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2894 "check_hlds.mode_info.c"
    {
#line 2896 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____may_change_called_proc_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2899 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2901 "check_hlds.mode_info.c"
  }
#line 2903 "check_hlds.mode_info.c"
}

#line 2906 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_change_called_proc_0_0_10001(
#line 2909 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2911 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2913 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2915 "check_hlds.mode_info.c"
{
#line 2917 "check_hlds.mode_info.c"
  {
#line 2919 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2922 "check_hlds.mode_info.c"
    {
#line 2924 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____may_change_called_proc_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2927 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2929 "check_hlds.mode_info.c"
  }
#line 2931 "check_hlds.mode_info.c"
}

#line 2934 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_init_solver_vars_0_0_10001(
#line 2937 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2939 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2941 "check_hlds.mode_info.c"
{
#line 2943 "check_hlds.mode_info.c"
  {
#line 2945 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2948 "check_hlds.mode_info.c"
    {
#line 2950 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____may_init_solver_vars_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2953 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2955 "check_hlds.mode_info.c"
  }
#line 2957 "check_hlds.mode_info.c"
}

#line 2960 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_init_solver_vars_0_0_10001(
#line 2963 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2965 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2967 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2969 "check_hlds.mode_info.c"
{
#line 2971 "check_hlds.mode_info.c"
  {
#line 2973 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2976 "check_hlds.mode_info.c"
    {
#line 2978 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____may_init_solver_vars_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2981 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2983 "check_hlds.mode_info.c"
  }
#line 2985 "check_hlds.mode_info.c"
}

#line 2988 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_context_0_0_10001(
#line 2991 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2993 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2995 "check_hlds.mode_info.c"
{
#line 2997 "check_hlds.mode_info.c"
  {
#line 2999 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3002 "check_hlds.mode_info.c"
    {
#line 3004 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_context_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3007 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3009 "check_hlds.mode_info.c"
  }
#line 3011 "check_hlds.mode_info.c"
}

#line 3014 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_context_0_0_10001(
#line 3017 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3019 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3021 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3023 "check_hlds.mode_info.c"
{
#line 3025 "check_hlds.mode_info.c"
  {
#line 3027 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3030 "check_hlds.mode_info.c"
    {
#line 3032 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____mode_context_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3035 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3037 "check_hlds.mode_info.c"
  }
#line 3039 "check_hlds.mode_info.c"
}

#line 3042 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0_10001(
#line 3045 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3047 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3049 "check_hlds.mode_info.c"
{
#line 3051 "check_hlds.mode_info.c"
  {
#line 3053 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3056 "check_hlds.mode_info.c"
    {
#line 3058 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_info_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3061 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3063 "check_hlds.mode_info.c"
  }
#line 3065 "check_hlds.mode_info.c"
}

#line 3068 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0_10001(
#line 3071 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3073 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3075 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3077 "check_hlds.mode_info.c"
{
#line 3079 "check_hlds.mode_info.c"
  {
#line 3081 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3084 "check_hlds.mode_info.c"
    {
#line 3086 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____mode_info_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3089 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3091 "check_hlds.mode_info.c"
  }
#line 3093 "check_hlds.mode_info.c"
}

#line 3096 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0_10001(
#line 3099 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3101 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3103 "check_hlds.mode_info.c"
{
#line 3105 "check_hlds.mode_info.c"
  {
#line 3107 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3110 "check_hlds.mode_info.c"
    {
#line 3112 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_sub_info_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3115 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3117 "check_hlds.mode_info.c"
  }
#line 3119 "check_hlds.mode_info.c"
}

#line 3122 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0_10001(
#line 3125 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3127 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3129 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3131 "check_hlds.mode_info.c"
{
#line 3133 "check_hlds.mode_info.c"
  {
#line 3135 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3138 "check_hlds.mode_info.c"
    {
#line 3140 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____mode_sub_info_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3143 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3145 "check_hlds.mode_info.c"
  }
#line 3147 "check_hlds.mode_info.c"
}

#line 3150 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0_10001(
#line 3153 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3155 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3157 "check_hlds.mode_info.c"
{
#line 3159 "check_hlds.mode_info.c"
  {
#line 3161 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3164 "check_hlds.mode_info.c"
    {
#line 3166 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____par_conj_mode_check_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3169 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3171 "check_hlds.mode_info.c"
  }
#line 3173 "check_hlds.mode_info.c"
}

#line 3176 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0_10001(
#line 3179 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3181 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3183 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3185 "check_hlds.mode_info.c"
{
#line 3187 "check_hlds.mode_info.c"
  {
#line 3189 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3192 "check_hlds.mode_info.c"
    {
#line 3194 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____par_conj_mode_check_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3197 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3199 "check_hlds.mode_info.c"
  }
#line 3201 "check_hlds.mode_info.c"
}

#line 3204 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0_10001(
#line 3207 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3209 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3211 "check_hlds.mode_info.c"
{
#line 3213 "check_hlds.mode_info.c"
  {
#line 3215 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3218 "check_hlds.mode_info.c"
    {
#line 3220 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3223 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3225 "check_hlds.mode_info.c"
  }
#line 3227 "check_hlds.mode_info.c"
}

#line 3230 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0_10001(
#line 3233 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3235 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3237 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3239 "check_hlds.mode_info.c"
{
#line 3241 "check_hlds.mode_info.c"
  {
#line 3243 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3246 "check_hlds.mode_info.c"
    {
#line 3248 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3251 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3253 "check_hlds.mode_info.c"
  }
#line 3255 "check_hlds.mode_info.c"
}

#line 3258 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____side_0_0_10001(
#line 3261 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3263 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3265 "check_hlds.mode_info.c"
{
#line 3267 "check_hlds.mode_info.c"
  {
#line 3269 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3272 "check_hlds.mode_info.c"
    {
#line 3274 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____side_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3277 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3279 "check_hlds.mode_info.c"
  }
#line 3281 "check_hlds.mode_info.c"
}

#line 3284 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____side_0_0_10001(
#line 3287 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3289 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3291 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3293 "check_hlds.mode_info.c"
{
#line 3295 "check_hlds.mode_info.c"
  {
#line 3297 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3300 "check_hlds.mode_info.c"
    {
#line 3302 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____side_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3305 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3307 "check_hlds.mode_info.c"
  }
#line 3309 "check_hlds.mode_info.c"
}

#line 3312 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____var_lock_reason_0_0_10001(
#line 3315 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3317 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3319 "check_hlds.mode_info.c"
{
#line 3321 "check_hlds.mode_info.c"
  {
#line 3323 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3326 "check_hlds.mode_info.c"
    {
#line 3328 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____var_lock_reason_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3331 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3333 "check_hlds.mode_info.c"
  }
#line 3335 "check_hlds.mode_info.c"
}

#line 3338 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____var_lock_reason_0_0_10001(
#line 3341 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3343 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3345 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3347 "check_hlds.mode_info.c"
{
#line 3349 "check_hlds.mode_info.c"
  {
#line 3351 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3354 "check_hlds.mode_info.c"
    {
#line 3356 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____var_lock_reason_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3359 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3361 "check_hlds.mode_info.c"
  }
#line 3363 "check_hlds.mode_info.c"
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
#line 3390 "check_hlds.mode_info.c"
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
#line 3426 "check_hlds.mode_info.c"
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
#line 3462 "check_hlds.mode_info.c"
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
#line 3498 "check_hlds.mode_info.c"
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
#line 3534 "check_hlds.mode_info.c"
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
#line 3570 "check_hlds.mode_info.c"
                          *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
              else
#line 67 "mode_info.m"
                {
#line 67 "mode_info.m"
                  MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));

#line 67 "mode_info.m"
                  if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3581 "check_hlds.mode_info.c"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                  else
#line 67 "mode_info.m"
                    if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3587 "check_hlds.mode_info.c"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                    else
#line 67 "mode_info.m"
                      if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3593 "check_hlds.mode_info.c"
                        *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                      else
#line 67 "mode_info.m"
                        if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3599 "check_hlds.mode_info.c"
                          *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                        else
#line 67 "mode_info.m"
                          if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 3605 "check_hlds.mode_info.c"
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
#line 3750 "check_hlds.mode_info.c"
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
#line 3804 "check_hlds.mode_info.c"
  {
#line 3806 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 3809 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3811 "check_hlds.mode_info.c"
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
#line 3902 "check_hlds.mode_info.c"
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
#line 3924 "check_hlds.mode_info.c"
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

#line 3991 "check_hlds.mode_info.c"
        {
#line 3993 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[1], ((MR_Box) (check_hlds__mode_info__V_3_3)), ((MR_Box) (check_hlds__mode_info__V_5_5)));
        }
#line 147 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 147 "mode_info.m"
          {
#line 4000 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeInfo_10_10 = (MR_Word) &check_hlds__mode_info_scalar_common_1[1];
#line 4002 "check_hlds.mode_info.c"
            {
#line 4004 "check_hlds.mode_info.c"
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

#line 350 "mode_info.m"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0(
#line 350 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 350 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 350 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 350 "mode_info.m"
{
#line 350 "mode_info.m"
  {
#line 350 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 350 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_72 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 350 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_73 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 350 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_72 == check_hlds__mode_info__CastY_73);
#line 350 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 4042 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 350 "mode_info.m"
    else
#line 350 "mode_info.m"
      {
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 350 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 8)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 10)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 12)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 13)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));
#line 350 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 1)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 2)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 3)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 4)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 5)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 6)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 7)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 8)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 10)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 12)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 13)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50;

#line 350 "mode_info.m"
        {
#line 350 "mode_info.m"
          hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__mode_info__V_50_50, check_hlds__mode_info__V_4_4, check_hlds__mode_info__V_27_27);
        }
#line 4148 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_50_50 == (MR_Integer) 0);
#line 350 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_50_50;
#line 350 "mode_info.m"
        else
#line 350 "mode_info.m"
          {
#line 350 "mode_info.m"
            MR_Word check_hlds__mode_info__V_51_51;

#line 350 "mode_info.m"
            {
#line 350 "mode_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_51_51, check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_28_28);
            }
#line 4168 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_51_51 == (MR_Integer) 0);
#line 350 "mode_info.m"
            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_51_51;
#line 350 "mode_info.m"
            else
#line 350 "mode_info.m"
              {
#line 350 "mode_info.m"
                MR_Word check_hlds__mode_info__V_52_52;

#line 350 "mode_info.m"
                {
#line 350 "mode_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[5], &check_hlds__mode_info__V_52_52, ((MR_Box) (check_hlds__mode_info__V_6_6)), ((MR_Box) (check_hlds__mode_info__V_29_29)));
                }
#line 4188 "check_hlds.mode_info.c"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_52_52 == (MR_Integer) 0);
#line 350 "mode_info.m"
                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_52_52;
#line 350 "mode_info.m"
                else
#line 350 "mode_info.m"
                  {
#line 350 "mode_info.m"
                    MR_Word check_hlds__mode_info__V_53_53;

#line 350 "mode_info.m"
                    {
#line 350 "mode_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &check_hlds__mode_info__V_53_53, ((MR_Box) (check_hlds__mode_info__V_7_7)), ((MR_Box) (check_hlds__mode_info__V_30_30)));
                    }
#line 4208 "check_hlds.mode_info.c"
                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_53_53 == (MR_Integer) 0);
#line 350 "mode_info.m"
                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_53_53;
#line 350 "mode_info.m"
                    else
#line 350 "mode_info.m"
                      {
#line 350 "mode_info.m"
                        MR_Word check_hlds__mode_info__V_54_54;

#line 350 "mode_info.m"
                        {
#line 350 "mode_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[6], &check_hlds__mode_info__V_54_54, ((MR_Box) (check_hlds__mode_info__V_8_8)), ((MR_Box) (check_hlds__mode_info__V_31_31)));
                        }
#line 4228 "check_hlds.mode_info.c"
                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_54_54 == (MR_Integer) 0);
#line 350 "mode_info.m"
                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_54_54;
#line 350 "mode_info.m"
                        else
#line 350 "mode_info.m"
                          {
#line 350 "mode_info.m"
                            MR_Word check_hlds__mode_info__V_55_55;

#line 350 "mode_info.m"
                            {
#line 350 "mode_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[2], &check_hlds__mode_info__V_55_55, ((MR_Box) (check_hlds__mode_info__V_9_9)), ((MR_Box) (check_hlds__mode_info__V_32_32)));
                            }
#line 4248 "check_hlds.mode_info.c"
                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_55_55 == (MR_Integer) 0);
#line 350 "mode_info.m"
                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_55_55;
#line 350 "mode_info.m"
                            else
#line 350 "mode_info.m"
                              {
#line 350 "mode_info.m"
                                MR_Word check_hlds__mode_info__V_56_56;

#line 350 "mode_info.m"
                                {
#line 350 "mode_info.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[4], &check_hlds__mode_info__V_56_56, ((MR_Box) (check_hlds__mode_info__V_10_10)), ((MR_Box) (check_hlds__mode_info__V_33_33)));
                                }
#line 4268 "check_hlds.mode_info.c"
                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_56_56 == (MR_Integer) 0);
#line 350 "mode_info.m"
                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_56_56;
#line 350 "mode_info.m"
                                else
#line 350 "mode_info.m"
                                  {
#line 350 "mode_info.m"
                                    MR_Word check_hlds__mode_info__V_57_57;

#line 350 "mode_info.m"
                                    {
#line 350 "mode_info.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[7], &check_hlds__mode_info__V_57_57, ((MR_Box) (check_hlds__mode_info__V_11_11)), ((MR_Box) (check_hlds__mode_info__V_34_34)));
                                    }
#line 4288 "check_hlds.mode_info.c"
                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_57_57 == (MR_Integer) 0);
#line 350 "mode_info.m"
                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                                    if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_57_57;
#line 350 "mode_info.m"
                                    else
#line 350 "mode_info.m"
                                      {
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_58_58;

#line 350 "mode_info.m"
                                        {
#line 350 "mode_info.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[8], &check_hlds__mode_info__V_58_58, ((MR_Box) (check_hlds__mode_info__V_12_12)), ((MR_Box) (check_hlds__mode_info__V_35_35)));
                                        }
#line 4308 "check_hlds.mode_info.c"
                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_58_58 == (MR_Integer) 0);
#line 350 "mode_info.m"
                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                                        if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_58_58;
#line 350 "mode_info.m"
                                        else
#line 350 "mode_info.m"
                                          {
#line 350 "mode_info.m"
                                            MR_Word check_hlds__mode_info__V_59_59;
#line 350 "mode_info.m"
                                            MR_Integer check_hlds__mode_info__V_97_97 = (MR_Integer) check_hlds__mode_info__V_13_13;
#line 350 "mode_info.m"
                                            MR_Integer check_hlds__mode_info__V_98_98 = (MR_Integer) check_hlds__mode_info__V_36_36;

#line 350 "mode_info.m"
                                            {
#line 350 "mode_info.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_59_59, check_hlds__mode_info__V_97_97, check_hlds__mode_info__V_98_98);
                                            }
#line 4332 "check_hlds.mode_info.c"
                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_59_59 == (MR_Integer) 0);
#line 350 "mode_info.m"
                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                                            if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_59_59;
#line 350 "mode_info.m"
                                            else
#line 350 "mode_info.m"
                                              {
#line 350 "mode_info.m"
                                                MR_Word check_hlds__mode_info__V_60_60;
#line 350 "mode_info.m"
                                                MR_Integer check_hlds__mode_info__V_99_99 = (MR_Integer) check_hlds__mode_info__V_14_14;
#line 350 "mode_info.m"
                                                MR_Integer check_hlds__mode_info__V_100_100 = (MR_Integer) check_hlds__mode_info__V_37_37;

#line 350 "mode_info.m"
                                                {
#line 350 "mode_info.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_60_60, check_hlds__mode_info__V_99_99, check_hlds__mode_info__V_100_100);
                                                }
#line 4356 "check_hlds.mode_info.c"
                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_60_60 == (MR_Integer) 0);
#line 350 "mode_info.m"
                                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                                                if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_60_60;
#line 350 "mode_info.m"
                                                else
#line 350 "mode_info.m"
                                                  {
#line 350 "mode_info.m"
                                                    MR_Word check_hlds__mode_info__V_61_61;
#line 350 "mode_info.m"
                                                    MR_Integer check_hlds__mode_info__V_101_101 = (MR_Integer) check_hlds__mode_info__V_15_15;
#line 350 "mode_info.m"
                                                    MR_Integer check_hlds__mode_info__V_102_102 = (MR_Integer) check_hlds__mode_info__V_38_38;

#line 350 "mode_info.m"
                                                    {
#line 350 "mode_info.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_61_61, check_hlds__mode_info__V_101_101, check_hlds__mode_info__V_102_102);
                                                    }
#line 4380 "check_hlds.mode_info.c"
                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_61_61 == (MR_Integer) 0);
#line 350 "mode_info.m"
                                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                                                    if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_61_61;
#line 350 "mode_info.m"
                                                    else
#line 350 "mode_info.m"
                                                      {
#line 350 "mode_info.m"
                                                        MR_Word check_hlds__mode_info__V_62_62;

#line 350 "mode_info.m"
                                                        {
#line 350 "mode_info.m"
                                                          hlds__instmap____Compare____instmap_0_0(&check_hlds__mode_info__V_62_62, check_hlds__mode_info__V_16_16, check_hlds__mode_info__V_39_39);
                                                        }
#line 4400 "check_hlds.mode_info.c"
                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_62_62 == (MR_Integer) 0);
#line 350 "mode_info.m"
                                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                                                        if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_62_62;
#line 350 "mode_info.m"
                                                        else
#line 350 "mode_info.m"
                                                          {
#line 350 "mode_info.m"
                                                            MR_Word check_hlds__mode_info__V_63_63;
#line 350 "mode_info.m"
                                                            MR_Integer check_hlds__mode_info__V_103_103 = (MR_Integer) check_hlds__mode_info__V_17_17;
#line 350 "mode_info.m"
                                                            MR_Integer check_hlds__mode_info__V_104_104 = (MR_Integer) check_hlds__mode_info__V_40_40;

#line 350 "mode_info.m"
                                                            {
#line 350 "mode_info.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_63_63, check_hlds__mode_info__V_103_103, check_hlds__mode_info__V_104_104);
                                                            }
#line 4424 "check_hlds.mode_info.c"
                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_63_63 == (MR_Integer) 0);
#line 350 "mode_info.m"
                                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                                                            if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_63_63;
#line 350 "mode_info.m"
                                                            else
#line 350 "mode_info.m"
                                                              {
#line 350 "mode_info.m"
                                                                MR_Word check_hlds__mode_info__V_64_64;
#line 350 "mode_info.m"
                                                                MR_Integer check_hlds__mode_info__V_105_105 = (MR_Integer) check_hlds__mode_info__V_18_18;
#line 350 "mode_info.m"
                                                                MR_Integer check_hlds__mode_info__V_106_106 = (MR_Integer) check_hlds__mode_info__V_41_41;

#line 350 "mode_info.m"
                                                                {
#line 350 "mode_info.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_64_64, check_hlds__mode_info__V_105_105, check_hlds__mode_info__V_106_106);
                                                                }
#line 4448 "check_hlds.mode_info.c"
                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_64_64 == (MR_Integer) 0);
#line 350 "mode_info.m"
                                                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                                                                if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_64_64;
#line 350 "mode_info.m"
                                                                else
#line 350 "mode_info.m"
                                                                  {
#line 350 "mode_info.m"
                                                                    MR_Word check_hlds__mode_info__V_65_65;

#line 350 "mode_info.m"
                                                                    {
#line 350 "mode_info.m"
                                                                      hlds__instmap____Compare____instmap_0_0(&check_hlds__mode_info__V_65_65, check_hlds__mode_info__V_19_19, check_hlds__mode_info__V_42_42);
                                                                    }
#line 4468 "check_hlds.mode_info.c"
                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_65_65 == (MR_Integer) 0);
#line 350 "mode_info.m"
                                                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                                                                    if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_65_65;
#line 350 "mode_info.m"
                                                                    else
#line 350 "mode_info.m"
                                                                      {
#line 350 "mode_info.m"
                                                                        MR_Word check_hlds__mode_info__V_66_66;

#line 350 "mode_info.m"
                                                                        {
#line 350 "mode_info.m"
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[9], &check_hlds__mode_info__V_66_66, ((MR_Box) (check_hlds__mode_info__V_20_20)), ((MR_Box) (check_hlds__mode_info__V_43_43)));
                                                                        }
#line 4488 "check_hlds.mode_info.c"
                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_66_66 == (MR_Integer) 0);
#line 350 "mode_info.m"
                                                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                                                                        if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_66_66;
#line 350 "mode_info.m"
                                                                        else
#line 350 "mode_info.m"
                                                                          {
#line 350 "mode_info.m"
                                                                            MR_Word check_hlds__mode_info__V_67_67;
#line 350 "mode_info.m"
                                                                            MR_Integer check_hlds__mode_info__V_107_107 = (MR_Integer) check_hlds__mode_info__V_21_21;
#line 350 "mode_info.m"
                                                                            MR_Integer check_hlds__mode_info__V_108_108 = (MR_Integer) check_hlds__mode_info__V_44_44;

#line 350 "mode_info.m"
                                                                            {
#line 350 "mode_info.m"
                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_67_67, check_hlds__mode_info__V_107_107, check_hlds__mode_info__V_108_108);
                                                                            }
#line 4512 "check_hlds.mode_info.c"
                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_67_67 == (MR_Integer) 0);
#line 350 "mode_info.m"
                                                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                                                                            if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_67_67;
#line 350 "mode_info.m"
                                                                            else
#line 350 "mode_info.m"
                                                                              {
#line 350 "mode_info.m"
                                                                                MR_Word check_hlds__mode_info__V_68_68;
#line 350 "mode_info.m"
                                                                                MR_Integer check_hlds__mode_info__V_109_109 = (MR_Integer) check_hlds__mode_info__V_22_22;
#line 350 "mode_info.m"
                                                                                MR_Integer check_hlds__mode_info__V_110_110 = (MR_Integer) check_hlds__mode_info__V_45_45;

#line 350 "mode_info.m"
                                                                                {
#line 350 "mode_info.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_68_68, check_hlds__mode_info__V_109_109, check_hlds__mode_info__V_110_110);
                                                                                }
#line 4536 "check_hlds.mode_info.c"
                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_68_68 == (MR_Integer) 0);
#line 350 "mode_info.m"
                                                                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                                                                                if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_68_68;
#line 350 "mode_info.m"
                                                                                else
#line 350 "mode_info.m"
                                                                                  {
#line 350 "mode_info.m"
                                                                                    MR_Word check_hlds__mode_info__V_69_69;
#line 350 "mode_info.m"
                                                                                    MR_Integer check_hlds__mode_info__V_111_111 = (MR_Integer) check_hlds__mode_info__V_23_23;
#line 350 "mode_info.m"
                                                                                    MR_Integer check_hlds__mode_info__V_112_112 = (MR_Integer) check_hlds__mode_info__V_46_46;

#line 350 "mode_info.m"
                                                                                    {
#line 350 "mode_info.m"
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_69_69, check_hlds__mode_info__V_111_111, check_hlds__mode_info__V_112_112);
                                                                                    }
#line 4560 "check_hlds.mode_info.c"
                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_69_69 == (MR_Integer) 0);
#line 350 "mode_info.m"
                                                                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                                                                                    if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_69_69;
#line 350 "mode_info.m"
                                                                                    else
#line 350 "mode_info.m"
                                                                                      {
#line 350 "mode_info.m"
                                                                                        MR_Word check_hlds__mode_info__V_70_70;
#line 350 "mode_info.m"
                                                                                        MR_Integer check_hlds__mode_info__V_113_113 = (MR_Integer) check_hlds__mode_info__V_24_24;
#line 350 "mode_info.m"
                                                                                        MR_Integer check_hlds__mode_info__V_114_114 = (MR_Integer) check_hlds__mode_info__V_47_47;

#line 350 "mode_info.m"
                                                                                        {
#line 350 "mode_info.m"
                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_70_70, check_hlds__mode_info__V_113_113, check_hlds__mode_info__V_114_114);
                                                                                        }
#line 4584 "check_hlds.mode_info.c"
                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_70_70 == (MR_Integer) 0);
#line 350 "mode_info.m"
                                                                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                                                                                        if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_70_70;
#line 350 "mode_info.m"
                                                                                        else
#line 350 "mode_info.m"
                                                                                          {
#line 350 "mode_info.m"
                                                                                            MR_Word check_hlds__mode_info__V_71_71;
#line 350 "mode_info.m"
                                                                                            MR_Integer check_hlds__mode_info__V_115_115 = (MR_Integer) check_hlds__mode_info__V_25_25;
#line 350 "mode_info.m"
                                                                                            MR_Integer check_hlds__mode_info__V_116_116 = (MR_Integer) check_hlds__mode_info__V_48_48;

#line 350 "mode_info.m"
                                                                                            {
#line 350 "mode_info.m"
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_71_71, check_hlds__mode_info__V_115_115, check_hlds__mode_info__V_116_116);
                                                                                            }
#line 4608 "check_hlds.mode_info.c"
                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_71_71 == (MR_Integer) 0);
#line 350 "mode_info.m"
                                                                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 350 "mode_info.m"
                                                                                            if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_71_71;
#line 350 "mode_info.m"
                                                                                            else
#line 350 "mode_info.m"
                                                                                              {
#line 350 "mode_info.m"
                                                                                                MR_Integer check_hlds__mode_info__V_117_117 = (MR_Integer) check_hlds__mode_info__V_26_26;
#line 350 "mode_info.m"
                                                                                                MR_Integer check_hlds__mode_info__V_118_118 = (MR_Integer) check_hlds__mode_info__V_49_49;

#line 350 "mode_info.m"
                                                                                                {
#line 350 "mode_info.m"
                                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_117_117, check_hlds__mode_info__V_118_118);
#line 350 "mode_info.m"
                                                                                                  return;
                                                                                                }
#line 350 "mode_info.m"
                                                                                              }
#line 350 "mode_info.m"
                                                                                          }
#line 350 "mode_info.m"
                                                                                      }
#line 350 "mode_info.m"
                                                                                  }
#line 350 "mode_info.m"
                                                                              }
#line 350 "mode_info.m"
                                                                          }
#line 350 "mode_info.m"
                                                                      }
#line 350 "mode_info.m"
                                                                  }
#line 350 "mode_info.m"
                                                              }
#line 350 "mode_info.m"
                                                          }
#line 350 "mode_info.m"
                                                      }
#line 350 "mode_info.m"
                                                  }
#line 350 "mode_info.m"
                                              }
#line 350 "mode_info.m"
                                          }
#line 350 "mode_info.m"
                                      }
#line 350 "mode_info.m"
                                  }
#line 350 "mode_info.m"
                              }
#line 350 "mode_info.m"
                          }
#line 350 "mode_info.m"
                      }
#line 350 "mode_info.m"
                  }
#line 350 "mode_info.m"
              }
#line 350 "mode_info.m"
          }
#line 350 "mode_info.m"
      }
#line 350 "mode_info.m"
  }
#line 350 "mode_info.m"
}

#line 350 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0(
#line 350 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 350 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 350 "mode_info.m"
{
#line 350 "mode_info.m"
  {
#line 350 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 350 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_49 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 350 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_50 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 350 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_49 == check_hlds__mode_info__CastY_50);
#line 350 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 350 "mode_info.m"
    else
#line 350 "mode_info.m"
      {
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_53_53;
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeCtorInfo_54_54;
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_55_55;
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_56_56;
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_57_57;
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_58_58;
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_59_59;
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_62_62;
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 350 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 2)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 3)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 4)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 5)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 6)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 7)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 8)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 10)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 12)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 13)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 350 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 8)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 10)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 12)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 13)));
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 350 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 4820 "check_hlds.mode_info.c"
        {
#line 4822 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_26_26);
        }
#line 350 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
          {
#line 4829 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_4_4 == check_hlds__mode_info__V_27_27);
#line 350 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
              {
#line 4835 "check_hlds.mode_info.c"
                check_hlds__mode_info__TypeInfo_53_53 = (MR_Word) &check_hlds__mode_info_scalar_common_1[5];
#line 4837 "check_hlds.mode_info.c"
                {
#line 4839 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_53_53, ((MR_Box) (check_hlds__mode_info__V_5_5)), ((MR_Box) (check_hlds__mode_info__V_28_28)));
                }
#line 350 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                  {
#line 4846 "check_hlds.mode_info.c"
                    check_hlds__mode_info__TypeCtorInfo_54_54 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 4848 "check_hlds.mode_info.c"
                    {
#line 4850 "check_hlds.mode_info.c"
                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeCtorInfo_54_54, ((MR_Box) (check_hlds__mode_info__V_6_6)), ((MR_Box) (check_hlds__mode_info__V_29_29)));
                    }
#line 350 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                      {
#line 4857 "check_hlds.mode_info.c"
                        check_hlds__mode_info__TypeInfo_55_55 = (MR_Word) &check_hlds__mode_info_scalar_common_1[6];
#line 4859 "check_hlds.mode_info.c"
                        {
#line 4861 "check_hlds.mode_info.c"
                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_55_55, ((MR_Box) (check_hlds__mode_info__V_7_7)), ((MR_Box) (check_hlds__mode_info__V_30_30)));
                        }
#line 350 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                          {
#line 4868 "check_hlds.mode_info.c"
                            check_hlds__mode_info__TypeInfo_56_56 = (MR_Word) &check_hlds__mode_info_scalar_common_1[2];
#line 4870 "check_hlds.mode_info.c"
                            {
#line 4872 "check_hlds.mode_info.c"
                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_56_56, ((MR_Box) (check_hlds__mode_info__V_8_8)), ((MR_Box) (check_hlds__mode_info__V_31_31)));
                            }
#line 350 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                              {
#line 4879 "check_hlds.mode_info.c"
                                check_hlds__mode_info__TypeInfo_57_57 = (MR_Word) &check_hlds__mode_info_scalar_common_1[4];
#line 4881 "check_hlds.mode_info.c"
                                {
#line 4883 "check_hlds.mode_info.c"
                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_57_57, ((MR_Box) (check_hlds__mode_info__V_9_9)), ((MR_Box) (check_hlds__mode_info__V_32_32)));
                                }
#line 350 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                  {
#line 4890 "check_hlds.mode_info.c"
                                    check_hlds__mode_info__TypeInfo_58_58 = (MR_Word) &check_hlds__mode_info_scalar_common_1[7];
#line 4892 "check_hlds.mode_info.c"
                                    {
#line 4894 "check_hlds.mode_info.c"
                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_58_58, ((MR_Box) (check_hlds__mode_info__V_10_10)), ((MR_Box) (check_hlds__mode_info__V_33_33)));
                                    }
#line 350 "mode_info.m"
                                    if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                      {
#line 4901 "check_hlds.mode_info.c"
                                        check_hlds__mode_info__TypeInfo_59_59 = (MR_Word) &check_hlds__mode_info_scalar_common_1[8];
#line 4903 "check_hlds.mode_info.c"
                                        {
#line 4905 "check_hlds.mode_info.c"
                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_59_59, ((MR_Box) (check_hlds__mode_info__V_11_11)), ((MR_Box) (check_hlds__mode_info__V_34_34)));
                                        }
#line 350 "mode_info.m"
                                        if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                          {
#line 4912 "check_hlds.mode_info.c"
                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_12_12 == check_hlds__mode_info__V_35_35);
#line 350 "mode_info.m"
                                            if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                              {
#line 4918 "check_hlds.mode_info.c"
                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_13_13 == check_hlds__mode_info__V_36_36);
#line 350 "mode_info.m"
                                                if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                  {
#line 4924 "check_hlds.mode_info.c"
                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_14_14 == check_hlds__mode_info__V_37_37);
#line 350 "mode_info.m"
                                                    if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                      {
#line 4930 "check_hlds.mode_info.c"
                                                        {
#line 4932 "check_hlds.mode_info.c"
                                                          check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_15_15, check_hlds__mode_info__V_38_38);
                                                        }
#line 350 "mode_info.m"
                                                        if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                          {
#line 4939 "check_hlds.mode_info.c"
                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_16_16 == check_hlds__mode_info__V_39_39);
#line 350 "mode_info.m"
                                                            if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                              {
#line 4945 "check_hlds.mode_info.c"
                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_17_17 == check_hlds__mode_info__V_40_40);
#line 350 "mode_info.m"
                                                                if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                  {
#line 4951 "check_hlds.mode_info.c"
                                                                    {
#line 4953 "check_hlds.mode_info.c"
                                                                      check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_18_18, check_hlds__mode_info__V_41_41);
                                                                    }
#line 350 "mode_info.m"
                                                                    if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                      {
#line 4960 "check_hlds.mode_info.c"
                                                                        check_hlds__mode_info__TypeInfo_62_62 = (MR_Word) &check_hlds__mode_info_scalar_common_1[9];
#line 4962 "check_hlds.mode_info.c"
                                                                        {
#line 4964 "check_hlds.mode_info.c"
                                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_62_62, ((MR_Box) (check_hlds__mode_info__V_19_19)), ((MR_Box) (check_hlds__mode_info__V_42_42)));
                                                                        }
#line 350 "mode_info.m"
                                                                        if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                          {
#line 4971 "check_hlds.mode_info.c"
                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_20_20 == check_hlds__mode_info__V_43_43);
#line 350 "mode_info.m"
                                                                            if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                              {
#line 4977 "check_hlds.mode_info.c"
                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_21_21 == check_hlds__mode_info__V_44_44);
#line 350 "mode_info.m"
                                                                                if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                                  {
#line 4983 "check_hlds.mode_info.c"
                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_22_22 == check_hlds__mode_info__V_45_45);
#line 350 "mode_info.m"
                                                                                    if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                                      {
#line 4989 "check_hlds.mode_info.c"
                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_23_23 == check_hlds__mode_info__V_46_46);
#line 350 "mode_info.m"
                                                                                        if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                                          {
#line 4995 "check_hlds.mode_info.c"
                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_24_24 == check_hlds__mode_info__V_47_47);
#line 350 "mode_info.m"
                                                                                            if (check_hlds__mode_info__succeeded)
#line 4999 "check_hlds.mode_info.c"
                                                                                              check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_25_25 == check_hlds__mode_info__V_48_48);
#line 350 "mode_info.m"
                                                                                          }
#line 350 "mode_info.m"
                                                                                      }
#line 350 "mode_info.m"
                                                                                  }
#line 350 "mode_info.m"
                                                                              }
#line 350 "mode_info.m"
                                                                          }
#line 350 "mode_info.m"
                                                                      }
#line 350 "mode_info.m"
                                                                  }
#line 350 "mode_info.m"
                                                              }
#line 350 "mode_info.m"
                                                          }
#line 350 "mode_info.m"
                                                      }
#line 350 "mode_info.m"
                                                  }
#line 350 "mode_info.m"
                                              }
#line 350 "mode_info.m"
                                          }
#line 350 "mode_info.m"
                                      }
#line 350 "mode_info.m"
                                  }
#line 350 "mode_info.m"
                              }
#line 350 "mode_info.m"
                          }
#line 350 "mode_info.m"
                      }
#line 350 "mode_info.m"
                  }
#line 350 "mode_info.m"
              }
#line 350 "mode_info.m"
          }
#line 350 "mode_info.m"
      }
#line 350 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 350 "mode_info.m"
  }
#line 350 "mode_info.m"
}

#line 459 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0(
#line 459 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 459 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 459 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 459 "mode_info.m"
{
#line 459 "mode_info.m"
  {
#line 459 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 459 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_27 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 459 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_28 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 459 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_27 == check_hlds__mode_info__CastY_28);
#line 459 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 5076 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 459 "mode_info.m"
    else
#line 459 "mode_info.m"
      {
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 1)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 2)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 3)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 4)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 5)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 6)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 7)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20;

#line 459 "mode_info.m"
        {
#line 459 "mode_info.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__mode_info__V_20_20, check_hlds__mode_info__V_4_4, check_hlds__mode_info__V_12_12);
        }
#line 5122 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_20_20 == (MR_Integer) 0);
#line 459 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 459 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 459 "mode_info.m"
          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_20_20;
#line 459 "mode_info.m"
        else
#line 459 "mode_info.m"
          {
#line 459 "mode_info.m"
            MR_Word check_hlds__mode_info__V_21_21;

#line 459 "mode_info.m"
            {
#line 459 "mode_info.m"
              hlds__instmap____Compare____instmap_0_0(&check_hlds__mode_info__V_21_21, check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_13_13);
            }
#line 5142 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_21_21 == (MR_Integer) 0);
#line 459 "mode_info.m"
            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 459 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 459 "mode_info.m"
              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_21_21;
#line 459 "mode_info.m"
            else
#line 459 "mode_info.m"
              {
#line 459 "mode_info.m"
                MR_Word check_hlds__mode_info__V_22_22;

#line 459 "mode_info.m"
                {
#line 459 "mode_info.m"
                  check_hlds__delay_info____Compare____delay_info_0_0(&check_hlds__mode_info__V_22_22, check_hlds__mode_info__V_6_6, check_hlds__mode_info__V_14_14);
                }
#line 5162 "check_hlds.mode_info.c"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_22_22 == (MR_Integer) 0);
#line 459 "mode_info.m"
                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 459 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 459 "mode_info.m"
                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_22_22;
#line 459 "mode_info.m"
                else
#line 459 "mode_info.m"
                  {
#line 459 "mode_info.m"
                    MR_Word check_hlds__mode_info__V_23_23;

#line 459 "mode_info.m"
                    {
#line 459 "mode_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[3], &check_hlds__mode_info__V_23_23, ((MR_Box) (check_hlds__mode_info__V_7_7)), ((MR_Box) (check_hlds__mode_info__V_15_15)));
                    }
#line 5182 "check_hlds.mode_info.c"
                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_23_23 == (MR_Integer) 0);
#line 459 "mode_info.m"
                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 459 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 459 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_23_23;
#line 459 "mode_info.m"
                    else
#line 459 "mode_info.m"
                      {
#line 459 "mode_info.m"
                        MR_Word check_hlds__mode_info__V_24_24;

#line 459 "mode_info.m"
                        {
#line 459 "mode_info.m"
                          check_hlds__mode_info____Compare____mode_context_0_0(&check_hlds__mode_info__V_24_24, check_hlds__mode_info__V_8_8, check_hlds__mode_info__V_16_16);
                        }
#line 5202 "check_hlds.mode_info.c"
                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_24_24 == (MR_Integer) 0);
#line 459 "mode_info.m"
                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 459 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 459 "mode_info.m"
                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_24_24;
#line 459 "mode_info.m"
                        else
#line 459 "mode_info.m"
                          {
#line 459 "mode_info.m"
                            MR_Word check_hlds__mode_info__V_25_25;

#line 459 "mode_info.m"
                            {
#line 459 "mode_info.m"
                              mercury__term____Compare____context_0_0(&check_hlds__mode_info__V_25_25, check_hlds__mode_info__V_9_9, check_hlds__mode_info__V_17_17);
                            }
#line 5222 "check_hlds.mode_info.c"
                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_25_25 == (MR_Integer) 0);
#line 459 "mode_info.m"
                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 459 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 459 "mode_info.m"
                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_25_25;
#line 459 "mode_info.m"
                            else
#line 459 "mode_info.m"
                              {
#line 459 "mode_info.m"
                                MR_Word check_hlds__mode_info__V_26_26;

#line 459 "mode_info.m"
                                {
#line 459 "mode_info.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[4], &check_hlds__mode_info__V_26_26, ((MR_Box) (check_hlds__mode_info__V_10_10)), ((MR_Box) (check_hlds__mode_info__V_18_18)));
                                }
#line 5242 "check_hlds.mode_info.c"
                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_26_26 == (MR_Integer) 0);
#line 459 "mode_info.m"
                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 459 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 459 "mode_info.m"
                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_26_26;
#line 459 "mode_info.m"
                                else
#line 459 "mode_info.m"
                                  {
#line 459 "mode_info.m"
                                    check_hlds__mode_info____Compare____mode_sub_info_0_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_11_11, check_hlds__mode_info__V_19_19);
#line 459 "mode_info.m"
                                    return;
                                  }
#line 459 "mode_info.m"
                              }
#line 459 "mode_info.m"
                          }
#line 459 "mode_info.m"
                      }
#line 459 "mode_info.m"
                  }
#line 459 "mode_info.m"
              }
#line 459 "mode_info.m"
          }
#line 459 "mode_info.m"
      }
#line 459 "mode_info.m"
  }
#line 459 "mode_info.m"
}

#line 459 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0(
#line 459 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 459 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 459 "mode_info.m"
{
#line 459 "mode_info.m"
  {
#line 459 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 459 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_19 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 459 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_20 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 459 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_19 == check_hlds__mode_info__CastY_20);
#line 459 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 459 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 459 "mode_info.m"
    else
#line 459 "mode_info.m"
      {
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_24_24;
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_26_26;
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 2)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 3)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 4)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 5)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 6)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 7)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 459 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 350 "mode_info.m"
        MR_Integer check_hlds__mode_info__CastX_73;
#line 350 "mode_info.m"
        MR_Integer check_hlds__mode_info__CastY_74;

#line 5347 "check_hlds.mode_info.c"
        {
#line 5349 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_11_11);
        }
#line 459 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 459 "mode_info.m"
          {
#line 5356 "check_hlds.mode_info.c"
            {
#line 5358 "check_hlds.mode_info.c"
              check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_4_4, check_hlds__mode_info__V_12_12);
            }
#line 459 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 459 "mode_info.m"
              {
#line 5365 "check_hlds.mode_info.c"
                {
#line 5367 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = check_hlds__delay_info____Unify____delay_info_0_0(check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_13_13);
                }
#line 459 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 459 "mode_info.m"
                  {
#line 5374 "check_hlds.mode_info.c"
                    check_hlds__mode_info__TypeInfo_24_24 = (MR_Word) &check_hlds__mode_info_scalar_common_1[3];
#line 5376 "check_hlds.mode_info.c"
                    {
#line 5378 "check_hlds.mode_info.c"
                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_24_24, ((MR_Box) (check_hlds__mode_info__V_6_6)), ((MR_Box) (check_hlds__mode_info__V_14_14)));
                    }
#line 459 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 459 "mode_info.m"
                      {
#line 5385 "check_hlds.mode_info.c"
                        {
#line 5387 "check_hlds.mode_info.c"
                          check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_context_0_0(check_hlds__mode_info__V_7_7, check_hlds__mode_info__V_15_15);
                        }
#line 459 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 459 "mode_info.m"
                          {
#line 5394 "check_hlds.mode_info.c"
                            {
#line 5396 "check_hlds.mode_info.c"
                              check_hlds__mode_info__succeeded = mercury__term____Unify____context_0_0(check_hlds__mode_info__V_8_8, check_hlds__mode_info__V_16_16);
                            }
#line 459 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 459 "mode_info.m"
                              {
#line 5403 "check_hlds.mode_info.c"
                                check_hlds__mode_info__TypeInfo_26_26 = (MR_Word) &check_hlds__mode_info_scalar_common_1[4];
#line 5405 "check_hlds.mode_info.c"
                                {
#line 5407 "check_hlds.mode_info.c"
                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_26_26, ((MR_Box) (check_hlds__mode_info__V_9_9)), ((MR_Box) (check_hlds__mode_info__V_17_17)));
                                }
#line 459 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 459 "mode_info.m"
                                  {
#line 350 "mode_info.m"
                                    check_hlds__mode_info__CastX_73 = (MR_Integer) check_hlds__mode_info__V_10_10;
#line 350 "mode_info.m"
                                    check_hlds__mode_info__CastY_74 = (MR_Integer) check_hlds__mode_info__V_18_18;
#line 350 "mode_info.m"
                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_73 == check_hlds__mode_info__CastY_74);
#line 350 "mode_info.m"
                                    if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                      check_hlds__mode_info__succeeded = MR_TRUE;
#line 350 "mode_info.m"
                                    else
#line 350 "mode_info.m"
                                      {
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_53_77;
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeCtorInfo_54_78;
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_55_79;
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_56_80;
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_57_81;
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_58_82;
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_59_83;
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_62_86;
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 0)));
#line 350 "mode_info.m"
                                        MR_Integer check_hlds__mode_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 1)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 2)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 3)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 4)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 5)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 6)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 7)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 8)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 13)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 0)));
#line 350 "mode_info.m"
                                        MR_Integer check_hlds__mode_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 1)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 2)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 3)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 4)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 5)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 6)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 7)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 8)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 10)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 12)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 13)));
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_67_67 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 350 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 5537 "check_hlds.mode_info.c"
                                        {
#line 5539 "check_hlds.mode_info.c"
                                          check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_info__V_27_27, check_hlds__mode_info__V_50_50);
                                        }
#line 350 "mode_info.m"
                                        if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                          {
#line 5546 "check_hlds.mode_info.c"
                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_28_28 == check_hlds__mode_info__V_51_51);
#line 350 "mode_info.m"
                                            if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                              {
#line 5552 "check_hlds.mode_info.c"
                                                check_hlds__mode_info__TypeInfo_53_77 = (MR_Word) &check_hlds__mode_info_scalar_common_1[5];
#line 5554 "check_hlds.mode_info.c"
                                                {
#line 5556 "check_hlds.mode_info.c"
                                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_53_77, ((MR_Box) (check_hlds__mode_info__V_29_29)), ((MR_Box) (check_hlds__mode_info__V_52_52)));
                                                }
#line 350 "mode_info.m"
                                                if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                  {
#line 5563 "check_hlds.mode_info.c"
                                                    check_hlds__mode_info__TypeCtorInfo_54_78 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 5565 "check_hlds.mode_info.c"
                                                    {
#line 5567 "check_hlds.mode_info.c"
                                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeCtorInfo_54_78, ((MR_Box) (check_hlds__mode_info__V_30_30)), ((MR_Box) (check_hlds__mode_info__V_53_53)));
                                                    }
#line 350 "mode_info.m"
                                                    if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                      {
#line 5574 "check_hlds.mode_info.c"
                                                        check_hlds__mode_info__TypeInfo_55_79 = (MR_Word) &check_hlds__mode_info_scalar_common_1[6];
#line 5576 "check_hlds.mode_info.c"
                                                        {
#line 5578 "check_hlds.mode_info.c"
                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_55_79, ((MR_Box) (check_hlds__mode_info__V_31_31)), ((MR_Box) (check_hlds__mode_info__V_54_54)));
                                                        }
#line 350 "mode_info.m"
                                                        if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                          {
#line 5585 "check_hlds.mode_info.c"
                                                            check_hlds__mode_info__TypeInfo_56_80 = (MR_Word) &check_hlds__mode_info_scalar_common_1[2];
#line 5587 "check_hlds.mode_info.c"
                                                            {
#line 5589 "check_hlds.mode_info.c"
                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_56_80, ((MR_Box) (check_hlds__mode_info__V_32_32)), ((MR_Box) (check_hlds__mode_info__V_55_55)));
                                                            }
#line 350 "mode_info.m"
                                                            if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                              {
#line 5596 "check_hlds.mode_info.c"
                                                                check_hlds__mode_info__TypeInfo_57_81 = (MR_Word) &check_hlds__mode_info_scalar_common_1[4];
#line 5598 "check_hlds.mode_info.c"
                                                                {
#line 5600 "check_hlds.mode_info.c"
                                                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_57_81, ((MR_Box) (check_hlds__mode_info__V_33_33)), ((MR_Box) (check_hlds__mode_info__V_56_56)));
                                                                }
#line 350 "mode_info.m"
                                                                if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                  {
#line 5607 "check_hlds.mode_info.c"
                                                                    check_hlds__mode_info__TypeInfo_58_82 = (MR_Word) &check_hlds__mode_info_scalar_common_1[7];
#line 5609 "check_hlds.mode_info.c"
                                                                    {
#line 5611 "check_hlds.mode_info.c"
                                                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_58_82, ((MR_Box) (check_hlds__mode_info__V_34_34)), ((MR_Box) (check_hlds__mode_info__V_57_57)));
                                                                    }
#line 350 "mode_info.m"
                                                                    if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                      {
#line 5618 "check_hlds.mode_info.c"
                                                                        check_hlds__mode_info__TypeInfo_59_83 = (MR_Word) &check_hlds__mode_info_scalar_common_1[8];
#line 5620 "check_hlds.mode_info.c"
                                                                        {
#line 5622 "check_hlds.mode_info.c"
                                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_59_83, ((MR_Box) (check_hlds__mode_info__V_35_35)), ((MR_Box) (check_hlds__mode_info__V_58_58)));
                                                                        }
#line 350 "mode_info.m"
                                                                        if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                          {
#line 5629 "check_hlds.mode_info.c"
                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_36_36 == check_hlds__mode_info__V_59_59);
#line 350 "mode_info.m"
                                                                            if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                              {
#line 5635 "check_hlds.mode_info.c"
                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_37_37 == check_hlds__mode_info__V_60_60);
#line 350 "mode_info.m"
                                                                                if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                                  {
#line 5641 "check_hlds.mode_info.c"
                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_38_38 == check_hlds__mode_info__V_61_61);
#line 350 "mode_info.m"
                                                                                    if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                                      {
#line 5647 "check_hlds.mode_info.c"
                                                                                        {
#line 5649 "check_hlds.mode_info.c"
                                                                                          check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_39_39, check_hlds__mode_info__V_62_62);
                                                                                        }
#line 350 "mode_info.m"
                                                                                        if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                                          {
#line 5656 "check_hlds.mode_info.c"
                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_40_40 == check_hlds__mode_info__V_63_63);
#line 350 "mode_info.m"
                                                                                            if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                                              {
#line 5662 "check_hlds.mode_info.c"
                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_41_41 == check_hlds__mode_info__V_64_64);
#line 350 "mode_info.m"
                                                                                                if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                                                  {
#line 5668 "check_hlds.mode_info.c"
                                                                                                    {
#line 5670 "check_hlds.mode_info.c"
                                                                                                      check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_42_42, check_hlds__mode_info__V_65_65);
                                                                                                    }
#line 350 "mode_info.m"
                                                                                                    if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                                                      {
#line 5677 "check_hlds.mode_info.c"
                                                                                                        check_hlds__mode_info__TypeInfo_62_86 = (MR_Word) &check_hlds__mode_info_scalar_common_1[9];
#line 5679 "check_hlds.mode_info.c"
                                                                                                        {
#line 5681 "check_hlds.mode_info.c"
                                                                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_62_86, ((MR_Box) (check_hlds__mode_info__V_43_43)), ((MR_Box) (check_hlds__mode_info__V_66_66)));
                                                                                                        }
#line 350 "mode_info.m"
                                                                                                        if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                                                          {
#line 5688 "check_hlds.mode_info.c"
                                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_44_44 == check_hlds__mode_info__V_67_67);
#line 350 "mode_info.m"
                                                                                                            if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                                                              {
#line 5694 "check_hlds.mode_info.c"
                                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_45_45 == check_hlds__mode_info__V_68_68);
#line 350 "mode_info.m"
                                                                                                                if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                                                                  {
#line 5700 "check_hlds.mode_info.c"
                                                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_46_46 == check_hlds__mode_info__V_69_69);
#line 350 "mode_info.m"
                                                                                                                    if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                                                                      {
#line 5706 "check_hlds.mode_info.c"
                                                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_47_47 == check_hlds__mode_info__V_70_70);
#line 350 "mode_info.m"
                                                                                                                        if (check_hlds__mode_info__succeeded)
#line 350 "mode_info.m"
                                                                                                                          {
#line 5712 "check_hlds.mode_info.c"
                                                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_48_48 == check_hlds__mode_info__V_71_71);
#line 350 "mode_info.m"
                                                                                                                            if (check_hlds__mode_info__succeeded)
#line 5716 "check_hlds.mode_info.c"
                                                                                                                              check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_49_49 == check_hlds__mode_info__V_72_72);
#line 350 "mode_info.m"
                                                                                                                          }
#line 350 "mode_info.m"
                                                                                                                      }
#line 350 "mode_info.m"
                                                                                                                  }
#line 350 "mode_info.m"
                                                                                                              }
#line 350 "mode_info.m"
                                                                                                          }
#line 350 "mode_info.m"
                                                                                                      }
#line 350 "mode_info.m"
                                                                                                  }
#line 350 "mode_info.m"
                                                                                              }
#line 350 "mode_info.m"
                                                                                          }
#line 350 "mode_info.m"
                                                                                      }
#line 350 "mode_info.m"
                                                                                  }
#line 350 "mode_info.m"
                                                                              }
#line 350 "mode_info.m"
                                                                          }
#line 350 "mode_info.m"
                                                                      }
#line 350 "mode_info.m"
                                                                  }
#line 350 "mode_info.m"
                                                              }
#line 350 "mode_info.m"
                                                          }
#line 350 "mode_info.m"
                                                      }
#line 350 "mode_info.m"
                                                  }
#line 350 "mode_info.m"
                                              }
#line 350 "mode_info.m"
                                          }
#line 350 "mode_info.m"
                                      }
#line 459 "mode_info.m"
                                  }
#line 459 "mode_info.m"
                              }
#line 459 "mode_info.m"
                          }
#line 459 "mode_info.m"
                      }
#line 459 "mode_info.m"
                  }
#line 459 "mode_info.m"
              }
#line 459 "mode_info.m"
          }
#line 459 "mode_info.m"
      }
#line 459 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 459 "mode_info.m"
  }
#line 459 "mode_info.m"
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
#line 5809 "check_hlds.mode_info.c"
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
#line 5823 "check_hlds.mode_info.c"
            *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 46 "mode_info.m"
          else
#line 5827 "check_hlds.mode_info.c"
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
#line 5842 "check_hlds.mode_info.c"
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
#line 5862 "check_hlds.mode_info.c"
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
#line 5883 "check_hlds.mode_info.c"
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
#line 5898 "check_hlds.mode_info.c"
              *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 46 "mode_info.m"
            else
#line 46 "mode_info.m"
              if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5904 "check_hlds.mode_info.c"
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
#line 5922 "check_hlds.mode_info.c"
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
#line 6021 "check_hlds.mode_info.c"
                {
#line 6023 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____call_id_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_5_5);
                }
#line 46 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 6028 "check_hlds.mode_info.c"
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
#line 6057 "check_hlds.mode_info.c"
                {
#line 6059 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = hlds__hlds_goal____Unify____unify_context_0_0(check_hlds__mode_info__V_7_7, check_hlds__mode_info__V_9_9);
                }
#line 46 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 6064 "check_hlds.mode_info.c"
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
#line 6118 "check_hlds.mode_info.c"
  {
#line 6120 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6123 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6125 "check_hlds.mode_info.c"
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
#line 6171 "check_hlds.mode_info.c"
  {
#line 6173 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6176 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6178 "check_hlds.mode_info.c"
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
#line 6224 "check_hlds.mode_info.c"
  {
#line 6226 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6229 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6231 "check_hlds.mode_info.c"
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
#line 6339 "check_hlds.mode_info.c"
  {
#line 6341 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6344 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6346 "check_hlds.mode_info.c"
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
#line 6392 "check_hlds.mode_info.c"
  {
#line 6394 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6397 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6399 "check_hlds.mode_info.c"
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
#line 6445 "check_hlds.mode_info.c"
  {
#line 6447 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6450 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6452 "check_hlds.mode_info.c"
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
#line 6498 "check_hlds.mode_info.c"
  {
#line 6500 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6503 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6505 "check_hlds.mode_info.c"
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
#line 6551 "check_hlds.mode_info.c"
  {
#line 6553 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6556 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6558 "check_hlds.mode_info.c"
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
#line 6587 "check_hlds.mode_info.c"
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
#line 6617 "check_hlds.mode_info.c"
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
#line 6641 "check_hlds.mode_info.c"
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

#line 6717 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_3_3 == check_hlds__mode_info__V_6_6);
#line 95 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 95 "mode_info.m"
          {
#line 6723 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_4_4 == check_hlds__mode_info__V_7_7);
#line 95 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 6727 "check_hlds.mode_info.c"
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
#line 6764 "check_hlds.mode_info.c"
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
#line 6793 "check_hlds.mode_info.c"
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
#line 6806 "check_hlds.mode_info.c"
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
#line 6874 "check_hlds.mode_info.c"
              {
#line 6876 "check_hlds.mode_info.c"
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
#line 6900 "check_hlds.mode_info.c"
              {
#line 6902 "check_hlds.mode_info.c"
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

#line 799 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(
#line 799 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 799 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_7,
#line 799 "mode_info.m"
  MR_Word * check_hlds__mode_info__Reason_8)
#line 799 "mode_info.m"
{
#line 802 "mode_info.m"
  while (MR_TRUE)
#line 802 "mode_info.m"
    {
#line 802 "mode_info.m"
      /* tailcall optimized into a loop */
#line 802 "mode_info.m"
      {
#line 802 "mode_info.m"
        MR_bool check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 802 "mode_info.m"
        MR_Word check_hlds__mode_info__ThisReason_4;
#line 802 "mode_info.m"
        MR_Word check_hlds__mode_info__Set_5;
#line 802 "mode_info.m"
        MR_Word check_hlds__mode_info__Sets_6;
#line 802 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9;
#line 803 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeCtorInfo_10_10;

#line 802 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 802 "mode_info.m"
          {
#line 802 "mode_info.m"
            check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 802 "mode_info.m"
            check_hlds__mode_info__Sets_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 802 "mode_info.m"
            check_hlds__mode_info__ThisReason_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 802 "mode_info.m"
            check_hlds__mode_info__Set_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 6960 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 803 "mode_info.m"
            {
#line 803 "mode_info.m"
              check_hlds__mode_info__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__mode_info__TypeCtorInfo_10_10, check_hlds__mode_info__Set_5, check_hlds__mode_info__Var_7);
            }
#line 805 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 804 "mode_info.m"
              {
#line 804 "mode_info.m"
                *check_hlds__mode_info__Reason_8 = check_hlds__mode_info__ThisReason_4;
#line 804 "mode_info.m"
                check_hlds__mode_info__succeeded = MR_TRUE;
#line 804 "mode_info.m"
              }
#line 805 "mode_info.m"
            else
#line 806 "mode_info.m"
              {
#line 806 "mode_info.m"
                /* direct tailcall eliminated */
#line 806 "mode_info.m"
                {
#line 806 "mode_info.m"
                  MR_Word check_hlds__mode_info__HeadVar__1__tmp_copy_1 = check_hlds__mode_info__Sets_6;

#line 806 "mode_info.m"
                  check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__HeadVar__1__tmp_copy_1;
#line 806 "mode_info.m"
                }
#line 806 "mode_info.m"
                continue;
#line 806 "mode_info.m"
              }
#line 802 "mode_info.m"
          }
#line 802 "mode_info.m"
        return check_hlds__mode_info__succeeded;
#line 802 "mode_info.m"
      }
#line 802 "mode_info.m"
      break;
#line 802 "mode_info.m"
    }
#line 799 "mode_info.m"
}

#line 330 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(
#line 330 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_2)
#line 330 "mode_info.m"
{
#line 865 "mode_info.m"
  {
#line 865 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 865 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 0)));
#line 865 "mode_info.m"
    MR_Word check_hlds__mode_info__Globals_4;
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 1)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 2)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 3)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 4)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 5)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 6)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 7)));

#line 867 "mode_info.m"
    {
#line 867 "mode_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__mode_info__ModuleInfo_3, &check_hlds__mode_info__Globals_4);
    }
#line 868 "mode_info.m"
    {
#line 868 "mode_info.m"
      return check_hlds__mode_info__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__mode_info__Globals_4, (MR_Integer) 293, (MR_Integer) 1);
    }
#line 865 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 865 "mode_info.m"
  }
#line 330 "mode_info.m"
}

#line 324 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info__mode_info_may_init_solver_vars_1_p_0(
#line 324 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_2)
#line 324 "mode_info.m"
{
#line 859 "mode_info.m"
  {
#line 859 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 859 "mode_info.m"
    MR_Word check_hlds__mode_info__MayInitSolverVars_3;
#line 859 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 7)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 0)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 1)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 2)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 3)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 4)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 5)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 6)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 581 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
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
    check_hlds__mode_info__MayInitSolverVars_3 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
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
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 861 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__MayInitSolverVars_3 == (MR_Integer) 0);
#line 859 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 859 "mode_info.m"
  }
#line 324 "mode_info.m"
}

#line 320 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_need_to_requantify_2_p_0(
#line 320 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4,
#line 320 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_5)
#line 320 "mode_info.m"
{
#line 854 "mode_info.m"
  {
#line 854 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 854 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, (MR_Integer) 7)));
#line 854 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;
#line 854 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, (MR_Integer) 0)));
#line 854 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, (MR_Integer) 1)));
#line 854 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, (MR_Integer) 2)));
#line 854 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, (MR_Integer) 3)));
#line 854 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, (MR_Integer) 4)));
#line 854 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, (MR_Integer) 5)));
#line 854 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, (MR_Integer) 6)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 0)));
#line 609 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 1)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 2)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 3)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 4)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 5)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 6)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 7)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 8)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 13)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) & (MR_Integer) 1);

#line 609 "mode_info.m"
    {
#line 609 "mode_info.m"
      check_hlds__mode_info__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 0) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 1) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 2) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 3) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 4) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 5) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 6) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 7) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 8) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 9) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_30_30 << (MR_Integer) 2)))))));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 10) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 11) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)))));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 12) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 13) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, 14) = ((MR_Box) (((MR_Integer) 0 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 609 "mode_info.m"
    }
#line 609 "mode_info.m"
    {
#line 609 "mode_info.m"
      MR_Word base;
#line 609 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 609 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_5 = base;
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 609 "mode_info.m"
    }
#line 854 "mode_info.m"
  }
#line 320 "mode_info.m"
}

#line 317 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_add_warning_3_p_0(
#line 317 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeWarningInfo_4,
#line 317 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8,
#line 317 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9)
#line 317 "mode_info.m"
{
#line 849 "mode_info.m"
  {
#line 849 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 849 "mode_info.m"
    MR_Word check_hlds__mode_info__Warnings0_6;
#line 849 "mode_info.m"
    MR_Word check_hlds__mode_info__Warnings_7;
#line 849 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 849 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));
#line 849 "mode_info.m"
    MR_Word check_hlds__mode_info__V_47_47;
#line 849 "mode_info.m"
    MR_Word check_hlds__mode_info__V_48_48;
#line 849 "mode_info.m"
    MR_Word check_hlds__mode_info__V_49_49;
#line 849 "mode_info.m"
    MR_Word check_hlds__mode_info__V_50_50;
#line 849 "mode_info.m"
    MR_Word check_hlds__mode_info__V_51_51;
#line 849 "mode_info.m"
    MR_Word check_hlds__mode_info__V_52_52;
#line 849 "mode_info.m"
    MR_Word check_hlds__mode_info__V_53_53;
#line 849 "mode_info.m"
    MR_Word check_hlds__mode_info__V_54_54;
#line 849 "mode_info.m"
    MR_Word check_hlds__mode_info__V_55_55;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 0)));
#line 566 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 1)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 2)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 3)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 4)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 5)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 6)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 7)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 8)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 10)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 12)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_56_56;
#line 607 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_57_57;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_58_58;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_60_60;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_61_61;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_62_62;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_63_63;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_64_64;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_65_65;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_70_70;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_71_71;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_73_73;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_74_74;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_75_75;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_76_76;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_77_77;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_78_78;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_72_72;

#line 566 "mode_info.m"
    check_hlds__mode_info__Warnings0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 13)));
#line 566 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 851 "mode_info.m"
    {
#line 851 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__ModeWarningInfo_4));
#line 851 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 851 "mode_info.m"
    }
#line 851 "mode_info.m"
    {
#line 851 "mode_info.m"
      mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0, check_hlds__mode_info__Warnings0_6, check_hlds__mode_info__V_10_10, &check_hlds__mode_info__Warnings_7);
    }
#line 607 "mode_info.m"
    check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 0)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 1)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 2)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 3)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 4)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 5)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 6)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 7)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 8)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_65_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 10)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_69_69 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 12)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 13)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_73_73 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_47_47, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    {
#line 607 "mode_info.m"
      check_hlds__mode_info__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 0) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 1) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 2) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 3) = ((MR_Box) (check_hlds__mode_info__V_59_59));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 4) = ((MR_Box) (check_hlds__mode_info__V_60_60));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 5) = ((MR_Box) (check_hlds__mode_info__V_61_61));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 6) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 7) = ((MR_Box) (check_hlds__mode_info__V_63_63));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 8) = ((MR_Box) (check_hlds__mode_info__V_64_64));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 9) = ((MR_Box) ((check_hlds__mode_info__V_65_65 | ((((check_hlds__mode_info__V_66_66 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_67_67 << (MR_Integer) 2)))))));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 10) = ((MR_Box) (check_hlds__mode_info__V_68_68));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 11) = ((MR_Box) ((check_hlds__mode_info__V_69_69 | ((check_hlds__mode_info__V_70_70 << (MR_Integer) 1)))));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 12) = ((MR_Box) (check_hlds__mode_info__V_71_71));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 13) = ((MR_Box) (check_hlds__mode_info__Warnings_7));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 14) = ((MR_Box) ((check_hlds__mode_info__V_73_73 | ((((check_hlds__mode_info__V_74_74 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_75_75 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_76_76 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_77_77 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_78_78 << (MR_Integer) 5)))))))))))));
#line 607 "mode_info.m"
    }
#line 607 "mode_info.m"
    {
#line 607 "mode_info.m"
      MR_Word base;
#line 607 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 607 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9 = base;
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 607 "mode_info.m"
    }
#line 849 "mode_info.m"
  }
#line 317 "mode_info.m"
}

#line 314 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_warning_3_p_0(
#line 314 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeWarning_4,
#line 314 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9,
#line 314 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10)
#line 314 "mode_info.m"
{
#line 843 "mode_info.m"
  {
#line 843 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 843 "mode_info.m"
    MR_Word check_hlds__mode_info__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 5)));
#line 843 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 4)));
#line 843 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeWarningInfo_8;
#line 560 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 0)));
#line 560 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 1)));
#line 560 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 2)));
#line 560 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 3)));
#line 560 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 6)));
#line 560 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 7)));

#line 846 "mode_info.m"
    {
#line 846 "mode_info.m"
      check_hlds__mode_info__ModeWarningInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 846 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 0) = ((MR_Box) (check_hlds__mode_info__ModeWarning_4));
#line 846 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 1) = ((MR_Box) (check_hlds__mode_info__Context_6));
#line 846 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 2) = ((MR_Box) (check_hlds__mode_info__ModeContext_7));
#line 846 "mode_info.m"
    }
#line 847 "mode_info.m"
    {
#line 847 "mode_info.m"
      check_hlds__mode_info__mode_info_add_warning_3_p_0(check_hlds__mode_info__ModeWarningInfo_8, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10);
#line 847 "mode_info.m"
      return;
    }
#line 843 "mode_info.m"
  }
#line 314 "mode_info.m"
}

#line 311 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_add_error_3_p_0(
#line 311 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeErrorInfo_4,
#line 311 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8,
#line 311 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9)
#line 311 "mode_info.m"
{
#line 838 "mode_info.m"
  {
#line 838 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 838 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 838 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors_7;
#line 838 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;

#line 840 "mode_info.m"
    {
#line 840 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__ModeErrorInfo_4));
#line 840 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 840 "mode_info.m"
    }
#line 840 "mode_info.m"
    {
#line 840 "mode_info.m"
      mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__mode_info__Errors0_6, check_hlds__mode_info__V_10_10, &check_hlds__mode_info__Errors_7);
    }
#line 606 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 606 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 606 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 606 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 606 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 606 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 606 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 606 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));
#line 606 "mode_info.m"
    {
#line 606 "mode_info.m"
      MR_Word base;
#line 606 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 606 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9 = base;
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__Errors_7));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 606 "mode_info.m"
    }
#line 838 "mode_info.m"
  }
#line 311 "mode_info.m"
}

#line 308 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_error_4_p_0(
#line 308 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_5,
#line 308 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeError_6,
#line 308 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11,
#line 308 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12)
#line 308 "mode_info.m"
{
#line 832 "mode_info.m"
  {
#line 832 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 832 "mode_info.m"
    MR_Word check_hlds__mode_info__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 5)));
#line 832 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 4)));
#line 832 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeErrorInfo_10;
#line 560 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 0)));
#line 560 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 1)));
#line 560 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 2)));
#line 560 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 3)));
#line 560 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 6)));
#line 560 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 7)));

#line 835 "mode_info.m"
    {
#line 835 "mode_info.m"
      check_hlds__mode_info__ModeErrorInfo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 835 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 0) = ((MR_Box) (check_hlds__mode_info__Vars_5));
#line 835 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 1) = ((MR_Box) (check_hlds__mode_info__ModeError_6));
#line 835 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 2) = ((MR_Box) (check_hlds__mode_info__Context_8));
#line 835 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 3) = ((MR_Box) (check_hlds__mode_info__ModeContext_9));
#line 835 "mode_info.m"
    }
#line 836 "mode_info.m"
    {
#line 836 "mode_info.m"
      check_hlds__mode_info__mode_info_add_error_3_p_0(check_hlds__mode_info__ModeErrorInfo_10, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12);
#line 836 "mode_info.m"
      return;
    }
#line 832 "mode_info.m"
  }
#line 308 "mode_info.m"
}

#line 301 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_var_is_nondet_live_3_p_0(
#line 301 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 301 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_5,
#line 301 "mode_info.m"
  MR_Word * check_hlds__mode_info__Result_6)
#line 301 "mode_info.m"
{
#line 751 "mode_info.m"
  {
#line 751 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 751 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
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
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));

#line 753 "mode_info.m"
    {
#line 753 "mode_info.m"
      check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__NondetLiveVars0_7, ((MR_Box) (check_hlds__mode_info__Var_5)));
    }
#line 755 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 754 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 0;
#line 755 "mode_info.m"
    else
#line 756 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 1;
#line 751 "mode_info.m"
  }
#line 301 "mode_info.m"
}

#line 296 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_var_is_live_3_p_0(
#line 296 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 296 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_5,
#line 296 "mode_info.m"
  MR_Word * check_hlds__mode_info__Result_6)
#line 296 "mode_info.m"
{
#line 743 "mode_info.m"
  {
#line 743 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 743 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 743 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 0)));
#line 572 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 1)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 2)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 3)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 4)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 5)));
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
    check_hlds__mode_info__LiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 6)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 7)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 8)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 13)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 745 "mode_info.m"
    {
#line 745 "mode_info.m"
      check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVars0_7, ((MR_Box) (check_hlds__mode_info__Var_5)));
    }
#line 747 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 746 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 0;
#line 747 "mode_info.m"
    else
#line 748 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 1;
#line 743 "mode_info.m"
  }
#line 296 "mode_info.m"
}

#line 294 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(
#line 294 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_1,
#line 294 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 294 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 294 "mode_info.m"
{
#line 736 "mode_info.m"
  {
#line 736 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;

#line 736 "mode_info.m"
    if ((check_hlds__mode_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 736 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 736 "mode_info.m"
    else
#line 737 "mode_info.m"
      {
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__Live_8;
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__Lives_9;
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__LiveVars0_13;
#line 737 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 7)));
#line 572 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 0)));
#line 572 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 1)));
#line 572 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 2)));
#line 572 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 3)));
#line 572 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 4)));
#line 572 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 5)));
#line 572 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 6)));
#line 572 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 0)));
#line 572 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 1)));
#line 572 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 2)));
#line 572 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 3)));
#line 572 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 4)));
#line 572 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 5)));
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
        check_hlds__mode_info__LiveVars0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 6)));
#line 572 "mode_info.m"
        check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 7)));
#line 572 "mode_info.m"
        check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 8)));
#line 572 "mode_info.m"
        check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
        check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
        check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "mode_info.m"
        check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 10)));
#line 572 "mode_info.m"
        check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
        check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
        check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 12)));
#line 572 "mode_info.m"
        check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 13)));
#line 572 "mode_info.m"
        check_hlds__mode_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
        check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
        check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "mode_info.m"
        check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 572 "mode_info.m"
        check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 572 "mode_info.m"
        check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 745 "mode_info.m"
        {
#line 745 "mode_info.m"
          check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVars0_13, ((MR_Box) (check_hlds__mode_info__Var_6)));
        }
#line 747 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 746 "mode_info.m"
          check_hlds__mode_info__Live_8 = (MR_Integer) 0;
#line 747 "mode_info.m"
        else
#line 748 "mode_info.m"
          check_hlds__mode_info__Live_8 = (MR_Integer) 1;
#line 739 "mode_info.m"
        {
#line 739 "mode_info.m"
          check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(check_hlds__mode_info__ModeInfo_1, check_hlds__mode_info__Vars_7, &check_hlds__mode_info__Lives_9);
        }
#line 737 "mode_info.m"
        {
#line 737 "mode_info.m"
          MR_Word base;
#line 737 "mode_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "mode_info.m"
          *check_hlds__mode_info__HeadVar__3_3 = base;
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_info__Live_8));
#line 737 "mode_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_info__Lives_9));
#line 737 "mode_info.m"
        }
#line 737 "mode_info.m"
      }
#line 736 "mode_info.m"
  }
#line 294 "mode_info.m"
}

#line 289 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_call_id_3_p_0(
#line 289 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 289 "mode_info.m"
  MR_Word check_hlds__mode_info__PredId_5,
#line 289 "mode_info.m"
  MR_Word * check_hlds__mode_info__CallId_6)
#line 289 "mode_info.m"
{
#line 825 "mode_info.m"
  {
#line 825 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 825 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 825 "mode_info.m"
    MR_Word check_hlds__mode_info__PredInfo_8;
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));

#line 827 "mode_info.m"
    {
#line 827 "mode_info.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__mode_info__ModuleInfo_7, check_hlds__mode_info__PredId_5, &check_hlds__mode_info__PredInfo_8);
    }
#line 828 "mode_info.m"
    {
#line 828 "mode_info.m"
      hlds__hlds_pred__pred_info_get_call_id_2_p_0(check_hlds__mode_info__PredInfo_8, check_hlds__mode_info__CallId_6);
#line 828 "mode_info.m"
      return;
    }
#line 825 "mode_info.m"
  }
#line 289 "mode_info.m"
}

#line 283 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_3_p_0(
#line 283 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 283 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_5,
#line 283 "mode_info.m"
  MR_Word * check_hlds__mode_info__Reason_6)
#line 283 "mode_info.m"
{
#line 795 "mode_info.m"
  {
#line 795 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 795 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVarsList_7;
#line 795 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 564 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
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
    MR_Word check_hlds__mode_info__V_35_35;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;

#line 564 "mode_info.m"
    check_hlds__mode_info__LockedVarsList_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 797 "mode_info.m"
    {
#line 797 "mode_info.m"
      return check_hlds__mode_info__succeeded = check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(check_hlds__mode_info__LockedVarsList_7, check_hlds__mode_info__Var_5, check_hlds__mode_info__Reason_6);
    }
#line 795 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 795 "mode_info.m"
  }
#line 283 "mode_info.m"
}

#line 280 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_unlock_vars_4_p_0(
#line 280 "mode_info.m"
  MR_Word check_hlds__mode_info__Reason_5,
#line 280 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_6,
#line 280 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12,
#line 280 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_13)
#line 280 "mode_info.m"
{
#line 783 "mode_info.m"
  {
#line 783 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 783 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars0_8;
#line 783 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars_11;
#line 783 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 7)));
#line 783 "mode_info.m"
    MR_Word check_hlds__mode_info__V_54_54;
#line 783 "mode_info.m"
    MR_Word check_hlds__mode_info__V_55_55;
#line 783 "mode_info.m"
    MR_Word check_hlds__mode_info__V_56_56;
#line 783 "mode_info.m"
    MR_Word check_hlds__mode_info__V_57_57;
#line 783 "mode_info.m"
    MR_Word check_hlds__mode_info__V_58_58;
#line 783 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59;
#line 783 "mode_info.m"
    MR_Word check_hlds__mode_info__V_60_60;
#line 783 "mode_info.m"
    MR_Word check_hlds__mode_info__V_61_61;
#line 783 "mode_info.m"
    MR_Word check_hlds__mode_info__V_62_62;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 0)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 1)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 2)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 3)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 4)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 5)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 6)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 0)));
#line 564 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 1)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 2)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 3)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 4)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_47_47;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_48_48;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_49_49;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_50_50;
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_51_51;
#line 790 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars1_10;
#line 786 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeCtorInfo_19_19;
#line 786 "mode_info.m"
    MR_Word check_hlds__mode_info__TheseVars_9;
#line 786 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 786 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_63_63;
#line 604 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_64_64;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_65_65;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_70_70;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_71_71;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_72_72;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_73_73;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_74_74;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_75_75;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_76_76;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_77_77;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_78_78;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_79_79;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_80_80;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_81_81;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_82_82;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_83_83;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_84_84;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_85_85;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68;

#line 564 "mode_info.m"
    check_hlds__mode_info__LockedVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 5)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 6)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 7)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 8)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 10)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 12)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 13)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 786 "mode_info.m"
    check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__LockedVars0_8)) == (MR_mktag((MR_Integer) 1)));
#line 786 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 786 "mode_info.m"
      {
#line 786 "mode_info.m"
        check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__LockedVars0_8, (MR_Integer) 0)));
#line 786 "mode_info.m"
        check_hlds__mode_info__LockedVars1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__LockedVars0_8, (MR_Integer) 1)));
#line 786 "mode_info.m"
        check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, (MR_Integer) 0)));
#line 786 "mode_info.m"
        check_hlds__mode_info__TheseVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, (MR_Integer) 1)));
#line 786 "mode_info.m"
        {
#line 786 "mode_info.m"
          check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____var_lock_reason_0_0(check_hlds__mode_info__Reason_5, check_hlds__mode_info__V_20_20);
        }
#line 786 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 786 "mode_info.m"
          {
#line 8586 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 787 "mode_info.m"
            {
#line 787 "mode_info.m"
              check_hlds__mode_info__succeeded = parse_tree__set_of_var__equal_2_p_0(check_hlds__mode_info__TypeCtorInfo_19_19, check_hlds__mode_info__TheseVars_9, check_hlds__mode_info__Vars_6);
            }
#line 786 "mode_info.m"
          }
#line 786 "mode_info.m"
      }
#line 790 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 789 "mode_info.m"
      check_hlds__mode_info__LockedVars_11 = check_hlds__mode_info__LockedVars1_10;
#line 790 "mode_info.m"
    else
#line 791 "mode_info.m"
      {
#line 791 "mode_info.m"
        {
#line 791 "mode_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_unlock_vars\'/4", (MR_String) "some kind of nesting error");
#line 791 "mode_info.m"
          return;
        }
#line 791 "mode_info.m"
      }
#line 604 "mode_info.m"
    check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 0)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 1)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 2)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 3)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 4)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 5)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 6)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 7)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 0)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 1)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 2)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 3)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 4)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 5)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 6)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 7)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 8)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_72_72 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 10)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_76_76 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 12)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 13)));
#line 604 "mode_info.m"
    check_hlds__mode_info__V_80_80 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    check_hlds__mode_info__V_85_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    {
#line 604 "mode_info.m"
      check_hlds__mode_info__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, 0) = ((MR_Box) (check_hlds__mode_info__V_63_63));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, 1) = ((MR_Box) (check_hlds__mode_info__V_64_64));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, 2) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, 3) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, 4) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, 5) = ((MR_Box) (check_hlds__mode_info__LockedVars_11));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, 6) = ((MR_Box) (check_hlds__mode_info__V_69_69));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, 7) = ((MR_Box) (check_hlds__mode_info__V_70_70));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, 8) = ((MR_Box) (check_hlds__mode_info__V_71_71));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, 9) = ((MR_Box) ((check_hlds__mode_info__V_72_72 | ((((check_hlds__mode_info__V_73_73 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_74_74 << (MR_Integer) 2)))))));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, 10) = ((MR_Box) (check_hlds__mode_info__V_75_75));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, 11) = ((MR_Box) ((check_hlds__mode_info__V_76_76 | ((check_hlds__mode_info__V_77_77 << (MR_Integer) 1)))));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, 12) = ((MR_Box) (check_hlds__mode_info__V_78_78));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, 13) = ((MR_Box) (check_hlds__mode_info__V_79_79));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_55_55, 14) = ((MR_Box) ((check_hlds__mode_info__V_80_80 | ((((check_hlds__mode_info__V_81_81 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_82_82 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_83_83 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_84_84 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_85_85 << (MR_Integer) 5)))))))))))));
#line 604 "mode_info.m"
    }
#line 604 "mode_info.m"
    {
#line 604 "mode_info.m"
      MR_Word base;
#line 604 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 604 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_13 = base;
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_59_59));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_60_60));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_61_61));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 604 "mode_info.m"
    }
#line 783 "mode_info.m"
  }
#line 280 "mode_info.m"
}

#line 277 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_lock_vars_4_p_0(
#line 277 "mode_info.m"
  MR_Word check_hlds__mode_info__Reason_5,
#line 277 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_6,
#line 277 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9,
#line 277 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10)
#line 277 "mode_info.m"
{
#line 779 "mode_info.m"
  {
#line 779 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars_8;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 7)));
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 0)));
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 1)));
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 2)));
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 3)));
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 4)));
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 5)));
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 6)));
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 0)));
#line 779 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 1)));
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 2)));
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 3)));
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 4)));
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 779 "mode_info.m"
    MR_Word check_hlds__mode_info__V_48_48;

#line 564 "mode_info.m"
    check_hlds__mode_info__LockedVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 5)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 6)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 7)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 8)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 10)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 12)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 13)));
#line 564 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_15_15, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 781 "mode_info.m"
    {
#line 781 "mode_info.m"
      check_hlds__mode_info__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 781 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, 0) = ((MR_Box) (check_hlds__mode_info__Reason_5));
#line 781 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, 1) = ((MR_Box) (check_hlds__mode_info__Vars_6));
#line 781 "mode_info.m"
    }
#line 781 "mode_info.m"
    {
#line 781 "mode_info.m"
      check_hlds__mode_info__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_11_11, 0) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 781 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_11_11, 1) = ((MR_Box) (check_hlds__mode_info__LockedVars_8));
#line 781 "mode_info.m"
    }
#line 604 "mode_info.m"
    {
#line 604 "mode_info.m"
      check_hlds__mode_info__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 0) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 1) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 2) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 3) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 4) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 5) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 6) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 7) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 8) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 9) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 2)))))));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 10) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 11) = ((MR_Box) ((check_hlds__mode_info__V_35_35 | ((check_hlds__mode_info__V_36_36 << (MR_Integer) 1)))));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 12) = ((MR_Box) (check_hlds__mode_info__V_37_37));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 13) = ((MR_Box) (check_hlds__mode_info__V_38_38));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_48_48, 14) = ((MR_Box) ((check_hlds__mode_info__V_39_39 | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_42_42 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_43_43 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_44_44 << (MR_Integer) 5)))))))))))));
#line 604 "mode_info.m"
    }
#line 604 "mode_info.m"
    {
#line 604 "mode_info.m"
      MR_Word base;
#line 604 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 604 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10 = base;
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 604 "mode_info.m"
    }
#line 779 "mode_info.m"
  }
#line 277 "mode_info.m"
}

#line 274 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_types_of_vars_3_p_0(
#line 274 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 274 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_5,
#line 274 "mode_info.m"
  MR_Word * check_hlds__mode_info__TypesOfVars_6)
#line 274 "mode_info.m"
{
#line 766 "mode_info.m"
  {
#line 766 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 766 "mode_info.m"
    MR_Word check_hlds__mode_info__VarTypes_7;
#line 766 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 559 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;

#line 559 "mode_info.m"
    check_hlds__mode_info__VarTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 559 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 559 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 559 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 559 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 559 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 559 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 559 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 559 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 559 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 768 "mode_info.m"
    {
#line 768 "mode_info.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__mode_info__VarTypes_7, check_hlds__mode_info__Vars_5, check_hlds__mode_info__TypesOfVars_6);
#line 768 "mode_info.m"
      return;
    }
#line 766 "mode_info.m"
  }
#line 274 "mode_info.m"
}

#line 269 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(
#line 269 "mode_info.m"
  MR_Word check_hlds__mode_info__INFS_4,
#line 269 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 269 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 269 "mode_info.m"
{
#line 636 "mode_info.m"
  {
#line 636 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 636 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 636 "mode_info.m"
    {
#line 636 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 4)) | ((check_hlds__mode_info__INFS_4 << (MR_Integer) 5)))))))))))));
#line 636 "mode_info.m"
    }
#line 636 "mode_info.m"
    {
#line 636 "mode_info.m"
      MR_Word base;
#line 636 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 636 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 636 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 636 "mode_info.m"
    }
#line 636 "mode_info.m"
  }
#line 269 "mode_info.m"
}

#line 267 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_make_ground_terms_unique_3_p_0(
#line 267 "mode_info.m"
  MR_Word check_hlds__mode_info__MGTU_4,
#line 267 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 267 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 267 "mode_info.m"
{
#line 634 "mode_info.m"
  {
#line 634 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 634 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 634 "mode_info.m"
    {
#line 634 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 3)) | ((((check_hlds__mode_info__MGTU_4 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 5)))))))))))));
#line 634 "mode_info.m"
    }
#line 634 "mode_info.m"
    {
#line 634 "mode_info.m"
      MR_Word base;
#line 634 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 634 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 634 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 634 "mode_info.m"
    }
#line 634 "mode_info.m"
  }
#line 267 "mode_info.m"
}

#line 265 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_had_from_ground_term_3_p_0(
#line 265 "mode_info.m"
  MR_Word check_hlds__mode_info__HFGI_4,
#line 265 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 265 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 265 "mode_info.m"
{
#line 632 "mode_info.m"
  {
#line 632 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 632 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 632 "mode_info.m"
    {
#line 632 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)) | ((((check_hlds__mode_info__HFGI_4 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 5)))))))))))));
#line 632 "mode_info.m"
    }
#line 632 "mode_info.m"
    {
#line 632 "mode_info.m"
      MR_Word base;
#line 632 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 632 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 632 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 632 "mode_info.m"
    }
#line 632 "mode_info.m"
  }
#line 265 "mode_info.m"
}

#line 263 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_in_from_ground_term_3_p_0(
#line 263 "mode_info.m"
  MR_Word check_hlds__mode_info__IFGI_4,
#line 263 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 263 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 263 "mode_info.m"
{
#line 630 "mode_info.m"
  {
#line 630 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 630 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 630 "mode_info.m"
    {
#line 630 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((((check_hlds__mode_info__IFGI_4 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 5)))))))))))));
#line 630 "mode_info.m"
    }
#line 630 "mode_info.m"
    {
#line 630 "mode_info.m"
      MR_Word base;
#line 630 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 630 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 630 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 630 "mode_info.m"
    }
#line 630 "mode_info.m"
  }
#line 263 "mode_info.m"
}

#line 261 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0(
#line 261 "mode_info.m"
  MR_Word check_hlds__mode_info__MayInit_4,
#line 261 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 261 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 261 "mode_info.m"
{
#line 628 "mode_info.m"
  {
#line 628 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 628 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 628 "mode_info.m"
    {
#line 628 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__MayInit_4 << (MR_Integer) 2)))))));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 5)))))))))))));
#line 628 "mode_info.m"
    }
#line 628 "mode_info.m"
    {
#line 628 "mode_info.m"
      MR_Word base;
#line 628 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 628 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 628 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 628 "mode_info.m"
    }
#line 628 "mode_info.m"
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
#line 809 "mode_info.m"
  {
#line 809 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 809 "mode_info.m"
    MR_Word check_hlds__mode_info__Checking0_6;
#line 809 "mode_info.m"
    MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 7)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 0)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 1)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 2)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 3)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 4)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 5)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 6)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 0)));
#line 584 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 1)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 2)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 3)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 4)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 5)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 6)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 7)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 8)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_71_71 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 10)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_75_75 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_76_76;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_77_77;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_78_78;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_79_79;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_80_80;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_81_81;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_82_82;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_83_83;

#line 584 "mode_info.m"
    check_hlds__mode_info__Checking0_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 12)));
#line 584 "mode_info.m"
    check_hlds__mode_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 13)));
#line 584 "mode_info.m"
    check_hlds__mode_info__V_78_78 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_79_79 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 812 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__Checking0_6 == (MR_Integer) 1);
#line 812 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 813 "mode_info.m"
      check_hlds__mode_info__succeeded = (check_hlds__mode_info__Checking_4 == (MR_Integer) 1);
#line 819 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 817 "mode_info.m"
      {
#line 817 "mode_info.m"
        {
#line 817 "mode_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_set_checking_extra_goals\'/3", (MR_String) "rechecking extra goals adds more extra goals");
#line 817 "mode_info.m"
          return;
        }
#line 817 "mode_info.m"
      }
#line 819 "mode_info.m"
    else
#line 820 "mode_info.m"
      {
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 7)));
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14;
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 0)));
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 1)));
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 2)));
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 3)));
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 4)));
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 5)));
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 6)));
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 0)));
#line 820 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 1)));
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 2)));
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 3)));
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 4)));
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 5)));
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 6)));
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 7)));
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 8)));
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 10)));
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 12)));
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 13)));
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 820 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 820 "mode_info.m"
        {
#line 820 "mode_info.m"
          check_hlds__mode_info__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 0) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 1) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 2) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 3) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 4) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 5) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 6) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 7) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 8) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 9) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 2)))))));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 10) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 11) = ((MR_Box) ((check_hlds__mode_info__V_35_35 | ((check_hlds__mode_info__Checking_4 << (MR_Integer) 1)))));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 12) = ((MR_Box) (check_hlds__mode_info__V_37_37));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 13) = ((MR_Box) (check_hlds__mode_info__V_38_38));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 14) = ((MR_Box) ((check_hlds__mode_info__V_39_39 | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_42_42 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_43_43 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_44_44 << (MR_Integer) 5)))))))))))));
#line 820 "mode_info.m"
        }
#line 820 "mode_info.m"
        {
#line 820 "mode_info.m"
          MR_Word base;
#line 820 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 820 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_8 = base;
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 820 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 820 "mode_info.m"
        }
#line 820 "mode_info.m"
      }
#line 809 "mode_info.m"
  }
#line 259 "mode_info.m"
}

#line 257 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_may_change_called_proc_3_p_0(
#line 257 "mode_info.m"
  MR_Word check_hlds__mode_info__MayChange_4,
#line 257 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 257 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 257 "mode_info.m"
{
#line 626 "mode_info.m"
  {
#line 626 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 626 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 626 "mode_info.m"
    {
#line 626 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__MayChange_4 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 5)))))))))))));
#line 626 "mode_info.m"
    }
#line 626 "mode_info.m"
    {
#line 626 "mode_info.m"
      MR_Word base;
#line 626 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 626 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 626 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 626 "mode_info.m"
    }
#line 626 "mode_info.m"
  }
#line 257 "mode_info.m"
}

#line 255 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_how_to_check_3_p_0(
#line 255 "mode_info.m"
  MR_Word check_hlds__mode_info__How_4,
#line 255 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 255 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 255 "mode_info.m"
{
#line 624 "mode_info.m"
  {
#line 624 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 624 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);

#line 624 "mode_info.m"
    {
#line 624 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__How_4 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 5)))))))))))));
#line 624 "mode_info.m"
    }
#line 624 "mode_info.m"
    {
#line 624 "mode_info.m"
      MR_Word base;
#line 624 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 624 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 624 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 624 "mode_info.m"
    }
#line 624 "mode_info.m"
  }
#line 255 "mode_info.m"
}

#line 253 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(
#line 253 "mode_info.m"
  MR_Word check_hlds__mode_info__Changed_4,
#line 253 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 253 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 253 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);

#line 622 "mode_info.m"
    {
#line 622 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__Changed_4 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 622 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 5)))))))))))));
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
#line 253 "mode_info.m"
}

#line 251 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_parallel_vars_3_p_0(
#line 251 "mode_info.m"
  MR_Word check_hlds__mode_info__PVars_4,
#line 251 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 251 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 251 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));

#line 620 "mode_info.m"
    {
#line 620 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__PVars_4));
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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 5)))))))))))));
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
#line 251 "mode_info.m"
}

#line 249 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_last_checkpoint_insts_3_p_0(
#line 249 "mode_info.m"
  MR_Word check_hlds__mode_info__LastCheckpointInsts_4,
#line 249 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 249 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 249 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));

#line 618 "mode_info.m"
    {
#line 618 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__LastCheckpointInsts_4));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 618 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 5)))))))))))));
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
#line 249 "mode_info.m"
}

#line 247 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(
#line 247 "mode_info.m"
  MR_Word check_hlds__mode_info__NondetLiveVars_4,
#line 247 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 247 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 247 "mode_info.m"
{
#line 616 "mode_info.m"
  {
#line 616 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));

#line 616 "mode_info.m"
    {
#line 616 "mode_info.m"
      MR_Word base;
#line 616 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 616 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 616 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_6_6));
#line 616 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 616 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 616 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 616 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 616 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 616 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__NondetLiveVars_4));
#line 616 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 616 "mode_info.m"
    }
#line 616 "mode_info.m"
  }
#line 247 "mode_info.m"
}

#line 245 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_live_vars_3_p_0(
#line 245 "mode_info.m"
  MR_Word check_hlds__mode_info__LiveVarsList_4,
#line 245 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 245 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 245 "mode_info.m"
{
#line 614 "mode_info.m"
  {
#line 614 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 614 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));

#line 614 "mode_info.m"
    {
#line 614 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__LiveVarsList_4));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 5)))))))))))));
#line 614 "mode_info.m"
    }
#line 614 "mode_info.m"
    {
#line 614 "mode_info.m"
      MR_Word base;
#line 614 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 614 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 614 "mode_info.m"
    }
#line 614 "mode_info.m"
  }
#line 245 "mode_info.m"
}

#line 243 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_delay_info_3_p_0(
#line 243 "mode_info.m"
  MR_Word check_hlds__mode_info__DelayInfo_4,
#line 243 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 243 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 243 "mode_info.m"
{
#line 613 "mode_info.m"
  {
#line 613 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));

#line 613 "mode_info.m"
    {
#line 613 "mode_info.m"
      MR_Word base;
#line 613 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 613 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_6_6));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__DelayInfo_4));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 613 "mode_info.m"
    }
#line 613 "mode_info.m"
  }
#line 243 "mode_info.m"
}

#line 241 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_var_types_3_p_0(
#line 241 "mode_info.m"
  MR_Word check_hlds__mode_info__VarTypes_4,
#line 241 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 241 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 241 "mode_info.m"
{
#line 599 "mode_info.m"
  {
#line 599 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 599 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));

#line 599 "mode_info.m"
    {
#line 599 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__VarTypes_4));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 5)))))))))))));
#line 599 "mode_info.m"
    }
#line 599 "mode_info.m"
    {
#line 599 "mode_info.m"
      MR_Word base;
#line 599 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 599 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 599 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 599 "mode_info.m"
    }
#line 599 "mode_info.m"
  }
#line 241 "mode_info.m"
}

#line 239 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_varset_3_p_0(
#line 239 "mode_info.m"
  MR_Word check_hlds__mode_info__VarSet_4,
#line 239 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 239 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 239 "mode_info.m"
{
#line 598 "mode_info.m"
  {
#line 598 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 598 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 598 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));

#line 598 "mode_info.m"
    {
#line 598 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__VarSet_4));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 5)))))))))))));
#line 598 "mode_info.m"
    }
#line 598 "mode_info.m"
    {
#line 598 "mode_info.m"
      MR_Word base;
#line 598 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 598 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 598 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 598 "mode_info.m"
    }
#line 598 "mode_info.m"
  }
#line 239 "mode_info.m"
}

#line 237 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(
#line 237 "mode_info.m"
  MR_Word check_hlds__mode_info__OldLiveVars_4,
#line 237 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_13,
#line 237 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_14)
#line 237 "mode_info.m"
{
#line 721 "mode_info.m"
  {
#line 721 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeInfo_19_19;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__OldLiveVarsList_6;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars0_8;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars_9;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars_10;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__DelayInfo0_11;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__DelayInfo_12;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_15_15;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_16_16;
#line 721 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_29_29;
#line 572 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_30_30;
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
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_61_61;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_62_62;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_64_64;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_65_65;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_79_79;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_80_80;
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
    MR_Word check_hlds__mode_info__V_81_81;

#line 722 "mode_info.m"
    {
#line 722 "mode_info.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_info__OldLiveVars_4, &check_hlds__mode_info__OldLiveVarsList_6);
    }
#line 572 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 0)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 1)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 2)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 3)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 4)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 5)));
#line 572 "mode_info.m"
    check_hlds__mode_info__NondetLiveVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 6)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 7)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 0)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 1)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 2)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 3)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 4)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 5)));
#line 572 "mode_info.m"
    check_hlds__mode_info__LiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 6)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 7)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 8)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 10)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 12)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 13)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_21_21, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 11563 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeInfo_19_19 = (MR_Word) &check_hlds__mode_info_scalar_common_1[0];
#line 725 "mode_info.m"
    {
#line 725 "mode_info.m"
      mercury__bag__det_remove_list_3_p_0(check_hlds__mode_info__TypeInfo_19_19, check_hlds__mode_info__OldLiveVarsList_6, check_hlds__mode_info__LiveVars0_7, &check_hlds__mode_info__LiveVars_9);
    }
#line 726 "mode_info.m"
    {
#line 726 "mode_info.m"
      mercury__bag__det_remove_list_3_p_0(check_hlds__mode_info__TypeInfo_19_19, check_hlds__mode_info__OldLiveVarsList_6, check_hlds__mode_info__NondetLiveVars0_8, &check_hlds__mode_info__NondetLiveVars_10);
    }
#line 727 "mode_info.m"
    {
#line 727 "mode_info.m"
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__mode_info__LiveVars_9, check_hlds__mode_info__STATE_VARIABLE_MI_0_13, &check_hlds__mode_info__STATE_VARIABLE_MI_15_15);
    }
#line 616 "mode_info.m"
    check_hlds__mode_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_15_15, (MR_Integer) 0)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_15_15, (MR_Integer) 1)));
#line 616 "mode_info.m"
    check_hlds__mode_info__DelayInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_15_15, (MR_Integer) 2)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_15_15, (MR_Integer) 3)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_15_15, (MR_Integer) 4)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_15_15, (MR_Integer) 5)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_15_15, (MR_Integer) 6)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_15_15, (MR_Integer) 7)));
#line 616 "mode_info.m"
    {
#line 616 "mode_info.m"
      check_hlds__mode_info__STATE_VARIABLE_MI_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 616 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, 0) = ((MR_Box) (check_hlds__mode_info__V_61_61));
#line 616 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, 1) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 616 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, 2) = ((MR_Box) (check_hlds__mode_info__DelayInfo0_11));
#line 616 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, 3) = ((MR_Box) (check_hlds__mode_info__V_64_64));
#line 616 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, 4) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 616 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, 5) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 616 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, 6) = ((MR_Box) (check_hlds__mode_info__NondetLiveVars_10));
#line 616 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, 7) = ((MR_Box) (check_hlds__mode_info__V_68_68));
#line 616 "mode_info.m"
    }
#line 733 "mode_info.m"
    {
#line 733 "mode_info.m"
      check_hlds__delay_info__delay_info_bind_var_list_3_p_0(check_hlds__mode_info__OldLiveVarsList_6, check_hlds__mode_info__DelayInfo0_11, &check_hlds__mode_info__DelayInfo_12);
    }
#line 613 "mode_info.m"
    check_hlds__mode_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 0)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 1)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 2)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 3)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 4)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 5)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 6)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 7)));
#line 613 "mode_info.m"
    {
#line 613 "mode_info.m"
      MR_Word base;
#line 613 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 613 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_14 = base;
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_79_79));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_80_80));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__DelayInfo_12));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_82_82));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_83_83));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_84_84));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_85_85));
#line 613 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_86_86));
#line 613 "mode_info.m"
    }
#line 721 "mode_info.m"
  }
#line 237 "mode_info.m"
}

#line 235 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_add_live_vars_3_p_0(
#line 235 "mode_info.m"
  MR_Word check_hlds__mode_info__NewLiveVars_4,
#line 235 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_11,
#line 235 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_12)
#line 235 "mode_info.m"
{
#line 709 "mode_info.m"
  {
#line 709 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeInfo_16_16;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__NewLiveVarsList_6;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars0_8;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars_9;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars_10;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_13_13;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_58_58;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_60_60;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_61_61;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_62_62;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_63_63;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_64_64;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_65_65;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66;
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
    MR_Word check_hlds__mode_info__V_26_26;
#line 572 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_27_27;
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
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67;
#line 614 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_68_68;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_70_70;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_71_71;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_72_72;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_74_74;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_75_75;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_76_76;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_77_77;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_78_78;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_79_79;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_80_80;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_81_81;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_82_82;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_83_83;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_84_84;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_85_85;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_86_86;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_87_87;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_88_88;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_89_89;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_73_73;

#line 710 "mode_info.m"
    {
#line 710 "mode_info.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_info__NewLiveVars_4, &check_hlds__mode_info__NewLiveVarsList_6);
    }
#line 572 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 0)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 1)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 2)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 3)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 4)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 5)));
#line 572 "mode_info.m"
    check_hlds__mode_info__NondetLiveVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 6)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 7)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 0)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 1)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 2)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 3)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 4)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 5)));
#line 572 "mode_info.m"
    check_hlds__mode_info__LiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 6)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 7)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 8)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 10)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 12)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 13)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 11889 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeInfo_16_16 = (MR_Word) &check_hlds__mode_info_scalar_common_1[0];
#line 713 "mode_info.m"
    {
#line 713 "mode_info.m"
      mercury__bag__insert_list_3_p_0(check_hlds__mode_info__TypeInfo_16_16, check_hlds__mode_info__NewLiveVarsList_6, check_hlds__mode_info__LiveVars0_7, &check_hlds__mode_info__LiveVars_9);
    }
#line 714 "mode_info.m"
    {
#line 714 "mode_info.m"
      mercury__bag__insert_list_3_p_0(check_hlds__mode_info__TypeInfo_16_16, check_hlds__mode_info__NewLiveVarsList_6, check_hlds__mode_info__NondetLiveVars0_8, &check_hlds__mode_info__NondetLiveVars_10);
    }
#line 614 "mode_info.m"
    check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 0)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 1)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 2)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 3)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 4)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 5)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 6)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 7)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 0)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 1)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 2)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 3)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 4)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 5)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 6)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 7)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 8)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_76_76 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 10)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_80_80 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 12)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 13)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_84_84 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_85_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_86_86 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_87_87 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_88_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_89_89 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_58_58, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    {
#line 614 "mode_info.m"
      check_hlds__mode_info__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_59_59, 0) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_59_59, 1) = ((MR_Box) (check_hlds__mode_info__V_68_68));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_59_59, 2) = ((MR_Box) (check_hlds__mode_info__V_69_69));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_59_59, 3) = ((MR_Box) (check_hlds__mode_info__V_70_70));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_59_59, 4) = ((MR_Box) (check_hlds__mode_info__V_71_71));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_59_59, 5) = ((MR_Box) (check_hlds__mode_info__V_72_72));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_59_59, 6) = ((MR_Box) (check_hlds__mode_info__LiveVars_9));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_59_59, 7) = ((MR_Box) (check_hlds__mode_info__V_74_74));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_59_59, 8) = ((MR_Box) (check_hlds__mode_info__V_75_75));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_59_59, 9) = ((MR_Box) ((check_hlds__mode_info__V_76_76 | ((((check_hlds__mode_info__V_77_77 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_78_78 << (MR_Integer) 2)))))));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_59_59, 10) = ((MR_Box) (check_hlds__mode_info__V_79_79));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_59_59, 11) = ((MR_Box) ((check_hlds__mode_info__V_80_80 | ((check_hlds__mode_info__V_81_81 << (MR_Integer) 1)))));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_59_59, 12) = ((MR_Box) (check_hlds__mode_info__V_82_82));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_59_59, 13) = ((MR_Box) (check_hlds__mode_info__V_83_83));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_59_59, 14) = ((MR_Box) ((check_hlds__mode_info__V_84_84 | ((((check_hlds__mode_info__V_85_85 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_86_86 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_87_87 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_88_88 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_89_89 << (MR_Integer) 5)))))))))))));
#line 614 "mode_info.m"
    }
#line 614 "mode_info.m"
    {
#line 614 "mode_info.m"
      check_hlds__mode_info__STATE_VARIABLE_MI_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_13_13, 0) = ((MR_Box) (check_hlds__mode_info__V_60_60));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_13_13, 1) = ((MR_Box) (check_hlds__mode_info__V_61_61));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_13_13, 2) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_13_13, 3) = ((MR_Box) (check_hlds__mode_info__V_63_63));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_13_13, 4) = ((MR_Box) (check_hlds__mode_info__V_64_64));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_13_13, 5) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_13_13, 6) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 614 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_13_13, 7) = ((MR_Box) (check_hlds__mode_info__V_59_59));
#line 614 "mode_info.m"
    }
#line 716 "mode_info.m"
    {
#line 716 "mode_info.m"
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__mode_info__NondetLiveVars_10, check_hlds__mode_info__STATE_VARIABLE_MI_13_13, check_hlds__mode_info__STATE_VARIABLE_MI_12);
#line 716 "mode_info.m"
      return;
    }
#line 709 "mode_info.m"
  }
#line 235 "mode_info.m"
}

#line 233 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_p_0(
#line 233 "mode_info.m"
  MR_Word check_hlds__mode_info__INC_4,
#line 233 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 233 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 233 "mode_info.m"
{
#line 611 "mode_info.m"
  {
#line 611 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 611 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 611 "mode_info.m"
    {
#line 611 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__INC_4 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 5)))))))))))));
#line 611 "mode_info.m"
    }
#line 611 "mode_info.m"
    {
#line 611 "mode_info.m"
      MR_Word base;
#line 611 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 611 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 611 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 611 "mode_info.m"
    }
#line 611 "mode_info.m"
  }
#line 233 "mode_info.m"
}

#line 231 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_need_to_requantify_3_p_0(
#line 231 "mode_info.m"
  MR_Word check_hlds__mode_info__NTRQ_4,
#line 231 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 231 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 231 "mode_info.m"
{
#line 609 "mode_info.m"
  {
#line 609 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 609 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) & (MR_Integer) 1);

#line 609 "mode_info.m"
    {
#line 609 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) ((check_hlds__mode_info__NTRQ_4 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 5)))))))))))));
#line 609 "mode_info.m"
    }
#line 609 "mode_info.m"
    {
#line 609 "mode_info.m"
      MR_Word base;
#line 609 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 609 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 609 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 609 "mode_info.m"
    }
#line 609 "mode_info.m"
  }
#line 231 "mode_info.m"
}

#line 229 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_warnings_3_p_0(
#line 229 "mode_info.m"
  MR_Word check_hlds__mode_info__Warnings_4,
#line 229 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 229 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 229 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
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
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));

#line 607 "mode_info.m"
    {
#line 607 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__Warnings_4));
#line 607 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 5)))))))))))));
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
#line 229 "mode_info.m"
}

#line 227 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_errors_3_p_0(
#line 227 "mode_info.m"
  MR_Word check_hlds__mode_info__Errors_4,
#line 227 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 227 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 227 "mode_info.m"
{
#line 606 "mode_info.m"
  {
#line 606 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));

#line 606 "mode_info.m"
    {
#line 606 "mode_info.m"
      MR_Word base;
#line 606 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 606 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_6_6));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__Errors_4));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 606 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 606 "mode_info.m"
    }
#line 606 "mode_info.m"
  }
#line 227 "mode_info.m"
}

#line 225 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_locked_vars_3_p_0(
#line 225 "mode_info.m"
  MR_Word check_hlds__mode_info__LockedVars_4,
#line 225 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 225 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 225 "mode_info.m"
{
#line 604 "mode_info.m"
  {
#line 604 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 604 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 604 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));

#line 604 "mode_info.m"
    {
#line 604 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__LockedVars_4));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 5)))))))))))));
#line 604 "mode_info.m"
    }
#line 604 "mode_info.m"
    {
#line 604 "mode_info.m"
      MR_Word base;
#line 604 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 604 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 604 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 604 "mode_info.m"
    }
#line 604 "mode_info.m"
  }
#line 225 "mode_info.m"
}

#line 223 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_instmap_3_p_0(
#line 223 "mode_info.m"
  MR_Word check_hlds__mode_info__InstMap_4,
#line 223 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_9,
#line 223 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_10)
#line 223 "mode_info.m"
{
#line 680 "mode_info.m"
  {
#line 680 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 680 "mode_info.m"
    MR_Word check_hlds__mode_info__InstMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 1)));
#line 680 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_11_11;
#line 680 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 0)));
#line 680 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 2)));
#line 680 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 3)));
#line 680 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 4)));
#line 680 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 5)));
#line 680 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 6)));
#line 680 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 7)));

#line 682 "mode_info.m"
    {
#line 682 "mode_info.m"
      check_hlds__mode_info__STATE_VARIABLE_MI_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 682 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 0) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 682 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 1) = ((MR_Box) (check_hlds__mode_info__InstMap_4));
#line 682 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 2) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 682 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 3) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 682 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 4) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 682 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 5) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 682 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 6) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 682 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 7) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 682 "mode_info.m"
    }
#line 684 "mode_info.m"
    {
#line 684 "mode_info.m"
      check_hlds__mode_info__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__mode_info__InstMap_4);
    }
#line 684 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 685 "mode_info.m"
      {
#line 685 "mode_info.m"
        check_hlds__mode_info__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__mode_info__InstMap0_6);
      }
#line 690 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 687 "mode_info.m"
      {
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__DelayInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 2)));
#line 687 "mode_info.m"
        MR_Word check_hlds__mode_info__DelayInfo_8;
#line 571 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 0)));
#line 571 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 1)));
#line 571 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 3)));
#line 571 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 4)));
#line 571 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 5)));
#line 571 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 6)));
#line 571 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 7)));
#line 613 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39;
#line 613 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40;
#line 613 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42;
#line 613 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43;
#line 613 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44;
#line 613 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45;
#line 613 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46;
#line 613 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41;

#line 688 "mode_info.m"
        {
#line 688 "mode_info.m"
          check_hlds__delay_info__delay_info_bind_all_vars_2_p_0(check_hlds__mode_info__DelayInfo0_7, &check_hlds__mode_info__DelayInfo_8);
        }
#line 613 "mode_info.m"
        check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 0)));
#line 613 "mode_info.m"
        check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 1)));
#line 613 "mode_info.m"
        check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 2)));
#line 613 "mode_info.m"
        check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 3)));
#line 613 "mode_info.m"
        check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 4)));
#line 613 "mode_info.m"
        check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 5)));
#line 613 "mode_info.m"
        check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 6)));
#line 613 "mode_info.m"
        check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 7)));
#line 613 "mode_info.m"
        {
#line 613 "mode_info.m"
          MR_Word base;
#line 613 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 613 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_10 = base;
#line 613 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_39_39));
#line 613 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_40_40));
#line 613 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__DelayInfo_8));
#line 613 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_42_42));
#line 613 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 613 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 613 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 613 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 613 "mode_info.m"
        }
#line 687 "mode_info.m"
      }
#line 690 "mode_info.m"
    else
#line 689 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_10 = check_hlds__mode_info__STATE_VARIABLE_MI_11_11;
#line 680 "mode_info.m"
  }
#line 223 "mode_info.m"
}

#line 221 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_unset_call_context_2_p_0(
#line 221 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_4,
#line 221 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_5)
#line 221 "mode_info.m"
{
#line 675 "mode_info.m"
  {
#line 675 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 0)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 1)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 2)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 3)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 5)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 6)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 7)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 4)));

#line 602 "mode_info.m"
    {
#line 602 "mode_info.m"
      MR_Word base;
#line 602 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 602 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_5 = base;
#line 602 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 602 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 602 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 602 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 602 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 602 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 602 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 602 "mode_info.m"
    }
#line 675 "mode_info.m"
  }
#line 221 "mode_info.m"
}

#line 219 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(
#line 219 "mode_info.m"
  MR_Integer check_hlds__mode_info__ArgNum_4,
#line 219 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11,
#line 219 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12)
#line 219 "mode_info.m"
{
#line 658 "mode_info.m"
  {
#line 658 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 4)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 0)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 1)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 2)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 3)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 5)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 6)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 7)));

#line 664 "mode_info.m"
    if ((check_hlds__mode_info__ModeContext0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 671 "mode_info.m"
      {
#line 672 "mode_info.m"
        {
#line 672 "mode_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_set_call_arg_context\'/3", (MR_String) "uninitialized");
#line 672 "mode_info.m"
          return;
        }
#line 671 "mode_info.m"
      }
#line 664 "mode_info.m"
    else
#line 664 "mode_info.m"
      if (((MR_tag((MR_Word) check_hlds__mode_info__ModeContext0_6)) == (MR_mktag((MR_Integer) 1))))
#line 661 "mode_info.m"
        {
#line 661 "mode_info.m"
          MR_Word check_hlds__mode_info__CallId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__ModeContext0_6, (MR_Integer) 0)));
#line 661 "mode_info.m"
          MR_Word check_hlds__mode_info__V_16_16;
#line 661 "mode_info.m"
          MR_Integer check_hlds__mode_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__ModeContext0_6, (MR_Integer) 1)));

#line 662 "mode_info.m"
          {
#line 662 "mode_info.m"
            check_hlds__mode_info__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "mode_info.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_16_16, 0) = ((MR_Box) (check_hlds__mode_info__CallId_7));
#line 662 "mode_info.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_16_16, 1) = ((MR_Box) (check_hlds__mode_info__ArgNum_4));
#line 662 "mode_info.m"
          }
#line 602 "mode_info.m"
          {
#line 602 "mode_info.m"
            MR_Word base;
#line 602 "mode_info.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 602 "mode_info.m"
            *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12 = base;
#line 602 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 602 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 602 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 602 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 602 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 602 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 602 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 602 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 602 "mode_info.m"
          }
#line 661 "mode_info.m"
        }
#line 664 "mode_info.m"
      else
#line 665 "mode_info.m"
        *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12 = check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11;
#line 658 "mode_info.m"
  }
#line 219 "mode_info.m"
}

#line 217 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_call_context_3_p_0(
#line 217 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 217 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_2,
#line 217 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_3)
#line 217 "mode_info.m"
{
#line 653 "mode_info.m"
  {
#line 653 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;

#line 653 "mode_info.m"
    if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 655 "mode_info.m"
      {
#line 655 "mode_info.m"
        MR_Word check_hlds__mode_info__CallId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 655 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15;
#line 602 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20;
#line 602 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21;
#line 602 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22;
#line 602 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23;
#line 602 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25;
#line 602 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26;
#line 602 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27;
#line 602 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24;

#line 656 "mode_info.m"
        {
#line 656 "mode_info.m"
          check_hlds__mode_info__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "mode_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_15_15, 0) = ((MR_Box) (check_hlds__mode_info__CallId_11));
#line 656 "mode_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 656 "mode_info.m"
        }
#line 602 "mode_info.m"
        check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 0)));
#line 602 "mode_info.m"
        check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 1)));
#line 602 "mode_info.m"
        check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 2)));
#line 602 "mode_info.m"
        check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 3)));
#line 602 "mode_info.m"
        check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 4)));
#line 602 "mode_info.m"
        check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 5)));
#line 602 "mode_info.m"
        check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 6)));
#line 602 "mode_info.m"
        check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 7)));
#line 602 "mode_info.m"
        {
#line 602 "mode_info.m"
          MR_Word base;
#line 602 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 602 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_3 = base;
#line 602 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 602 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 602 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 602 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 602 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 602 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 602 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 602 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 602 "mode_info.m"
        }
#line 655 "mode_info.m"
      }
#line 653 "mode_info.m"
    else
#line 653 "mode_info.m"
      {
#line 653 "mode_info.m"
        MR_Word check_hlds__mode_info__UnifyContext_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 653 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8;
#line 602 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30;
#line 602 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31;
#line 602 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32;
#line 602 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33;
#line 602 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35;
#line 602 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36;
#line 602 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37;
#line 602 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34;

#line 654 "mode_info.m"
        {
#line 654 "mode_info.m"
          check_hlds__mode_info__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "mode_info.m"
          MR_hl_field(MR_mktag(2), check_hlds__mode_info__V_8_8, 0) = ((MR_Box) (check_hlds__mode_info__UnifyContext_4));
#line 654 "mode_info.m"
          MR_hl_field(MR_mktag(2), check_hlds__mode_info__V_8_8, 1) = ((MR_Box) ((MR_Integer) 0));
#line 654 "mode_info.m"
        }
#line 602 "mode_info.m"
        check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 0)));
#line 602 "mode_info.m"
        check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 1)));
#line 602 "mode_info.m"
        check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 2)));
#line 602 "mode_info.m"
        check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 3)));
#line 602 "mode_info.m"
        check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 4)));
#line 602 "mode_info.m"
        check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 5)));
#line 602 "mode_info.m"
        check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 6)));
#line 602 "mode_info.m"
        check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 7)));
#line 602 "mode_info.m"
        {
#line 602 "mode_info.m"
          MR_Word base;
#line 602 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 602 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_3 = base;
#line 602 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 602 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 602 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 602 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 602 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 602 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 602 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 602 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_37_37));
#line 602 "mode_info.m"
        }
#line 653 "mode_info.m"
      }
#line 653 "mode_info.m"
  }
#line 217 "mode_info.m"
}

#line 215 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_mode_context_3_p_0(
#line 215 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeContext_4,
#line 215 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 215 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 215 "mode_info.m"
{
#line 602 "mode_info.m"
  {
#line 602 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));

#line 602 "mode_info.m"
    {
#line 602 "mode_info.m"
      MR_Word base;
#line 602 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 602 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 602 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_6_6));
#line 602 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 602 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 602 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 602 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__ModeContext_4));
#line 602 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 602 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 602 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 602 "mode_info.m"
    }
#line 602 "mode_info.m"
  }
#line 215 "mode_info.m"
}

#line 213 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_context_3_p_0(
#line 213 "mode_info.m"
  MR_Word check_hlds__mode_info__Context_4,
#line 213 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 213 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 213 "mode_info.m"
{
#line 601 "mode_info.m"
  {
#line 601 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));

#line 601 "mode_info.m"
    {
#line 601 "mode_info.m"
      MR_Word base;
#line 601 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 601 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 601 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_6_6));
#line 601 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 601 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 601 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 601 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 601 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__Context_4));
#line 601 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 601 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 601 "mode_info.m"
    }
#line 601 "mode_info.m"
  }
#line 213 "mode_info.m"
}

#line 211 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_proc_id_3_p_0(
#line 211 "mode_info.m"
  MR_Integer check_hlds__mode_info__ProcId_4,
#line 211 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 211 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 211 "mode_info.m"
{
#line 597 "mode_info.m"
  {
#line 597 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 597 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));

#line 597 "mode_info.m"
    {
#line 597 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__ProcId_4));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 5)))))))))))));
#line 597 "mode_info.m"
    }
#line 597 "mode_info.m"
    {
#line 597 "mode_info.m"
      MR_Word base;
#line 597 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 597 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 597 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 597 "mode_info.m"
    }
#line 597 "mode_info.m"
  }
#line 211 "mode_info.m"
}

#line 209 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_pred_id_3_p_0(
#line 209 "mode_info.m"
  MR_Word check_hlds__mode_info__PredId_4,
#line 209 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 209 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 209 "mode_info.m"
{
#line 596 "mode_info.m"
  {
#line 596 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 596 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 596 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));

#line 596 "mode_info.m"
    {
#line 596 "mode_info.m"
      check_hlds__mode_info__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 0) = ((MR_Box) (check_hlds__mode_info__PredId_4));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 7) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 8) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 9) = ((MR_Box) ((check_hlds__mode_info__V_24_24 | ((((check_hlds__mode_info__V_25_25 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_26_26 << (MR_Integer) 2)))))));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 10) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 11) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)))));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 12) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 13) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_7_7, 14) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_35_35 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_36_36 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 5)))))))))))));
#line 596 "mode_info.m"
    }
#line 596 "mode_info.m"
    {
#line 596 "mode_info.m"
      MR_Word base;
#line 596 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 596 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 596 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 596 "mode_info.m"
    }
#line 596 "mode_info.m"
  }
#line 209 "mode_info.m"
}

#line 207 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_module_info_3_p_0(
#line 207 "mode_info.m"
  MR_Word check_hlds__mode_info__ModuleInfo_4,
#line 207 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_5,
#line 207 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 207 "mode_info.m"
{
#line 595 "mode_info.m"
  {
#line 595 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 1)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 2)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 3)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 4)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 5)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 6)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 7)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_5, (MR_Integer) 0)));

#line 595 "mode_info.m"
    {
#line 595 "mode_info.m"
      MR_Word base;
#line 595 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 595 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = base;
#line 595 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__ModuleInfo_4));
#line 595 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_7_7));
#line 595 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 595 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 595 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 595 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 595 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 595 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 595 "mode_info.m"
    }
#line 595 "mode_info.m"
  }
#line 207 "mode_info.m"
}

#line 202 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(
#line 202 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 202 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 202 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 592 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 592 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 592 "mode_info.m"
  }
#line 202 "mode_info.m"
}

#line 200 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_make_ground_terms_unique_2_p_0(
#line 200 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 200 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 200 "mode_info.m"
{
#line 590 "mode_info.m"
  {
#line 590 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 590 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;

#line 590 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 590 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 590 "mode_info.m"
  }
#line 200 "mode_info.m"
}

#line 198 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_had_from_ground_term_2_p_0(
#line 198 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 198 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 198 "mode_info.m"
{
#line 588 "mode_info.m"
  {
#line 588 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 588 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;

#line 588 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 588 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 588 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 588 "mode_info.m"
  }
#line 198 "mode_info.m"
}

#line 196 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_in_from_ground_term_2_p_0(
#line 196 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 196 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 196 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;

#line 586 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 586 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 586 "mode_info.m"
  }
#line 196 "mode_info.m"
}

#line 194 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_p_0(
#line 194 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 194 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 194 "mode_info.m"
{
#line 581 "mode_info.m"
  {
#line 581 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 581 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 581 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
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
    *check_hlds__mode_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 581 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 581 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 581 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 581 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 581 "mode_info.m"
  }
#line 194 "mode_info.m"
}

#line 193 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_checking_extra_goals_2_p_0(
#line 193 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 193 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__2_2)
#line 193 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
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
    *check_hlds__mode_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 584 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 584 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 584 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 584 "mode_info.m"
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
#line 583 "mode_info.m"
  {
#line 583 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 583 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
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
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 583 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 583 "mode_info.m"
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
#line 579 "mode_info.m"
  {
#line 579 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 579 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 579 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
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
    *check_hlds__mode_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 579 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 579 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 579 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 579 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 579 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 579 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 579 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 579 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 579 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 579 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 579 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 579 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 579 "mode_info.m"
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
#line 578 "mode_info.m"
  {
#line 578 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 578 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 578 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;

#line 578 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 578 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 578 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 578 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 578 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 578 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 578 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 578 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 578 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 578 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 578 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 578 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 578 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 578 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 578 "mode_info.m"
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
    *check_hlds__mode_info__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 577 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 577 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 577 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 577 "mode_info.m"
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
#line 576 "mode_info.m"
  {
#line 576 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 576 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 576 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;

#line 576 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 576 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 576 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 576 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 576 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 576 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 576 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 576 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 576 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 576 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 576 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 576 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 576 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 576 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 576 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 576 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_24_24;
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 574 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
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
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 574 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 574 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 574 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 574 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 574 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 574 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 574 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 574 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 574 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 574 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 574 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 573 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;

#line 573 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 573 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 573 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
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
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
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
    check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 572 "mode_info.m"
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
#line 571 "mode_info.m"
  {
#line 571 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 571 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;

#line 571 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 571 "mode_info.m"
    check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 571 "mode_info.m"
    check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 571 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 571 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 571 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 571 "mode_info.m"
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
#line 559 "mode_info.m"
  {
#line 559 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 559 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 559 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;

#line 559 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 559 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 559 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 559 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 559 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 559 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 559 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 559 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 559 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 559 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 559 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 559 "mode_info.m"
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
#line 563 "mode_info.m"
  {
#line 563 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 563 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 563 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
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
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
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
    check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 563 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 563 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 563 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 563 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 563 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 563 "mode_info.m"
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
#line 558 "mode_info.m"
  {
#line 558 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 558 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 558 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;

#line 558 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 558 "mode_info.m"
    check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 558 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 558 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 558 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 558 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 558 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 558 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 558 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 558 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 558 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 558 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 558 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 558 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 558 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 558 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 558 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 558 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 558 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 558 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 558 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 558 "mode_info.m"
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
#line 759 "mode_info.m"
  {
#line 759 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 759 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVarsBag_5;
#line 759 "mode_info.m"
    MR_Word check_hlds__mode_info__SortedList_6;
#line 759 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 0)));
#line 572 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 1)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 2)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 3)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 4)));
#line 572 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 5)));
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
    check_hlds__mode_info__LiveVarsBag_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 6)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 7)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 8)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 13)));
#line 572 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 572 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 761 "mode_info.m"
    {
#line 761 "mode_info.m"
      mercury__bag__to_list_without_duplicates_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVarsBag_5, &check_hlds__mode_info__SortedList_6);
    }
#line 762 "mode_info.m"
    {
#line 762 "mode_info.m"
      parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_info__SortedList_6, check_hlds__mode_info__LiveVars_4);
#line 762 "mode_info.m"
      return;
    }
#line 759 "mode_info.m"
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
#line 696 "mode_info.m"
  {
#line 696 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 698 "mode_info.m"
    {
#line 698 "mode_info.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__mode_info__Errors_5, check_hlds__mode_info__NumErrors_4);
#line 698 "mode_info.m"
      return;
    }
#line 696 "mode_info.m"
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
#line 569 "mode_info.m"
  {
#line 569 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 569 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 569 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;

#line 569 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 569 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 569 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 569 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 569 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 569 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 567 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
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
    *check_hlds__mode_info__HeadVar__2_2 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 567 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 567 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
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
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 566 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 566 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 566 "mode_info.m"
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
#line 565 "mode_info.m"
  {
#line 565 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 565 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;

#line 565 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 565 "mode_info.m"
    check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 565 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 565 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 565 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 565 "mode_info.m"
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
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 564 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
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
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
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
    check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 564 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 564 "mode_info.m"
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
#line 562 "mode_info.m"
  {
#line 562 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 562 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
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
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
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
#line 561 "mode_info.m"
  {
#line 561 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 561 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 561 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 561 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 561 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 561 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 561 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 561 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;

#line 561 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 561 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 561 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 561 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 561 "mode_info.m"
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
#line 560 "mode_info.m"
  {
#line 560 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 560 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 560 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 560 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 560 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 560 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 560 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 560 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;

#line 560 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 560 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 560 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 560 "mode_info.m"
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
#line 557 "mode_info.m"
  {
#line 557 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 557 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 557 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;

#line 557 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 557 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 557 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 557 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 557 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 557 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 557 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 557 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 557 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 557 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 557 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 557 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 557 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 557 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 557 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 557 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 557 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 557 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 557 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 557 "mode_info.m"
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
#line 556 "mode_info.m"
  {
#line 556 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 556 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;

#line 556 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 556 "mode_info.m"
    check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 556 "mode_info.m"
    check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 556 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 556 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 556 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 556 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 556 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 556 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 556 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 556 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 556 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 556 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 556 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 556 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 556 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 556 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 556 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 556 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 556 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 556 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 556 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 556 "mode_info.m"
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
#line 555 "mode_info.m"
  {
#line 555 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 555 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_12_12;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 555 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;

#line 555 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 0)));
#line 555 "mode_info.m"
    check_hlds__mode_info__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 1)));
#line 555 "mode_info.m"
    check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 2)));
#line 555 "mode_info.m"
    check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 3)));
#line 555 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 4)));
#line 555 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 5)));
#line 555 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 6)));
#line 555 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 7)));
#line 555 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 8)));
#line 555 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 555 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 555 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 555 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 10)));
#line 555 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 555 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 555 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 12)));
#line 555 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 13)));
#line 555 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) & (MR_Integer) 1);
#line 555 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 555 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 555 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 555 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 555 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_4_4, (MR_Integer) 14)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 555 "mode_info.m"
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
#line 649 "mode_info.m"
  {
#line 649 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 649 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 651 "mode_info.m"
    {
#line 651 "mode_info.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Insts_4);
#line 651 "mode_info.m"
      return;
    }
#line 649 "mode_info.m"
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
#line 645 "mode_info.m"
  {
#line 645 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 647 "mode_info.m"
    {
#line 647 "mode_info.m"
      hlds__hlds_module__module_info_get_mode_table_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Modes_4);
#line 647 "mode_info.m"
      return;
    }
#line 645 "mode_info.m"
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
#line 641 "mode_info.m"
  {
#line 641 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 643 "mode_info.m"
    {
#line 643 "mode_info.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Preds_4);
#line 643 "mode_info.m"
      return;
    }
#line 641 "mode_info.m"
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
#line 554 "mode_info.m"
  {
#line 554 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_4_4;
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5;
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6;
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 554 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;

#line 554 "mode_info.m"
    *check_hlds__mode_info__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 554 "mode_info.m"
    check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 554 "mode_info.m"
    check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 554 "mode_info.m"
    check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 554 "mode_info.m"
    check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 554 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 554 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 554 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 554 "mode_info.m"
  }
#line 155 "mode_info.m"
}

#line 109 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_init_9_p_0(
#line 109 "mode_info.m"
  MR_Word check_hlds__mode_info__ModuleInfo_10,
#line 109 "mode_info.m"
  MR_Word check_hlds__mode_info__PredId_11,
#line 109 "mode_info.m"
  MR_Integer check_hlds__mode_info__ProcId_12,
#line 109 "mode_info.m"
  MR_Word check_hlds__mode_info__Context_13,
#line 109 "mode_info.m"
  MR_Word check_hlds__mode_info__LiveVars_14,
#line 109 "mode_info.m"
  MR_Word check_hlds__mode_info__InstMap0_15,
#line 109 "mode_info.m"
  MR_Word check_hlds__mode_info__HowToCheck_16,
#line 109 "mode_info.m"
  MR_Word check_hlds__mode_info__MayChangeProc_17,
#line 109 "mode_info.m"
  MR_Word * check_hlds__mode_info__ModeInfo_18)
#line 109 "mode_info.m"
{
#line 495 "mode_info.m"
  {
#line 495 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 495 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeCtorInfo_59_59;
#line 495 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeInfo_60_60;
#line 495 "mode_info.m"
    MR_Word check_hlds__mode_info__Globals_19;
#line 495 "mode_info.m"
    MR_Word check_hlds__mode_info__DebugModes_20;
#line 495 "mode_info.m"
    MR_Integer check_hlds__mode_info__DebugModesPredId_21;
#line 495 "mode_info.m"
    MR_Integer check_hlds__mode_info__PredIdInt_22;
#line 495 "mode_info.m"
    MR_Word check_hlds__mode_info__Debug_27;
#line 495 "mode_info.m"
    MR_Word check_hlds__mode_info__ProcInfo_28;
#line 495 "mode_info.m"
    MR_Word check_hlds__mode_info__VarSet_29;
#line 495 "mode_info.m"
    MR_Word check_hlds__mode_info__VarTypes_30;
#line 495 "mode_info.m"
    MR_Word check_hlds__mode_info__InstVarSet_31;
#line 495 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVarsBag_32;
#line 495 "mode_info.m"
    MR_Word check_hlds__mode_info__LastCheckpointInstMap_33;
#line 495 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeSubInfo_46;
#line 495 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext_47;
#line 495 "mode_info.m"
    MR_Word check_hlds__mode_info__DelayInfo_48;
#line 495 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVarsBag_50;
#line 495 "mode_info.m"
    MR_Word check_hlds__mode_info__V_57_57;
#line 495 "mode_info.m"
    MR_Word check_hlds__mode_info__V_58_58;
#line 503 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_53_53;

#line 496 "mode_info.m"
    {
#line 496 "mode_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__mode_info__ModuleInfo_10, &check_hlds__mode_info__Globals_19);
    }
#line 497 "mode_info.m"
    {
#line 497 "mode_info.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_19, (MR_Integer) 58, &check_hlds__mode_info__DebugModes_20);
    }
#line 498 "mode_info.m"
    {
#line 498 "mode_info.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__mode_info__Globals_19, (MR_Integer) 62, &check_hlds__mode_info__DebugModesPredId_21);
    }
#line 500 "mode_info.m"
    {
#line 500 "mode_info.m"
      hlds__hlds_pred__pred_id_to_int_2_p_0(check_hlds__mode_info__PredId_11, &check_hlds__mode_info__PredIdInt_22);
    }
#line 502 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__DebugModes_20 == (MR_Integer) 1);
#line 502 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 502 "mode_info.m"
      {
#line 503 "mode_info.m"
        check_hlds__mode_info__V_53_53 = (MR_Integer) 0;
#line 503 "mode_info.m"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__DebugModesPredId_21 >= check_hlds__mode_info__V_53_53);
#line 503 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 503 "mode_info.m"
          {
#line 503 "mode_info.m"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__DebugModesPredId_21 == check_hlds__mode_info__PredIdInt_22);
#line 503 "mode_info.m"
            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 503 "mode_info.m"
          }
#line 503 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 502 "mode_info.m"
      }
#line 511 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 505 "mode_info.m"
      {
#line 505 "mode_info.m"
        MR_Word check_hlds__mode_info__DebugVerbose_23;
#line 505 "mode_info.m"
        MR_Word check_hlds__mode_info__DebugMinimal_24;
#line 505 "mode_info.m"
        MR_Word check_hlds__mode_info__Statistics_25;
#line 505 "mode_info.m"
        MR_Word check_hlds__mode_info__Flags_26;

#line 505 "mode_info.m"
        {
#line 505 "mode_info.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_19, (MR_Integer) 61, &check_hlds__mode_info__DebugVerbose_23);
        }
#line 506 "mode_info.m"
        {
#line 506 "mode_info.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_19, (MR_Integer) 60, &check_hlds__mode_info__DebugMinimal_24);
        }
#line 507 "mode_info.m"
        {
#line 507 "mode_info.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_19, (MR_Integer) 59, &check_hlds__mode_info__Statistics_25);
        }
#line 509 "mode_info.m"
        {
#line 509 "mode_info.m"
          check_hlds__mode_info__Flags_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 509 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__Flags_26, 0) = ((MR_Box) ((check_hlds__mode_info__DebugVerbose_23 | ((((check_hlds__mode_info__DebugMinimal_24 << (MR_Integer) 1)) | ((check_hlds__mode_info__Statistics_25 << (MR_Integer) 2)))))));
#line 509 "mode_info.m"
        }
#line 510 "mode_info.m"
        {
#line 510 "mode_info.m"
          check_hlds__mode_info__Debug_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 510 "mode_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_info__Debug_27, 0) = ((MR_Box) (check_hlds__mode_info__Flags_26));
#line 510 "mode_info.m"
        }
#line 505 "mode_info.m"
      }
#line 511 "mode_info.m"
    else
#line 512 "mode_info.m"
      check_hlds__mode_info__Debug_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "mode_info.m"
    {
#line 515 "mode_info.m"
      hlds__hlds_module__module_info_proc_info_4_p_0(check_hlds__mode_info__ModuleInfo_10, check_hlds__mode_info__PredId_11, check_hlds__mode_info__ProcId_12, &check_hlds__mode_info__ProcInfo_28);
    }
#line 516 "mode_info.m"
    {
#line 516 "mode_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__mode_info__ProcInfo_28, &check_hlds__mode_info__VarSet_29);
    }
#line 517 "mode_info.m"
    {
#line 517 "mode_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__mode_info__ProcInfo_28, &check_hlds__mode_info__VarTypes_30);
    }
#line 518 "mode_info.m"
    {
#line 518 "mode_info.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__mode_info__ProcInfo_28, &check_hlds__mode_info__InstVarSet_31);
    }
#line 16826 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeCtorInfo_59_59 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 520 "mode_info.m"
    {
#line 520 "mode_info.m"
      check_hlds__mode_info__V_57_57 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__mode_info__TypeCtorInfo_59_59, check_hlds__mode_info__LiveVars_14);
    }
#line 16833 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeInfo_60_60 = (MR_Word) &check_hlds__mode_info_scalar_common_1[0];
#line 520 "mode_info.m"
    {
#line 520 "mode_info.m"
      mercury__bag__from_sorted_list_2_p_0(check_hlds__mode_info__TypeInfo_60_60, check_hlds__mode_info__V_57_57, &check_hlds__mode_info__LiveVarsBag_32);
    }
#line 521 "mode_info.m"
    {
#line 521 "mode_info.m"
      hlds__instmap__init_unreachable_1_p_0(&check_hlds__mode_info__LastCheckpointInstMap_33);
    }
#line 536 "mode_info.m"
    {
#line 536 "mode_info.m"
      check_hlds__mode_info__ModeSubInfo_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
#line 536 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_46, 0) = ((MR_Box) (check_hlds__mode_info__PredId_11));
#line 536 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_46, 1) = ((MR_Box) (check_hlds__mode_info__ProcId_12));
#line 536 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_46, 2) = ((MR_Box) (check_hlds__mode_info__VarSet_29));
#line 536 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_46, 3) = ((MR_Box) (check_hlds__mode_info__VarTypes_30));
#line 536 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_46, 4) = ((MR_Box) (check_hlds__mode_info__Debug_27));
#line 536 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_46, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 536 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_46, 6) = ((MR_Box) (check_hlds__mode_info__LiveVarsBag_32));
#line 536 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_46, 7) = ((MR_Box) (check_hlds__mode_info__InstVarSet_31));
#line 536 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_46, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 536 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_46, 9) = ((MR_Box) ((check_hlds__mode_info__HowToCheck_16 | ((((check_hlds__mode_info__MayChangeProc_17 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))));
#line 536 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_46, 10) = ((MR_Box) (check_hlds__mode_info__LastCheckpointInstMap_33));
#line 536 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_46, 11) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 536 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_46, 12) = ((MR_Box) (check_hlds__mode_info__InstMap0_15));
#line 536 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_46, 13) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 536 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_46, 14) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((MR_Integer) 1 << (MR_Integer) 5)))))))))))));
#line 536 "mode_info.m"
    }
#line 543 "mode_info.m"
    {
#line 543 "mode_info.m"
      check_hlds__mode_errors__mode_context_init_1_p_0(&check_hlds__mode_info__ModeContext_47);
    }
#line 544 "mode_info.m"
    {
#line 544 "mode_info.m"
      check_hlds__delay_info__delay_info_init_1_p_0(&check_hlds__mode_info__DelayInfo_48);
    }
#line 546 "mode_info.m"
    {
#line 546 "mode_info.m"
      check_hlds__mode_info__V_58_58 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__mode_info__TypeCtorInfo_59_59, check_hlds__mode_info__LiveVars_14);
    }
#line 546 "mode_info.m"
    {
#line 546 "mode_info.m"
      mercury__bag__from_sorted_list_2_p_0(check_hlds__mode_info__TypeInfo_60_60, check_hlds__mode_info__V_58_58, &check_hlds__mode_info__NondetLiveVarsBag_50);
    }
#line 549 "mode_info.m"
    {
#line 549 "mode_info.m"
      MR_Word base;
#line 549 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 549 "mode_info.m"
      *check_hlds__mode_info__ModeInfo_18 = base;
#line 549 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__ModuleInfo_10));
#line 549 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__InstMap0_15));
#line 549 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__DelayInfo_48));
#line 549 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 549 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__ModeContext_47));
#line 549 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__Context_13));
#line 549 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__NondetLiveVarsBag_50));
#line 549 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__ModeSubInfo_46));
#line 549 "mode_info.m"
    }
#line 495 "mode_info.m"
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
