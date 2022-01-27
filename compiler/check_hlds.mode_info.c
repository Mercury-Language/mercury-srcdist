/*
** Automatically generated from `mode_info.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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




#line 133 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_0[1];

#line 136 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0;

#line 139 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_1[1];

#line 142 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1;

#line 145 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_0[1];

#line 148 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_1[1];

#line 151 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_call_context_0[2];

#line 154 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_call_context_0[2];

#line 157 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_call_context_0[2];

#line 160 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_debug_flags_0_0[3];

#line 163 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_debug_flags_0_0[3];

#line 166 "check_hlds.mode_info.c"
static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_debug_flags_0_0[3];

#line 169 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0;

#line 172 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0[1];

#line 175 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_debug_flags_0[1];

#line 178 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_debug_flags_0[1];

#line 181 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_debug_flags_0[1];

#line 184 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0;

#line 187 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1;

#line 190 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_had_from_ground_term_scope_0[2];

#line 193 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_had_from_ground_term_scope_0[2];

#line 196 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_had_from_ground_term_scope_0[2];

#line 199 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0;

#line 202 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1;

#line 205 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_how_to_check_goal_0[2];

#line 208 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_how_to_check_goal_0[2];

#line 211 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_how_to_check_goal_0[2];

#line 214 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0;

#line 217 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1;

#line 220 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_dupl_for_switch_0[2];

#line 223 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_dupl_for_switch_0[2];

#line 226 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_dupl_for_switch_0[2];

#line 229 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0;

#line 232 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1;

#line 235 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_from_ground_term_scope_0[2];

#line 238 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_from_ground_term_scope_0[2];

#line 241 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_from_ground_term_scope_0[2];

#line 244 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0;

#line 247 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1;

#line 250 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_promise_purity_scope_0[2];

#line 253 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_promise_purity_scope_0[2];

#line 256 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_promise_purity_scope_0[2];

#line 259 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 262 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 265 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 268 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 271 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0;

#line 274 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1;

#line 277 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_make_ground_terms_unique_0[2];

#line 280 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_make_ground_terms_unique_0[2];

#line 283 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_make_ground_terms_unique_0[2];

#line 286 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0;

#line 289 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1;

#line 292 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_change_called_proc_0[2];

#line 295 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_change_called_proc_0[2];

#line 298 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_change_called_proc_0[2];

#line 301 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0;

#line 304 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1;

#line 307 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_init_solver_vars_0[2];

#line 310 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_init_solver_vars_0[2];

#line 313 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_init_solver_vars_0[2];

#line 316 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_0[2];

#line 319 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0;

#line 322 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_1[2];

#line 325 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1;

#line 328 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2;

#line 331 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_0[1];

#line 334 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_1[1];

#line 337 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_2[1];

#line 340 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_context_0[3];

#line 343 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_context_0[3];

#line 346 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_context_0[3];

#line 349 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

#line 352 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 355 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_info_0_0[8];

#line 358 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_info_0_0[8];

#line 361 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0;

#line 364 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0[1];

#line 367 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_info_0[1];

#line 370 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_info_0[1];

#line 373 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_info_0[1];

#line 376 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 379 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 382 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0;

#line 385 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 388 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0;

#line 391 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 394 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 397 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_warning_info_0;

#line 400 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_sub_info_0_0[24];

#line 403 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_sub_info_0_0[24];

#line 406 "check_hlds.mode_info.c"
static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_mode_sub_info_0_0[24];

#line 409 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0;

#line 412 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0[1];

#line 415 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_sub_info_0[1];

#line 418 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_sub_info_0[1];

#line 421 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_sub_info_0[1];

#line 424 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_par_conj_mode_check_0_0[2];

#line 427 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_par_conj_mode_check_0_0[2];

#line 430 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0;

#line 433 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0[1];

#line 436 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_par_conj_mode_check_0[1];

#line 439 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_par_conj_mode_check_0[1];

#line 442 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_par_conj_mode_check_0[1];

#line 445 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0;

#line 448 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1;

#line 451 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_side_0[2];

#line 454 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_side_0[2];

#line 457 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_side_0[2];

#line 460 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0;

#line 463 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1;

#line 466 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_var_lock_reason_0_2[1];

#line 469 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2;

#line 472 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3;

#line 475 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4;

#line 478 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5;

#line 481 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_0[5];

#line 484 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_1[1];

#line 487 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_var_lock_reason_0[2];

#line 490 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_var_lock_reason_0[6];

#line 493 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_var_lock_reason_0[6];

#line 496 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____call_context_0_0_10001(
#line 499 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 501 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 504 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____call_context_0_0_10001(
#line 507 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 509 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 511 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 514 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____debug_flags_0_0_10001(
#line 517 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 519 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 522 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0_10001(
#line 525 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 527 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 529 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 532 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0_10001(
#line 535 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 537 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 540 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0_10001(
#line 543 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 545 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 547 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 550 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____how_to_check_goal_0_0_10001(
#line 553 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 555 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 558 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____how_to_check_goal_0_0_10001(
#line 561 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 563 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 565 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 568 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0_10001(
#line 571 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 573 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 576 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0_10001(
#line 579 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 581 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 583 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 586 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0_10001(
#line 589 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 591 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 594 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0_10001(
#line 597 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 599 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 601 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 604 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0_10001(
#line 607 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 609 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 612 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0_10001(
#line 615 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 617 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 619 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 622 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____locked_vars_0_0_10001(
#line 625 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 627 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 630 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____locked_vars_0_0_10001(
#line 633 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 635 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 637 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 640 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0_10001(
#line 643 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 645 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 648 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0_10001(
#line 651 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 653 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 655 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 658 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_change_called_proc_0_0_10001(
#line 661 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 663 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 666 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_change_called_proc_0_0_10001(
#line 669 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 671 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 673 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 676 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_init_solver_vars_0_0_10001(
#line 679 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 681 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 684 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_init_solver_vars_0_0_10001(
#line 687 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 689 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 691 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 694 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_context_0_0_10001(
#line 697 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 699 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 702 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_context_0_0_10001(
#line 705 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 707 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 709 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 712 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0_10001(
#line 715 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 717 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 720 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0_10001(
#line 723 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 725 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 727 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 730 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0_10001(
#line 733 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 735 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 738 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0_10001(
#line 741 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 743 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 745 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 748 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0_10001(
#line 751 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 753 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 756 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0_10001(
#line 759 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 761 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 763 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 766 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0_10001(
#line 769 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 771 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 774 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0_10001(
#line 777 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 779 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 781 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 784 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____side_0_0_10001(
#line 787 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 789 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 792 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____side_0_0_10001(
#line 795 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 797 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 799 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 802 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____var_lock_reason_0_0_10001(
#line 805 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 807 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 810 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____var_lock_reason_0_0_10001(
#line 813 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 815 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 817 "check_hlds.mode_info.c"
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

#line 975 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(
#line 975 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 975 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_7,
#line 975 "mode_info.m"
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



#line 946 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0
};

#line 951 "check_hlds.mode_info.c"
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

#line 966 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0
};

#line 971 "check_hlds.mode_info.c"
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

#line 986 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0
};

#line 991 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1
};

#line 996 "check_hlds.mode_info.c"
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

#line 1010 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_call_context_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0
};

#line 1016 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_call_context_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1022 "check_hlds.mode_info.c"
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

#line 1043 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_debug_flags_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1050 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_debug_flags_0_0[3] = {
  (MR_String) "verbose",
  (MR_String) "minimal",
  (MR_String) "statistics"
};

#line 1057 "check_hlds.mode_info.c"
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

#line 1076 "check_hlds.mode_info.c"
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

#line 1091 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0
};

#line 1096 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_debug_flags_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0
  }
};

#line 1105 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_debug_flags_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0
};

#line 1110 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_debug_flags_0[1] = {
  (MR_Integer) 0
};

#line 1115 "check_hlds.mode_info.c"
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

#line 1136 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0 = {
  (MR_String) "had_from_ground_term_scope",
  (MR_Integer) 0
};

#line 1142 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1 = {
  (MR_String) "did_not_have_from_ground_term_scope",
  (MR_Integer) 1
};

#line 1148 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_had_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1
};

#line 1154 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_had_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0
};

#line 1160 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_had_from_ground_term_scope_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1166 "check_hlds.mode_info.c"
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

#line 1187 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0 = {
  (MR_String) "check_modes",
  (MR_Integer) 0
};

#line 1193 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1 = {
  (MR_String) "check_unique_modes",
  (MR_Integer) 1
};

#line 1199 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_how_to_check_goal_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1
};

#line 1205 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_how_to_check_goal_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1
};

#line 1211 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_how_to_check_goal_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1217 "check_hlds.mode_info.c"
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

#line 1238 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0 = {
  (MR_String) "in_dupl_for_switch",
  (MR_Integer) 0
};

#line 1244 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1 = {
  (MR_String) "not_in_dupl_for_switch",
  (MR_Integer) 1
};

#line 1250 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_dupl_for_switch_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1
};

#line 1256 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_dupl_for_switch_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1
};

#line 1262 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_dupl_for_switch_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1268 "check_hlds.mode_info.c"
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

#line 1289 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0 = {
  (MR_String) "in_from_ground_term_scope",
  (MR_Integer) 0
};

#line 1295 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1 = {
  (MR_String) "not_in_from_ground_term_scope",
  (MR_Integer) 1
};

#line 1301 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1
};

#line 1307 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1
};

#line 1313 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_from_ground_term_scope_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1319 "check_hlds.mode_info.c"
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

#line 1340 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0 = {
  (MR_String) "in_promise_purity_scope",
  (MR_Integer) 0
};

#line 1346 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1 = {
  (MR_String) "not_in_promise_purity_scope",
  (MR_Integer) 1
};

#line 1352 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_promise_purity_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1
};

#line 1358 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_promise_purity_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1
};

#line 1364 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_promise_purity_scope_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1370 "check_hlds.mode_info.c"
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

#line 1391 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1399 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1407 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_var_lock_reason_0,
    (MR_TypeInfo) &check_hlds__mode_info__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1416 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1424 "check_hlds.mode_info.c"
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

#line 1445 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0 = {
  (MR_String) "make_ground_terms_unique",
  (MR_Integer) 0
};

#line 1451 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1 = {
  (MR_String) "do_not_make_ground_terms_unique",
  (MR_Integer) 1
};

#line 1457 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_make_ground_terms_unique_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1
};

#line 1463 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_make_ground_terms_unique_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0
};

#line 1469 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_make_ground_terms_unique_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1475 "check_hlds.mode_info.c"
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

#line 1496 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0 = {
  (MR_String) "may_change_called_proc",
  (MR_Integer) 0
};

#line 1502 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1 = {
  (MR_String) "may_not_change_called_proc",
  (MR_Integer) 1
};

#line 1508 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_change_called_proc_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1
};

#line 1514 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_change_called_proc_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1
};

#line 1520 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_change_called_proc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1526 "check_hlds.mode_info.c"
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

#line 1547 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0 = {
  (MR_String) "may_init_solver_vars",
  (MR_Integer) 0
};

#line 1553 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1 = {
  (MR_String) "may_not_init_solver_vars",
  (MR_Integer) 1
};

#line 1559 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_init_solver_vars_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1
};

#line 1565 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_init_solver_vars_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1
};

#line 1571 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_init_solver_vars_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1577 "check_hlds.mode_info.c"
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

#line 1598 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1604 "check_hlds.mode_info.c"
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

#line 1619 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_side_0
};

#line 1625 "check_hlds.mode_info.c"
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

#line 1640 "check_hlds.mode_info.c"
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

#line 1655 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2
};

#line 1660 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0
};

#line 1665 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_2[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1
};

#line 1670 "check_hlds.mode_info.c"
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

#line 1689 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_context_0[3] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2
};

#line 1696 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_context_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1703 "check_hlds.mode_info.c"
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

#line 1724 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0
  }
};

#line 1732 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1740 "check_hlds.mode_info.c"
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

#line 1752 "check_hlds.mode_info.c"
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

#line 1764 "check_hlds.mode_info.c"
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

#line 1779 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0
};

#line 1784 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0
  }
};

#line 1793 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_info_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0
};

#line 1798 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_info_0[1] = {
  (MR_Integer) 0
};

#line 1803 "check_hlds.mode_info.c"
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

#line 1824 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1832 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1841 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_debug_flags_0
  }
};

#line 1849 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1857 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0
  }
};

#line 1865 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1873 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1882 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_warning_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0
  }
};

#line 1890 "check_hlds.mode_info.c"
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

#line 1918 "check_hlds.mode_info.c"
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

#line 1946 "check_hlds.mode_info.c"
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

#line 2070 "check_hlds.mode_info.c"
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

#line 2085 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0
};

#line 2090 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0
  }
};

#line 2099 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_sub_info_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0
};

#line 2104 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_sub_info_0[1] = {
  (MR_Integer) 0
};

#line 2109 "check_hlds.mode_info.c"
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

#line 2130 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_par_conj_mode_check_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_info__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2136 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_par_conj_mode_check_0_0[2] = {
  (MR_String) "par_conj_nonlocals",
  (MR_String) "par_conj_bound"
};

#line 2142 "check_hlds.mode_info.c"
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

#line 2157 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0
};

#line 2162 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_par_conj_mode_check_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0
  }
};

#line 2171 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_par_conj_mode_check_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0
};

#line 2176 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_par_conj_mode_check_0[1] = {
  (MR_Integer) 0
};

#line 2181 "check_hlds.mode_info.c"
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

#line 2202 "check_hlds.mode_info.c"
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

#line 2223 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0 = {
  (MR_String) "left",
  (MR_Integer) 0
};

#line 2229 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1 = {
  (MR_String) "right",
  (MR_Integer) 1
};

#line 2235 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_side_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1
};

#line 2241 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_side_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1
};

#line 2247 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_side_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2253 "check_hlds.mode_info.c"
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

#line 2274 "check_hlds.mode_info.c"
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

#line 2289 "check_hlds.mode_info.c"
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

#line 2304 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_var_lock_reason_0_2[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
};

#line 2309 "check_hlds.mode_info.c"
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

#line 2324 "check_hlds.mode_info.c"
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

#line 2339 "check_hlds.mode_info.c"
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

#line 2354 "check_hlds.mode_info.c"
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

#line 2369 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_0[5] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5
};

#line 2378 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2
};

#line 2383 "check_hlds.mode_info.c"
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

#line 2397 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_var_lock_reason_0[6] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3
};

#line 2407 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_var_lock_reason_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 4
};

#line 2417 "check_hlds.mode_info.c"
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

#line 2438 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____call_context_0_0_10001(
#line 2441 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2443 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2445 "check_hlds.mode_info.c"
{
#line 2447 "check_hlds.mode_info.c"
  {
#line 2449 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2452 "check_hlds.mode_info.c"
    {
#line 2454 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____call_context_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2457 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2459 "check_hlds.mode_info.c"
  }
#line 2461 "check_hlds.mode_info.c"
}

#line 2464 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____call_context_0_0_10001(
#line 2467 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2469 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2471 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2473 "check_hlds.mode_info.c"
{
#line 2475 "check_hlds.mode_info.c"
  {
#line 2477 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2480 "check_hlds.mode_info.c"
    {
#line 2482 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____call_context_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2485 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2487 "check_hlds.mode_info.c"
  }
#line 2489 "check_hlds.mode_info.c"
}

#line 2492 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____debug_flags_0_0_10001(
#line 2495 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2497 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2499 "check_hlds.mode_info.c"
{
#line 2501 "check_hlds.mode_info.c"
  {
#line 2503 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2506 "check_hlds.mode_info.c"
    {
#line 2508 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____debug_flags_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2511 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2513 "check_hlds.mode_info.c"
  }
#line 2515 "check_hlds.mode_info.c"
}

#line 2518 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0_10001(
#line 2521 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2523 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2525 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2527 "check_hlds.mode_info.c"
{
#line 2529 "check_hlds.mode_info.c"
  {
#line 2531 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2534 "check_hlds.mode_info.c"
    {
#line 2536 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____debug_flags_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2539 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2541 "check_hlds.mode_info.c"
  }
#line 2543 "check_hlds.mode_info.c"
}

#line 2546 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0_10001(
#line 2549 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2551 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2553 "check_hlds.mode_info.c"
{
#line 2555 "check_hlds.mode_info.c"
  {
#line 2557 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2560 "check_hlds.mode_info.c"
    {
#line 2562 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2565 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2567 "check_hlds.mode_info.c"
  }
#line 2569 "check_hlds.mode_info.c"
}

#line 2572 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0_10001(
#line 2575 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2577 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2579 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2581 "check_hlds.mode_info.c"
{
#line 2583 "check_hlds.mode_info.c"
  {
#line 2585 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2588 "check_hlds.mode_info.c"
    {
#line 2590 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2593 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2595 "check_hlds.mode_info.c"
  }
#line 2597 "check_hlds.mode_info.c"
}

#line 2600 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____how_to_check_goal_0_0_10001(
#line 2603 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2605 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2607 "check_hlds.mode_info.c"
{
#line 2609 "check_hlds.mode_info.c"
  {
#line 2611 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2614 "check_hlds.mode_info.c"
    {
#line 2616 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____how_to_check_goal_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2619 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2621 "check_hlds.mode_info.c"
  }
#line 2623 "check_hlds.mode_info.c"
}

#line 2626 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____how_to_check_goal_0_0_10001(
#line 2629 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2631 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2633 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2635 "check_hlds.mode_info.c"
{
#line 2637 "check_hlds.mode_info.c"
  {
#line 2639 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2642 "check_hlds.mode_info.c"
    {
#line 2644 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____how_to_check_goal_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2647 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2649 "check_hlds.mode_info.c"
  }
#line 2651 "check_hlds.mode_info.c"
}

#line 2654 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0_10001(
#line 2657 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2659 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2661 "check_hlds.mode_info.c"
{
#line 2663 "check_hlds.mode_info.c"
  {
#line 2665 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2668 "check_hlds.mode_info.c"
    {
#line 2670 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____in_dupl_for_switch_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2673 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2675 "check_hlds.mode_info.c"
  }
#line 2677 "check_hlds.mode_info.c"
}

#line 2680 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0_10001(
#line 2683 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2685 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2687 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2689 "check_hlds.mode_info.c"
{
#line 2691 "check_hlds.mode_info.c"
  {
#line 2693 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2696 "check_hlds.mode_info.c"
    {
#line 2698 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____in_dupl_for_switch_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2701 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2703 "check_hlds.mode_info.c"
  }
#line 2705 "check_hlds.mode_info.c"
}

#line 2708 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0_10001(
#line 2711 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2713 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2715 "check_hlds.mode_info.c"
{
#line 2717 "check_hlds.mode_info.c"
  {
#line 2719 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2722 "check_hlds.mode_info.c"
    {
#line 2724 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2727 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2729 "check_hlds.mode_info.c"
  }
#line 2731 "check_hlds.mode_info.c"
}

#line 2734 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0_10001(
#line 2737 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2739 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2741 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2743 "check_hlds.mode_info.c"
{
#line 2745 "check_hlds.mode_info.c"
  {
#line 2747 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2750 "check_hlds.mode_info.c"
    {
#line 2752 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2755 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2757 "check_hlds.mode_info.c"
  }
#line 2759 "check_hlds.mode_info.c"
}

#line 2762 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0_10001(
#line 2765 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2767 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2769 "check_hlds.mode_info.c"
{
#line 2771 "check_hlds.mode_info.c"
  {
#line 2773 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2776 "check_hlds.mode_info.c"
    {
#line 2778 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____in_promise_purity_scope_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2781 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2783 "check_hlds.mode_info.c"
  }
#line 2785 "check_hlds.mode_info.c"
}

#line 2788 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0_10001(
#line 2791 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2793 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2795 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2797 "check_hlds.mode_info.c"
{
#line 2799 "check_hlds.mode_info.c"
  {
#line 2801 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2804 "check_hlds.mode_info.c"
    {
#line 2806 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____in_promise_purity_scope_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2809 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2811 "check_hlds.mode_info.c"
  }
#line 2813 "check_hlds.mode_info.c"
}

#line 2816 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____locked_vars_0_0_10001(
#line 2819 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2821 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2823 "check_hlds.mode_info.c"
{
#line 2825 "check_hlds.mode_info.c"
  {
#line 2827 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2830 "check_hlds.mode_info.c"
    {
#line 2832 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____locked_vars_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2835 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2837 "check_hlds.mode_info.c"
  }
#line 2839 "check_hlds.mode_info.c"
}

#line 2842 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____locked_vars_0_0_10001(
#line 2845 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2847 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2849 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2851 "check_hlds.mode_info.c"
{
#line 2853 "check_hlds.mode_info.c"
  {
#line 2855 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2858 "check_hlds.mode_info.c"
    {
#line 2860 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____locked_vars_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2863 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2865 "check_hlds.mode_info.c"
  }
#line 2867 "check_hlds.mode_info.c"
}

#line 2870 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0_10001(
#line 2873 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2875 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2877 "check_hlds.mode_info.c"
{
#line 2879 "check_hlds.mode_info.c"
  {
#line 2881 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2884 "check_hlds.mode_info.c"
    {
#line 2886 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____make_ground_terms_unique_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2889 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2891 "check_hlds.mode_info.c"
  }
#line 2893 "check_hlds.mode_info.c"
}

#line 2896 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0_10001(
#line 2899 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2901 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2903 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2905 "check_hlds.mode_info.c"
{
#line 2907 "check_hlds.mode_info.c"
  {
#line 2909 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2912 "check_hlds.mode_info.c"
    {
#line 2914 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____make_ground_terms_unique_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2917 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2919 "check_hlds.mode_info.c"
  }
#line 2921 "check_hlds.mode_info.c"
}

#line 2924 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_change_called_proc_0_0_10001(
#line 2927 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2929 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2931 "check_hlds.mode_info.c"
{
#line 2933 "check_hlds.mode_info.c"
  {
#line 2935 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2938 "check_hlds.mode_info.c"
    {
#line 2940 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____may_change_called_proc_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2943 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2945 "check_hlds.mode_info.c"
  }
#line 2947 "check_hlds.mode_info.c"
}

#line 2950 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_change_called_proc_0_0_10001(
#line 2953 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2955 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2957 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2959 "check_hlds.mode_info.c"
{
#line 2961 "check_hlds.mode_info.c"
  {
#line 2963 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2966 "check_hlds.mode_info.c"
    {
#line 2968 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____may_change_called_proc_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2971 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2973 "check_hlds.mode_info.c"
  }
#line 2975 "check_hlds.mode_info.c"
}

#line 2978 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_init_solver_vars_0_0_10001(
#line 2981 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2983 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2985 "check_hlds.mode_info.c"
{
#line 2987 "check_hlds.mode_info.c"
  {
#line 2989 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2992 "check_hlds.mode_info.c"
    {
#line 2994 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____may_init_solver_vars_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2997 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2999 "check_hlds.mode_info.c"
  }
#line 3001 "check_hlds.mode_info.c"
}

#line 3004 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_init_solver_vars_0_0_10001(
#line 3007 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3009 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3011 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3013 "check_hlds.mode_info.c"
{
#line 3015 "check_hlds.mode_info.c"
  {
#line 3017 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3020 "check_hlds.mode_info.c"
    {
#line 3022 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____may_init_solver_vars_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3025 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3027 "check_hlds.mode_info.c"
  }
#line 3029 "check_hlds.mode_info.c"
}

#line 3032 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_context_0_0_10001(
#line 3035 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3037 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3039 "check_hlds.mode_info.c"
{
#line 3041 "check_hlds.mode_info.c"
  {
#line 3043 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3046 "check_hlds.mode_info.c"
    {
#line 3048 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_context_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3051 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3053 "check_hlds.mode_info.c"
  }
#line 3055 "check_hlds.mode_info.c"
}

#line 3058 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_context_0_0_10001(
#line 3061 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3063 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3065 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3067 "check_hlds.mode_info.c"
{
#line 3069 "check_hlds.mode_info.c"
  {
#line 3071 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3074 "check_hlds.mode_info.c"
    {
#line 3076 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____mode_context_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3079 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3081 "check_hlds.mode_info.c"
  }
#line 3083 "check_hlds.mode_info.c"
}

#line 3086 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0_10001(
#line 3089 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3091 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3093 "check_hlds.mode_info.c"
{
#line 3095 "check_hlds.mode_info.c"
  {
#line 3097 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3100 "check_hlds.mode_info.c"
    {
#line 3102 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_info_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3105 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3107 "check_hlds.mode_info.c"
  }
#line 3109 "check_hlds.mode_info.c"
}

#line 3112 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0_10001(
#line 3115 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3117 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3119 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3121 "check_hlds.mode_info.c"
{
#line 3123 "check_hlds.mode_info.c"
  {
#line 3125 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3128 "check_hlds.mode_info.c"
    {
#line 3130 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____mode_info_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3133 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3135 "check_hlds.mode_info.c"
  }
#line 3137 "check_hlds.mode_info.c"
}

#line 3140 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0_10001(
#line 3143 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3145 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3147 "check_hlds.mode_info.c"
{
#line 3149 "check_hlds.mode_info.c"
  {
#line 3151 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3154 "check_hlds.mode_info.c"
    {
#line 3156 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_sub_info_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3159 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3161 "check_hlds.mode_info.c"
  }
#line 3163 "check_hlds.mode_info.c"
}

#line 3166 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0_10001(
#line 3169 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3171 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3173 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3175 "check_hlds.mode_info.c"
{
#line 3177 "check_hlds.mode_info.c"
  {
#line 3179 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3182 "check_hlds.mode_info.c"
    {
#line 3184 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____mode_sub_info_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3187 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3189 "check_hlds.mode_info.c"
  }
#line 3191 "check_hlds.mode_info.c"
}

#line 3194 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0_10001(
#line 3197 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3199 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3201 "check_hlds.mode_info.c"
{
#line 3203 "check_hlds.mode_info.c"
  {
#line 3205 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3208 "check_hlds.mode_info.c"
    {
#line 3210 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____par_conj_mode_check_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3213 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3215 "check_hlds.mode_info.c"
  }
#line 3217 "check_hlds.mode_info.c"
}

#line 3220 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0_10001(
#line 3223 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3225 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3227 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3229 "check_hlds.mode_info.c"
{
#line 3231 "check_hlds.mode_info.c"
  {
#line 3233 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3236 "check_hlds.mode_info.c"
    {
#line 3238 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____par_conj_mode_check_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3241 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3243 "check_hlds.mode_info.c"
  }
#line 3245 "check_hlds.mode_info.c"
}

#line 3248 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0_10001(
#line 3251 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3253 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3255 "check_hlds.mode_info.c"
{
#line 3257 "check_hlds.mode_info.c"
  {
#line 3259 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3262 "check_hlds.mode_info.c"
    {
#line 3264 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3267 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3269 "check_hlds.mode_info.c"
  }
#line 3271 "check_hlds.mode_info.c"
}

#line 3274 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0_10001(
#line 3277 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3279 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3281 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3283 "check_hlds.mode_info.c"
{
#line 3285 "check_hlds.mode_info.c"
  {
#line 3287 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3290 "check_hlds.mode_info.c"
    {
#line 3292 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3295 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3297 "check_hlds.mode_info.c"
  }
#line 3299 "check_hlds.mode_info.c"
}

#line 3302 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____side_0_0_10001(
#line 3305 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3307 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3309 "check_hlds.mode_info.c"
{
#line 3311 "check_hlds.mode_info.c"
  {
#line 3313 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3316 "check_hlds.mode_info.c"
    {
#line 3318 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____side_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3321 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3323 "check_hlds.mode_info.c"
  }
#line 3325 "check_hlds.mode_info.c"
}

#line 3328 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____side_0_0_10001(
#line 3331 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3333 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3335 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3337 "check_hlds.mode_info.c"
{
#line 3339 "check_hlds.mode_info.c"
  {
#line 3341 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3344 "check_hlds.mode_info.c"
    {
#line 3346 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____side_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3349 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3351 "check_hlds.mode_info.c"
  }
#line 3353 "check_hlds.mode_info.c"
}

#line 3356 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____var_lock_reason_0_0_10001(
#line 3359 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3361 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3363 "check_hlds.mode_info.c"
{
#line 3365 "check_hlds.mode_info.c"
  {
#line 3367 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3370 "check_hlds.mode_info.c"
    {
#line 3372 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____var_lock_reason_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3375 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3377 "check_hlds.mode_info.c"
  }
#line 3379 "check_hlds.mode_info.c"
}

#line 3382 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____var_lock_reason_0_0_10001(
#line 3385 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3387 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3389 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3391 "check_hlds.mode_info.c"
{
#line 3393 "check_hlds.mode_info.c"
  {
#line 3395 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3398 "check_hlds.mode_info.c"
    {
#line 3400 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____var_lock_reason_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3403 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3405 "check_hlds.mode_info.c"
  }
#line 3407 "check_hlds.mode_info.c"
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
#line 3434 "check_hlds.mode_info.c"
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
#line 3470 "check_hlds.mode_info.c"
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
#line 3506 "check_hlds.mode_info.c"
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
#line 3542 "check_hlds.mode_info.c"
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
#line 3578 "check_hlds.mode_info.c"
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
#line 3614 "check_hlds.mode_info.c"
                          *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
              else
#line 67 "mode_info.m"
                {
#line 67 "mode_info.m"
                  MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));

#line 67 "mode_info.m"
                  if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3625 "check_hlds.mode_info.c"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                  else
#line 67 "mode_info.m"
                    if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3631 "check_hlds.mode_info.c"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                    else
#line 67 "mode_info.m"
                      if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3637 "check_hlds.mode_info.c"
                        *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mode_info.m"
                      else
#line 67 "mode_info.m"
                        if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3643 "check_hlds.mode_info.c"
                          *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mode_info.m"
                        else
#line 67 "mode_info.m"
                          if ((check_hlds__mode_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 3649 "check_hlds.mode_info.c"
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
#line 3794 "check_hlds.mode_info.c"
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
#line 3848 "check_hlds.mode_info.c"
  {
#line 3850 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 3853 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3855 "check_hlds.mode_info.c"
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
#line 3946 "check_hlds.mode_info.c"
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
#line 3968 "check_hlds.mode_info.c"
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

#line 4035 "check_hlds.mode_info.c"
        {
#line 4037 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[3], ((MR_Box) (check_hlds__mode_info__V_3_3)), ((MR_Box) (check_hlds__mode_info__V_5_5)));
        }
#line 147 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 147 "mode_info.m"
          {
#line 4044 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeInfo_10_10 = (MR_Word) &check_hlds__mode_info_scalar_common_1[3];
#line 4046 "check_hlds.mode_info.c"
            {
#line 4048 "check_hlds.mode_info.c"
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
#line 4086 "check_hlds.mode_info.c"
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
#line 4196 "check_hlds.mode_info.c"
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
#line 4216 "check_hlds.mode_info.c"
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
#line 4236 "check_hlds.mode_info.c"
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
#line 4256 "check_hlds.mode_info.c"
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
#line 4276 "check_hlds.mode_info.c"
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
#line 4296 "check_hlds.mode_info.c"
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
#line 4316 "check_hlds.mode_info.c"
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
#line 4336 "check_hlds.mode_info.c"
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
#line 4356 "check_hlds.mode_info.c"
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
#line 4380 "check_hlds.mode_info.c"
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
#line 4404 "check_hlds.mode_info.c"
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
#line 4428 "check_hlds.mode_info.c"
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
#line 4448 "check_hlds.mode_info.c"
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
#line 4472 "check_hlds.mode_info.c"
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
#line 4496 "check_hlds.mode_info.c"
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
#line 4516 "check_hlds.mode_info.c"
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
#line 4536 "check_hlds.mode_info.c"
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
#line 4556 "check_hlds.mode_info.c"
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
#line 4580 "check_hlds.mode_info.c"
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
#line 4604 "check_hlds.mode_info.c"
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
#line 4628 "check_hlds.mode_info.c"
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
#line 4652 "check_hlds.mode_info.c"
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
#line 4676 "check_hlds.mode_info.c"
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

#line 4896 "check_hlds.mode_info.c"
        {
#line 4898 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_27_27);
        }
#line 354 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
          {
#line 4905 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_4_4 == check_hlds__mode_info__V_28_28);
#line 354 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
              {
#line 4911 "check_hlds.mode_info.c"
                check_hlds__mode_info__TypeInfo_55_55 = (MR_Word) &check_hlds__mode_info_scalar_common_1[5];
#line 4913 "check_hlds.mode_info.c"
                {
#line 4915 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_55_55, ((MR_Box) (check_hlds__mode_info__V_5_5)), ((MR_Box) (check_hlds__mode_info__V_29_29)));
                }
#line 354 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                  {
#line 4922 "check_hlds.mode_info.c"
                    check_hlds__mode_info__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 4924 "check_hlds.mode_info.c"
                    {
#line 4926 "check_hlds.mode_info.c"
                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeCtorInfo_56_56, ((MR_Box) (check_hlds__mode_info__V_6_6)), ((MR_Box) (check_hlds__mode_info__V_30_30)));
                    }
#line 354 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                      {
#line 4933 "check_hlds.mode_info.c"
                        check_hlds__mode_info__TypeInfo_57_57 = (MR_Word) &check_hlds__mode_info_scalar_common_1[6];
#line 4935 "check_hlds.mode_info.c"
                        {
#line 4937 "check_hlds.mode_info.c"
                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_57_57, ((MR_Box) (check_hlds__mode_info__V_7_7)), ((MR_Box) (check_hlds__mode_info__V_31_31)));
                        }
#line 354 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                          {
#line 4944 "check_hlds.mode_info.c"
                            check_hlds__mode_info__TypeInfo_58_58 = (MR_Word) &check_hlds__mode_info_scalar_common_1[4];
#line 4946 "check_hlds.mode_info.c"
                            {
#line 4948 "check_hlds.mode_info.c"
                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_58_58, ((MR_Box) (check_hlds__mode_info__V_8_8)), ((MR_Box) (check_hlds__mode_info__V_32_32)));
                            }
#line 354 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                              {
#line 4955 "check_hlds.mode_info.c"
                                check_hlds__mode_info__TypeInfo_59_59 = (MR_Word) &check_hlds__mode_info_scalar_common_1[2];
#line 4957 "check_hlds.mode_info.c"
                                {
#line 4959 "check_hlds.mode_info.c"
                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_59_59, ((MR_Box) (check_hlds__mode_info__V_9_9)), ((MR_Box) (check_hlds__mode_info__V_33_33)));
                                }
#line 354 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                  {
#line 4966 "check_hlds.mode_info.c"
                                    check_hlds__mode_info__TypeInfo_60_60 = (MR_Word) &check_hlds__mode_info_scalar_common_1[7];
#line 4968 "check_hlds.mode_info.c"
                                    {
#line 4970 "check_hlds.mode_info.c"
                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_60_60, ((MR_Box) (check_hlds__mode_info__V_10_10)), ((MR_Box) (check_hlds__mode_info__V_34_34)));
                                    }
#line 354 "mode_info.m"
                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                      {
#line 4977 "check_hlds.mode_info.c"
                                        check_hlds__mode_info__TypeInfo_61_61 = (MR_Word) &check_hlds__mode_info_scalar_common_1[8];
#line 4979 "check_hlds.mode_info.c"
                                        {
#line 4981 "check_hlds.mode_info.c"
                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_61_61, ((MR_Box) (check_hlds__mode_info__V_11_11)), ((MR_Box) (check_hlds__mode_info__V_35_35)));
                                        }
#line 354 "mode_info.m"
                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                          {
#line 4988 "check_hlds.mode_info.c"
                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_12_12 == check_hlds__mode_info__V_36_36);
#line 354 "mode_info.m"
                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                              {
#line 4994 "check_hlds.mode_info.c"
                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_13_13 == check_hlds__mode_info__V_37_37);
#line 354 "mode_info.m"
                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                  {
#line 5000 "check_hlds.mode_info.c"
                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_14_14 == check_hlds__mode_info__V_38_38);
#line 354 "mode_info.m"
                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                      {
#line 5006 "check_hlds.mode_info.c"
                                                        {
#line 5008 "check_hlds.mode_info.c"
                                                          check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_15_15, check_hlds__mode_info__V_39_39);
                                                        }
#line 354 "mode_info.m"
                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                          {
#line 5015 "check_hlds.mode_info.c"
                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_16_16 == check_hlds__mode_info__V_40_40);
#line 354 "mode_info.m"
                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                              {
#line 5021 "check_hlds.mode_info.c"
                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_17_17 == check_hlds__mode_info__V_41_41);
#line 354 "mode_info.m"
                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                  {
#line 5027 "check_hlds.mode_info.c"
                                                                    {
#line 5029 "check_hlds.mode_info.c"
                                                                      check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_18_18, check_hlds__mode_info__V_42_42);
                                                                    }
#line 354 "mode_info.m"
                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                      {
#line 5036 "check_hlds.mode_info.c"
                                                                        check_hlds__mode_info__TypeInfo_64_64 = (MR_Word) &check_hlds__mode_info_scalar_common_2[1];
#line 5038 "check_hlds.mode_info.c"
                                                                        {
#line 5040 "check_hlds.mode_info.c"
                                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_64_64, ((MR_Box) (check_hlds__mode_info__V_19_19)), ((MR_Box) (check_hlds__mode_info__V_43_43)));
                                                                        }
#line 354 "mode_info.m"
                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                          {
#line 5047 "check_hlds.mode_info.c"
                                                                            check_hlds__mode_info__TypeInfo_65_65 = (MR_Word) &check_hlds__mode_info_scalar_common_1[10];
#line 5049 "check_hlds.mode_info.c"
                                                                            {
#line 5051 "check_hlds.mode_info.c"
                                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_65_65, ((MR_Box) (check_hlds__mode_info__V_20_20)), ((MR_Box) (check_hlds__mode_info__V_44_44)));
                                                                            }
#line 354 "mode_info.m"
                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                              {
#line 5058 "check_hlds.mode_info.c"
                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_21_21 == check_hlds__mode_info__V_45_45);
#line 354 "mode_info.m"
                                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                  {
#line 5064 "check_hlds.mode_info.c"
                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_22_22 == check_hlds__mode_info__V_46_46);
#line 354 "mode_info.m"
                                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                      {
#line 5070 "check_hlds.mode_info.c"
                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_23_23 == check_hlds__mode_info__V_47_47);
#line 354 "mode_info.m"
                                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                          {
#line 5076 "check_hlds.mode_info.c"
                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_24_24 == check_hlds__mode_info__V_48_48);
#line 354 "mode_info.m"
                                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                              {
#line 5082 "check_hlds.mode_info.c"
                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_25_25 == check_hlds__mode_info__V_49_49);
#line 354 "mode_info.m"
                                                                                                if (check_hlds__mode_info__succeeded)
#line 5086 "check_hlds.mode_info.c"
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
#line 5165 "check_hlds.mode_info.c"
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
#line 5211 "check_hlds.mode_info.c"
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
#line 5231 "check_hlds.mode_info.c"
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
#line 5251 "check_hlds.mode_info.c"
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
#line 5271 "check_hlds.mode_info.c"
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
#line 5291 "check_hlds.mode_info.c"
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
#line 5311 "check_hlds.mode_info.c"
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
#line 5331 "check_hlds.mode_info.c"
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

#line 5436 "check_hlds.mode_info.c"
        {
#line 5438 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_11_11);
        }
#line 467 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
          {
#line 5445 "check_hlds.mode_info.c"
            {
#line 5447 "check_hlds.mode_info.c"
              check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_4_4, check_hlds__mode_info__V_12_12);
            }
#line 467 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
              {
#line 5454 "check_hlds.mode_info.c"
                {
#line 5456 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = check_hlds__delay_info____Unify____delay_info_0_0(check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_13_13);
                }
#line 467 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
                  {
#line 5463 "check_hlds.mode_info.c"
                    check_hlds__mode_info__TypeInfo_24_24 = (MR_Word) &check_hlds__mode_info_scalar_common_1[1];
#line 5465 "check_hlds.mode_info.c"
                    {
#line 5467 "check_hlds.mode_info.c"
                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_24_24, ((MR_Box) (check_hlds__mode_info__V_6_6)), ((MR_Box) (check_hlds__mode_info__V_14_14)));
                    }
#line 467 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
                      {
#line 5474 "check_hlds.mode_info.c"
                        {
#line 5476 "check_hlds.mode_info.c"
                          check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_context_0_0(check_hlds__mode_info__V_7_7, check_hlds__mode_info__V_15_15);
                        }
#line 467 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
                          {
#line 5483 "check_hlds.mode_info.c"
                            {
#line 5485 "check_hlds.mode_info.c"
                              check_hlds__mode_info__succeeded = mercury__term____Unify____context_0_0(check_hlds__mode_info__V_8_8, check_hlds__mode_info__V_16_16);
                            }
#line 467 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 467 "mode_info.m"
                              {
#line 5492 "check_hlds.mode_info.c"
                                check_hlds__mode_info__TypeInfo_26_26 = (MR_Word) &check_hlds__mode_info_scalar_common_1[2];
#line 5494 "check_hlds.mode_info.c"
                                {
#line 5496 "check_hlds.mode_info.c"
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

#line 5632 "check_hlds.mode_info.c"
                                        {
#line 5634 "check_hlds.mode_info.c"
                                          check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_info__V_27_27, check_hlds__mode_info__V_51_51);
                                        }
#line 354 "mode_info.m"
                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                          {
#line 5641 "check_hlds.mode_info.c"
                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_28_28 == check_hlds__mode_info__V_52_52);
#line 354 "mode_info.m"
                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                              {
#line 5647 "check_hlds.mode_info.c"
                                                check_hlds__mode_info__TypeInfo_55_79 = (MR_Word) &check_hlds__mode_info_scalar_common_1[5];
#line 5649 "check_hlds.mode_info.c"
                                                {
#line 5651 "check_hlds.mode_info.c"
                                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_55_79, ((MR_Box) (check_hlds__mode_info__V_29_29)), ((MR_Box) (check_hlds__mode_info__V_53_53)));
                                                }
#line 354 "mode_info.m"
                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                  {
#line 5658 "check_hlds.mode_info.c"
                                                    check_hlds__mode_info__TypeCtorInfo_56_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 5660 "check_hlds.mode_info.c"
                                                    {
#line 5662 "check_hlds.mode_info.c"
                                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeCtorInfo_56_80, ((MR_Box) (check_hlds__mode_info__V_30_30)), ((MR_Box) (check_hlds__mode_info__V_54_54)));
                                                    }
#line 354 "mode_info.m"
                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                      {
#line 5669 "check_hlds.mode_info.c"
                                                        check_hlds__mode_info__TypeInfo_57_81 = (MR_Word) &check_hlds__mode_info_scalar_common_1[6];
#line 5671 "check_hlds.mode_info.c"
                                                        {
#line 5673 "check_hlds.mode_info.c"
                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_57_81, ((MR_Box) (check_hlds__mode_info__V_31_31)), ((MR_Box) (check_hlds__mode_info__V_55_55)));
                                                        }
#line 354 "mode_info.m"
                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                          {
#line 5680 "check_hlds.mode_info.c"
                                                            check_hlds__mode_info__TypeInfo_58_82 = (MR_Word) &check_hlds__mode_info_scalar_common_1[4];
#line 5682 "check_hlds.mode_info.c"
                                                            {
#line 5684 "check_hlds.mode_info.c"
                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_58_82, ((MR_Box) (check_hlds__mode_info__V_32_32)), ((MR_Box) (check_hlds__mode_info__V_56_56)));
                                                            }
#line 354 "mode_info.m"
                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                              {
#line 5691 "check_hlds.mode_info.c"
                                                                check_hlds__mode_info__TypeInfo_59_83 = (MR_Word) &check_hlds__mode_info_scalar_common_1[2];
#line 5693 "check_hlds.mode_info.c"
                                                                {
#line 5695 "check_hlds.mode_info.c"
                                                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_59_83, ((MR_Box) (check_hlds__mode_info__V_33_33)), ((MR_Box) (check_hlds__mode_info__V_57_57)));
                                                                }
#line 354 "mode_info.m"
                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                  {
#line 5702 "check_hlds.mode_info.c"
                                                                    check_hlds__mode_info__TypeInfo_60_84 = (MR_Word) &check_hlds__mode_info_scalar_common_1[7];
#line 5704 "check_hlds.mode_info.c"
                                                                    {
#line 5706 "check_hlds.mode_info.c"
                                                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_60_84, ((MR_Box) (check_hlds__mode_info__V_34_34)), ((MR_Box) (check_hlds__mode_info__V_58_58)));
                                                                    }
#line 354 "mode_info.m"
                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                      {
#line 5713 "check_hlds.mode_info.c"
                                                                        check_hlds__mode_info__TypeInfo_61_85 = (MR_Word) &check_hlds__mode_info_scalar_common_1[8];
#line 5715 "check_hlds.mode_info.c"
                                                                        {
#line 5717 "check_hlds.mode_info.c"
                                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_61_85, ((MR_Box) (check_hlds__mode_info__V_35_35)), ((MR_Box) (check_hlds__mode_info__V_59_59)));
                                                                        }
#line 354 "mode_info.m"
                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                          {
#line 5724 "check_hlds.mode_info.c"
                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_36_36 == check_hlds__mode_info__V_60_60);
#line 354 "mode_info.m"
                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                              {
#line 5730 "check_hlds.mode_info.c"
                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_37_37 == check_hlds__mode_info__V_61_61);
#line 354 "mode_info.m"
                                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                  {
#line 5736 "check_hlds.mode_info.c"
                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_38_38 == check_hlds__mode_info__V_62_62);
#line 354 "mode_info.m"
                                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                      {
#line 5742 "check_hlds.mode_info.c"
                                                                                        {
#line 5744 "check_hlds.mode_info.c"
                                                                                          check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_39_39, check_hlds__mode_info__V_63_63);
                                                                                        }
#line 354 "mode_info.m"
                                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                          {
#line 5751 "check_hlds.mode_info.c"
                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_40_40 == check_hlds__mode_info__V_64_64);
#line 354 "mode_info.m"
                                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                              {
#line 5757 "check_hlds.mode_info.c"
                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_41_41 == check_hlds__mode_info__V_65_65);
#line 354 "mode_info.m"
                                                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                  {
#line 5763 "check_hlds.mode_info.c"
                                                                                                    {
#line 5765 "check_hlds.mode_info.c"
                                                                                                      check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_42_42, check_hlds__mode_info__V_66_66);
                                                                                                    }
#line 354 "mode_info.m"
                                                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                      {
#line 5772 "check_hlds.mode_info.c"
                                                                                                        check_hlds__mode_info__TypeInfo_64_88 = (MR_Word) &check_hlds__mode_info_scalar_common_2[1];
#line 5774 "check_hlds.mode_info.c"
                                                                                                        {
#line 5776 "check_hlds.mode_info.c"
                                                                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_64_88, ((MR_Box) (check_hlds__mode_info__V_43_43)), ((MR_Box) (check_hlds__mode_info__V_67_67)));
                                                                                                        }
#line 354 "mode_info.m"
                                                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                          {
#line 5783 "check_hlds.mode_info.c"
                                                                                                            check_hlds__mode_info__TypeInfo_65_89 = (MR_Word) &check_hlds__mode_info_scalar_common_1[10];
#line 5785 "check_hlds.mode_info.c"
                                                                                                            {
#line 5787 "check_hlds.mode_info.c"
                                                                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_65_89, ((MR_Box) (check_hlds__mode_info__V_44_44)), ((MR_Box) (check_hlds__mode_info__V_68_68)));
                                                                                                            }
#line 354 "mode_info.m"
                                                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                              {
#line 5794 "check_hlds.mode_info.c"
                                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_45_45 == check_hlds__mode_info__V_69_69);
#line 354 "mode_info.m"
                                                                                                                if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                                  {
#line 5800 "check_hlds.mode_info.c"
                                                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_46_46 == check_hlds__mode_info__V_70_70);
#line 354 "mode_info.m"
                                                                                                                    if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                                      {
#line 5806 "check_hlds.mode_info.c"
                                                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_47_47 == check_hlds__mode_info__V_71_71);
#line 354 "mode_info.m"
                                                                                                                        if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                                          {
#line 5812 "check_hlds.mode_info.c"
                                                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_48_48 == check_hlds__mode_info__V_72_72);
#line 354 "mode_info.m"
                                                                                                                            if (check_hlds__mode_info__succeeded)
#line 354 "mode_info.m"
                                                                                                                              {
#line 5818 "check_hlds.mode_info.c"
                                                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_49_49 == check_hlds__mode_info__V_73_73);
#line 354 "mode_info.m"
                                                                                                                                if (check_hlds__mode_info__succeeded)
#line 5822 "check_hlds.mode_info.c"
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
#line 5917 "check_hlds.mode_info.c"
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
#line 5931 "check_hlds.mode_info.c"
            *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 46 "mode_info.m"
          else
#line 5935 "check_hlds.mode_info.c"
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
#line 5950 "check_hlds.mode_info.c"
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
#line 5970 "check_hlds.mode_info.c"
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
#line 5991 "check_hlds.mode_info.c"
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
#line 6006 "check_hlds.mode_info.c"
              *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 46 "mode_info.m"
            else
#line 46 "mode_info.m"
              if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6012 "check_hlds.mode_info.c"
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
#line 6030 "check_hlds.mode_info.c"
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
#line 6129 "check_hlds.mode_info.c"
                {
#line 6131 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____call_id_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_5_5);
                }
#line 46 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 6136 "check_hlds.mode_info.c"
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
#line 6165 "check_hlds.mode_info.c"
                {
#line 6167 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = hlds__hlds_goal____Unify____unify_context_0_0(check_hlds__mode_info__V_7_7, check_hlds__mode_info__V_9_9);
                }
#line 46 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 6172 "check_hlds.mode_info.c"
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
#line 6226 "check_hlds.mode_info.c"
  {
#line 6228 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6231 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6233 "check_hlds.mode_info.c"
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
#line 6279 "check_hlds.mode_info.c"
  {
#line 6281 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6284 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6286 "check_hlds.mode_info.c"
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
#line 6332 "check_hlds.mode_info.c"
  {
#line 6334 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6337 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6339 "check_hlds.mode_info.c"
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
#line 6447 "check_hlds.mode_info.c"
  {
#line 6449 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6452 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6454 "check_hlds.mode_info.c"
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
#line 6500 "check_hlds.mode_info.c"
  {
#line 6502 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6505 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6507 "check_hlds.mode_info.c"
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
#line 6553 "check_hlds.mode_info.c"
  {
#line 6555 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6558 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6560 "check_hlds.mode_info.c"
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
#line 6606 "check_hlds.mode_info.c"
  {
#line 6608 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6611 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6613 "check_hlds.mode_info.c"
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
#line 6659 "check_hlds.mode_info.c"
  {
#line 6661 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6664 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6666 "check_hlds.mode_info.c"
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
#line 6695 "check_hlds.mode_info.c"
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
#line 6725 "check_hlds.mode_info.c"
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
#line 6749 "check_hlds.mode_info.c"
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

#line 6825 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_3_3 == check_hlds__mode_info__V_6_6);
#line 95 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 95 "mode_info.m"
          {
#line 6831 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_4_4 == check_hlds__mode_info__V_7_7);
#line 95 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 6835 "check_hlds.mode_info.c"
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
#line 6872 "check_hlds.mode_info.c"
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
#line 6901 "check_hlds.mode_info.c"
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
#line 6914 "check_hlds.mode_info.c"
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
#line 6982 "check_hlds.mode_info.c"
              {
#line 6984 "check_hlds.mode_info.c"
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
#line 7008 "check_hlds.mode_info.c"
              {
#line 7010 "check_hlds.mode_info.c"
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

#line 975 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(
#line 975 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 975 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_7,
#line 975 "mode_info.m"
  MR_Word * check_hlds__mode_info__Reason_8)
#line 975 "mode_info.m"
{
#line 978 "mode_info.m"
  while (MR_TRUE)
#line 978 "mode_info.m"
    {
#line 978 "mode_info.m"
      /* tailcall optimized into a loop */
#line 978 "mode_info.m"
      {
#line 978 "mode_info.m"
        MR_bool check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 978 "mode_info.m"
        MR_Word check_hlds__mode_info__ThisReason_4;
#line 978 "mode_info.m"
        MR_Word check_hlds__mode_info__Set_5;
#line 978 "mode_info.m"
        MR_Word check_hlds__mode_info__Sets_6;
#line 978 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9;
#line 979 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeCtorInfo_10_10;

#line 978 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 978 "mode_info.m"
          {
#line 978 "mode_info.m"
            check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 978 "mode_info.m"
            check_hlds__mode_info__Sets_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 978 "mode_info.m"
            check_hlds__mode_info__ThisReason_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 978 "mode_info.m"
            check_hlds__mode_info__Set_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 7068 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 979 "mode_info.m"
            {
#line 979 "mode_info.m"
              check_hlds__mode_info__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__mode_info__TypeCtorInfo_10_10, check_hlds__mode_info__Set_5, check_hlds__mode_info__Var_7);
            }
#line 981 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 980 "mode_info.m"
              {
#line 980 "mode_info.m"
                *check_hlds__mode_info__Reason_8 = check_hlds__mode_info__ThisReason_4;
#line 980 "mode_info.m"
                check_hlds__mode_info__succeeded = MR_TRUE;
#line 980 "mode_info.m"
              }
#line 981 "mode_info.m"
            else
#line 982 "mode_info.m"
              {
#line 982 "mode_info.m"
                /* direct tailcall eliminated */
#line 982 "mode_info.m"
                {
#line 982 "mode_info.m"
                  MR_Word check_hlds__mode_info__HeadVar__1__tmp_copy_1 = check_hlds__mode_info__Sets_6;

#line 982 "mode_info.m"
                  check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__HeadVar__1__tmp_copy_1;
#line 982 "mode_info.m"
                }
#line 982 "mode_info.m"
                continue;
#line 982 "mode_info.m"
              }
#line 978 "mode_info.m"
          }
#line 978 "mode_info.m"
        return check_hlds__mode_info__succeeded;
#line 978 "mode_info.m"
      }
#line 978 "mode_info.m"
      break;
#line 978 "mode_info.m"
    }
#line 975 "mode_info.m"
}

#line 334 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(
#line 334 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_2)
#line 334 "mode_info.m"
{
#line 1041 "mode_info.m"
  {
#line 1041 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1041 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 0)));
#line 1041 "mode_info.m"
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

#line 1043 "mode_info.m"
    {
#line 1043 "mode_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__mode_info__ModuleInfo_3, &check_hlds__mode_info__Globals_4);
    }
#line 1044 "mode_info.m"
    {
#line 1044 "mode_info.m"
      return check_hlds__mode_info__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__mode_info__Globals_4, (MR_Integer) 297, (MR_Integer) 1);
    }
#line 1041 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 1041 "mode_info.m"
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
#line 1035 "mode_info.m"
  {
#line 1035 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1035 "mode_info.m"
    MR_Word check_hlds__mode_info__MayInitSolverVars_3;
#line 1035 "mode_info.m"
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
#line 1037 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__MayInitSolverVars_3 == (MR_Integer) 0);
#line 1035 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 1035 "mode_info.m"
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
#line 1030 "mode_info.m"
  {
#line 1030 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;

#line 1031 "mode_info.m"
    {
#line 1031 "mode_info.m"
      check_hlds__mode_info__mode_info_set_need_to_requantify_3_p_0((MR_Integer) 0, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_5);
#line 1031 "mode_info.m"
      return;
    }
#line 1030 "mode_info.m"
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
#line 1025 "mode_info.m"
  {
#line 1025 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1025 "mode_info.m"
    MR_Word check_hlds__mode_info__Warnings0_6;
#line 1025 "mode_info.m"
    MR_Word check_hlds__mode_info__Warnings_7;
#line 1025 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 1025 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));
#line 1025 "mode_info.m"
    MR_Word check_hlds__mode_info__V_52_52;
#line 1025 "mode_info.m"
    MR_Word check_hlds__mode_info__V_53_53;
#line 1025 "mode_info.m"
    MR_Word check_hlds__mode_info__V_54_54;
#line 1025 "mode_info.m"
    MR_Word check_hlds__mode_info__V_55_55;
#line 1025 "mode_info.m"
    MR_Word check_hlds__mode_info__V_56_56;
#line 1025 "mode_info.m"
    MR_Word check_hlds__mode_info__V_57_57;
#line 1025 "mode_info.m"
    MR_Word check_hlds__mode_info__V_58_58;
#line 1025 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59;
#line 1025 "mode_info.m"
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
#line 1027 "mode_info.m"
    {
#line 1027 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1027 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__ModeWarningInfo_4));
#line 1027 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1027 "mode_info.m"
    }
#line 1027 "mode_info.m"
    {
#line 1027 "mode_info.m"
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
#line 1025 "mode_info.m"
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
#line 1019 "mode_info.m"
  {
#line 1019 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1019 "mode_info.m"
    MR_Word check_hlds__mode_info__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 5)));
#line 1019 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 4)));
#line 1019 "mode_info.m"
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

#line 1022 "mode_info.m"
    {
#line 1022 "mode_info.m"
      check_hlds__mode_info__ModeWarningInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1022 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 0) = ((MR_Box) (check_hlds__mode_info__ModeWarning_4));
#line 1022 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 1) = ((MR_Box) (check_hlds__mode_info__Context_6));
#line 1022 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 2) = ((MR_Box) (check_hlds__mode_info__ModeContext_7));
#line 1022 "mode_info.m"
    }
#line 1023 "mode_info.m"
    {
#line 1023 "mode_info.m"
      check_hlds__mode_info__mode_info_add_warning_3_p_0(check_hlds__mode_info__ModeWarningInfo_8, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10);
#line 1023 "mode_info.m"
      return;
    }
#line 1019 "mode_info.m"
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
#line 1014 "mode_info.m"
  {
#line 1014 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1014 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 1014 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors_7;
#line 1014 "mode_info.m"
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

#line 1016 "mode_info.m"
    {
#line 1016 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__ModeErrorInfo_4));
#line 1016 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1016 "mode_info.m"
    }
#line 1016 "mode_info.m"
    {
#line 1016 "mode_info.m"
      mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__mode_info__Errors0_6, check_hlds__mode_info__V_10_10, &check_hlds__mode_info__Errors_7);
    }
#line 1017 "mode_info.m"
    {
#line 1017 "mode_info.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__mode_info__Errors_7, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9);
#line 1017 "mode_info.m"
      return;
    }
#line 1014 "mode_info.m"
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
#line 1008 "mode_info.m"
  {
#line 1008 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1008 "mode_info.m"
    MR_Word check_hlds__mode_info__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 5)));
#line 1008 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 4)));
#line 1008 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeErrorInfo_10;
#line 1008 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 3)));
#line 1008 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors_37;
#line 1008 "mode_info.m"
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

#line 1011 "mode_info.m"
    {
#line 1011 "mode_info.m"
      check_hlds__mode_info__ModeErrorInfo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1011 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 0) = ((MR_Box) (check_hlds__mode_info__Vars_5));
#line 1011 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 1) = ((MR_Box) (check_hlds__mode_info__ModeError_6));
#line 1011 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 2) = ((MR_Box) (check_hlds__mode_info__Context_8));
#line 1011 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 3) = ((MR_Box) (check_hlds__mode_info__ModeContext_9));
#line 1011 "mode_info.m"
    }
#line 1016 "mode_info.m"
    {
#line 1016 "mode_info.m"
      check_hlds__mode_info__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_38_38, 0) = ((MR_Box) (check_hlds__mode_info__ModeErrorInfo_10));
#line 1016 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1016 "mode_info.m"
    }
#line 1016 "mode_info.m"
    {
#line 1016 "mode_info.m"
      mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__mode_info__Errors0_36, check_hlds__mode_info__V_38_38, &check_hlds__mode_info__Errors_37);
    }
#line 1017 "mode_info.m"
    {
#line 1017 "mode_info.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__mode_info__Errors_37, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12);
#line 1017 "mode_info.m"
      return;
    }
#line 1008 "mode_info.m"
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
#line 927 "mode_info.m"
  {
#line 927 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 927 "mode_info.m"
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

#line 929 "mode_info.m"
    {
#line 929 "mode_info.m"
      check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__NondetLiveVars0_7, ((MR_Box) (check_hlds__mode_info__Var_5)));
    }
#line 931 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 930 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 0;
#line 931 "mode_info.m"
    else
#line 932 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 1;
#line 927 "mode_info.m"
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
#line 919 "mode_info.m"
  {
#line 919 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 919 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 919 "mode_info.m"
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
#line 921 "mode_info.m"
    {
#line 921 "mode_info.m"
      check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVars0_7, ((MR_Box) (check_hlds__mode_info__Var_5)));
    }
#line 923 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 922 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 0;
#line 923 "mode_info.m"
    else
#line 924 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 1;
#line 919 "mode_info.m"
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
#line 912 "mode_info.m"
  {
#line 912 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;

#line 912 "mode_info.m"
    if ((check_hlds__mode_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 912 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 912 "mode_info.m"
    else
#line 913 "mode_info.m"
      {
#line 913 "mode_info.m"
        MR_Word check_hlds__mode_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 913 "mode_info.m"
        MR_Word check_hlds__mode_info__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 913 "mode_info.m"
        MR_Word check_hlds__mode_info__Live_8;
#line 913 "mode_info.m"
        MR_Word check_hlds__mode_info__Lives_9;
#line 913 "mode_info.m"
        MR_Word check_hlds__mode_info__LiveVars0_13;
#line 913 "mode_info.m"
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
#line 921 "mode_info.m"
        {
#line 921 "mode_info.m"
          check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVars0_13, ((MR_Box) (check_hlds__mode_info__Var_6)));
        }
#line 923 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 922 "mode_info.m"
          check_hlds__mode_info__Live_8 = (MR_Integer) 0;
#line 923 "mode_info.m"
        else
#line 924 "mode_info.m"
          check_hlds__mode_info__Live_8 = (MR_Integer) 1;
#line 915 "mode_info.m"
        {
#line 915 "mode_info.m"
          check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(check_hlds__mode_info__ModeInfo_1, check_hlds__mode_info__Vars_7, &check_hlds__mode_info__Lives_9);
        }
#line 913 "mode_info.m"
        {
#line 913 "mode_info.m"
          MR_Word base;
#line 913 "mode_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 913 "mode_info.m"
          *check_hlds__mode_info__HeadVar__3_3 = base;
#line 913 "mode_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_info__Live_8));
#line 913 "mode_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_info__Lives_9));
#line 913 "mode_info.m"
        }
#line 913 "mode_info.m"
      }
#line 912 "mode_info.m"
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
#line 1001 "mode_info.m"
  {
#line 1001 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1001 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 1001 "mode_info.m"
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

#line 1003 "mode_info.m"
    {
#line 1003 "mode_info.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__mode_info__ModuleInfo_7, check_hlds__mode_info__PredId_5, &check_hlds__mode_info__PredInfo_8);
    }
#line 1004 "mode_info.m"
    {
#line 1004 "mode_info.m"
      hlds__hlds_pred__pred_info_get_call_id_2_p_0(check_hlds__mode_info__PredInfo_8, check_hlds__mode_info__CallId_6);
#line 1004 "mode_info.m"
      return;
    }
#line 1001 "mode_info.m"
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
#line 971 "mode_info.m"
  {
#line 971 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 971 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVarsList_7;
#line 971 "mode_info.m"
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
#line 973 "mode_info.m"
    {
#line 973 "mode_info.m"
      return check_hlds__mode_info__succeeded = check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(check_hlds__mode_info__LockedVarsList_7, check_hlds__mode_info__Var_5, check_hlds__mode_info__Reason_6);
    }
#line 971 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 971 "mode_info.m"
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
#line 959 "mode_info.m"
  {
#line 959 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 959 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars0_8;
#line 959 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars_11;
#line 959 "mode_info.m"
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
#line 966 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars1_10;
#line 962 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeCtorInfo_19_19;
#line 962 "mode_info.m"
    MR_Word check_hlds__mode_info__TheseVars_9;
#line 962 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 962 "mode_info.m"
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
#line 962 "mode_info.m"
    check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__LockedVars0_8)) == (MR_mktag((MR_Integer) 1)));
#line 962 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 962 "mode_info.m"
      {
#line 962 "mode_info.m"
        check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__LockedVars0_8, (MR_Integer) 0)));
#line 962 "mode_info.m"
        check_hlds__mode_info__LockedVars1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__LockedVars0_8, (MR_Integer) 1)));
#line 962 "mode_info.m"
        check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, (MR_Integer) 0)));
#line 962 "mode_info.m"
        check_hlds__mode_info__TheseVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, (MR_Integer) 1)));
#line 962 "mode_info.m"
        {
#line 962 "mode_info.m"
          check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____var_lock_reason_0_0(check_hlds__mode_info__Reason_5, check_hlds__mode_info__V_20_20);
        }
#line 962 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 962 "mode_info.m"
          {
#line 8507 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 963 "mode_info.m"
            {
#line 963 "mode_info.m"
              check_hlds__mode_info__succeeded = parse_tree__set_of_var__equal_2_p_0(check_hlds__mode_info__TypeCtorInfo_19_19, check_hlds__mode_info__TheseVars_9, check_hlds__mode_info__Vars_6);
            }
#line 962 "mode_info.m"
          }
#line 962 "mode_info.m"
      }
#line 966 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 965 "mode_info.m"
      check_hlds__mode_info__LockedVars_11 = check_hlds__mode_info__LockedVars1_10;
#line 966 "mode_info.m"
    else
#line 967 "mode_info.m"
      {
#line 967 "mode_info.m"
        {
#line 967 "mode_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_unlock_vars\'/4", (MR_String) "some kind of nesting error");
#line 967 "mode_info.m"
          return;
        }
#line 967 "mode_info.m"
      }
#line 969 "mode_info.m"
    {
#line 969 "mode_info.m"
      check_hlds__mode_info__mode_info_set_locked_vars_3_p_0(check_hlds__mode_info__LockedVars_11, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_13);
#line 969 "mode_info.m"
      return;
    }
#line 959 "mode_info.m"
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
#line 955 "mode_info.m"
  {
#line 955 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars_8;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 7)));
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 0)));
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 1)));
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 2)));
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 3)));
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 4)));
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 5)));
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 6)));
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 0)));
#line 955 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 1)));
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 2)));
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 3)));
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 4)));
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 955 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 955 "mode_info.m"
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
#line 957 "mode_info.m"
    {
#line 957 "mode_info.m"
      check_hlds__mode_info__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 957 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, 0) = ((MR_Box) (check_hlds__mode_info__Reason_5));
#line 957 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, 1) = ((MR_Box) (check_hlds__mode_info__Vars_6));
#line 957 "mode_info.m"
    }
#line 957 "mode_info.m"
    {
#line 957 "mode_info.m"
      check_hlds__mode_info__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_11_11, 0) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 957 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_11_11, 1) = ((MR_Box) (check_hlds__mode_info__LockedVars_8));
#line 957 "mode_info.m"
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
#line 955 "mode_info.m"
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
#line 942 "mode_info.m"
  {
#line 942 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 942 "mode_info.m"
    MR_Word check_hlds__mode_info__VarTypes_7;
#line 942 "mode_info.m"
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
#line 944 "mode_info.m"
    {
#line 944 "mode_info.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__mode_info__VarTypes_7, check_hlds__mode_info__Vars_5, check_hlds__mode_info__TypesOfVars_6);
#line 944 "mode_info.m"
      return;
    }
#line 942 "mode_info.m"
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
#line 730 "mode_info.m"
  {
#line 730 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 730 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 730 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 730 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 730 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 730 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 730 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 730 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 730 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 730 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 731 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 731 "mode_info.m"
    {
#line 731 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__X_4 << (MR_Integer) 5)))))))))))));
#line 731 "mode_info.m"
    }
#line 731 "mode_info.m"
    {
#line 731 "mode_info.m"
      MR_Word base;
#line 731 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 731 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 731 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 731 "mode_info.m"
    }
#line 730 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 729 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__X_4 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
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
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 721 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;

#line 721 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 721 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 721 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 721 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 725 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 721 "mode_info.m"
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
        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
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
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 726 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

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
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) ((check_hlds__mode_info__V_59_59 | ((((check_hlds__mode_info__V_60_60 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_61_61 << (MR_Integer) 2)))))));
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
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) ((check_hlds__mode_info__V_68_68 | ((((check_hlds__mode_info__V_69_69 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_70_70 << (MR_Integer) 2)) | ((((check_hlds__mode_info__X_4 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_73_73 << (MR_Integer) 5)))))))))))));
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
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
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
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__X_4 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
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
#line 714 "mode_info.m"
  {
#line 714 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_31_31;
#line 710 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
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
    check_hlds__mode_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 710 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 710 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
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
#line 714 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 710 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 714 "mode_info.m"
    else
#line 715 "mode_info.m"
      {
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12;
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 715 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 715 "mode_info.m"
        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 715 "mode_info.m"
        {
#line 715 "mode_info.m"
          check_hlds__mode_info__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 0) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 1) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 2) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 3) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 4) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 5) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 6) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 7) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 8) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) ((check_hlds__mode_info__V_59_59 | ((((check_hlds__mode_info__V_60_60 << (MR_Integer) 1)) | ((check_hlds__mode_info__X_4 << (MR_Integer) 2)))))));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 10) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 11) = ((MR_Box) ((check_hlds__mode_info__V_63_63 | ((check_hlds__mode_info__V_64_64 << (MR_Integer) 1)))));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 12) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 13) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 14) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) ((check_hlds__mode_info__V_68_68 | ((((check_hlds__mode_info__V_69_69 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_70_70 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_71_71 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_73_73 << (MR_Integer) 5)))))))))))));
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_47_47));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 715 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 715 "mode_info.m"
        }
#line 715 "mode_info.m"
      }
#line 714 "mode_info.m"
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
#line 985 "mode_info.m"
  {
#line 985 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 985 "mode_info.m"
    MR_Word check_hlds__mode_info__Checking0_6;
#line 985 "mode_info.m"
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
#line 988 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__Checking0_6 == (MR_Integer) 1);
#line 988 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 989 "mode_info.m"
      check_hlds__mode_info__succeeded = (check_hlds__mode_info__Checking_4 == (MR_Integer) 1);
#line 995 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 993 "mode_info.m"
      {
#line 993 "mode_info.m"
        {
#line 993 "mode_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_set_checking_extra_goals\'/3", (MR_String) "rechecking extra goals adds more extra goals");
#line 993 "mode_info.m"
          return;
        }
#line 993 "mode_info.m"
      }
#line 995 "mode_info.m"
    else
#line 996 "mode_info.m"
      {
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 7)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14;
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 0)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 1)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 2)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 3)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 4)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 5)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 6)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 0)));
#line 996 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 1)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 2)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 3)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 4)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 5)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 6)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 7)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 8)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 10)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 12)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 13)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 14)));
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 996 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 996 "mode_info.m"
        {
#line 996 "mode_info.m"
          check_hlds__mode_info__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 0) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 1) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 2) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 3) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 4) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 5) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 6) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 7) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 8) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 9) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 2)))))));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 10) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 11) = ((MR_Box) ((check_hlds__mode_info__V_35_35 | ((check_hlds__mode_info__Checking_4 << (MR_Integer) 1)))));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 12) = ((MR_Box) (check_hlds__mode_info__V_37_37));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 13) = ((MR_Box) (check_hlds__mode_info__V_38_38));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 14) = ((MR_Box) (check_hlds__mode_info__V_39_39));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 15) = ((MR_Box) ((check_hlds__mode_info__V_40_40 | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_42_42 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_43_43 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_44_44 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_45_45 << (MR_Integer) 5)))))))))))));
#line 996 "mode_info.m"
        }
#line 996 "mode_info.m"
        {
#line 996 "mode_info.m"
          MR_Word base;
#line 996 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 996 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_8 = base;
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 996 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 996 "mode_info.m"
        }
#line 996 "mode_info.m"
      }
#line 985 "mode_info.m"
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
#line 706 "mode_info.m"
  {
#line 706 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 706 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 707 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 707 "mode_info.m"
    {
#line 707 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__X_4 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 707 "mode_info.m"
    }
#line 707 "mode_info.m"
    {
#line 707 "mode_info.m"
      MR_Word base;
#line 707 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 707 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 707 "mode_info.m"
    }
#line 706 "mode_info.m"
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
#line 704 "mode_info.m"
  {
#line 704 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 704 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 705 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);

#line 705 "mode_info.m"
    {
#line 705 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__X_4 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 705 "mode_info.m"
    }
#line 705 "mode_info.m"
    {
#line 705 "mode_info.m"
      MR_Word base;
#line 705 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 705 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 705 "mode_info.m"
    }
#line 704 "mode_info.m"
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
#line 701 "mode_info.m"
  {
#line 701 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 699 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;

#line 699 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 699 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 699 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 699 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 699 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 699 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 699 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 699 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 699 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 699 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 699 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 699 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 701 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 699 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 701 "mode_info.m"
    else
#line 702 "mode_info.m"
      {
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12;
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 702 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);

#line 702 "mode_info.m"
        {
#line 702 "mode_info.m"
          check_hlds__mode_info__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 0) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 1) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 2) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 3) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 4) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 5) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 6) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 7) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 8) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) ((check_hlds__mode_info__V_59_59 | ((((check_hlds__mode_info__V_60_60 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_61_61 << (MR_Integer) 2)))))));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 10) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 11) = ((MR_Box) ((check_hlds__mode_info__X_4 | ((check_hlds__mode_info__V_64_64 << (MR_Integer) 1)))));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 12) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 13) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 14) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) ((check_hlds__mode_info__V_68_68 | ((((check_hlds__mode_info__V_69_69 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_70_70 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_71_71 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_73_73 << (MR_Integer) 5)))))))))))));
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_47_47));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 702 "mode_info.m"
        }
#line 702 "mode_info.m"
      }
#line 701 "mode_info.m"
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
#line 696 "mode_info.m"
  {
#line 696 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 696 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 697 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));

#line 697 "mode_info.m"
    {
#line 697 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 697 "mode_info.m"
    }
#line 696 "mode_info.m"
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
#line 694 "mode_info.m"
  {
#line 694 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 694 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 695 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));

#line 695 "mode_info.m"
    {
#line 695 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 695 "mode_info.m"
    }
#line 695 "mode_info.m"
    {
#line 695 "mode_info.m"
      MR_Word base;
#line 695 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 695 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 695 "mode_info.m"
    }
#line 694 "mode_info.m"
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
#line 691 "mode_info.m"
  {
#line 691 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));

#line 689 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 691 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 689 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 691 "mode_info.m"
    else
#line 692 "mode_info.m"
      {
#line 692 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 692 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 692 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 692 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 692 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 692 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 692 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 692 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));

#line 692 "mode_info.m"
        {
#line 692 "mode_info.m"
          MR_Word base;
#line 692 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 692 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 692 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 692 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 692 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 692 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 692 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 692 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 692 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 692 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 692 "mode_info.m"
        }
#line 692 "mode_info.m"
      }
#line 691 "mode_info.m"
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
#line 686 "mode_info.m"
  {
#line 686 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 686 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 686 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 686 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 686 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 686 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 686 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 686 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 686 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 686 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 687 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));

#line 687 "mode_info.m"
    {
#line 687 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
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
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 687 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 687 "mode_info.m"
    }
#line 686 "mode_info.m"
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
#line 683 "mode_info.m"
  {
#line 683 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));

#line 681 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 683 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 681 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 683 "mode_info.m"
    else
#line 684 "mode_info.m"
      {
#line 684 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 684 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 684 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 684 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 684 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 684 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 684 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 684 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));

#line 684 "mode_info.m"
        {
#line 684 "mode_info.m"
          MR_Word base;
#line 684 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 684 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 684 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 684 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 684 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 684 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 684 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 684 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 684 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 684 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 684 "mode_info.m"
        }
#line 684 "mode_info.m"
      }
#line 683 "mode_info.m"
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
#line 897 "mode_info.m"
  {
#line 897 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 897 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeInfo_19_19;
#line 897 "mode_info.m"
    MR_Word check_hlds__mode_info__OldLiveVarsList_6;
#line 897 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 897 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars0_8;
#line 897 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars_9;
#line 897 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars_10;
#line 897 "mode_info.m"
    MR_Word check_hlds__mode_info__DelayInfo0_11;
#line 897 "mode_info.m"
    MR_Word check_hlds__mode_info__DelayInfo_12;
#line 897 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_15_15;
#line 897 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_16_16;
#line 897 "mode_info.m"
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

#line 898 "mode_info.m"
    {
#line 898 "mode_info.m"
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
#line 11768 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeInfo_19_19 = (MR_Word) &check_hlds__mode_info_scalar_common_1[0];
#line 901 "mode_info.m"
    {
#line 901 "mode_info.m"
      mercury__bag__det_remove_list_3_p_0(check_hlds__mode_info__TypeInfo_19_19, check_hlds__mode_info__OldLiveVarsList_6, check_hlds__mode_info__LiveVars0_7, &check_hlds__mode_info__LiveVars_9);
    }
#line 902 "mode_info.m"
    {
#line 902 "mode_info.m"
      mercury__bag__det_remove_list_3_p_0(check_hlds__mode_info__TypeInfo_19_19, check_hlds__mode_info__OldLiveVarsList_6, check_hlds__mode_info__NondetLiveVars0_8, &check_hlds__mode_info__NondetLiveVars_10);
    }
#line 903 "mode_info.m"
    {
#line 903 "mode_info.m"
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__mode_info__LiveVars_9, check_hlds__mode_info__STATE_VARIABLE_MI_0_13, &check_hlds__mode_info__STATE_VARIABLE_MI_15_15);
    }
#line 904 "mode_info.m"
    {
#line 904 "mode_info.m"
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
#line 909 "mode_info.m"
    {
#line 909 "mode_info.m"
      check_hlds__delay_info__delay_info_bind_var_list_3_p_0(check_hlds__mode_info__OldLiveVarsList_6, check_hlds__mode_info__DelayInfo0_11, &check_hlds__mode_info__DelayInfo_12);
    }
#line 910 "mode_info.m"
    {
#line 910 "mode_info.m"
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__mode_info__DelayInfo_12, check_hlds__mode_info__STATE_VARIABLE_MI_16_16, check_hlds__mode_info__STATE_VARIABLE_MI_14);
#line 910 "mode_info.m"
      return;
    }
#line 897 "mode_info.m"
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
#line 885 "mode_info.m"
  {
#line 885 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 885 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeInfo_16_16;
#line 885 "mode_info.m"
    MR_Word check_hlds__mode_info__NewLiveVarsList_6;
#line 885 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 885 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars0_8;
#line 885 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars_9;
#line 885 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars_10;
#line 885 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_13_13;
#line 885 "mode_info.m"
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

#line 886 "mode_info.m"
    {
#line 886 "mode_info.m"
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
#line 11982 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeInfo_16_16 = (MR_Word) &check_hlds__mode_info_scalar_common_1[0];
#line 889 "mode_info.m"
    {
#line 889 "mode_info.m"
      mercury__bag__insert_list_3_p_0(check_hlds__mode_info__TypeInfo_16_16, check_hlds__mode_info__NewLiveVarsList_6, check_hlds__mode_info__LiveVars0_7, &check_hlds__mode_info__LiveVars_9);
    }
#line 890 "mode_info.m"
    {
#line 890 "mode_info.m"
      mercury__bag__insert_list_3_p_0(check_hlds__mode_info__TypeInfo_16_16, check_hlds__mode_info__NewLiveVarsList_6, check_hlds__mode_info__NondetLiveVars0_8, &check_hlds__mode_info__NondetLiveVars_10);
    }
#line 891 "mode_info.m"
    {
#line 891 "mode_info.m"
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__mode_info__LiveVars_9, check_hlds__mode_info__STATE_VARIABLE_MI_0_11, &check_hlds__mode_info__STATE_VARIABLE_MI_13_13);
    }
#line 892 "mode_info.m"
    {
#line 892 "mode_info.m"
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__mode_info__NondetLiveVars_10, check_hlds__mode_info__STATE_VARIABLE_MI_13_13, check_hlds__mode_info__STATE_VARIABLE_MI_12);
#line 892 "mode_info.m"
      return;
    }
#line 885 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__X_4 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
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
#line 675 "mode_info.m"
  {
#line 675 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 671 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 671 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;

#line 671 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 671 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 671 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 671 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 671 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 671 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 671 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 675 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 671 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 675 "mode_info.m"
    else
#line 676 "mode_info.m"
      {
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12;
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 676 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);

#line 676 "mode_info.m"
        {
#line 676 "mode_info.m"
          check_hlds__mode_info__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 0) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 1) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 2) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 3) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 4) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 5) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 6) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 7) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 8) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) ((check_hlds__mode_info__V_59_59 | ((((check_hlds__mode_info__V_60_60 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_61_61 << (MR_Integer) 2)))))));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 10) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 11) = ((MR_Box) ((check_hlds__mode_info__V_63_63 | ((check_hlds__mode_info__V_64_64 << (MR_Integer) 1)))));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 12) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 13) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 14) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) ((check_hlds__mode_info__X_4 | ((((check_hlds__mode_info__V_69_69 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_70_70 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_71_71 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_73_73 << (MR_Integer) 5)))))))))))));
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_47_47));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 676 "mode_info.m"
        }
#line 676 "mode_info.m"
      }
#line 675 "mode_info.m"
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

#line 662 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 664 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 662 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 664 "mode_info.m"
    else
#line 665 "mode_info.m"
      {
#line 665 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 665 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 665 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 665 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 665 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 665 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 665 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 665 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));

#line 665 "mode_info.m"
        {
#line 665 "mode_info.m"
          MR_Word base;
#line 665 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 665 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 665 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 665 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 665 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 665 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 665 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 665 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 665 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 665 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 665 "mode_info.m"
        }
#line 665 "mode_info.m"
      }
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
#line 856 "mode_info.m"
  {
#line 856 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 856 "mode_info.m"
    MR_Word check_hlds__mode_info__InstMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 1)));
#line 856 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_11_11;
#line 856 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 0)));
#line 856 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 2)));
#line 856 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 3)));
#line 856 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 4)));
#line 856 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 5)));
#line 856 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 6)));
#line 856 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 7)));

#line 858 "mode_info.m"
    {
#line 858 "mode_info.m"
      check_hlds__mode_info__STATE_VARIABLE_MI_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 858 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 0) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 858 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 1) = ((MR_Box) (check_hlds__mode_info__InstMap_4));
#line 858 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 2) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 858 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 3) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 858 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 4) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 858 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 5) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 858 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 6) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 858 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 7) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 858 "mode_info.m"
    }
#line 860 "mode_info.m"
    {
#line 860 "mode_info.m"
      check_hlds__mode_info__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__mode_info__InstMap_4);
    }
#line 860 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 861 "mode_info.m"
      {
#line 861 "mode_info.m"
        check_hlds__mode_info__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__mode_info__InstMap0_6);
      }
#line 866 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 863 "mode_info.m"
      {
#line 863 "mode_info.m"
        MR_Word check_hlds__mode_info__DelayInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 2)));
#line 863 "mode_info.m"
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

#line 864 "mode_info.m"
        {
#line 864 "mode_info.m"
          check_hlds__delay_info__delay_info_bind_all_vars_2_p_0(check_hlds__mode_info__DelayInfo0_7, &check_hlds__mode_info__DelayInfo_8);
        }
#line 865 "mode_info.m"
        {
#line 865 "mode_info.m"
          check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__mode_info__DelayInfo_8, check_hlds__mode_info__STATE_VARIABLE_MI_11_11, check_hlds__mode_info__STATE_VARIABLE_MI_10);
#line 865 "mode_info.m"
          return;
        }
#line 863 "mode_info.m"
      }
#line 866 "mode_info.m"
    else
#line 865 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_10 = check_hlds__mode_info__STATE_VARIABLE_MI_11_11;
#line 856 "mode_info.m"
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
#line 851 "mode_info.m"
  {
#line 851 "mode_info.m"
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
#line 851 "mode_info.m"
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
#line 834 "mode_info.m"
  {
#line 834 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 834 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 4)));
#line 834 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 0)));
#line 834 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 1)));
#line 834 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 2)));
#line 834 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 3)));
#line 834 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 5)));
#line 834 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 6)));
#line 834 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 7)));

#line 840 "mode_info.m"
    if ((check_hlds__mode_info__ModeContext0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 847 "mode_info.m"
      {
#line 848 "mode_info.m"
        {
#line 848 "mode_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_set_call_arg_context\'/3", (MR_String) "uninitialized");
#line 848 "mode_info.m"
          return;
        }
#line 847 "mode_info.m"
      }
#line 840 "mode_info.m"
    else
#line 840 "mode_info.m"
      if (((MR_tag((MR_Word) check_hlds__mode_info__ModeContext0_6)) == (MR_mktag((MR_Integer) 1))))
#line 837 "mode_info.m"
        {
#line 837 "mode_info.m"
          MR_Word check_hlds__mode_info__CallId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__ModeContext0_6, (MR_Integer) 0)));
#line 837 "mode_info.m"
          MR_Word check_hlds__mode_info__V_16_16;
#line 837 "mode_info.m"
          MR_Integer check_hlds__mode_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__ModeContext0_6, (MR_Integer) 1)));

#line 838 "mode_info.m"
          {
#line 838 "mode_info.m"
            check_hlds__mode_info__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "mode_info.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_16_16, 0) = ((MR_Box) (check_hlds__mode_info__CallId_7));
#line 838 "mode_info.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_16_16, 1) = ((MR_Box) (check_hlds__mode_info__ArgNum_4));
#line 838 "mode_info.m"
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
#line 837 "mode_info.m"
        }
#line 840 "mode_info.m"
      else
#line 841 "mode_info.m"
        *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12 = check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11;
#line 834 "mode_info.m"
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
#line 829 "mode_info.m"
  {
#line 829 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;

#line 829 "mode_info.m"
    if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 831 "mode_info.m"
      {
#line 831 "mode_info.m"
        MR_Word check_hlds__mode_info__CallId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 831 "mode_info.m"
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

#line 832 "mode_info.m"
        {
#line 832 "mode_info.m"
          check_hlds__mode_info__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 832 "mode_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_15_15, 0) = ((MR_Box) (check_hlds__mode_info__CallId_11));
#line 832 "mode_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 832 "mode_info.m"
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
#line 831 "mode_info.m"
      }
#line 829 "mode_info.m"
    else
#line 829 "mode_info.m"
      {
#line 829 "mode_info.m"
        MR_Word check_hlds__mode_info__UnifyContext_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 829 "mode_info.m"
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

#line 830 "mode_info.m"
        {
#line 830 "mode_info.m"
          check_hlds__mode_info__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "mode_info.m"
          MR_hl_field(MR_mktag(2), check_hlds__mode_info__V_8_8, 0) = ((MR_Box) (check_hlds__mode_info__UnifyContext_4));
#line 830 "mode_info.m"
          MR_hl_field(MR_mktag(2), check_hlds__mode_info__V_8_8, 1) = ((MR_Box) ((MR_Integer) 0));
#line 830 "mode_info.m"
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
#line 829 "mode_info.m"
      }
#line 829 "mode_info.m"
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

#line 650 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 652 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 650 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 652 "mode_info.m"
    else
#line 653 "mode_info.m"
      {
#line 653 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 653 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 653 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 653 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 653 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 653 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 653 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 653 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));

#line 653 "mode_info.m"
        {
#line 653 "mode_info.m"
          MR_Word base;
#line 653 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 653 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 653 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 653 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 653 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 653 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 653 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 653 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 653 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 653 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 653 "mode_info.m"
        }
#line 653 "mode_info.m"
      }
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

#line 636 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 638 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 636 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 638 "mode_info.m"
    else
#line 639 "mode_info.m"
      {
#line 639 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 639 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 639 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 639 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 639 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 639 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 639 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 639 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));

#line 639 "mode_info.m"
        {
#line 639 "mode_info.m"
          MR_Word base;
#line 639 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 639 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 639 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 639 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 639 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 639 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 639 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 639 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 639 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 639 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 639 "mode_info.m"
        }
#line 639 "mode_info.m"
      }
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
#line 935 "mode_info.m"
  {
#line 935 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 935 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVarsBag_5;
#line 935 "mode_info.m"
    MR_Word check_hlds__mode_info__SortedList_6;
#line 935 "mode_info.m"
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
#line 937 "mode_info.m"
    {
#line 937 "mode_info.m"
      mercury__bag__to_list_without_duplicates_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVarsBag_5, &check_hlds__mode_info__SortedList_6);
    }
#line 938 "mode_info.m"
    {
#line 938 "mode_info.m"
      parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_info__SortedList_6, check_hlds__mode_info__LiveVars_4);
#line 938 "mode_info.m"
      return;
    }
#line 935 "mode_info.m"
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
#line 872 "mode_info.m"
  {
#line 872 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 872 "mode_info.m"
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

#line 874 "mode_info.m"
    {
#line 874 "mode_info.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__mode_info__Errors_5, check_hlds__mode_info__NumErrors_4);
#line 874 "mode_info.m"
      return;
    }
#line 872 "mode_info.m"
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
#line 825 "mode_info.m"
  {
#line 825 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 825 "mode_info.m"
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

#line 827 "mode_info.m"
    {
#line 827 "mode_info.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Insts_4);
#line 827 "mode_info.m"
      return;
    }
#line 825 "mode_info.m"
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
#line 821 "mode_info.m"
  {
#line 821 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 821 "mode_info.m"
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

#line 823 "mode_info.m"
    {
#line 823 "mode_info.m"
      hlds__hlds_module__module_info_get_mode_table_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Modes_4);
#line 823 "mode_info.m"
      return;
    }
#line 821 "mode_info.m"
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
#line 817 "mode_info.m"
  {
#line 817 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 817 "mode_info.m"
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

#line 819 "mode_info.m"
    {
#line 819 "mode_info.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Preds_4);
#line 819 "mode_info.m"
      return;
    }
#line 817 "mode_info.m"
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
#line 17285 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 528 "mode_info.m"
    {
#line 528 "mode_info.m"
      check_hlds__mode_info__V_59_59 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__mode_info__TypeCtorInfo_61_61, check_hlds__mode_info__LiveVars_15);
    }
#line 17292 "check_hlds.mode_info.c"
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
