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
#include "hlds.vartypes.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 137 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_0[1];

#line 140 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0;

#line 143 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_1[1];

#line 146 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1;

#line 149 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_0[1];

#line 152 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_1[1];

#line 155 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_call_context_0[2];

#line 158 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_call_context_0[2];

#line 161 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_call_context_0[2];

#line 164 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_debug_flags_0_0[3];

#line 167 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_debug_flags_0_0[3];

#line 170 "check_hlds.mode_info.c"
static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_debug_flags_0_0[3];

#line 173 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0;

#line 176 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0[1];

#line 179 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_debug_flags_0[1];

#line 182 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_debug_flags_0[1];

#line 185 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_debug_flags_0[1];

#line 188 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0;

#line 191 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1;

#line 194 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_had_from_ground_term_scope_0[2];

#line 197 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_had_from_ground_term_scope_0[2];

#line 200 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_had_from_ground_term_scope_0[2];

#line 203 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0;

#line 206 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1;

#line 209 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_how_to_check_goal_0[2];

#line 212 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_how_to_check_goal_0[2];

#line 215 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_how_to_check_goal_0[2];

#line 218 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0;

#line 221 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1;

#line 224 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_dupl_for_switch_0[2];

#line 227 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_dupl_for_switch_0[2];

#line 230 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_dupl_for_switch_0[2];

#line 233 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0;

#line 236 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1;

#line 239 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_from_ground_term_scope_0[2];

#line 242 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_from_ground_term_scope_0[2];

#line 245 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_from_ground_term_scope_0[2];

#line 248 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0;

#line 251 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1;

#line 254 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_promise_purity_scope_0[2];

#line 257 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_promise_purity_scope_0[2];

#line 260 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_promise_purity_scope_0[2];

#line 263 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 266 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 269 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 272 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 275 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0;

#line 278 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1;

#line 281 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_make_ground_terms_unique_0[2];

#line 284 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_make_ground_terms_unique_0[2];

#line 287 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_make_ground_terms_unique_0[2];

#line 290 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0;

#line 293 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1;

#line 296 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_change_called_proc_0[2];

#line 299 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_change_called_proc_0[2];

#line 302 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_change_called_proc_0[2];

#line 305 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0;

#line 308 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1;

#line 311 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_init_solver_vars_0[2];

#line 314 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_init_solver_vars_0[2];

#line 317 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_init_solver_vars_0[2];

#line 320 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_0[2];

#line 323 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0;

#line 326 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_1[2];

#line 329 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1;

#line 332 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2;

#line 335 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_0[1];

#line 338 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_1[1];

#line 341 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_2[1];

#line 344 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_context_0[3];

#line 347 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_context_0[3];

#line 350 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_context_0[3];

#line 353 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

#line 356 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 359 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_info_0_0[8];

#line 362 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_info_0_0[8];

#line 365 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0;

#line 368 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0[1];

#line 371 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_info_0[1];

#line 374 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_info_0[1];

#line 377 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_info_0[1];

#line 380 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 383 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 386 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0;

#line 389 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 392 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0;

#line 395 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 398 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 401 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_warning_info_0;

#line 404 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_sub_info_0_0[24];

#line 407 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_sub_info_0_0[24];

#line 410 "check_hlds.mode_info.c"
static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_mode_sub_info_0_0[24];

#line 413 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0;

#line 416 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0[1];

#line 419 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_sub_info_0[1];

#line 422 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_sub_info_0[1];

#line 425 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_sub_info_0[1];

#line 428 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_par_conj_mode_check_0_0[2];

#line 431 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_par_conj_mode_check_0_0[2];

#line 434 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0;

#line 437 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0[1];

#line 440 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_par_conj_mode_check_0[1];

#line 443 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_par_conj_mode_check_0[1];

#line 446 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_par_conj_mode_check_0[1];

#line 449 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0;

#line 452 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1;

#line 455 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_side_0[2];

#line 458 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_side_0[2];

#line 461 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_side_0[2];

#line 464 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0;

#line 467 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1;

#line 470 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_var_lock_reason_0_2[1];

#line 473 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2;

#line 476 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3;

#line 479 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4;

#line 482 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5;

#line 485 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_0[5];

#line 488 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_1[1];

#line 491 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_var_lock_reason_0[2];

#line 494 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_var_lock_reason_0[6];

#line 497 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_var_lock_reason_0[6];

#line 500 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____call_context_0_0_10001(
#line 503 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 505 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 508 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____call_context_0_0_10001(
#line 511 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 513 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 515 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 518 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____debug_flags_0_0_10001(
#line 521 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 523 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 526 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0_10001(
#line 529 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 531 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 533 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 536 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0_10001(
#line 539 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 541 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 544 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0_10001(
#line 547 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 549 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 551 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 554 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____how_to_check_goal_0_0_10001(
#line 557 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 559 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 562 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____how_to_check_goal_0_0_10001(
#line 565 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 567 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 569 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 572 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0_10001(
#line 575 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 577 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 580 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0_10001(
#line 583 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 585 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 587 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 590 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0_10001(
#line 593 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 595 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 598 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0_10001(
#line 601 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 603 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 605 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 608 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0_10001(
#line 611 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 613 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 616 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0_10001(
#line 619 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 621 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 623 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 626 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____locked_vars_0_0_10001(
#line 629 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 631 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 634 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____locked_vars_0_0_10001(
#line 637 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 639 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 641 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 644 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0_10001(
#line 647 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 649 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 652 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0_10001(
#line 655 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 657 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 659 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 662 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_change_called_proc_0_0_10001(
#line 665 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 667 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 670 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_change_called_proc_0_0_10001(
#line 673 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 675 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 677 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 680 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_init_solver_vars_0_0_10001(
#line 683 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 685 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 688 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_init_solver_vars_0_0_10001(
#line 691 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 693 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 695 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 698 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_context_0_0_10001(
#line 701 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 703 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 706 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_context_0_0_10001(
#line 709 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 711 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 713 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 716 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0_10001(
#line 719 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 721 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 724 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0_10001(
#line 727 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 729 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 731 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 734 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0_10001(
#line 737 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 739 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 742 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0_10001(
#line 745 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 747 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 749 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 752 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0_10001(
#line 755 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 757 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 760 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0_10001(
#line 763 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 765 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 767 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 770 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0_10001(
#line 773 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 775 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 778 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0_10001(
#line 781 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 783 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 785 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 788 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____side_0_0_10001(
#line 791 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 793 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 796 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____side_0_0_10001(
#line 799 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 801 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 803 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 806 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____var_lock_reason_0_0_10001(
#line 809 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 811 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 814 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____var_lock_reason_0_0_10001(
#line 817 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 819 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 821 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 364 "mode_info.m"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0(
#line 364 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 364 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 364 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3);

#line 364 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0(
#line 364 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 364 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2);

#line 973 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(
#line 973 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 973 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_7,
#line 973 "mode_info.m"
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
#include "string.mh"
#include "time.mh"
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

#line 68 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____var_lock_reason_0_0(
#line 68 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 68 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 68 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 68 "mode_info.m"
{
#line 68 "mode_info.m"
  {
#line 68 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 68 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_16 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 68 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_17 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 68 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_16 == check_hlds__mode_info__CastY_17);
#line 68 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 3364 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "mode_info.m"
    else
#line 68 "mode_info.m"
#line 68 "mode_info.m"
      switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__2_2)) {
#line 68 "mode_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 68 "mode_info.m"
        case (MR_Integer) 0:
#line 68 "mode_info.m"
#line 68 "mode_info.m"
          switch (MR_unmkbody(check_hlds__mode_info__HeadVar__2_2)) {
#line 68 "mode_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 68 "mode_info.m"
            case (MR_Integer) 0:
#line 68 "mode_info.m"
#line 68 "mode_info.m"
              switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) {
#line 68 "mode_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 68 "mode_info.m"
                case (MR_Integer) 0:
#line 68 "mode_info.m"
#line 68 "mode_info.m"
                  switch (MR_unmkbody(check_hlds__mode_info__HeadVar__3_3)) {
#line 68 "mode_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 68 "mode_info.m"
                    case (MR_Integer) 0:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 1:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 2:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 3:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 4:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                  }
#line 68 "mode_info.m"
                  break;
#line 68 "mode_info.m"
                case (MR_Integer) 1:
#line 3430 "check_hlds.mode_info.c"
                  *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "mode_info.m"
                  break;
#line 68 "mode_info.m"
              }
#line 68 "mode_info.m"
              break;
#line 68 "mode_info.m"
            case (MR_Integer) 1:
#line 68 "mode_info.m"
#line 68 "mode_info.m"
              switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) {
#line 68 "mode_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 68 "mode_info.m"
                case (MR_Integer) 0:
#line 68 "mode_info.m"
#line 68 "mode_info.m"
                  switch (MR_unmkbody(check_hlds__mode_info__HeadVar__3_3)) {
#line 68 "mode_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 68 "mode_info.m"
                    case (MR_Integer) 0:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 1:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 2:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 3:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 4:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                  }
#line 68 "mode_info.m"
                  break;
#line 68 "mode_info.m"
                case (MR_Integer) 1:
#line 3488 "check_hlds.mode_info.c"
                  *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "mode_info.m"
                  break;
#line 68 "mode_info.m"
              }
#line 68 "mode_info.m"
              break;
#line 68 "mode_info.m"
            case (MR_Integer) 2:
#line 68 "mode_info.m"
#line 68 "mode_info.m"
              switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) {
#line 68 "mode_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 68 "mode_info.m"
                case (MR_Integer) 0:
#line 68 "mode_info.m"
#line 68 "mode_info.m"
                  switch (MR_unmkbody(check_hlds__mode_info__HeadVar__3_3)) {
#line 68 "mode_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 68 "mode_info.m"
                    case (MR_Integer) 0:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 1:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 2:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 3:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 4:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                  }
#line 68 "mode_info.m"
                  break;
#line 68 "mode_info.m"
                case (MR_Integer) 1:
#line 3546 "check_hlds.mode_info.c"
                  *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "mode_info.m"
                  break;
#line 68 "mode_info.m"
              }
#line 68 "mode_info.m"
              break;
#line 68 "mode_info.m"
            case (MR_Integer) 3:
#line 68 "mode_info.m"
#line 68 "mode_info.m"
              switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) {
#line 68 "mode_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 68 "mode_info.m"
                case (MR_Integer) 0:
#line 68 "mode_info.m"
#line 68 "mode_info.m"
                  switch (MR_unmkbody(check_hlds__mode_info__HeadVar__3_3)) {
#line 68 "mode_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 68 "mode_info.m"
                    case (MR_Integer) 0:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 1:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 2:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 3:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 4:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                  }
#line 68 "mode_info.m"
                  break;
#line 68 "mode_info.m"
                case (MR_Integer) 1:
#line 3604 "check_hlds.mode_info.c"
                  *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "mode_info.m"
                  break;
#line 68 "mode_info.m"
              }
#line 68 "mode_info.m"
              break;
#line 68 "mode_info.m"
            case (MR_Integer) 4:
#line 68 "mode_info.m"
#line 68 "mode_info.m"
              switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) {
#line 68 "mode_info.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 68 "mode_info.m"
                case (MR_Integer) 0:
#line 68 "mode_info.m"
#line 68 "mode_info.m"
                  switch (MR_unmkbody(check_hlds__mode_info__HeadVar__3_3)) {
#line 68 "mode_info.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 68 "mode_info.m"
                    case (MR_Integer) 0:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 1:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 2:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 3:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                    case (MR_Integer) 4:
#line 68 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "mode_info.m"
                      break;
#line 68 "mode_info.m"
                  }
#line 68 "mode_info.m"
                  break;
#line 68 "mode_info.m"
                case (MR_Integer) 1:
#line 3662 "check_hlds.mode_info.c"
                  *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "mode_info.m"
                  break;
#line 68 "mode_info.m"
              }
#line 68 "mode_info.m"
              break;
#line 68 "mode_info.m"
          }
#line 68 "mode_info.m"
          break;
#line 68 "mode_info.m"
        case (MR_Integer) 1:
#line 68 "mode_info.m"
          {
#line 68 "mode_info.m"
            MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));

#line 68 "mode_info.m"
#line 68 "mode_info.m"
            switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) {
#line 68 "mode_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 68 "mode_info.m"
              case (MR_Integer) 0:
#line 68 "mode_info.m"
#line 68 "mode_info.m"
                switch (MR_unmkbody(check_hlds__mode_info__HeadVar__3_3)) {
#line 68 "mode_info.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 68 "mode_info.m"
                  case (MR_Integer) 0:
#line 3695 "check_hlds.mode_info.c"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "mode_info.m"
                    break;
#line 68 "mode_info.m"
                  case (MR_Integer) 1:
#line 3701 "check_hlds.mode_info.c"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "mode_info.m"
                    break;
#line 68 "mode_info.m"
                  case (MR_Integer) 2:
#line 3707 "check_hlds.mode_info.c"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "mode_info.m"
                    break;
#line 68 "mode_info.m"
                  case (MR_Integer) 3:
#line 3713 "check_hlds.mode_info.c"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "mode_info.m"
                    break;
#line 68 "mode_info.m"
                  case (MR_Integer) 4:
#line 3719 "check_hlds.mode_info.c"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "mode_info.m"
                    break;
#line 68 "mode_info.m"
                }
#line 68 "mode_info.m"
                break;
#line 68 "mode_info.m"
              case (MR_Integer) 1:
#line 68 "mode_info.m"
                {
#line 68 "mode_info.m"
                  MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));
#line 68 "mode_info.m"
                  MR_Integer check_hlds__mode_info__V_20_20 = (MR_Integer) check_hlds__mode_info__V_19_19;
#line 68 "mode_info.m"
                  MR_Integer check_hlds__mode_info__V_21_21 = (MR_Integer) check_hlds__mode_info__V_9_9;

#line 68 "mode_info.m"
                  {
#line 68 "mode_info.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_20_20, check_hlds__mode_info__V_21_21);
#line 68 "mode_info.m"
                    return;
                  }
#line 68 "mode_info.m"
                }
#line 68 "mode_info.m"
                break;
#line 68 "mode_info.m"
            }
#line 68 "mode_info.m"
          }
#line 68 "mode_info.m"
          break;
#line 68 "mode_info.m"
      }
#line 68 "mode_info.m"
  }
#line 68 "mode_info.m"
}

#line 68 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____var_lock_reason_0_0(
#line 68 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 68 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 68 "mode_info.m"
{
#line 68 "mode_info.m"
  {
#line 68 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 68 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_15 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 68 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_16 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 68 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_15 == check_hlds__mode_info__CastY_16);
#line 68 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 68 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 68 "mode_info.m"
    else
#line 68 "mode_info.m"
#line 68 "mode_info.m"
      switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) {
#line 68 "mode_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 68 "mode_info.m"
        case (MR_Integer) 0:
#line 68 "mode_info.m"
#line 68 "mode_info.m"
          switch (MR_unmkbody(check_hlds__mode_info__HeadVar__1_1)) {
#line 68 "mode_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 68 "mode_info.m"
            case (MR_Integer) 0:
#line 68 "mode_info.m"
              {
#line 68 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastX_3 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 68 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastY_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 68 "mode_info.m"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastY_4 == check_hlds__mode_info__CastX_3);
#line 68 "mode_info.m"
              }
#line 68 "mode_info.m"
              break;
#line 68 "mode_info.m"
            case (MR_Integer) 1:
#line 68 "mode_info.m"
              {
#line 68 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastX_5 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 68 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastY_6 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 68 "mode_info.m"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastY_6 == check_hlds__mode_info__CastX_5);
#line 68 "mode_info.m"
              }
#line 68 "mode_info.m"
              break;
#line 68 "mode_info.m"
            case (MR_Integer) 2:
#line 68 "mode_info.m"
              {
#line 68 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastX_9 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 68 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastY_10 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 68 "mode_info.m"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastY_10 == check_hlds__mode_info__CastX_9);
#line 68 "mode_info.m"
              }
#line 68 "mode_info.m"
              break;
#line 68 "mode_info.m"
            case (MR_Integer) 3:
#line 68 "mode_info.m"
              {
#line 68 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastX_11 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 68 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastY_12 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 68 "mode_info.m"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastY_12 == check_hlds__mode_info__CastX_11);
#line 68 "mode_info.m"
              }
#line 68 "mode_info.m"
              break;
#line 68 "mode_info.m"
            case (MR_Integer) 4:
#line 68 "mode_info.m"
              {
#line 68 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastX_13 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 68 "mode_info.m"
                MR_Integer check_hlds__mode_info__CastY_14 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 68 "mode_info.m"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastY_14 == check_hlds__mode_info__CastX_13);
#line 68 "mode_info.m"
              }
#line 68 "mode_info.m"
              break;
#line 68 "mode_info.m"
          }
#line 68 "mode_info.m"
          break;
#line 68 "mode_info.m"
        case (MR_Integer) 1:
#line 68 "mode_info.m"
          {
#line 68 "mode_info.m"
            MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 68 "mode_info.m"
            MR_Word check_hlds__mode_info__V_8_8;

#line 68 "mode_info.m"
            check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 68 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 68 "mode_info.m"
              {
#line 68 "mode_info.m"
                check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 3896 "check_hlds.mode_info.c"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_7_7 == check_hlds__mode_info__V_8_8);
#line 68 "mode_info.m"
              }
#line 68 "mode_info.m"
          }
#line 68 "mode_info.m"
          break;
#line 68 "mode_info.m"
      }
#line 68 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 68 "mode_info.m"
  }
#line 68 "mode_info.m"
}

#line 60 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____side_0_0(
#line 60 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 60 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 60 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 60 "mode_info.m"
{
#line 60 "mode_info.m"
  {
#line 60 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 60 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 60 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 60 "mode_info.m"
    {
#line 60 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
#line 60 "mode_info.m"
      return;
    }
#line 60 "mode_info.m"
  }
#line 60 "mode_info.m"
}

#line 60 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____side_0_0(
#line 60 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 60 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 60 "mode_info.m"
{
#line 3954 "check_hlds.mode_info.c"
  {
#line 3956 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 3959 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3961 "check_hlds.mode_info.c"
  }
#line 60 "mode_info.m"
}

#line 147 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0(
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
    MR_Word check_hlds__mode_info__Cast_HeadVar1_4 = check_hlds__mode_info__HeadVar__2_2;
#line 147 "mode_info.m"
    MR_Word check_hlds__mode_info__Cast_HeadVar2_5 = check_hlds__mode_info__HeadVar__3_3;

#line 147 "mode_info.m"
    {
#line 147 "mode_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[8], check_hlds__mode_info__HeadVar__1_1, ((MR_Box) (check_hlds__mode_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_info__Cast_HeadVar2_5)));
#line 147 "mode_info.m"
      return;
    }
#line 147 "mode_info.m"
  }
#line 147 "mode_info.m"
}

#line 147 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0(
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
    MR_Word check_hlds__mode_info__Cast_HeadVar1_3 = check_hlds__mode_info__HeadVar__1_1;
#line 147 "mode_info.m"
    MR_Word check_hlds__mode_info__Cast_HeadVar2_4 = check_hlds__mode_info__HeadVar__2_2;

#line 147 "mode_info.m"
    {
#line 147 "mode_info.m"
      return check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[8], ((MR_Box) (check_hlds__mode_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_info__Cast_HeadVar2_4)));
    }
#line 147 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 147 "mode_info.m"
  }
#line 147 "mode_info.m"
}

#line 148 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0(
#line 148 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 148 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 148 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 148 "mode_info.m"
{
#line 148 "mode_info.m"
  {
#line 148 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 148 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_9 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 148 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_10 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 148 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_9 == check_hlds__mode_info__CastY_10);
#line 148 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 4052 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 148 "mode_info.m"
    else
#line 148 "mode_info.m"
      {
#line 148 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 148 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 148 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));
#line 148 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 1)));
#line 148 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8;

#line 148 "mode_info.m"
        {
#line 148 "mode_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[3], &check_hlds__mode_info__V_8_8, ((MR_Box) (check_hlds__mode_info__V_4_4)), ((MR_Box) (check_hlds__mode_info__V_6_6)));
        }
#line 4074 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_8_8 == (MR_Integer) 0);
#line 148 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 148 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 148 "mode_info.m"
          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_8_8;
#line 148 "mode_info.m"
        else
#line 148 "mode_info.m"
          {
#line 148 "mode_info.m"
            {
#line 148 "mode_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[3], check_hlds__mode_info__HeadVar__1_1, ((MR_Box) (check_hlds__mode_info__V_5_5)), ((MR_Box) (check_hlds__mode_info__V_7_7)));
#line 148 "mode_info.m"
              return;
            }
#line 148 "mode_info.m"
          }
#line 148 "mode_info.m"
      }
#line 148 "mode_info.m"
  }
#line 148 "mode_info.m"
}

#line 148 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0(
#line 148 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 148 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 148 "mode_info.m"
{
#line 148 "mode_info.m"
  {
#line 148 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 148 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_7 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 148 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_8 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 148 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_7 == check_hlds__mode_info__CastY_8);
#line 148 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 148 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 148 "mode_info.m"
    else
#line 148 "mode_info.m"
      {
#line 148 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_10_10;
#line 148 "mode_info.m"
        MR_Word check_hlds__mode_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 148 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 148 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 148 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));

#line 4141 "check_hlds.mode_info.c"
        {
#line 4143 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[3], ((MR_Box) (check_hlds__mode_info__V_3_3)), ((MR_Box) (check_hlds__mode_info__V_5_5)));
        }
#line 148 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 148 "mode_info.m"
          {
#line 4150 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeInfo_10_10 = (MR_Word) &check_hlds__mode_info_scalar_common_1[3];
#line 4152 "check_hlds.mode_info.c"
            {
#line 4154 "check_hlds.mode_info.c"
              return check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_10_10, ((MR_Box) (check_hlds__mode_info__V_4_4)), ((MR_Box) (check_hlds__mode_info__V_6_6)));
            }
#line 148 "mode_info.m"
          }
#line 148 "mode_info.m"
      }
#line 148 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 148 "mode_info.m"
  }
#line 148 "mode_info.m"
}

#line 364 "mode_info.m"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0(
#line 364 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 364 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 364 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 364 "mode_info.m"
{
#line 364 "mode_info.m"
  {
#line 364 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 364 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_75 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 364 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_76 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 364 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_75 == check_hlds__mode_info__CastY_76);
#line 364 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 4192 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 364 "mode_info.m"
    else
#line 364 "mode_info.m"
      {
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 364 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 8)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 10)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 12)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 13)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));
#line 364 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 1)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 2)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 3)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 4)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 5)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 6)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 7)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 8)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 10)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 12)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 13)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 14)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52;

#line 364 "mode_info.m"
        {
#line 364 "mode_info.m"
          hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__mode_info__V_52_52, check_hlds__mode_info__V_4_4, check_hlds__mode_info__V_28_28);
        }
#line 4302 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_52_52 == (MR_Integer) 0);
#line 364 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_52_52;
#line 364 "mode_info.m"
        else
#line 364 "mode_info.m"
          {
#line 364 "mode_info.m"
            MR_Word check_hlds__mode_info__V_53_53;

#line 364 "mode_info.m"
            {
#line 364 "mode_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_53_53, check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_29_29);
            }
#line 4322 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_53_53 == (MR_Integer) 0);
#line 364 "mode_info.m"
            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_53_53;
#line 364 "mode_info.m"
            else
#line 364 "mode_info.m"
              {
#line 364 "mode_info.m"
                MR_Word check_hlds__mode_info__V_54_54;

#line 364 "mode_info.m"
                {
#line 364 "mode_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[5], &check_hlds__mode_info__V_54_54, ((MR_Box) (check_hlds__mode_info__V_6_6)), ((MR_Box) (check_hlds__mode_info__V_30_30)));
                }
#line 4342 "check_hlds.mode_info.c"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_54_54 == (MR_Integer) 0);
#line 364 "mode_info.m"
                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_54_54;
#line 364 "mode_info.m"
                else
#line 364 "mode_info.m"
                  {
#line 364 "mode_info.m"
                    MR_Word check_hlds__mode_info__V_55_55;

#line 364 "mode_info.m"
                    {
#line 364 "mode_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_2[1], &check_hlds__mode_info__V_55_55, ((MR_Box) (check_hlds__mode_info__V_7_7)), ((MR_Box) (check_hlds__mode_info__V_31_31)));
                    }
#line 4362 "check_hlds.mode_info.c"
                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_55_55 == (MR_Integer) 0);
#line 364 "mode_info.m"
                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_55_55;
#line 364 "mode_info.m"
                    else
#line 364 "mode_info.m"
                      {
#line 364 "mode_info.m"
                        MR_Word check_hlds__mode_info__V_56_56;

#line 364 "mode_info.m"
                        {
#line 364 "mode_info.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[6], &check_hlds__mode_info__V_56_56, ((MR_Box) (check_hlds__mode_info__V_8_8)), ((MR_Box) (check_hlds__mode_info__V_32_32)));
                        }
#line 4382 "check_hlds.mode_info.c"
                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_56_56 == (MR_Integer) 0);
#line 364 "mode_info.m"
                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_56_56;
#line 364 "mode_info.m"
                        else
#line 364 "mode_info.m"
                          {
#line 364 "mode_info.m"
                            MR_Word check_hlds__mode_info__V_57_57;

#line 364 "mode_info.m"
                            {
#line 364 "mode_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[4], &check_hlds__mode_info__V_57_57, ((MR_Box) (check_hlds__mode_info__V_9_9)), ((MR_Box) (check_hlds__mode_info__V_33_33)));
                            }
#line 4402 "check_hlds.mode_info.c"
                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_57_57 == (MR_Integer) 0);
#line 364 "mode_info.m"
                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_57_57;
#line 364 "mode_info.m"
                            else
#line 364 "mode_info.m"
                              {
#line 364 "mode_info.m"
                                MR_Word check_hlds__mode_info__V_58_58;

#line 364 "mode_info.m"
                                {
#line 364 "mode_info.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[2], &check_hlds__mode_info__V_58_58, ((MR_Box) (check_hlds__mode_info__V_10_10)), ((MR_Box) (check_hlds__mode_info__V_34_34)));
                                }
#line 4422 "check_hlds.mode_info.c"
                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_58_58 == (MR_Integer) 0);
#line 364 "mode_info.m"
                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_58_58;
#line 364 "mode_info.m"
                                else
#line 364 "mode_info.m"
                                  {
#line 364 "mode_info.m"
                                    MR_Word check_hlds__mode_info__V_59_59;

#line 364 "mode_info.m"
                                    {
#line 364 "mode_info.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[7], &check_hlds__mode_info__V_59_59, ((MR_Box) (check_hlds__mode_info__V_11_11)), ((MR_Box) (check_hlds__mode_info__V_35_35)));
                                    }
#line 4442 "check_hlds.mode_info.c"
                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_59_59 == (MR_Integer) 0);
#line 364 "mode_info.m"
                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                                    if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_59_59;
#line 364 "mode_info.m"
                                    else
#line 364 "mode_info.m"
                                      {
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_60_60;

#line 364 "mode_info.m"
                                        {
#line 364 "mode_info.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[8], &check_hlds__mode_info__V_60_60, ((MR_Box) (check_hlds__mode_info__V_12_12)), ((MR_Box) (check_hlds__mode_info__V_36_36)));
                                        }
#line 4462 "check_hlds.mode_info.c"
                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_60_60 == (MR_Integer) 0);
#line 364 "mode_info.m"
                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                                        if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_60_60;
#line 364 "mode_info.m"
                                        else
#line 364 "mode_info.m"
                                          {
#line 364 "mode_info.m"
                                            MR_Word check_hlds__mode_info__V_61_61;
#line 364 "mode_info.m"
                                            MR_Integer check_hlds__mode_info__V_101_101 = (MR_Integer) check_hlds__mode_info__V_13_13;
#line 364 "mode_info.m"
                                            MR_Integer check_hlds__mode_info__V_102_102 = (MR_Integer) check_hlds__mode_info__V_37_37;

#line 364 "mode_info.m"
                                            {
#line 364 "mode_info.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_61_61, check_hlds__mode_info__V_101_101, check_hlds__mode_info__V_102_102);
                                            }
#line 4486 "check_hlds.mode_info.c"
                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_61_61 == (MR_Integer) 0);
#line 364 "mode_info.m"
                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                                            if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_61_61;
#line 364 "mode_info.m"
                                            else
#line 364 "mode_info.m"
                                              {
#line 364 "mode_info.m"
                                                MR_Word check_hlds__mode_info__V_62_62;
#line 364 "mode_info.m"
                                                MR_Integer check_hlds__mode_info__V_103_103 = (MR_Integer) check_hlds__mode_info__V_14_14;
#line 364 "mode_info.m"
                                                MR_Integer check_hlds__mode_info__V_104_104 = (MR_Integer) check_hlds__mode_info__V_38_38;

#line 364 "mode_info.m"
                                                {
#line 364 "mode_info.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_62_62, check_hlds__mode_info__V_103_103, check_hlds__mode_info__V_104_104);
                                                }
#line 4510 "check_hlds.mode_info.c"
                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_62_62 == (MR_Integer) 0);
#line 364 "mode_info.m"
                                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                                                if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_62_62;
#line 364 "mode_info.m"
                                                else
#line 364 "mode_info.m"
                                                  {
#line 364 "mode_info.m"
                                                    MR_Word check_hlds__mode_info__V_63_63;
#line 364 "mode_info.m"
                                                    MR_Integer check_hlds__mode_info__V_105_105 = (MR_Integer) check_hlds__mode_info__V_15_15;
#line 364 "mode_info.m"
                                                    MR_Integer check_hlds__mode_info__V_106_106 = (MR_Integer) check_hlds__mode_info__V_39_39;

#line 364 "mode_info.m"
                                                    {
#line 364 "mode_info.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_63_63, check_hlds__mode_info__V_105_105, check_hlds__mode_info__V_106_106);
                                                    }
#line 4534 "check_hlds.mode_info.c"
                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_63_63 == (MR_Integer) 0);
#line 364 "mode_info.m"
                                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                                                    if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_63_63;
#line 364 "mode_info.m"
                                                    else
#line 364 "mode_info.m"
                                                      {
#line 364 "mode_info.m"
                                                        MR_Word check_hlds__mode_info__V_64_64;

#line 364 "mode_info.m"
                                                        {
#line 364 "mode_info.m"
                                                          hlds__instmap____Compare____instmap_0_0(&check_hlds__mode_info__V_64_64, check_hlds__mode_info__V_16_16, check_hlds__mode_info__V_40_40);
                                                        }
#line 4554 "check_hlds.mode_info.c"
                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_64_64 == (MR_Integer) 0);
#line 364 "mode_info.m"
                                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                                                        if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_64_64;
#line 364 "mode_info.m"
                                                        else
#line 364 "mode_info.m"
                                                          {
#line 364 "mode_info.m"
                                                            MR_Word check_hlds__mode_info__V_65_65;
#line 364 "mode_info.m"
                                                            MR_Integer check_hlds__mode_info__V_107_107 = (MR_Integer) check_hlds__mode_info__V_17_17;
#line 364 "mode_info.m"
                                                            MR_Integer check_hlds__mode_info__V_108_108 = (MR_Integer) check_hlds__mode_info__V_41_41;

#line 364 "mode_info.m"
                                                            {
#line 364 "mode_info.m"
                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_65_65, check_hlds__mode_info__V_107_107, check_hlds__mode_info__V_108_108);
                                                            }
#line 4578 "check_hlds.mode_info.c"
                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_65_65 == (MR_Integer) 0);
#line 364 "mode_info.m"
                                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                                                            if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_65_65;
#line 364 "mode_info.m"
                                                            else
#line 364 "mode_info.m"
                                                              {
#line 364 "mode_info.m"
                                                                MR_Word check_hlds__mode_info__V_66_66;
#line 364 "mode_info.m"
                                                                MR_Integer check_hlds__mode_info__V_109_109 = (MR_Integer) check_hlds__mode_info__V_18_18;
#line 364 "mode_info.m"
                                                                MR_Integer check_hlds__mode_info__V_110_110 = (MR_Integer) check_hlds__mode_info__V_42_42;

#line 364 "mode_info.m"
                                                                {
#line 364 "mode_info.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_66_66, check_hlds__mode_info__V_109_109, check_hlds__mode_info__V_110_110);
                                                                }
#line 4602 "check_hlds.mode_info.c"
                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_66_66 == (MR_Integer) 0);
#line 364 "mode_info.m"
                                                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                                                                if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_66_66;
#line 364 "mode_info.m"
                                                                else
#line 364 "mode_info.m"
                                                                  {
#line 364 "mode_info.m"
                                                                    MR_Word check_hlds__mode_info__V_67_67;

#line 364 "mode_info.m"
                                                                    {
#line 364 "mode_info.m"
                                                                      hlds__instmap____Compare____instmap_0_0(&check_hlds__mode_info__V_67_67, check_hlds__mode_info__V_19_19, check_hlds__mode_info__V_43_43);
                                                                    }
#line 4622 "check_hlds.mode_info.c"
                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_67_67 == (MR_Integer) 0);
#line 364 "mode_info.m"
                                                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                                                                    if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_67_67;
#line 364 "mode_info.m"
                                                                    else
#line 364 "mode_info.m"
                                                                      {
#line 364 "mode_info.m"
                                                                        MR_Word check_hlds__mode_info__V_68_68;

#line 364 "mode_info.m"
                                                                        {
#line 364 "mode_info.m"
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_2[2], &check_hlds__mode_info__V_68_68, ((MR_Box) (check_hlds__mode_info__V_20_20)), ((MR_Box) (check_hlds__mode_info__V_44_44)));
                                                                        }
#line 4642 "check_hlds.mode_info.c"
                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_68_68 == (MR_Integer) 0);
#line 364 "mode_info.m"
                                                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                                                                        if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_68_68;
#line 364 "mode_info.m"
                                                                        else
#line 364 "mode_info.m"
                                                                          {
#line 364 "mode_info.m"
                                                                            MR_Word check_hlds__mode_info__V_69_69;

#line 364 "mode_info.m"
                                                                            {
#line 364 "mode_info.m"
                                                                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[10], &check_hlds__mode_info__V_69_69, ((MR_Box) (check_hlds__mode_info__V_21_21)), ((MR_Box) (check_hlds__mode_info__V_45_45)));
                                                                            }
#line 4662 "check_hlds.mode_info.c"
                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_69_69 == (MR_Integer) 0);
#line 364 "mode_info.m"
                                                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                                                                            if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_69_69;
#line 364 "mode_info.m"
                                                                            else
#line 364 "mode_info.m"
                                                                              {
#line 364 "mode_info.m"
                                                                                MR_Word check_hlds__mode_info__V_70_70;
#line 364 "mode_info.m"
                                                                                MR_Integer check_hlds__mode_info__V_111_111 = (MR_Integer) check_hlds__mode_info__V_22_22;
#line 364 "mode_info.m"
                                                                                MR_Integer check_hlds__mode_info__V_112_112 = (MR_Integer) check_hlds__mode_info__V_46_46;

#line 364 "mode_info.m"
                                                                                {
#line 364 "mode_info.m"
                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_70_70, check_hlds__mode_info__V_111_111, check_hlds__mode_info__V_112_112);
                                                                                }
#line 4686 "check_hlds.mode_info.c"
                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_70_70 == (MR_Integer) 0);
#line 364 "mode_info.m"
                                                                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                                                                                if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_70_70;
#line 364 "mode_info.m"
                                                                                else
#line 364 "mode_info.m"
                                                                                  {
#line 364 "mode_info.m"
                                                                                    MR_Word check_hlds__mode_info__V_71_71;
#line 364 "mode_info.m"
                                                                                    MR_Integer check_hlds__mode_info__V_113_113 = (MR_Integer) check_hlds__mode_info__V_23_23;
#line 364 "mode_info.m"
                                                                                    MR_Integer check_hlds__mode_info__V_114_114 = (MR_Integer) check_hlds__mode_info__V_47_47;

#line 364 "mode_info.m"
                                                                                    {
#line 364 "mode_info.m"
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_71_71, check_hlds__mode_info__V_113_113, check_hlds__mode_info__V_114_114);
                                                                                    }
#line 4710 "check_hlds.mode_info.c"
                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_71_71 == (MR_Integer) 0);
#line 364 "mode_info.m"
                                                                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                                                                                    if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_71_71;
#line 364 "mode_info.m"
                                                                                    else
#line 364 "mode_info.m"
                                                                                      {
#line 364 "mode_info.m"
                                                                                        MR_Word check_hlds__mode_info__V_72_72;
#line 364 "mode_info.m"
                                                                                        MR_Integer check_hlds__mode_info__V_115_115 = (MR_Integer) check_hlds__mode_info__V_24_24;
#line 364 "mode_info.m"
                                                                                        MR_Integer check_hlds__mode_info__V_116_116 = (MR_Integer) check_hlds__mode_info__V_48_48;

#line 364 "mode_info.m"
                                                                                        {
#line 364 "mode_info.m"
                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_72_72, check_hlds__mode_info__V_115_115, check_hlds__mode_info__V_116_116);
                                                                                        }
#line 4734 "check_hlds.mode_info.c"
                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_72_72 == (MR_Integer) 0);
#line 364 "mode_info.m"
                                                                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                                                                                        if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_72_72;
#line 364 "mode_info.m"
                                                                                        else
#line 364 "mode_info.m"
                                                                                          {
#line 364 "mode_info.m"
                                                                                            MR_Word check_hlds__mode_info__V_73_73;
#line 364 "mode_info.m"
                                                                                            MR_Integer check_hlds__mode_info__V_117_117 = (MR_Integer) check_hlds__mode_info__V_25_25;
#line 364 "mode_info.m"
                                                                                            MR_Integer check_hlds__mode_info__V_118_118 = (MR_Integer) check_hlds__mode_info__V_49_49;

#line 364 "mode_info.m"
                                                                                            {
#line 364 "mode_info.m"
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_73_73, check_hlds__mode_info__V_117_117, check_hlds__mode_info__V_118_118);
                                                                                            }
#line 4758 "check_hlds.mode_info.c"
                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_73_73 == (MR_Integer) 0);
#line 364 "mode_info.m"
                                                                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                                                                                            if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_73_73;
#line 364 "mode_info.m"
                                                                                            else
#line 364 "mode_info.m"
                                                                                              {
#line 364 "mode_info.m"
                                                                                                MR_Word check_hlds__mode_info__V_74_74;
#line 364 "mode_info.m"
                                                                                                MR_Integer check_hlds__mode_info__V_119_119 = (MR_Integer) check_hlds__mode_info__V_26_26;
#line 364 "mode_info.m"
                                                                                                MR_Integer check_hlds__mode_info__V_120_120 = (MR_Integer) check_hlds__mode_info__V_50_50;

#line 364 "mode_info.m"
                                                                                                {
#line 364 "mode_info.m"
                                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_74_74, check_hlds__mode_info__V_119_119, check_hlds__mode_info__V_120_120);
                                                                                                }
#line 4782 "check_hlds.mode_info.c"
                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_74_74 == (MR_Integer) 0);
#line 364 "mode_info.m"
                                                                                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 364 "mode_info.m"
                                                                                                if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_74_74;
#line 364 "mode_info.m"
                                                                                                else
#line 364 "mode_info.m"
                                                                                                  {
#line 364 "mode_info.m"
                                                                                                    MR_Integer check_hlds__mode_info__V_121_121 = (MR_Integer) check_hlds__mode_info__V_27_27;
#line 364 "mode_info.m"
                                                                                                    MR_Integer check_hlds__mode_info__V_122_122 = (MR_Integer) check_hlds__mode_info__V_51_51;

#line 364 "mode_info.m"
                                                                                                    {
#line 364 "mode_info.m"
                                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_121_121, check_hlds__mode_info__V_122_122);
#line 364 "mode_info.m"
                                                                                                      return;
                                                                                                    }
#line 364 "mode_info.m"
                                                                                                  }
#line 364 "mode_info.m"
                                                                                              }
#line 364 "mode_info.m"
                                                                                          }
#line 364 "mode_info.m"
                                                                                      }
#line 364 "mode_info.m"
                                                                                  }
#line 364 "mode_info.m"
                                                                              }
#line 364 "mode_info.m"
                                                                          }
#line 364 "mode_info.m"
                                                                      }
#line 364 "mode_info.m"
                                                                  }
#line 364 "mode_info.m"
                                                              }
#line 364 "mode_info.m"
                                                          }
#line 364 "mode_info.m"
                                                      }
#line 364 "mode_info.m"
                                                  }
#line 364 "mode_info.m"
                                              }
#line 364 "mode_info.m"
                                          }
#line 364 "mode_info.m"
                                      }
#line 364 "mode_info.m"
                                  }
#line 364 "mode_info.m"
                              }
#line 364 "mode_info.m"
                          }
#line 364 "mode_info.m"
                      }
#line 364 "mode_info.m"
                  }
#line 364 "mode_info.m"
              }
#line 364 "mode_info.m"
          }
#line 364 "mode_info.m"
      }
#line 364 "mode_info.m"
  }
#line 364 "mode_info.m"
}

#line 364 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0(
#line 364 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 364 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 364 "mode_info.m"
{
#line 364 "mode_info.m"
  {
#line 364 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 364 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_51 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 364 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_52 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 364 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_51 == check_hlds__mode_info__CastY_52);
#line 364 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 364 "mode_info.m"
    else
#line 364 "mode_info.m"
      {
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_54_54;
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_55_55;
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_56_56;
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_57_57;
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_58_58;
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_59_59;
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_60_60;
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_63_63;
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_64_64;
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 364 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 2)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 3)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 4)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 5)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 6)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 7)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 8)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 10)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 12)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 13)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 14)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 364 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 8)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 10)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 12)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 13)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)));
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 364 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 5002 "check_hlds.mode_info.c"
        {
#line 5004 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_27_27);
        }
#line 364 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
          {
#line 5011 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_4_4 == check_hlds__mode_info__V_28_28);
#line 364 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
              {
#line 5017 "check_hlds.mode_info.c"
                check_hlds__mode_info__TypeInfo_54_54 = (MR_Word) &check_hlds__mode_info_scalar_common_1[5];
#line 5019 "check_hlds.mode_info.c"
                {
#line 5021 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_54_54, ((MR_Box) (check_hlds__mode_info__V_5_5)), ((MR_Box) (check_hlds__mode_info__V_29_29)));
                }
#line 364 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                  {
#line 5028 "check_hlds.mode_info.c"
                    check_hlds__mode_info__TypeInfo_55_55 = (MR_Word) &check_hlds__mode_info_scalar_common_2[1];
#line 5030 "check_hlds.mode_info.c"
                    {
#line 5032 "check_hlds.mode_info.c"
                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_55_55, ((MR_Box) (check_hlds__mode_info__V_6_6)), ((MR_Box) (check_hlds__mode_info__V_30_30)));
                    }
#line 364 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                      {
#line 5039 "check_hlds.mode_info.c"
                        check_hlds__mode_info__TypeInfo_56_56 = (MR_Word) &check_hlds__mode_info_scalar_common_1[6];
#line 5041 "check_hlds.mode_info.c"
                        {
#line 5043 "check_hlds.mode_info.c"
                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_56_56, ((MR_Box) (check_hlds__mode_info__V_7_7)), ((MR_Box) (check_hlds__mode_info__V_31_31)));
                        }
#line 364 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                          {
#line 5050 "check_hlds.mode_info.c"
                            check_hlds__mode_info__TypeInfo_57_57 = (MR_Word) &check_hlds__mode_info_scalar_common_1[4];
#line 5052 "check_hlds.mode_info.c"
                            {
#line 5054 "check_hlds.mode_info.c"
                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_57_57, ((MR_Box) (check_hlds__mode_info__V_8_8)), ((MR_Box) (check_hlds__mode_info__V_32_32)));
                            }
#line 364 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                              {
#line 5061 "check_hlds.mode_info.c"
                                check_hlds__mode_info__TypeInfo_58_58 = (MR_Word) &check_hlds__mode_info_scalar_common_1[2];
#line 5063 "check_hlds.mode_info.c"
                                {
#line 5065 "check_hlds.mode_info.c"
                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_58_58, ((MR_Box) (check_hlds__mode_info__V_9_9)), ((MR_Box) (check_hlds__mode_info__V_33_33)));
                                }
#line 364 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                  {
#line 5072 "check_hlds.mode_info.c"
                                    check_hlds__mode_info__TypeInfo_59_59 = (MR_Word) &check_hlds__mode_info_scalar_common_1[7];
#line 5074 "check_hlds.mode_info.c"
                                    {
#line 5076 "check_hlds.mode_info.c"
                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_59_59, ((MR_Box) (check_hlds__mode_info__V_10_10)), ((MR_Box) (check_hlds__mode_info__V_34_34)));
                                    }
#line 364 "mode_info.m"
                                    if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                      {
#line 5083 "check_hlds.mode_info.c"
                                        check_hlds__mode_info__TypeInfo_60_60 = (MR_Word) &check_hlds__mode_info_scalar_common_1[8];
#line 5085 "check_hlds.mode_info.c"
                                        {
#line 5087 "check_hlds.mode_info.c"
                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_60_60, ((MR_Box) (check_hlds__mode_info__V_11_11)), ((MR_Box) (check_hlds__mode_info__V_35_35)));
                                        }
#line 364 "mode_info.m"
                                        if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                          {
#line 5094 "check_hlds.mode_info.c"
                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_12_12 == check_hlds__mode_info__V_36_36);
#line 364 "mode_info.m"
                                            if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                              {
#line 5100 "check_hlds.mode_info.c"
                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_13_13 == check_hlds__mode_info__V_37_37);
#line 364 "mode_info.m"
                                                if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                  {
#line 5106 "check_hlds.mode_info.c"
                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_14_14 == check_hlds__mode_info__V_38_38);
#line 364 "mode_info.m"
                                                    if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                      {
#line 5112 "check_hlds.mode_info.c"
                                                        {
#line 5114 "check_hlds.mode_info.c"
                                                          check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_15_15, check_hlds__mode_info__V_39_39);
                                                        }
#line 364 "mode_info.m"
                                                        if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                          {
#line 5121 "check_hlds.mode_info.c"
                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_16_16 == check_hlds__mode_info__V_40_40);
#line 364 "mode_info.m"
                                                            if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                              {
#line 5127 "check_hlds.mode_info.c"
                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_17_17 == check_hlds__mode_info__V_41_41);
#line 364 "mode_info.m"
                                                                if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                  {
#line 5133 "check_hlds.mode_info.c"
                                                                    {
#line 5135 "check_hlds.mode_info.c"
                                                                      check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_18_18, check_hlds__mode_info__V_42_42);
                                                                    }
#line 364 "mode_info.m"
                                                                    if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                      {
#line 5142 "check_hlds.mode_info.c"
                                                                        check_hlds__mode_info__TypeInfo_63_63 = (MR_Word) &check_hlds__mode_info_scalar_common_2[2];
#line 5144 "check_hlds.mode_info.c"
                                                                        {
#line 5146 "check_hlds.mode_info.c"
                                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_63_63, ((MR_Box) (check_hlds__mode_info__V_19_19)), ((MR_Box) (check_hlds__mode_info__V_43_43)));
                                                                        }
#line 364 "mode_info.m"
                                                                        if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                          {
#line 5153 "check_hlds.mode_info.c"
                                                                            check_hlds__mode_info__TypeInfo_64_64 = (MR_Word) &check_hlds__mode_info_scalar_common_1[10];
#line 5155 "check_hlds.mode_info.c"
                                                                            {
#line 5157 "check_hlds.mode_info.c"
                                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_64_64, ((MR_Box) (check_hlds__mode_info__V_20_20)), ((MR_Box) (check_hlds__mode_info__V_44_44)));
                                                                            }
#line 364 "mode_info.m"
                                                                            if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                              {
#line 5164 "check_hlds.mode_info.c"
                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_21_21 == check_hlds__mode_info__V_45_45);
#line 364 "mode_info.m"
                                                                                if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                  {
#line 5170 "check_hlds.mode_info.c"
                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_22_22 == check_hlds__mode_info__V_46_46);
#line 364 "mode_info.m"
                                                                                    if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                      {
#line 5176 "check_hlds.mode_info.c"
                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_23_23 == check_hlds__mode_info__V_47_47);
#line 364 "mode_info.m"
                                                                                        if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                          {
#line 5182 "check_hlds.mode_info.c"
                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_24_24 == check_hlds__mode_info__V_48_48);
#line 364 "mode_info.m"
                                                                                            if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                              {
#line 5188 "check_hlds.mode_info.c"
                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_25_25 == check_hlds__mode_info__V_49_49);
#line 364 "mode_info.m"
                                                                                                if (check_hlds__mode_info__succeeded)
#line 5192 "check_hlds.mode_info.c"
                                                                                                  check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_26_26 == check_hlds__mode_info__V_50_50);
#line 364 "mode_info.m"
                                                                                              }
#line 364 "mode_info.m"
                                                                                          }
#line 364 "mode_info.m"
                                                                                      }
#line 364 "mode_info.m"
                                                                                  }
#line 364 "mode_info.m"
                                                                              }
#line 364 "mode_info.m"
                                                                          }
#line 364 "mode_info.m"
                                                                      }
#line 364 "mode_info.m"
                                                                  }
#line 364 "mode_info.m"
                                                              }
#line 364 "mode_info.m"
                                                          }
#line 364 "mode_info.m"
                                                      }
#line 364 "mode_info.m"
                                                  }
#line 364 "mode_info.m"
                                              }
#line 364 "mode_info.m"
                                          }
#line 364 "mode_info.m"
                                      }
#line 364 "mode_info.m"
                                  }
#line 364 "mode_info.m"
                              }
#line 364 "mode_info.m"
                          }
#line 364 "mode_info.m"
                      }
#line 364 "mode_info.m"
                  }
#line 364 "mode_info.m"
              }
#line 364 "mode_info.m"
          }
#line 364 "mode_info.m"
      }
#line 364 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 364 "mode_info.m"
  }
#line 364 "mode_info.m"
}

#line 477 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0(
#line 477 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 477 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 477 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 477 "mode_info.m"
{
#line 477 "mode_info.m"
  {
#line 477 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 477 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_27 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 477 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_28 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 477 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_27 == check_hlds__mode_info__CastY_28);
#line 477 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 5271 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 477 "mode_info.m"
    else
#line 477 "mode_info.m"
      {
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 1)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 2)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 3)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 4)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 5)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 6)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 7)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20;

#line 477 "mode_info.m"
        {
#line 477 "mode_info.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__mode_info__V_20_20, check_hlds__mode_info__V_4_4, check_hlds__mode_info__V_12_12);
        }
#line 5317 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_20_20 == (MR_Integer) 0);
#line 477 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 477 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 477 "mode_info.m"
          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_20_20;
#line 477 "mode_info.m"
        else
#line 477 "mode_info.m"
          {
#line 477 "mode_info.m"
            MR_Word check_hlds__mode_info__V_21_21;

#line 477 "mode_info.m"
            {
#line 477 "mode_info.m"
              hlds__instmap____Compare____instmap_0_0(&check_hlds__mode_info__V_21_21, check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_13_13);
            }
#line 5337 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_21_21 == (MR_Integer) 0);
#line 477 "mode_info.m"
            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 477 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 477 "mode_info.m"
              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_21_21;
#line 477 "mode_info.m"
            else
#line 477 "mode_info.m"
              {
#line 477 "mode_info.m"
                MR_Word check_hlds__mode_info__V_22_22;

#line 477 "mode_info.m"
                {
#line 477 "mode_info.m"
                  check_hlds__delay_info____Compare____delay_info_0_0(&check_hlds__mode_info__V_22_22, check_hlds__mode_info__V_6_6, check_hlds__mode_info__V_14_14);
                }
#line 5357 "check_hlds.mode_info.c"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_22_22 == (MR_Integer) 0);
#line 477 "mode_info.m"
                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 477 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 477 "mode_info.m"
                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_22_22;
#line 477 "mode_info.m"
                else
#line 477 "mode_info.m"
                  {
#line 477 "mode_info.m"
                    MR_Word check_hlds__mode_info__V_23_23;

#line 477 "mode_info.m"
                    {
#line 477 "mode_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[1], &check_hlds__mode_info__V_23_23, ((MR_Box) (check_hlds__mode_info__V_7_7)), ((MR_Box) (check_hlds__mode_info__V_15_15)));
                    }
#line 5377 "check_hlds.mode_info.c"
                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_23_23 == (MR_Integer) 0);
#line 477 "mode_info.m"
                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 477 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 477 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_23_23;
#line 477 "mode_info.m"
                    else
#line 477 "mode_info.m"
                      {
#line 477 "mode_info.m"
                        MR_Word check_hlds__mode_info__V_24_24;

#line 477 "mode_info.m"
                        {
#line 477 "mode_info.m"
                          check_hlds__mode_info____Compare____mode_context_0_0(&check_hlds__mode_info__V_24_24, check_hlds__mode_info__V_8_8, check_hlds__mode_info__V_16_16);
                        }
#line 5397 "check_hlds.mode_info.c"
                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_24_24 == (MR_Integer) 0);
#line 477 "mode_info.m"
                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 477 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 477 "mode_info.m"
                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_24_24;
#line 477 "mode_info.m"
                        else
#line 477 "mode_info.m"
                          {
#line 477 "mode_info.m"
                            MR_Word check_hlds__mode_info__V_25_25;

#line 477 "mode_info.m"
                            {
#line 477 "mode_info.m"
                              mercury__term____Compare____context_0_0(&check_hlds__mode_info__V_25_25, check_hlds__mode_info__V_9_9, check_hlds__mode_info__V_17_17);
                            }
#line 5417 "check_hlds.mode_info.c"
                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_25_25 == (MR_Integer) 0);
#line 477 "mode_info.m"
                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 477 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 477 "mode_info.m"
                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_25_25;
#line 477 "mode_info.m"
                            else
#line 477 "mode_info.m"
                              {
#line 477 "mode_info.m"
                                MR_Word check_hlds__mode_info__V_26_26;

#line 477 "mode_info.m"
                                {
#line 477 "mode_info.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[2], &check_hlds__mode_info__V_26_26, ((MR_Box) (check_hlds__mode_info__V_10_10)), ((MR_Box) (check_hlds__mode_info__V_18_18)));
                                }
#line 5437 "check_hlds.mode_info.c"
                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_26_26 == (MR_Integer) 0);
#line 477 "mode_info.m"
                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 477 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 477 "mode_info.m"
                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_26_26;
#line 477 "mode_info.m"
                                else
#line 477 "mode_info.m"
                                  {
#line 477 "mode_info.m"
                                    check_hlds__mode_info____Compare____mode_sub_info_0_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_11_11, check_hlds__mode_info__V_19_19);
#line 477 "mode_info.m"
                                    return;
                                  }
#line 477 "mode_info.m"
                              }
#line 477 "mode_info.m"
                          }
#line 477 "mode_info.m"
                      }
#line 477 "mode_info.m"
                  }
#line 477 "mode_info.m"
              }
#line 477 "mode_info.m"
          }
#line 477 "mode_info.m"
      }
#line 477 "mode_info.m"
  }
#line 477 "mode_info.m"
}

#line 477 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0(
#line 477 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 477 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 477 "mode_info.m"
{
#line 477 "mode_info.m"
  {
#line 477 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 477 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_19 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 477 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_20 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 477 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_19 == check_hlds__mode_info__CastY_20);
#line 477 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 477 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 477 "mode_info.m"
    else
#line 477 "mode_info.m"
      {
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_24_24;
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_26_26;
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 2)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 3)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 4)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 5)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 6)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 7)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 477 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 364 "mode_info.m"
        MR_Integer check_hlds__mode_info__CastX_75;
#line 364 "mode_info.m"
        MR_Integer check_hlds__mode_info__CastY_76;

#line 5542 "check_hlds.mode_info.c"
        {
#line 5544 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_11_11);
        }
#line 477 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 477 "mode_info.m"
          {
#line 5551 "check_hlds.mode_info.c"
            {
#line 5553 "check_hlds.mode_info.c"
              check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_4_4, check_hlds__mode_info__V_12_12);
            }
#line 477 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 477 "mode_info.m"
              {
#line 5560 "check_hlds.mode_info.c"
                {
#line 5562 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = check_hlds__delay_info____Unify____delay_info_0_0(check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_13_13);
                }
#line 477 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 477 "mode_info.m"
                  {
#line 5569 "check_hlds.mode_info.c"
                    check_hlds__mode_info__TypeInfo_24_24 = (MR_Word) &check_hlds__mode_info_scalar_common_1[1];
#line 5571 "check_hlds.mode_info.c"
                    {
#line 5573 "check_hlds.mode_info.c"
                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_24_24, ((MR_Box) (check_hlds__mode_info__V_6_6)), ((MR_Box) (check_hlds__mode_info__V_14_14)));
                    }
#line 477 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 477 "mode_info.m"
                      {
#line 5580 "check_hlds.mode_info.c"
                        {
#line 5582 "check_hlds.mode_info.c"
                          check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_context_0_0(check_hlds__mode_info__V_7_7, check_hlds__mode_info__V_15_15);
                        }
#line 477 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 477 "mode_info.m"
                          {
#line 5589 "check_hlds.mode_info.c"
                            {
#line 5591 "check_hlds.mode_info.c"
                              check_hlds__mode_info__succeeded = mercury__term____Unify____context_0_0(check_hlds__mode_info__V_8_8, check_hlds__mode_info__V_16_16);
                            }
#line 477 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 477 "mode_info.m"
                              {
#line 5598 "check_hlds.mode_info.c"
                                check_hlds__mode_info__TypeInfo_26_26 = (MR_Word) &check_hlds__mode_info_scalar_common_1[2];
#line 5600 "check_hlds.mode_info.c"
                                {
#line 5602 "check_hlds.mode_info.c"
                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_26_26, ((MR_Box) (check_hlds__mode_info__V_9_9)), ((MR_Box) (check_hlds__mode_info__V_17_17)));
                                }
#line 477 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 477 "mode_info.m"
                                  {
#line 364 "mode_info.m"
                                    check_hlds__mode_info__CastX_75 = (MR_Integer) check_hlds__mode_info__V_10_10;
#line 364 "mode_info.m"
                                    check_hlds__mode_info__CastY_76 = (MR_Integer) check_hlds__mode_info__V_18_18;
#line 364 "mode_info.m"
                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_75 == check_hlds__mode_info__CastY_76);
#line 364 "mode_info.m"
                                    if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                      check_hlds__mode_info__succeeded = MR_TRUE;
#line 364 "mode_info.m"
                                    else
#line 364 "mode_info.m"
                                      {
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_54_78;
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_55_79;
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_56_80;
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_57_81;
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_58_82;
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_59_83;
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_60_84;
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_63_87;
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_64_88;
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 0)));
#line 364 "mode_info.m"
                                        MR_Integer check_hlds__mode_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 1)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 2)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 3)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 4)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 5)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 6)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 7)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 8)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 13)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 0)));
#line 364 "mode_info.m"
                                        MR_Integer check_hlds__mode_info__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 1)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 2)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 3)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 4)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 5)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 6)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 7)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 8)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_60_60 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 10)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_64_64 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 12)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 13)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 14)));
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_69_69 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 364 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 5738 "check_hlds.mode_info.c"
                                        {
#line 5740 "check_hlds.mode_info.c"
                                          check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_info__V_27_27, check_hlds__mode_info__V_51_51);
                                        }
#line 364 "mode_info.m"
                                        if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                          {
#line 5747 "check_hlds.mode_info.c"
                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_28_28 == check_hlds__mode_info__V_52_52);
#line 364 "mode_info.m"
                                            if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                              {
#line 5753 "check_hlds.mode_info.c"
                                                check_hlds__mode_info__TypeInfo_54_78 = (MR_Word) &check_hlds__mode_info_scalar_common_1[5];
#line 5755 "check_hlds.mode_info.c"
                                                {
#line 5757 "check_hlds.mode_info.c"
                                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_54_78, ((MR_Box) (check_hlds__mode_info__V_29_29)), ((MR_Box) (check_hlds__mode_info__V_53_53)));
                                                }
#line 364 "mode_info.m"
                                                if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                  {
#line 5764 "check_hlds.mode_info.c"
                                                    check_hlds__mode_info__TypeInfo_55_79 = (MR_Word) &check_hlds__mode_info_scalar_common_2[1];
#line 5766 "check_hlds.mode_info.c"
                                                    {
#line 5768 "check_hlds.mode_info.c"
                                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_55_79, ((MR_Box) (check_hlds__mode_info__V_30_30)), ((MR_Box) (check_hlds__mode_info__V_54_54)));
                                                    }
#line 364 "mode_info.m"
                                                    if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                      {
#line 5775 "check_hlds.mode_info.c"
                                                        check_hlds__mode_info__TypeInfo_56_80 = (MR_Word) &check_hlds__mode_info_scalar_common_1[6];
#line 5777 "check_hlds.mode_info.c"
                                                        {
#line 5779 "check_hlds.mode_info.c"
                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_56_80, ((MR_Box) (check_hlds__mode_info__V_31_31)), ((MR_Box) (check_hlds__mode_info__V_55_55)));
                                                        }
#line 364 "mode_info.m"
                                                        if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                          {
#line 5786 "check_hlds.mode_info.c"
                                                            check_hlds__mode_info__TypeInfo_57_81 = (MR_Word) &check_hlds__mode_info_scalar_common_1[4];
#line 5788 "check_hlds.mode_info.c"
                                                            {
#line 5790 "check_hlds.mode_info.c"
                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_57_81, ((MR_Box) (check_hlds__mode_info__V_32_32)), ((MR_Box) (check_hlds__mode_info__V_56_56)));
                                                            }
#line 364 "mode_info.m"
                                                            if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                              {
#line 5797 "check_hlds.mode_info.c"
                                                                check_hlds__mode_info__TypeInfo_58_82 = (MR_Word) &check_hlds__mode_info_scalar_common_1[2];
#line 5799 "check_hlds.mode_info.c"
                                                                {
#line 5801 "check_hlds.mode_info.c"
                                                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_58_82, ((MR_Box) (check_hlds__mode_info__V_33_33)), ((MR_Box) (check_hlds__mode_info__V_57_57)));
                                                                }
#line 364 "mode_info.m"
                                                                if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                  {
#line 5808 "check_hlds.mode_info.c"
                                                                    check_hlds__mode_info__TypeInfo_59_83 = (MR_Word) &check_hlds__mode_info_scalar_common_1[7];
#line 5810 "check_hlds.mode_info.c"
                                                                    {
#line 5812 "check_hlds.mode_info.c"
                                                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_59_83, ((MR_Box) (check_hlds__mode_info__V_34_34)), ((MR_Box) (check_hlds__mode_info__V_58_58)));
                                                                    }
#line 364 "mode_info.m"
                                                                    if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                      {
#line 5819 "check_hlds.mode_info.c"
                                                                        check_hlds__mode_info__TypeInfo_60_84 = (MR_Word) &check_hlds__mode_info_scalar_common_1[8];
#line 5821 "check_hlds.mode_info.c"
                                                                        {
#line 5823 "check_hlds.mode_info.c"
                                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_60_84, ((MR_Box) (check_hlds__mode_info__V_35_35)), ((MR_Box) (check_hlds__mode_info__V_59_59)));
                                                                        }
#line 364 "mode_info.m"
                                                                        if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                          {
#line 5830 "check_hlds.mode_info.c"
                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_36_36 == check_hlds__mode_info__V_60_60);
#line 364 "mode_info.m"
                                                                            if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                              {
#line 5836 "check_hlds.mode_info.c"
                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_37_37 == check_hlds__mode_info__V_61_61);
#line 364 "mode_info.m"
                                                                                if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                  {
#line 5842 "check_hlds.mode_info.c"
                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_38_38 == check_hlds__mode_info__V_62_62);
#line 364 "mode_info.m"
                                                                                    if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                      {
#line 5848 "check_hlds.mode_info.c"
                                                                                        {
#line 5850 "check_hlds.mode_info.c"
                                                                                          check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_39_39, check_hlds__mode_info__V_63_63);
                                                                                        }
#line 364 "mode_info.m"
                                                                                        if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                          {
#line 5857 "check_hlds.mode_info.c"
                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_40_40 == check_hlds__mode_info__V_64_64);
#line 364 "mode_info.m"
                                                                                            if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                              {
#line 5863 "check_hlds.mode_info.c"
                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_41_41 == check_hlds__mode_info__V_65_65);
#line 364 "mode_info.m"
                                                                                                if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                                  {
#line 5869 "check_hlds.mode_info.c"
                                                                                                    {
#line 5871 "check_hlds.mode_info.c"
                                                                                                      check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_42_42, check_hlds__mode_info__V_66_66);
                                                                                                    }
#line 364 "mode_info.m"
                                                                                                    if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                                      {
#line 5878 "check_hlds.mode_info.c"
                                                                                                        check_hlds__mode_info__TypeInfo_63_87 = (MR_Word) &check_hlds__mode_info_scalar_common_2[2];
#line 5880 "check_hlds.mode_info.c"
                                                                                                        {
#line 5882 "check_hlds.mode_info.c"
                                                                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_63_87, ((MR_Box) (check_hlds__mode_info__V_43_43)), ((MR_Box) (check_hlds__mode_info__V_67_67)));
                                                                                                        }
#line 364 "mode_info.m"
                                                                                                        if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                                          {
#line 5889 "check_hlds.mode_info.c"
                                                                                                            check_hlds__mode_info__TypeInfo_64_88 = (MR_Word) &check_hlds__mode_info_scalar_common_1[10];
#line 5891 "check_hlds.mode_info.c"
                                                                                                            {
#line 5893 "check_hlds.mode_info.c"
                                                                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_64_88, ((MR_Box) (check_hlds__mode_info__V_44_44)), ((MR_Box) (check_hlds__mode_info__V_68_68)));
                                                                                                            }
#line 364 "mode_info.m"
                                                                                                            if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                                              {
#line 5900 "check_hlds.mode_info.c"
                                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_45_45 == check_hlds__mode_info__V_69_69);
#line 364 "mode_info.m"
                                                                                                                if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                                                  {
#line 5906 "check_hlds.mode_info.c"
                                                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_46_46 == check_hlds__mode_info__V_70_70);
#line 364 "mode_info.m"
                                                                                                                    if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                                                      {
#line 5912 "check_hlds.mode_info.c"
                                                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_47_47 == check_hlds__mode_info__V_71_71);
#line 364 "mode_info.m"
                                                                                                                        if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                                                          {
#line 5918 "check_hlds.mode_info.c"
                                                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_48_48 == check_hlds__mode_info__V_72_72);
#line 364 "mode_info.m"
                                                                                                                            if (check_hlds__mode_info__succeeded)
#line 364 "mode_info.m"
                                                                                                                              {
#line 5924 "check_hlds.mode_info.c"
                                                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_49_49 == check_hlds__mode_info__V_73_73);
#line 364 "mode_info.m"
                                                                                                                                if (check_hlds__mode_info__succeeded)
#line 5928 "check_hlds.mode_info.c"
                                                                                                                                  check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_50_50 == check_hlds__mode_info__V_74_74);
#line 364 "mode_info.m"
                                                                                                                              }
#line 364 "mode_info.m"
                                                                                                                          }
#line 364 "mode_info.m"
                                                                                                                      }
#line 364 "mode_info.m"
                                                                                                                  }
#line 364 "mode_info.m"
                                                                                                              }
#line 364 "mode_info.m"
                                                                                                          }
#line 364 "mode_info.m"
                                                                                                      }
#line 364 "mode_info.m"
                                                                                                  }
#line 364 "mode_info.m"
                                                                                              }
#line 364 "mode_info.m"
                                                                                          }
#line 364 "mode_info.m"
                                                                                      }
#line 364 "mode_info.m"
                                                                                  }
#line 364 "mode_info.m"
                                                                              }
#line 364 "mode_info.m"
                                                                          }
#line 364 "mode_info.m"
                                                                      }
#line 364 "mode_info.m"
                                                                  }
#line 364 "mode_info.m"
                                                              }
#line 364 "mode_info.m"
                                                          }
#line 364 "mode_info.m"
                                                      }
#line 364 "mode_info.m"
                                                  }
#line 364 "mode_info.m"
                                              }
#line 364 "mode_info.m"
                                          }
#line 364 "mode_info.m"
                                      }
#line 477 "mode_info.m"
                                  }
#line 477 "mode_info.m"
                              }
#line 477 "mode_info.m"
                          }
#line 477 "mode_info.m"
                      }
#line 477 "mode_info.m"
                  }
#line 477 "mode_info.m"
              }
#line 477 "mode_info.m"
          }
#line 477 "mode_info.m"
      }
#line 477 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 477 "mode_info.m"
  }
#line 477 "mode_info.m"
}

#line 47 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____mode_context_0_0(
#line 47 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 47 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 47 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 47 "mode_info.m"
{
#line 47 "mode_info.m"
  {
#line 47 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 47 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_30 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 47 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_31 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 47 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_30 == check_hlds__mode_info__CastY_31);
#line 47 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 6023 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 47 "mode_info.m"
    else
#line 47 "mode_info.m"
#line 47 "mode_info.m"
      switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__2_2)) {
#line 47 "mode_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 47 "mode_info.m"
        case (MR_Integer) 0:
#line 47 "mode_info.m"
#line 47 "mode_info.m"
          switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) {
#line 47 "mode_info.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 47 "mode_info.m"
            case (MR_Integer) 0:
#line 47 "mode_info.m"
              *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 47 "mode_info.m"
              break;
#line 47 "mode_info.m"
            case (MR_Integer) 1:
#line 6047 "check_hlds.mode_info.c"
              *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "mode_info.m"
              break;
#line 47 "mode_info.m"
            case (MR_Integer) 2:
#line 6053 "check_hlds.mode_info.c"
              *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "mode_info.m"
              break;
#line 47 "mode_info.m"
          }
#line 47 "mode_info.m"
          break;
#line 47 "mode_info.m"
        case (MR_Integer) 1:
#line 47 "mode_info.m"
          {
#line 47 "mode_info.m"
            MR_Integer check_hlds__mode_info__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 47 "mode_info.m"
            MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));

#line 47 "mode_info.m"
#line 47 "mode_info.m"
            switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) {
#line 47 "mode_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 47 "mode_info.m"
              case (MR_Integer) 0:
#line 6077 "check_hlds.mode_info.c"
                *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "mode_info.m"
                break;
#line 47 "mode_info.m"
              case (MR_Integer) 1:
#line 47 "mode_info.m"
                {
#line 47 "mode_info.m"
                  MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));
#line 47 "mode_info.m"
                  MR_Integer check_hlds__mode_info__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 1)));
#line 47 "mode_info.m"
                  MR_Word check_hlds__mode_info__V_8_8;

#line 47 "mode_info.m"
                  {
#line 47 "mode_info.m"
                    hlds__hlds_pred____Compare____call_id_0_0(&check_hlds__mode_info__V_8_8, check_hlds__mode_info__V_37_37, check_hlds__mode_info__V_6_6);
                  }
#line 6097 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_8_8 == (MR_Integer) 0);
#line 47 "mode_info.m"
                  check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 47 "mode_info.m"
                  if (check_hlds__mode_info__succeeded)
#line 47 "mode_info.m"
                    *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_8_8;
#line 47 "mode_info.m"
                  else
#line 47 "mode_info.m"
                    {
#line 47 "mode_info.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_36_36, check_hlds__mode_info__V_7_7);
#line 47 "mode_info.m"
                      return;
                    }
#line 47 "mode_info.m"
                }
#line 47 "mode_info.m"
                break;
#line 47 "mode_info.m"
              case (MR_Integer) 2:
#line 6120 "check_hlds.mode_info.c"
                *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "mode_info.m"
                break;
#line 47 "mode_info.m"
            }
#line 47 "mode_info.m"
          }
#line 47 "mode_info.m"
          break;
#line 47 "mode_info.m"
        case (MR_Integer) 2:
#line 47 "mode_info.m"
          {
#line 47 "mode_info.m"
            MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 47 "mode_info.m"
            MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));

#line 47 "mode_info.m"
#line 47 "mode_info.m"
            switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) {
#line 47 "mode_info.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 47 "mode_info.m"
              case (MR_Integer) 0:
#line 6146 "check_hlds.mode_info.c"
                *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "mode_info.m"
                break;
#line 47 "mode_info.m"
              case (MR_Integer) 1:
#line 6152 "check_hlds.mode_info.c"
                *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "mode_info.m"
                break;
#line 47 "mode_info.m"
              case (MR_Integer) 2:
#line 47 "mode_info.m"
                {
#line 47 "mode_info.m"
                  MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));
#line 47 "mode_info.m"
                  MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 1)));
#line 47 "mode_info.m"
                  MR_Word check_hlds__mode_info__V_23_23;

#line 47 "mode_info.m"
                  {
#line 47 "mode_info.m"
                    hlds__hlds_goal____Compare____unify_context_0_0(&check_hlds__mode_info__V_23_23, check_hlds__mode_info__V_39_39, check_hlds__mode_info__V_21_21);
                  }
#line 6172 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_23_23 == (MR_Integer) 0);
#line 47 "mode_info.m"
                  check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 47 "mode_info.m"
                  if (check_hlds__mode_info__succeeded)
#line 47 "mode_info.m"
                    *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_23_23;
#line 47 "mode_info.m"
                  else
#line 47 "mode_info.m"
                    {
#line 47 "mode_info.m"
                      MR_Integer check_hlds__mode_info__V_40_40 = (MR_Integer) check_hlds__mode_info__V_38_38;
#line 47 "mode_info.m"
                      MR_Integer check_hlds__mode_info__V_41_41 = (MR_Integer) check_hlds__mode_info__V_22_22;

#line 47 "mode_info.m"
                      {
#line 47 "mode_info.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_40_40, check_hlds__mode_info__V_41_41);
#line 47 "mode_info.m"
                        return;
                      }
#line 47 "mode_info.m"
                    }
#line 47 "mode_info.m"
                }
#line 47 "mode_info.m"
                break;
#line 47 "mode_info.m"
            }
#line 47 "mode_info.m"
          }
#line 47 "mode_info.m"
          break;
#line 47 "mode_info.m"
      }
#line 47 "mode_info.m"
  }
#line 47 "mode_info.m"
}

#line 47 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_context_0_0(
#line 47 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 47 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 47 "mode_info.m"
{
#line 47 "mode_info.m"
  {
#line 47 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 47 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_13 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 47 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_14 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 47 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_13 == check_hlds__mode_info__CastY_14);
#line 47 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 47 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 47 "mode_info.m"
    else
#line 47 "mode_info.m"
#line 47 "mode_info.m"
      switch (MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) {
#line 47 "mode_info.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 47 "mode_info.m"
        case (MR_Integer) 0:
#line 47 "mode_info.m"
          {
#line 47 "mode_info.m"
            MR_Integer check_hlds__mode_info__CastX_11 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 47 "mode_info.m"
            MR_Integer check_hlds__mode_info__CastY_12 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 47 "mode_info.m"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastY_12 == check_hlds__mode_info__CastX_11);
#line 47 "mode_info.m"
          }
#line 47 "mode_info.m"
          break;
#line 47 "mode_info.m"
        case (MR_Integer) 1:
#line 47 "mode_info.m"
          {
#line 47 "mode_info.m"
            MR_Word check_hlds__mode_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 47 "mode_info.m"
            MR_Integer check_hlds__mode_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 47 "mode_info.m"
            MR_Word check_hlds__mode_info__V_5_5;
#line 47 "mode_info.m"
            MR_Integer check_hlds__mode_info__V_6_6;

#line 47 "mode_info.m"
            check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 47 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 47 "mode_info.m"
              {
#line 47 "mode_info.m"
                check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 47 "mode_info.m"
                check_hlds__mode_info__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 6284 "check_hlds.mode_info.c"
                {
#line 6286 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____call_id_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_5_5);
                }
#line 47 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 6291 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_4_4 == check_hlds__mode_info__V_6_6);
#line 47 "mode_info.m"
              }
#line 47 "mode_info.m"
          }
#line 47 "mode_info.m"
          break;
#line 47 "mode_info.m"
        case (MR_Integer) 2:
#line 47 "mode_info.m"
          {
#line 47 "mode_info.m"
            MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 47 "mode_info.m"
            MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 47 "mode_info.m"
            MR_Word check_hlds__mode_info__V_9_9;
#line 47 "mode_info.m"
            MR_Word check_hlds__mode_info__V_10_10;

#line 47 "mode_info.m"
            check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 47 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 47 "mode_info.m"
              {
#line 47 "mode_info.m"
                check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 47 "mode_info.m"
                check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 6322 "check_hlds.mode_info.c"
                {
#line 6324 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = hlds__hlds_goal____Unify____unify_context_0_0(check_hlds__mode_info__V_7_7, check_hlds__mode_info__V_9_9);
                }
#line 47 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 6329 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_8_8 == check_hlds__mode_info__V_10_10);
#line 47 "mode_info.m"
              }
#line 47 "mode_info.m"
          }
#line 47 "mode_info.m"
          break;
#line 47 "mode_info.m"
      }
#line 47 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 47 "mode_info.m"
  }
#line 47 "mode_info.m"
}

#line 117 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____may_init_solver_vars_0_0(
#line 117 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 117 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 117 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 117 "mode_info.m"
{
#line 117 "mode_info.m"
  {
#line 117 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 117 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 117 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 117 "mode_info.m"
    {
#line 117 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
#line 117 "mode_info.m"
      return;
    }
#line 117 "mode_info.m"
  }
#line 117 "mode_info.m"
}

#line 117 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_init_solver_vars_0_0(
#line 117 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 117 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 117 "mode_info.m"
{
#line 6387 "check_hlds.mode_info.c"
  {
#line 6389 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6392 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6394 "check_hlds.mode_info.c"
  }
#line 117 "mode_info.m"
}

#line 88 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____may_change_called_proc_0_0(
#line 88 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 88 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 88 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 88 "mode_info.m"
{
#line 88 "mode_info.m"
  {
#line 88 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 88 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 88 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 88 "mode_info.m"
    {
#line 88 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
#line 88 "mode_info.m"
      return;
    }
#line 88 "mode_info.m"
  }
#line 88 "mode_info.m"
}

#line 88 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_change_called_proc_0_0(
#line 88 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 88 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 88 "mode_info.m"
{
#line 6440 "check_hlds.mode_info.c"
  {
#line 6442 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6445 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6447 "check_hlds.mode_info.c"
  }
#line 88 "mode_info.m"
}

#line 133 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0(
#line 133 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 133 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 133 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 133 "mode_info.m"
{
#line 133 "mode_info.m"
  {
#line 133 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 133 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 133 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 133 "mode_info.m"
    {
#line 133 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
#line 133 "mode_info.m"
      return;
    }
#line 133 "mode_info.m"
  }
#line 133 "mode_info.m"
}

#line 133 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0(
#line 133 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 133 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 133 "mode_info.m"
{
#line 6493 "check_hlds.mode_info.c"
  {
#line 6495 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6498 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6500 "check_hlds.mode_info.c"
  }
#line 133 "mode_info.m"
}

#line 92 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____locked_vars_0_0(
#line 92 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 92 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 92 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 92 "mode_info.m"
{
#line 92 "mode_info.m"
  {
#line 92 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 92 "mode_info.m"
    MR_Word check_hlds__mode_info__Cast_HeadVar1_4 = check_hlds__mode_info__HeadVar__2_2;
#line 92 "mode_info.m"
    MR_Word check_hlds__mode_info__Cast_HeadVar2_5 = check_hlds__mode_info__HeadVar__3_3;

#line 92 "mode_info.m"
    {
#line 92 "mode_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[4], check_hlds__mode_info__HeadVar__1_1, ((MR_Box) (check_hlds__mode_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_info__Cast_HeadVar2_5)));
#line 92 "mode_info.m"
      return;
    }
#line 92 "mode_info.m"
  }
#line 92 "mode_info.m"
}

#line 92 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____locked_vars_0_0(
#line 92 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 92 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 92 "mode_info.m"
{
#line 92 "mode_info.m"
  {
#line 92 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 92 "mode_info.m"
    MR_Word check_hlds__mode_info__Cast_HeadVar1_3 = check_hlds__mode_info__HeadVar__1_1;
#line 92 "mode_info.m"
    MR_Word check_hlds__mode_info__Cast_HeadVar2_4 = check_hlds__mode_info__HeadVar__2_2;

#line 92 "mode_info.m"
    {
#line 92 "mode_info.m"
      return check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[4], ((MR_Box) (check_hlds__mode_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_info__Cast_HeadVar2_4)));
    }
#line 92 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 92 "mode_info.m"
  }
#line 92 "mode_info.m"
}

#line 121 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0(
#line 121 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 121 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 121 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 121 "mode_info.m"
{
#line 121 "mode_info.m"
  {
#line 121 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 121 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 121 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 121 "mode_info.m"
    {
#line 121 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
#line 121 "mode_info.m"
      return;
    }
#line 121 "mode_info.m"
  }
#line 121 "mode_info.m"
}

#line 121 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0(
#line 121 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 121 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 121 "mode_info.m"
{
#line 6608 "check_hlds.mode_info.c"
  {
#line 6610 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6613 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6615 "check_hlds.mode_info.c"
  }
#line 121 "mode_info.m"
}

#line 125 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0(
#line 125 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 125 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 125 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 125 "mode_info.m"
{
#line 125 "mode_info.m"
  {
#line 125 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 125 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 125 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 125 "mode_info.m"
    {
#line 125 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
#line 125 "mode_info.m"
      return;
    }
#line 125 "mode_info.m"
  }
#line 125 "mode_info.m"
}

#line 125 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0(
#line 125 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 125 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 125 "mode_info.m"
{
#line 6661 "check_hlds.mode_info.c"
  {
#line 6663 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6666 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6668 "check_hlds.mode_info.c"
  }
#line 125 "mode_info.m"
}

#line 137 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0(
#line 137 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 137 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 137 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 137 "mode_info.m"
{
#line 137 "mode_info.m"
  {
#line 137 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 137 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 137 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 137 "mode_info.m"
    {
#line 137 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
#line 137 "mode_info.m"
      return;
    }
#line 137 "mode_info.m"
  }
#line 137 "mode_info.m"
}

#line 137 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0(
#line 137 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 137 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 137 "mode_info.m"
{
#line 6714 "check_hlds.mode_info.c"
  {
#line 6716 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6719 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6721 "check_hlds.mode_info.c"
  }
#line 137 "mode_info.m"
}

#line 77 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____how_to_check_goal_0_0(
#line 77 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 77 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 77 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 77 "mode_info.m"
{
#line 77 "mode_info.m"
  {
#line 77 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 77 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 77 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 77 "mode_info.m"
    {
#line 77 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
#line 77 "mode_info.m"
      return;
    }
#line 77 "mode_info.m"
  }
#line 77 "mode_info.m"
}

#line 77 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____how_to_check_goal_0_0(
#line 77 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 77 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 77 "mode_info.m"
{
#line 6767 "check_hlds.mode_info.c"
  {
#line 6769 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6772 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6774 "check_hlds.mode_info.c"
  }
#line 77 "mode_info.m"
}

#line 129 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0(
#line 129 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 129 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 129 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 129 "mode_info.m"
{
#line 129 "mode_info.m"
  {
#line 129 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 129 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 129 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 129 "mode_info.m"
    {
#line 129 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
#line 129 "mode_info.m"
      return;
    }
#line 129 "mode_info.m"
  }
#line 129 "mode_info.m"
}

#line 129 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0(
#line 129 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 129 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 129 "mode_info.m"
{
#line 6820 "check_hlds.mode_info.c"
  {
#line 6822 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6825 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6827 "check_hlds.mode_info.c"
  }
#line 129 "mode_info.m"
}

#line 96 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0(
#line 96 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 96 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 96 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 96 "mode_info.m"
{
#line 96 "mode_info.m"
  {
#line 96 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 96 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_12 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 96 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_13 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 96 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_12 == check_hlds__mode_info__CastY_13);
#line 96 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 6856 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 96 "mode_info.m"
    else
#line 96 "mode_info.m"
      {
#line 96 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 96 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 96 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 96 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 96 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 96 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 96 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10;
#line 96 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_17_17 = (MR_Integer) check_hlds__mode_info__V_4_4;
#line 96 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_18_18 = (MR_Integer) check_hlds__mode_info__V_7_7;

#line 96 "mode_info.m"
        {
#line 96 "mode_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_10_10, check_hlds__mode_info__V_17_17, check_hlds__mode_info__V_18_18);
        }
#line 6886 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_10_10 == (MR_Integer) 0);
#line 96 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 96 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 96 "mode_info.m"
          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_10_10;
#line 96 "mode_info.m"
        else
#line 96 "mode_info.m"
          {
#line 96 "mode_info.m"
            MR_Word check_hlds__mode_info__V_11_11;
#line 96 "mode_info.m"
            MR_Integer check_hlds__mode_info__V_19_19 = (MR_Integer) check_hlds__mode_info__V_5_5;
#line 96 "mode_info.m"
            MR_Integer check_hlds__mode_info__V_20_20 = (MR_Integer) check_hlds__mode_info__V_8_8;

#line 96 "mode_info.m"
            {
#line 96 "mode_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_11_11, check_hlds__mode_info__V_19_19, check_hlds__mode_info__V_20_20);
            }
#line 6910 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_11_11 == (MR_Integer) 0);
#line 96 "mode_info.m"
            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 96 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 96 "mode_info.m"
              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_11_11;
#line 96 "mode_info.m"
            else
#line 96 "mode_info.m"
              {
#line 96 "mode_info.m"
                MR_Integer check_hlds__mode_info__V_21_21 = (MR_Integer) check_hlds__mode_info__V_6_6;
#line 96 "mode_info.m"
                MR_Integer check_hlds__mode_info__V_22_22 = (MR_Integer) check_hlds__mode_info__V_9_9;

#line 96 "mode_info.m"
                {
#line 96 "mode_info.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_21_21, check_hlds__mode_info__V_22_22);
#line 96 "mode_info.m"
                  return;
                }
#line 96 "mode_info.m"
              }
#line 96 "mode_info.m"
          }
#line 96 "mode_info.m"
      }
#line 96 "mode_info.m"
  }
#line 96 "mode_info.m"
}

#line 96 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____debug_flags_0_0(
#line 96 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 96 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 96 "mode_info.m"
{
#line 96 "mode_info.m"
  {
#line 96 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 96 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_9 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 96 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_10 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 96 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_9 == check_hlds__mode_info__CastY_10);
#line 96 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 96 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 96 "mode_info.m"
    else
#line 96 "mode_info.m"
      {
#line 96 "mode_info.m"
        MR_Word check_hlds__mode_info__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 96 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 96 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 96 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 96 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 96 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 6986 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_3_3 == check_hlds__mode_info__V_6_6);
#line 96 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 96 "mode_info.m"
          {
#line 6992 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_4_4 == check_hlds__mode_info__V_7_7);
#line 96 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 6996 "check_hlds.mode_info.c"
              check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_5_5 == check_hlds__mode_info__V_8_8);
#line 96 "mode_info.m"
          }
#line 96 "mode_info.m"
      }
#line 96 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 96 "mode_info.m"
  }
#line 96 "mode_info.m"
}

#line 64 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____call_context_0_0(
#line 64 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 64 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 64 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 64 "mode_info.m"
{
#line 64 "mode_info.m"
  {
#line 64 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 64 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_12 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 64 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_13 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 64 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_12 == check_hlds__mode_info__CastY_13);
#line 64 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 7033 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 64 "mode_info.m"
    else
#line 64 "mode_info.m"
    if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 64 "mode_info.m"
      {
#line 64 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));

#line 64 "mode_info.m"
        if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 64 "mode_info.m"
          {
#line 64 "mode_info.m"
            MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));

#line 64 "mode_info.m"
            {
#line 64 "mode_info.m"
              hlds__hlds_pred____Compare____call_id_0_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_16_16, check_hlds__mode_info__V_11_11);
#line 64 "mode_info.m"
              return;
            }
#line 64 "mode_info.m"
          }
#line 64 "mode_info.m"
        else
#line 7062 "check_hlds.mode_info.c"
          *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 64 "mode_info.m"
      }
#line 64 "mode_info.m"
    else
#line 64 "mode_info.m"
      {
#line 64 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));

#line 64 "mode_info.m"
        if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7075 "check_hlds.mode_info.c"
          *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 64 "mode_info.m"
        else
#line 64 "mode_info.m"
          {
#line 64 "mode_info.m"
            MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));

#line 64 "mode_info.m"
            {
#line 64 "mode_info.m"
              hlds__hlds_goal____Compare____unify_context_0_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_17_17, check_hlds__mode_info__V_5_5);
#line 64 "mode_info.m"
              return;
            }
#line 64 "mode_info.m"
          }
#line 64 "mode_info.m"
      }
#line 64 "mode_info.m"
  }
#line 64 "mode_info.m"
}

#line 64 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____call_context_0_0(
#line 64 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 64 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 64 "mode_info.m"
{
#line 64 "mode_info.m"
  {
#line 64 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 64 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_7 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 64 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_8 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 64 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_7 == check_hlds__mode_info__CastY_8);
#line 64 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 64 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 64 "mode_info.m"
    else
#line 64 "mode_info.m"
    if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 64 "mode_info.m"
      {
#line 64 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 64 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6;

#line 64 "mode_info.m"
        check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 64 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 64 "mode_info.m"
          {
#line 64 "mode_info.m"
            check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 7143 "check_hlds.mode_info.c"
            {
#line 7145 "check_hlds.mode_info.c"
              return check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____call_id_0_0(check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_6_6);
            }
#line 64 "mode_info.m"
          }
#line 64 "mode_info.m"
      }
#line 64 "mode_info.m"
    else
#line 64 "mode_info.m"
      {
#line 64 "mode_info.m"
        MR_Word check_hlds__mode_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 64 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4;

#line 64 "mode_info.m"
        check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 64 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 64 "mode_info.m"
          {
#line 64 "mode_info.m"
            check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 7169 "check_hlds.mode_info.c"
            {
#line 7171 "check_hlds.mode_info.c"
              return check_hlds__mode_info__succeeded = hlds__hlds_goal____Unify____unify_context_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_4_4);
            }
#line 64 "mode_info.m"
          }
#line 64 "mode_info.m"
      }
#line 64 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 64 "mode_info.m"
  }
#line 64 "mode_info.m"
}

#line 973 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(
#line 973 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 973 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_7,
#line 973 "mode_info.m"
  MR_Word * check_hlds__mode_info__Reason_8)
#line 973 "mode_info.m"
{
#line 976 "mode_info.m"
  while (MR_TRUE)
#line 976 "mode_info.m"
    {
#line 976 "mode_info.m"
      /* tailcall optimized into a loop */
#line 976 "mode_info.m"
      {
#line 976 "mode_info.m"
        MR_bool check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 976 "mode_info.m"
        MR_Word check_hlds__mode_info__ThisReason_4;
#line 976 "mode_info.m"
        MR_Word check_hlds__mode_info__Set_5;
#line 976 "mode_info.m"
        MR_Word check_hlds__mode_info__Sets_6;
#line 976 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9;
#line 977 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeCtorInfo_10_10;

#line 976 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 976 "mode_info.m"
          {
#line 976 "mode_info.m"
            check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 976 "mode_info.m"
            check_hlds__mode_info__Sets_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 976 "mode_info.m"
            check_hlds__mode_info__ThisReason_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 976 "mode_info.m"
            check_hlds__mode_info__Set_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 7229 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 977 "mode_info.m"
            {
#line 977 "mode_info.m"
              check_hlds__mode_info__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__mode_info__TypeCtorInfo_10_10, check_hlds__mode_info__Set_5, check_hlds__mode_info__Var_7);
            }
#line 979 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 978 "mode_info.m"
              {
#line 978 "mode_info.m"
                *check_hlds__mode_info__Reason_8 = check_hlds__mode_info__ThisReason_4;
#line 978 "mode_info.m"
                check_hlds__mode_info__succeeded = MR_TRUE;
#line 978 "mode_info.m"
              }
#line 979 "mode_info.m"
            else
#line 980 "mode_info.m"
              {
#line 980 "mode_info.m"
                /* direct tailcall eliminated */
#line 980 "mode_info.m"
                {
#line 980 "mode_info.m"
                  MR_Word check_hlds__mode_info__HeadVar__1__tmp_copy_1 = check_hlds__mode_info__Sets_6;

#line 980 "mode_info.m"
                  check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__HeadVar__1__tmp_copy_1;
#line 980 "mode_info.m"
                }
#line 980 "mode_info.m"
                continue;
#line 980 "mode_info.m"
              }
#line 976 "mode_info.m"
          }
#line 976 "mode_info.m"
        return check_hlds__mode_info__succeeded;
#line 976 "mode_info.m"
      }
#line 976 "mode_info.m"
      break;
#line 976 "mode_info.m"
    }
#line 973 "mode_info.m"
}

#line 346 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(
#line 346 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_2)
#line 346 "mode_info.m"
{
#line 1039 "mode_info.m"
  {
#line 1039 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1039 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 0)));
#line 1039 "mode_info.m"
    MR_Word check_hlds__mode_info__Globals_4;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 1)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 2)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 3)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 4)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 5)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 6)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 7)));

#line 1041 "mode_info.m"
    {
#line 1041 "mode_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__mode_info__ModuleInfo_3, &check_hlds__mode_info__Globals_4);
    }
#line 1042 "mode_info.m"
    {
#line 1042 "mode_info.m"
      return check_hlds__mode_info__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__mode_info__Globals_4, (MR_Integer) 299, (MR_Integer) 1);
    }
#line 1039 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 1039 "mode_info.m"
  }
#line 346 "mode_info.m"
}

#line 340 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info__mode_info_may_init_solver_vars_1_p_0(
#line 340 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_2)
#line 340 "mode_info.m"
{
#line 1033 "mode_info.m"
  {
#line 1033 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1033 "mode_info.m"
    MR_Word check_hlds__mode_info__MayInitSolverVars_3;
#line 1033 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 7)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 0)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 1)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 2)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 3)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 4)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 5)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 6)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 629 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 629 "mode_info.m"
    check_hlds__mode_info__MayInitSolverVars_3 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)));
#line 629 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 629 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)));
#line 629 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 629 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 629 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 629 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1035 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__MayInitSolverVars_3 == (MR_Integer) 0);
#line 1033 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 1033 "mode_info.m"
  }
#line 340 "mode_info.m"
}

#line 336 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_need_to_requantify_2_p_0(
#line 336 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4,
#line 336 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_5)
#line 336 "mode_info.m"
{
#line 1028 "mode_info.m"
  {
#line 1028 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;

#line 1029 "mode_info.m"
    {
#line 1029 "mode_info.m"
      check_hlds__mode_info__mode_info_set_need_to_requantify_3_p_0((MR_Integer) 0, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_5);
#line 1029 "mode_info.m"
      return;
    }
#line 1028 "mode_info.m"
  }
#line 336 "mode_info.m"
}

#line 333 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_add_warning_3_p_0(
#line 333 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeWarningInfo_4,
#line 333 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8,
#line 333 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9)
#line 333 "mode_info.m"
{
#line 1023 "mode_info.m"
  {
#line 1023 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1023 "mode_info.m"
    MR_Word check_hlds__mode_info__Warnings0_6;
#line 1023 "mode_info.m"
    MR_Word check_hlds__mode_info__Warnings_7;
#line 1023 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 1023 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));
#line 1023 "mode_info.m"
    MR_Word check_hlds__mode_info__V_52_52;
#line 1023 "mode_info.m"
    MR_Word check_hlds__mode_info__V_53_53;
#line 1023 "mode_info.m"
    MR_Word check_hlds__mode_info__V_54_54;
#line 1023 "mode_info.m"
    MR_Word check_hlds__mode_info__V_55_55;
#line 1023 "mode_info.m"
    MR_Word check_hlds__mode_info__V_56_56;
#line 1023 "mode_info.m"
    MR_Word check_hlds__mode_info__V_57_57;
#line 1023 "mode_info.m"
    MR_Word check_hlds__mode_info__V_58_58;
#line 1023 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59;
#line 1023 "mode_info.m"
    MR_Word check_hlds__mode_info__V_60_60;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 0)));
#line 607 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 1)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 2)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 3)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 4)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 5)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 6)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 7)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 8)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 10)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 12)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 13)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_61_61;
#line 678 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_62_62;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_63_63;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_64_64;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_65_65;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_70_70;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_71_71;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_72_72;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_73_73;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_74_74;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_75_75;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_76_76;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_77_77;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_79_79;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_80_80;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_81_81;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_82_82;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_83_83;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_84_84;
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_78_78;

#line 607 "mode_info.m"
    check_hlds__mode_info__Warnings0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 14)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1025 "mode_info.m"
    {
#line 1025 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__ModeWarningInfo_4));
#line 1025 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1025 "mode_info.m"
    }
#line 1025 "mode_info.m"
    {
#line 1025 "mode_info.m"
      mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0, check_hlds__mode_info__Warnings0_6, check_hlds__mode_info__V_10_10, &check_hlds__mode_info__Warnings_7);
    }
#line 678 "mode_info.m"
    check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 0)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 1)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 2)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 3)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 4)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 5)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 6)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 7)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 8)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_70_70 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 678 "mode_info.m"
    check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 678 "mode_info.m"
    check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 678 "mode_info.m"
    check_hlds__mode_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 10)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_74_74 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 678 "mode_info.m"
    check_hlds__mode_info__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 678 "mode_info.m"
    check_hlds__mode_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 12)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 13)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 14)));
#line 678 "mode_info.m"
    check_hlds__mode_info__V_79_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 678 "mode_info.m"
    check_hlds__mode_info__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 678 "mode_info.m"
    check_hlds__mode_info__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 678 "mode_info.m"
    check_hlds__mode_info__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 678 "mode_info.m"
    check_hlds__mode_info__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 678 "mode_info.m"
    check_hlds__mode_info__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_52_52, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 678 "mode_info.m"
    {
#line 678 "mode_info.m"
      check_hlds__mode_info__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 0) = ((MR_Box) (check_hlds__mode_info__V_61_61));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 1) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 2) = ((MR_Box) (check_hlds__mode_info__V_63_63));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 3) = ((MR_Box) (check_hlds__mode_info__V_64_64));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 4) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 5) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 6) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 7) = ((MR_Box) (check_hlds__mode_info__V_68_68));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 8) = ((MR_Box) (check_hlds__mode_info__V_69_69));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 9) = ((MR_Box) ((check_hlds__mode_info__V_70_70 | ((((check_hlds__mode_info__V_71_71 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_72_72 << (MR_Integer) 2)))))));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 10) = ((MR_Box) (check_hlds__mode_info__V_73_73));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 11) = ((MR_Box) ((check_hlds__mode_info__V_74_74 | ((check_hlds__mode_info__V_75_75 << (MR_Integer) 1)))));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 12) = ((MR_Box) (check_hlds__mode_info__V_76_76));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 13) = ((MR_Box) (check_hlds__mode_info__V_77_77));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 14) = ((MR_Box) (check_hlds__mode_info__Warnings_7));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 15) = ((MR_Box) ((check_hlds__mode_info__V_79_79 | ((((check_hlds__mode_info__V_80_80 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_81_81 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_82_82 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_83_83 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_84_84 << (MR_Integer) 5)))))))))))));
#line 678 "mode_info.m"
    }
#line 678 "mode_info.m"
    {
#line 678 "mode_info.m"
      MR_Word base;
#line 678 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 678 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9 = base;
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_59_59));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_60_60));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 678 "mode_info.m"
    }
#line 1023 "mode_info.m"
  }
#line 333 "mode_info.m"
}

#line 330 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_warning_3_p_0(
#line 330 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeWarning_4,
#line 330 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9,
#line 330 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10)
#line 330 "mode_info.m"
{
#line 1017 "mode_info.m"
  {
#line 1017 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1017 "mode_info.m"
    MR_Word check_hlds__mode_info__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 5)));
#line 1017 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 4)));
#line 1017 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeWarningInfo_8;
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 0)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 1)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 2)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 3)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 6)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 7)));

#line 1020 "mode_info.m"
    {
#line 1020 "mode_info.m"
      check_hlds__mode_info__ModeWarningInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1020 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 0) = ((MR_Box) (check_hlds__mode_info__ModeWarning_4));
#line 1020 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 1) = ((MR_Box) (check_hlds__mode_info__Context_6));
#line 1020 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 2) = ((MR_Box) (check_hlds__mode_info__ModeContext_7));
#line 1020 "mode_info.m"
    }
#line 1021 "mode_info.m"
    {
#line 1021 "mode_info.m"
      check_hlds__mode_info__mode_info_add_warning_3_p_0(check_hlds__mode_info__ModeWarningInfo_8, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10);
#line 1021 "mode_info.m"
      return;
    }
#line 1017 "mode_info.m"
  }
#line 330 "mode_info.m"
}

#line 327 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_add_error_3_p_0(
#line 327 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeErrorInfo_4,
#line 327 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8,
#line 327 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9)
#line 327 "mode_info.m"
{
#line 1012 "mode_info.m"
  {
#line 1012 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1012 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 1012 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors_7;
#line 1012 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));

#line 1014 "mode_info.m"
    {
#line 1014 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__ModeErrorInfo_4));
#line 1014 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1014 "mode_info.m"
    }
#line 1014 "mode_info.m"
    {
#line 1014 "mode_info.m"
      mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__mode_info__Errors0_6, check_hlds__mode_info__V_10_10, &check_hlds__mode_info__Errors_7);
    }
#line 1015 "mode_info.m"
    {
#line 1015 "mode_info.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__mode_info__Errors_7, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9);
#line 1015 "mode_info.m"
      return;
    }
#line 1012 "mode_info.m"
  }
#line 327 "mode_info.m"
}

#line 324 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_error_4_p_0(
#line 324 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_5,
#line 324 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeError_6,
#line 324 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11,
#line 324 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12)
#line 324 "mode_info.m"
{
#line 1006 "mode_info.m"
  {
#line 1006 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1006 "mode_info.m"
    MR_Word check_hlds__mode_info__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 5)));
#line 1006 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 4)));
#line 1006 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeErrorInfo_10;
#line 1006 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 3)));
#line 1006 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors_37;
#line 1006 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 0)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 1)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 2)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 6)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 7)));

#line 1009 "mode_info.m"
    {
#line 1009 "mode_info.m"
      check_hlds__mode_info__ModeErrorInfo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1009 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 0) = ((MR_Box) (check_hlds__mode_info__Vars_5));
#line 1009 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 1) = ((MR_Box) (check_hlds__mode_info__ModeError_6));
#line 1009 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 2) = ((MR_Box) (check_hlds__mode_info__Context_8));
#line 1009 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 3) = ((MR_Box) (check_hlds__mode_info__ModeContext_9));
#line 1009 "mode_info.m"
    }
#line 1014 "mode_info.m"
    {
#line 1014 "mode_info.m"
      check_hlds__mode_info__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_38_38, 0) = ((MR_Box) (check_hlds__mode_info__ModeErrorInfo_10));
#line 1014 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1014 "mode_info.m"
    }
#line 1014 "mode_info.m"
    {
#line 1014 "mode_info.m"
      mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__mode_info__Errors0_36, check_hlds__mode_info__V_38_38, &check_hlds__mode_info__Errors_37);
    }
#line 1015 "mode_info.m"
    {
#line 1015 "mode_info.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__mode_info__Errors_37, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12);
#line 1015 "mode_info.m"
      return;
    }
#line 1006 "mode_info.m"
  }
#line 324 "mode_info.m"
}

#line 317 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_var_is_nondet_live_3_p_0(
#line 317 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 317 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_5,
#line 317 "mode_info.m"
  MR_Word * check_hlds__mode_info__Result_6)
#line 317 "mode_info.m"
{
#line 925 "mode_info.m"
  {
#line 925 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 925 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));

#line 927 "mode_info.m"
    {
#line 927 "mode_info.m"
      check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__NondetLiveVars0_7, ((MR_Box) (check_hlds__mode_info__Var_5)));
    }
#line 929 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 928 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 0;
#line 929 "mode_info.m"
    else
#line 930 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 1;
#line 925 "mode_info.m"
  }
#line 317 "mode_info.m"
}

#line 312 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_var_is_live_3_p_0(
#line 312 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 312 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_5,
#line 312 "mode_info.m"
  MR_Word * check_hlds__mode_info__Result_6)
#line 312 "mode_info.m"
{
#line 917 "mode_info.m"
  {
#line 917 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 917 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 917 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 615 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
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
    MR_Word check_hlds__mode_info__V_36_36;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;

#line 615 "mode_info.m"
    check_hlds__mode_info__LiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 919 "mode_info.m"
    {
#line 919 "mode_info.m"
      check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVars0_7, ((MR_Box) (check_hlds__mode_info__Var_5)));
    }
#line 921 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 920 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 0;
#line 921 "mode_info.m"
    else
#line 922 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 1;
#line 917 "mode_info.m"
  }
#line 312 "mode_info.m"
}

#line 310 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(
#line 310 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_1,
#line 310 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 310 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 310 "mode_info.m"
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
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 0)));
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 1)));
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 2)));
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 3)));
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 4)));
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 5)));
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 6)));
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 0)));
#line 615 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 1)));
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 2)));
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 3)));
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 4)));
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 5)));
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
        MR_Word check_hlds__mode_info__V_36_36;
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37;
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38;
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39;
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40;
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41;
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42;
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43;
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44;
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45;
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46;
#line 615 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47;

#line 615 "mode_info.m"
        check_hlds__mode_info__LiveVars0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 6)));
#line 615 "mode_info.m"
        check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 7)));
#line 615 "mode_info.m"
        check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 8)));
#line 615 "mode_info.m"
        check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
        check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
        check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 615 "mode_info.m"
        check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 10)));
#line 615 "mode_info.m"
        check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
        check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
        check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 12)));
#line 615 "mode_info.m"
        check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 13)));
#line 615 "mode_info.m"
        check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 14)));
#line 615 "mode_info.m"
        check_hlds__mode_info__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
        check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
        check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 615 "mode_info.m"
        check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 615 "mode_info.m"
        check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 615 "mode_info.m"
        check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 919 "mode_info.m"
        {
#line 919 "mode_info.m"
          check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVars0_13, ((MR_Box) (check_hlds__mode_info__Var_6)));
        }
#line 921 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 920 "mode_info.m"
          check_hlds__mode_info__Live_8 = (MR_Integer) 0;
#line 921 "mode_info.m"
        else
#line 922 "mode_info.m"
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
#line 310 "mode_info.m"
}

#line 305 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_call_id_3_p_0(
#line 305 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 305 "mode_info.m"
  MR_Word check_hlds__mode_info__PredId_5,
#line 305 "mode_info.m"
  MR_Word * check_hlds__mode_info__CallId_6)
#line 305 "mode_info.m"
{
#line 999 "mode_info.m"
  {
#line 999 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 999 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 999 "mode_info.m"
    MR_Word check_hlds__mode_info__PredInfo_8;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));

#line 1001 "mode_info.m"
    {
#line 1001 "mode_info.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__mode_info__ModuleInfo_7, check_hlds__mode_info__PredId_5, &check_hlds__mode_info__PredInfo_8);
    }
#line 1002 "mode_info.m"
    {
#line 1002 "mode_info.m"
      hlds__hlds_pred__pred_info_get_call_id_2_p_0(check_hlds__mode_info__PredInfo_8, check_hlds__mode_info__CallId_6);
#line 1002 "mode_info.m"
      return;
    }
#line 999 "mode_info.m"
  }
#line 305 "mode_info.m"
}

#line 299 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_3_p_0(
#line 299 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 299 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_5,
#line 299 "mode_info.m"
  MR_Word * check_hlds__mode_info__Reason_6)
#line 299 "mode_info.m"
{
#line 969 "mode_info.m"
  {
#line 969 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 969 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVarsList_7;
#line 969 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 0)));
#line 603 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 1)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 2)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 3)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 4)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;

#line 603 "mode_info.m"
    check_hlds__mode_info__LockedVarsList_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 5)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 6)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 7)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 8)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 13)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 971 "mode_info.m"
    {
#line 971 "mode_info.m"
      return check_hlds__mode_info__succeeded = check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(check_hlds__mode_info__LockedVarsList_7, check_hlds__mode_info__Var_5, check_hlds__mode_info__Reason_6);
    }
#line 969 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 969 "mode_info.m"
  }
#line 299 "mode_info.m"
}

#line 296 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_unlock_vars_4_p_0(
#line 296 "mode_info.m"
  MR_Word check_hlds__mode_info__Reason_5,
#line 296 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_6,
#line 296 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12,
#line 296 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_13)
#line 296 "mode_info.m"
{
#line 957 "mode_info.m"
  {
#line 957 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 957 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars0_8;
#line 957 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars_11;
#line 957 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 7)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 0)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 1)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 2)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 3)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 4)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 5)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 6)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 0)));
#line 603 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 1)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 2)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 3)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 4)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_47_47;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_48_48;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_49_49;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_50_50;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_51_51;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_52_52;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_53_53;
#line 964 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars1_10;
#line 960 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeCtorInfo_19_19;
#line 960 "mode_info.m"
    MR_Word check_hlds__mode_info__TheseVars_9;
#line 960 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 960 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;

#line 603 "mode_info.m"
    check_hlds__mode_info__LockedVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 5)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 6)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 7)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 8)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 10)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 12)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 13)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 14)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 960 "mode_info.m"
    check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__LockedVars0_8)) == (MR_mktag((MR_Integer) 1)));
#line 960 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 960 "mode_info.m"
      {
#line 960 "mode_info.m"
        check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__LockedVars0_8, (MR_Integer) 0)));
#line 960 "mode_info.m"
        check_hlds__mode_info__LockedVars1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__LockedVars0_8, (MR_Integer) 1)));
#line 960 "mode_info.m"
        check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, (MR_Integer) 0)));
#line 960 "mode_info.m"
        check_hlds__mode_info__TheseVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, (MR_Integer) 1)));
#line 960 "mode_info.m"
        {
#line 960 "mode_info.m"
          check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____var_lock_reason_0_0(check_hlds__mode_info__Reason_5, check_hlds__mode_info__V_20_20);
        }
#line 960 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 960 "mode_info.m"
          {
#line 8668 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 961 "mode_info.m"
            {
#line 961 "mode_info.m"
              check_hlds__mode_info__succeeded = parse_tree__set_of_var__equal_2_p_0(check_hlds__mode_info__TypeCtorInfo_19_19, check_hlds__mode_info__TheseVars_9, check_hlds__mode_info__Vars_6);
            }
#line 960 "mode_info.m"
          }
#line 960 "mode_info.m"
      }
#line 964 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 963 "mode_info.m"
      check_hlds__mode_info__LockedVars_11 = check_hlds__mode_info__LockedVars1_10;
#line 964 "mode_info.m"
    else
#line 965 "mode_info.m"
      {
#line 965 "mode_info.m"
        {
#line 965 "mode_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_unlock_vars\'/4", (MR_String) "some kind of nesting error");
#line 965 "mode_info.m"
          return;
        }
#line 965 "mode_info.m"
      }
#line 967 "mode_info.m"
    {
#line 967 "mode_info.m"
      check_hlds__mode_info__mode_info_set_locked_vars_3_p_0(check_hlds__mode_info__LockedVars_11, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_13);
#line 967 "mode_info.m"
      return;
    }
#line 957 "mode_info.m"
  }
#line 296 "mode_info.m"
}

#line 293 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_lock_vars_4_p_0(
#line 293 "mode_info.m"
  MR_Word check_hlds__mode_info__Reason_5,
#line 293 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_6,
#line 293 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9,
#line 293 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10)
#line 293 "mode_info.m"
{
#line 953 "mode_info.m"
  {
#line 953 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars_8;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 7)));
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 0)));
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 1)));
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 2)));
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 3)));
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 4)));
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 5)));
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 6)));
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 0)));
#line 953 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 1)));
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 2)));
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 3)));
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 4)));
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 953 "mode_info.m"
    MR_Word check_hlds__mode_info__V_53_53;

#line 603 "mode_info.m"
    check_hlds__mode_info__LockedVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 5)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 6)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 7)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 8)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 10)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 12)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 13)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 14)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 955 "mode_info.m"
    {
#line 955 "mode_info.m"
      check_hlds__mode_info__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 955 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, 0) = ((MR_Box) (check_hlds__mode_info__Reason_5));
#line 955 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, 1) = ((MR_Box) (check_hlds__mode_info__Vars_6));
#line 955 "mode_info.m"
    }
#line 955 "mode_info.m"
    {
#line 955 "mode_info.m"
      check_hlds__mode_info__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 955 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_11_11, 0) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 955 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_11_11, 1) = ((MR_Box) (check_hlds__mode_info__LockedVars_8));
#line 955 "mode_info.m"
    }
#line 668 "mode_info.m"
    {
#line 668 "mode_info.m"
      check_hlds__mode_info__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 0) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 1) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 2) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 3) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 4) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 5) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 6) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 7) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 8) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 9) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)))))));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 10) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 11) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)))));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 12) = ((MR_Box) (check_hlds__mode_info__V_38_38));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 13) = ((MR_Box) (check_hlds__mode_info__V_39_39));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 14) = ((MR_Box) (check_hlds__mode_info__V_40_40));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, 15) = ((MR_Box) ((check_hlds__mode_info__V_41_41 | ((((check_hlds__mode_info__V_42_42 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_43_43 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_44_44 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_45_45 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_46_46 << (MR_Integer) 5)))))))))))));
#line 668 "mode_info.m"
    }
#line 668 "mode_info.m"
    {
#line 668 "mode_info.m"
      MR_Word base;
#line 668 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 668 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10 = base;
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 668 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 668 "mode_info.m"
    }
#line 953 "mode_info.m"
  }
#line 293 "mode_info.m"
}

#line 290 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_types_of_vars_3_p_0(
#line 290 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 290 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_5,
#line 290 "mode_info.m"
  MR_Word * check_hlds__mode_info__TypesOfVars_6)
#line 290 "mode_info.m"
{
#line 940 "mode_info.m"
  {
#line 940 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 940 "mode_info.m"
    MR_Word check_hlds__mode_info__VarTypes_7;
#line 940 "mode_info.m"
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
    check_hlds__mode_info__VarTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 3)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 4)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 5)));
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
#line 942 "mode_info.m"
    {
#line 942 "mode_info.m"
      hlds__vartypes__lookup_var_types_3_p_0(check_hlds__mode_info__VarTypes_7, check_hlds__mode_info__Vars_5, check_hlds__mode_info__TypesOfVars_6);
#line 942 "mode_info.m"
      return;
    }
#line 940 "mode_info.m"
  }
#line 290 "mode_info.m"
}

#line 285 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(
#line 285 "mode_info.m"
  MR_Word check_hlds__mode_info__OldLiveVars_4,
#line 285 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_13,
#line 285 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_14)
#line 285 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_30_30;
#line 615 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_31_31;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_47_47;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_48_48;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_49_49;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_50_50;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_51_51;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_52_52;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_64_64;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_65_65;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_70_70;

#line 898 "mode_info.m"
    {
#line 898 "mode_info.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_info__OldLiveVars_4, &check_hlds__mode_info__OldLiveVarsList_6);
    }
#line 615 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 0)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 1)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 2)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 3)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 4)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 5)));
#line 615 "mode_info.m"
    check_hlds__mode_info__NondetLiveVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 6)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 7)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 0)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 1)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 2)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 3)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 4)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 5)));
#line 615 "mode_info.m"
    check_hlds__mode_info__LiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 6)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 7)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 8)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 10)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 12)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 13)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 14)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 9236 "check_hlds.mode_info.c"
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
#line 613 "mode_info.m"
    check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 0)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 1)));
#line 613 "mode_info.m"
    check_hlds__mode_info__DelayInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 2)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 3)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 4)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 5)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 6)));
#line 613 "mode_info.m"
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
#line 285 "mode_info.m"
}

#line 283 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_add_live_vars_3_p_0(
#line 283 "mode_info.m"
  MR_Word check_hlds__mode_info__NewLiveVars_4,
#line 283 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_11,
#line 283 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_12)
#line 283 "mode_info.m"
{
#line 888 "mode_info.m"
  {
#line 888 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 888 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeInfo_16_16;
#line 888 "mode_info.m"
    MR_Word check_hlds__mode_info__NewLiveVarsList_6;
#line 888 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 888 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars0_8;
#line 888 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars_9;
#line 888 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars_10;
#line 888 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_13_13;
#line 888 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 615 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_28_28;
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
    MR_Word check_hlds__mode_info__V_36_36;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_47_47;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_48_48;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_49_49;

#line 889 "mode_info.m"
    {
#line 889 "mode_info.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_info__NewLiveVars_4, &check_hlds__mode_info__NewLiveVarsList_6);
    }
#line 615 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 0)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 1)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 2)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 3)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 4)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 5)));
#line 615 "mode_info.m"
    check_hlds__mode_info__NondetLiveVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 6)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 7)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 0)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 1)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 2)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 3)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 4)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 5)));
#line 615 "mode_info.m"
    check_hlds__mode_info__LiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 6)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 7)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 8)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 10)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 12)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 13)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 14)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 9450 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeInfo_16_16 = (MR_Word) &check_hlds__mode_info_scalar_common_1[0];
#line 892 "mode_info.m"
    {
#line 892 "mode_info.m"
      mercury__bag__insert_list_3_p_0(check_hlds__mode_info__TypeInfo_16_16, check_hlds__mode_info__NewLiveVarsList_6, check_hlds__mode_info__LiveVars0_7, &check_hlds__mode_info__LiveVars_9);
    }
#line 893 "mode_info.m"
    {
#line 893 "mode_info.m"
      mercury__bag__insert_list_3_p_0(check_hlds__mode_info__TypeInfo_16_16, check_hlds__mode_info__NewLiveVarsList_6, check_hlds__mode_info__NondetLiveVars0_8, &check_hlds__mode_info__NondetLiveVars_10);
    }
#line 894 "mode_info.m"
    {
#line 894 "mode_info.m"
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__mode_info__LiveVars_9, check_hlds__mode_info__STATE_VARIABLE_MI_0_11, &check_hlds__mode_info__STATE_VARIABLE_MI_13_13);
    }
#line 895 "mode_info.m"
    {
#line 895 "mode_info.m"
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__mode_info__NondetLiveVars_10, check_hlds__mode_info__STATE_VARIABLE_MI_13_13, check_hlds__mode_info__STATE_VARIABLE_MI_12);
#line 895 "mode_info.m"
      return;
    }
#line 888 "mode_info.m"
  }
#line 283 "mode_info.m"
}

#line 270 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(
#line 270 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 270 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 270 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 270 "mode_info.m"
{
#line 740 "mode_info.m"
  {
#line 740 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 740 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 741 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 741 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 741 "mode_info.m"
    {
#line 741 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__X_4 << (MR_Integer) 5)))))))))))));
#line 741 "mode_info.m"
    }
#line 741 "mode_info.m"
    {
#line 741 "mode_info.m"
      MR_Word base;
#line 741 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 741 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 741 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 741 "mode_info.m"
    }
#line 740 "mode_info.m"
  }
#line 270 "mode_info.m"
}

#line 268 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_make_ground_terms_unique_3_p_0(
#line 268 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 268 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 268 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 268 "mode_info.m"
{
#line 738 "mode_info.m"
  {
#line 738 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 738 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 738 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 738 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 738 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 738 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 738 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 738 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 738 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 738 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 739 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 739 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 739 "mode_info.m"
    {
#line 739 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__X_4 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 739 "mode_info.m"
    }
#line 739 "mode_info.m"
    {
#line 739 "mode_info.m"
      MR_Word base;
#line 739 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 739 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 739 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 739 "mode_info.m"
    }
#line 738 "mode_info.m"
  }
#line 268 "mode_info.m"
}

#line 266 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_had_from_ground_term_3_p_0(
#line 266 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 266 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 266 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 266 "mode_info.m"
{
#line 735 "mode_info.m"
  {
#line 735 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 731 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;

#line 731 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 731 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 731 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 731 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 735 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 735 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 735 "mode_info.m"
    else
#line 736 "mode_info.m"
      {
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12;
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 736 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 736 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 736 "mode_info.m"
        {
#line 736 "mode_info.m"
          check_hlds__mode_info__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 0) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 1) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 2) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 3) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 4) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 5) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 6) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 7) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 8) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) ((check_hlds__mode_info__V_59_59 | ((((check_hlds__mode_info__V_60_60 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_61_61 << (MR_Integer) 2)))))));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 10) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 11) = ((MR_Box) ((check_hlds__mode_info__V_63_63 | ((check_hlds__mode_info__V_64_64 << (MR_Integer) 1)))));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 12) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 13) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 14) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) ((check_hlds__mode_info__V_68_68 | ((((check_hlds__mode_info__V_69_69 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_70_70 << (MR_Integer) 2)) | ((((check_hlds__mode_info__X_4 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_73_73 << (MR_Integer) 5)))))))))))));
#line 736 "mode_info.m"
        }
#line 736 "mode_info.m"
        {
#line 736 "mode_info.m"
          MR_Word base;
#line 736 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 736 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_47_47));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 736 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 736 "mode_info.m"
        }
#line 736 "mode_info.m"
      }
#line 735 "mode_info.m"
  }
#line 266 "mode_info.m"
}

#line 264 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_in_from_ground_term_3_p_0(
#line 264 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 264 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 264 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 264 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 728 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__X_4 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
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
#line 264 "mode_info.m"
}

#line 262 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0(
#line 262 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 262 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 262 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 262 "mode_info.m"
{
#line 724 "mode_info.m"
  {
#line 724 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 720 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 720 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;

#line 720 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 720 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 720 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 720 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 720 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 720 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 720 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 720 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 720 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 720 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 720 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 720 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 720 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 720 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 724 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 724 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 724 "mode_info.m"
    else
#line 725 "mode_info.m"
      {
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12;
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 725 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 725 "mode_info.m"
        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 725 "mode_info.m"
        {
#line 725 "mode_info.m"
          check_hlds__mode_info__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 0) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 1) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 2) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 3) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 4) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 5) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 6) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 7) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 8) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) ((check_hlds__mode_info__V_59_59 | ((((check_hlds__mode_info__V_60_60 << (MR_Integer) 1)) | ((check_hlds__mode_info__X_4 << (MR_Integer) 2)))))));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 10) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 11) = ((MR_Box) ((check_hlds__mode_info__V_63_63 | ((check_hlds__mode_info__V_64_64 << (MR_Integer) 1)))));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 12) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 13) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 14) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) ((check_hlds__mode_info__V_68_68 | ((((check_hlds__mode_info__V_69_69 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_70_70 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_71_71 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_73_73 << (MR_Integer) 5)))))))))))));
#line 725 "mode_info.m"
        }
#line 725 "mode_info.m"
        {
#line 725 "mode_info.m"
          MR_Word base;
#line 725 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 725 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_47_47));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 725 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 725 "mode_info.m"
        }
#line 725 "mode_info.m"
      }
#line 724 "mode_info.m"
  }
#line 262 "mode_info.m"
}

#line 260 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_checking_extra_goals_3_p_0(
#line 260 "mode_info.m"
  MR_Word check_hlds__mode_info__Checking_4,
#line 260 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_7,
#line 260 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_8)
#line 260 "mode_info.m"
{
#line 983 "mode_info.m"
  {
#line 983 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 983 "mode_info.m"
    MR_Word check_hlds__mode_info__Checking0_6;
#line 983 "mode_info.m"
    MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 7)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 0)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 1)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 2)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 3)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 4)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 5)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 6)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 0)));
#line 635 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 1)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 2)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 3)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 4)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 5)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 6)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 7)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 8)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_73_73 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 10)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_77_77 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_78_78;
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_79_79;
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_80_80;
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_81_81;
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_82_82;
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_83_83;
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_84_84;
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_85_85;
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_86_86;

#line 635 "mode_info.m"
    check_hlds__mode_info__Checking0_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    check_hlds__mode_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 12)));
#line 635 "mode_info.m"
    check_hlds__mode_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 13)));
#line 635 "mode_info.m"
    check_hlds__mode_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 14)));
#line 635 "mode_info.m"
    check_hlds__mode_info__V_81_81 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 635 "mode_info.m"
    check_hlds__mode_info__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    check_hlds__mode_info__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    check_hlds__mode_info__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    check_hlds__mode_info__V_85_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    check_hlds__mode_info__V_86_86 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_56_56, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 986 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__Checking0_6 == (MR_Integer) 1);
#line 986 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 987 "mode_info.m"
      check_hlds__mode_info__succeeded = (check_hlds__mode_info__Checking_4 == (MR_Integer) 1);
#line 993 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 991 "mode_info.m"
      {
#line 991 "mode_info.m"
        {
#line 991 "mode_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_set_checking_extra_goals\'/3", (MR_String) "rechecking extra goals adds more extra goals");
#line 991 "mode_info.m"
          return;
        }
#line 991 "mode_info.m"
      }
#line 993 "mode_info.m"
    else
#line 994 "mode_info.m"
      {
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 7)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14;
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 0)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 1)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 2)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 3)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 4)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 5)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 6)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 0)));
#line 994 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 1)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 2)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 3)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 4)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 5)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 6)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 7)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 8)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 10)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 12)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 13)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 14)));
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 994 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 994 "mode_info.m"
        {
#line 994 "mode_info.m"
          check_hlds__mode_info__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 0) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 1) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 2) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 3) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 4) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 5) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 6) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 7) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 8) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 9) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 2)))))));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 10) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 11) = ((MR_Box) ((check_hlds__mode_info__V_35_35 | ((check_hlds__mode_info__Checking_4 << (MR_Integer) 1)))));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 12) = ((MR_Box) (check_hlds__mode_info__V_37_37));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 13) = ((MR_Box) (check_hlds__mode_info__V_38_38));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 14) = ((MR_Box) (check_hlds__mode_info__V_39_39));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 15) = ((MR_Box) ((check_hlds__mode_info__V_40_40 | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_42_42 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_43_43 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_44_44 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_45_45 << (MR_Integer) 5)))))))))))));
#line 994 "mode_info.m"
        }
#line 994 "mode_info.m"
        {
#line 994 "mode_info.m"
          MR_Word base;
#line 994 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 994 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_8 = base;
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 994 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 994 "mode_info.m"
        }
#line 994 "mode_info.m"
      }
#line 983 "mode_info.m"
  }
#line 260 "mode_info.m"
}

#line 258 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_may_change_called_proc_3_p_0(
#line 258 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 258 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 258 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 258 "mode_info.m"
{
#line 716 "mode_info.m"
  {
#line 716 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 717 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 717 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 717 "mode_info.m"
    {
#line 717 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__X_4 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 717 "mode_info.m"
    }
#line 717 "mode_info.m"
    {
#line 717 "mode_info.m"
      MR_Word base;
#line 717 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 717 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 717 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 717 "mode_info.m"
    }
#line 716 "mode_info.m"
  }
#line 258 "mode_info.m"
}

#line 256 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_how_to_check_3_p_0(
#line 256 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 256 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 256 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 256 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 715 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);

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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__X_4 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
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
#line 256 "mode_info.m"
}

#line 254 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(
#line 254 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 254 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 254 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 254 "mode_info.m"
{
#line 711 "mode_info.m"
  {
#line 711 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 709 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 709 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;

#line 709 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 709 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 709 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 709 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 709 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 709 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 709 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 709 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 709 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 709 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 709 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 709 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 711 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 711 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 711 "mode_info.m"
    else
#line 712 "mode_info.m"
      {
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12;
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 712 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 712 "mode_info.m"
        MR_Word check_hlds__mode_info__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);

#line 712 "mode_info.m"
        {
#line 712 "mode_info.m"
          check_hlds__mode_info__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 0) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 1) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 2) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 3) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 4) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 5) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 6) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 7) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 8) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) ((check_hlds__mode_info__V_59_59 | ((((check_hlds__mode_info__V_60_60 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_61_61 << (MR_Integer) 2)))))));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 10) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 11) = ((MR_Box) ((check_hlds__mode_info__X_4 | ((check_hlds__mode_info__V_64_64 << (MR_Integer) 1)))));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 12) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 13) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 14) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) ((check_hlds__mode_info__V_68_68 | ((((check_hlds__mode_info__V_69_69 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_70_70 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_71_71 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_73_73 << (MR_Integer) 5)))))))))))));
#line 712 "mode_info.m"
        }
#line 712 "mode_info.m"
        {
#line 712 "mode_info.m"
          MR_Word base;
#line 712 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 712 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_47_47));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 712 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 712 "mode_info.m"
        }
#line 712 "mode_info.m"
      }
#line 711 "mode_info.m"
  }
#line 254 "mode_info.m"
}

#line 252 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_parallel_vars_3_p_0(
#line 252 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 252 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 252 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 252 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 707 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
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
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));

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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 707 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
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
#line 252 "mode_info.m"
}

#line 250 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_last_checkpoint_insts_3_p_0(
#line 250 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 250 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 250 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 250 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
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
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));

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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__X_4));
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
#line 250 "mode_info.m"
}

#line 248 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(
#line 248 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 248 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 248 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 248 "mode_info.m"
{
#line 701 "mode_info.m"
  {
#line 701 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));

#line 699 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 701 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 701 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 701 "mode_info.m"
    else
#line 702 "mode_info.m"
      {
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));

#line 702 "mode_info.m"
        {
#line 702 "mode_info.m"
          MR_Word base;
#line 702 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 702 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 702 "mode_info.m"
        }
#line 702 "mode_info.m"
      }
#line 701 "mode_info.m"
  }
#line 248 "mode_info.m"
}

#line 246 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_live_vars_3_p_0(
#line 246 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 246 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 246 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 246 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
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
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));

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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
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
#line 246 "mode_info.m"
}

#line 244 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_delay_info_3_p_0(
#line 244 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 244 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 244 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 244 "mode_info.m"
{
#line 693 "mode_info.m"
  {
#line 693 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 691 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));

#line 691 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 693 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 693 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 693 "mode_info.m"
    else
#line 694 "mode_info.m"
      {
#line 694 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 694 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 694 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 694 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 694 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 694 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 694 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 694 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));

#line 694 "mode_info.m"
        {
#line 694 "mode_info.m"
          MR_Word base;
#line 694 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 694 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 694 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 694 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 694 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 694 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 694 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 694 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 694 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 694 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 694 "mode_info.m"
        }
#line 694 "mode_info.m"
      }
#line 693 "mode_info.m"
  }
#line 244 "mode_info.m"
}

#line 242 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_var_types_3_p_0(
#line 242 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 242 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 242 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 242 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
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
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));

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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 658 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
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
#line 242 "mode_info.m"
}

#line 240 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_varset_3_p_0(
#line 240 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 240 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 240 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 240 "mode_info.m"
{
#line 655 "mode_info.m"
  {
#line 655 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 656 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));

#line 656 "mode_info.m"
    {
#line 656 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 656 "mode_info.m"
    }
#line 656 "mode_info.m"
    {
#line 656 "mode_info.m"
      MR_Word base;
#line 656 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 656 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 656 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 656 "mode_info.m"
    }
#line 655 "mode_info.m"
  }
#line 240 "mode_info.m"
}

#line 238 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_p_0(
#line 238 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 238 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 238 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 238 "mode_info.m"
{
#line 688 "mode_info.m"
  {
#line 688 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 688 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 688 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 688 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 688 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 688 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 688 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 688 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 688 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 688 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 689 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 689 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 689 "mode_info.m"
    {
#line 689 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__X_4 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 689 "mode_info.m"
    }
#line 689 "mode_info.m"
    {
#line 689 "mode_info.m"
      MR_Word base;
#line 689 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 689 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 689 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 689 "mode_info.m"
    }
#line 688 "mode_info.m"
  }
#line 238 "mode_info.m"
}

#line 236 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_need_to_requantify_3_p_0(
#line 236 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 236 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 236 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 236 "mode_info.m"
{
#line 685 "mode_info.m"
  {
#line 685 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 681 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;

#line 681 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 681 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 681 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 681 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 681 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 681 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 681 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 685 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 685 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 685 "mode_info.m"
    else
#line 686 "mode_info.m"
      {
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12;
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 686 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 686 "mode_info.m"
        MR_Word check_hlds__mode_info__V_68_68 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);

#line 686 "mode_info.m"
        {
#line 686 "mode_info.m"
          check_hlds__mode_info__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 0) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 1) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 2) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 3) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 4) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 5) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 6) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 7) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 8) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) ((check_hlds__mode_info__V_59_59 | ((((check_hlds__mode_info__V_60_60 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_61_61 << (MR_Integer) 2)))))));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 10) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 11) = ((MR_Box) ((check_hlds__mode_info__V_63_63 | ((check_hlds__mode_info__V_64_64 << (MR_Integer) 1)))));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 12) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 13) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 14) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) ((check_hlds__mode_info__X_4 | ((((check_hlds__mode_info__V_69_69 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_70_70 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_71_71 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_73_73 << (MR_Integer) 5)))))))))))));
#line 686 "mode_info.m"
        }
#line 686 "mode_info.m"
        {
#line 686 "mode_info.m"
          MR_Word base;
#line 686 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 686 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_47_47));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 686 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 686 "mode_info.m"
        }
#line 686 "mode_info.m"
      }
#line 685 "mode_info.m"
  }
#line 236 "mode_info.m"
}

#line 234 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_warnings_3_p_0(
#line 234 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 234 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 234 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 234 "mode_info.m"
{
#line 677 "mode_info.m"
  {
#line 677 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 677 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 677 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 677 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 677 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 677 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 677 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 677 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 677 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 677 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 678 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 678 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));

#line 678 "mode_info.m"
    {
#line 678 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 678 "mode_info.m"
    }
#line 678 "mode_info.m"
    {
#line 678 "mode_info.m"
      MR_Word base;
#line 678 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 678 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 678 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 678 "mode_info.m"
    }
#line 677 "mode_info.m"
  }
#line 234 "mode_info.m"
}

#line 232 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_errors_3_p_0(
#line 232 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 232 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 232 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 232 "mode_info.m"
{
#line 674 "mode_info.m"
  {
#line 674 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 672 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 672 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 672 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 672 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 672 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 672 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 672 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 672 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));

#line 672 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 674 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 674 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 674 "mode_info.m"
    else
#line 675 "mode_info.m"
      {
#line 675 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 675 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 675 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 675 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 675 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 675 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 675 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 675 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));

#line 675 "mode_info.m"
        {
#line 675 "mode_info.m"
          MR_Word base;
#line 675 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 675 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 675 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 675 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 675 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 675 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 675 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 675 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 675 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 675 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 675 "mode_info.m"
        }
#line 675 "mode_info.m"
      }
#line 674 "mode_info.m"
  }
#line 232 "mode_info.m"
}

#line 230 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_instvarset_3_p_0(
#line 230 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 230 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 230 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 230 "mode_info.m"
{
#line 669 "mode_info.m"
  {
#line 669 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 670 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));

#line 670 "mode_info.m"
    {
#line 670 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 670 "mode_info.m"
    }
#line 670 "mode_info.m"
    {
#line 670 "mode_info.m"
      MR_Word base;
#line 670 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 670 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 670 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 670 "mode_info.m"
    }
#line 669 "mode_info.m"
  }
#line 230 "mode_info.m"
}

#line 228 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_locked_vars_3_p_0(
#line 228 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 228 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 228 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 228 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
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
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));

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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__X_4));
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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
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
#line 228 "mode_info.m"
}

#line 226 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_instmap_3_p_0(
#line 226 "mode_info.m"
  MR_Word check_hlds__mode_info__InstMap_4,
#line 226 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_9,
#line 226 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_10)
#line 226 "mode_info.m"
{
#line 866 "mode_info.m"
  {
#line 866 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 866 "mode_info.m"
    MR_Word check_hlds__mode_info__InstMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 1)));
#line 866 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_11_11;
#line 866 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 0)));
#line 866 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 2)));
#line 866 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 3)));
#line 866 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 4)));
#line 866 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 5)));
#line 866 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 6)));
#line 866 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 7)));

#line 868 "mode_info.m"
    {
#line 868 "mode_info.m"
      check_hlds__mode_info__STATE_VARIABLE_MI_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 868 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 0) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 868 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 1) = ((MR_Box) (check_hlds__mode_info__InstMap_4));
#line 868 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 2) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 868 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 3) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 868 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 4) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 868 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 5) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 868 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 6) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 868 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 7) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 868 "mode_info.m"
    }
#line 870 "mode_info.m"
    {
#line 870 "mode_info.m"
      check_hlds__mode_info__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__mode_info__InstMap_4);
    }
#line 870 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 871 "mode_info.m"
      {
#line 871 "mode_info.m"
        check_hlds__mode_info__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__mode_info__InstMap0_6);
      }
#line 876 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 873 "mode_info.m"
      {
#line 873 "mode_info.m"
        MR_Word check_hlds__mode_info__DelayInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 2)));
#line 873 "mode_info.m"
        MR_Word check_hlds__mode_info__DelayInfo_8;
#line 613 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 0)));
#line 613 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 1)));
#line 613 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 3)));
#line 613 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 4)));
#line 613 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 5)));
#line 613 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 6)));
#line 613 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 7)));

#line 874 "mode_info.m"
        {
#line 874 "mode_info.m"
          check_hlds__delay_info__delay_info_bind_all_vars_2_p_0(check_hlds__mode_info__DelayInfo0_7, &check_hlds__mode_info__DelayInfo_8);
        }
#line 875 "mode_info.m"
        {
#line 875 "mode_info.m"
          check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__mode_info__DelayInfo_8, check_hlds__mode_info__STATE_VARIABLE_MI_11_11, check_hlds__mode_info__STATE_VARIABLE_MI_10);
#line 875 "mode_info.m"
          return;
        }
#line 873 "mode_info.m"
      }
#line 876 "mode_info.m"
    else
#line 876 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_10 = check_hlds__mode_info__STATE_VARIABLE_MI_11_11;
#line 866 "mode_info.m"
  }
#line 226 "mode_info.m"
}

#line 224 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_unset_call_context_2_p_0(
#line 224 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_4,
#line 224 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_5)
#line 224 "mode_info.m"
{
#line 861 "mode_info.m"
  {
#line 861 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 0)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 1)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 2)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 3)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 5)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 6)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 7)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 4)));

#line 666 "mode_info.m"
    {
#line 666 "mode_info.m"
      MR_Word base;
#line 666 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 666 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_5 = base;
#line 666 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 666 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 666 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 666 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 666 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 666 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 666 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 666 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 666 "mode_info.m"
    }
#line 861 "mode_info.m"
  }
#line 224 "mode_info.m"
}

#line 222 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(
#line 222 "mode_info.m"
  MR_Integer check_hlds__mode_info__ArgNum_4,
#line 222 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11,
#line 222 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12)
#line 222 "mode_info.m"
{
#line 844 "mode_info.m"
  {
#line 844 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 844 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 4)));
#line 844 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 0)));
#line 844 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 1)));
#line 844 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 2)));
#line 844 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 3)));
#line 844 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 5)));
#line 844 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 6)));
#line 844 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 7)));

#line 850 "mode_info.m"
#line 850 "mode_info.m"
    switch (MR_tag((MR_Word) check_hlds__mode_info__ModeContext0_6)) {
#line 850 "mode_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 850 "mode_info.m"
      case (MR_Integer) 0:
#line 857 "mode_info.m"
        {
#line 858 "mode_info.m"
          {
#line 858 "mode_info.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_set_call_arg_context\'/3", (MR_String) "uninitialized");
#line 858 "mode_info.m"
            return;
          }
#line 857 "mode_info.m"
        }
#line 850 "mode_info.m"
        break;
#line 850 "mode_info.m"
      case (MR_Integer) 1:
#line 847 "mode_info.m"
        {
#line 847 "mode_info.m"
          MR_Word check_hlds__mode_info__CallId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__ModeContext0_6, (MR_Integer) 0)));
#line 847 "mode_info.m"
          MR_Word check_hlds__mode_info__V_16_16;
#line 847 "mode_info.m"
          MR_Integer check_hlds__mode_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__ModeContext0_6, (MR_Integer) 1)));

#line 848 "mode_info.m"
          {
#line 848 "mode_info.m"
            check_hlds__mode_info__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 848 "mode_info.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_16_16, 0) = ((MR_Box) (check_hlds__mode_info__CallId_7));
#line 848 "mode_info.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_16_16, 1) = ((MR_Box) (check_hlds__mode_info__ArgNum_4));
#line 848 "mode_info.m"
          }
#line 666 "mode_info.m"
          {
#line 666 "mode_info.m"
            MR_Word base;
#line 666 "mode_info.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 666 "mode_info.m"
            *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12 = base;
#line 666 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 666 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 666 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 666 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 666 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 666 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 666 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 666 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 666 "mode_info.m"
          }
#line 847 "mode_info.m"
        }
#line 850 "mode_info.m"
        break;
#line 850 "mode_info.m"
      case (MR_Integer) 2:
#line 851 "mode_info.m"
        *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12 = check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11;
#line 850 "mode_info.m"
        break;
#line 850 "mode_info.m"
    }
#line 844 "mode_info.m"
  }
#line 222 "mode_info.m"
}

#line 220 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_call_context_3_p_0(
#line 220 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 220 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_2,
#line 220 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_3)
#line 220 "mode_info.m"
{
#line 839 "mode_info.m"
  {
#line 839 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;

#line 839 "mode_info.m"
    if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 841 "mode_info.m"
      {
#line 841 "mode_info.m"
        MR_Word check_hlds__mode_info__CallId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 841 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15;
#line 666 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23;
#line 666 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24;
#line 666 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25;
#line 666 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26;
#line 666 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28;
#line 666 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29;
#line 666 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30;
#line 666 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27;

#line 842 "mode_info.m"
        {
#line 842 "mode_info.m"
          check_hlds__mode_info__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "mode_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_15_15, 0) = ((MR_Box) (check_hlds__mode_info__CallId_11));
#line 842 "mode_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 842 "mode_info.m"
        }
#line 666 "mode_info.m"
        check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 0)));
#line 666 "mode_info.m"
        check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 1)));
#line 666 "mode_info.m"
        check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 2)));
#line 666 "mode_info.m"
        check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 3)));
#line 666 "mode_info.m"
        check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 4)));
#line 666 "mode_info.m"
        check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 5)));
#line 666 "mode_info.m"
        check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 6)));
#line 666 "mode_info.m"
        check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 7)));
#line 666 "mode_info.m"
        {
#line 666 "mode_info.m"
          MR_Word base;
#line 666 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 666 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_3 = base;
#line 666 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 666 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 666 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 666 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 666 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 666 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 666 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 666 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 666 "mode_info.m"
        }
#line 841 "mode_info.m"
      }
#line 839 "mode_info.m"
    else
#line 839 "mode_info.m"
      {
#line 839 "mode_info.m"
        MR_Word check_hlds__mode_info__UnifyContext_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 839 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8;
#line 666 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36;
#line 666 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37;
#line 666 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38;
#line 666 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39;
#line 666 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41;
#line 666 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42;
#line 666 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43;
#line 666 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40;

#line 840 "mode_info.m"
        {
#line 840 "mode_info.m"
          check_hlds__mode_info__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "mode_info.m"
          MR_hl_field(MR_mktag(2), check_hlds__mode_info__V_8_8, 0) = ((MR_Box) (check_hlds__mode_info__UnifyContext_4));
#line 840 "mode_info.m"
          MR_hl_field(MR_mktag(2), check_hlds__mode_info__V_8_8, 1) = ((MR_Box) ((MR_Integer) 0));
#line 840 "mode_info.m"
        }
#line 666 "mode_info.m"
        check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 0)));
#line 666 "mode_info.m"
        check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 1)));
#line 666 "mode_info.m"
        check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 2)));
#line 666 "mode_info.m"
        check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 3)));
#line 666 "mode_info.m"
        check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 4)));
#line 666 "mode_info.m"
        check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 5)));
#line 666 "mode_info.m"
        check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 6)));
#line 666 "mode_info.m"
        check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 7)));
#line 666 "mode_info.m"
        {
#line 666 "mode_info.m"
          MR_Word base;
#line 666 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 666 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_3 = base;
#line 666 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 666 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_37_37));
#line 666 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_38_38));
#line 666 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_39_39));
#line 666 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 666 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_41_41));
#line 666 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_42_42));
#line 666 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 666 "mode_info.m"
        }
#line 839 "mode_info.m"
      }
#line 839 "mode_info.m"
  }
#line 220 "mode_info.m"
}

#line 218 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_mode_context_3_p_0(
#line 218 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 218 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 218 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 218 "mode_info.m"
{
#line 666 "mode_info.m"
  {
#line 666 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));

#line 666 "mode_info.m"
    {
#line 666 "mode_info.m"
      MR_Word base;
#line 666 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 666 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 666 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 666 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 666 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 666 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 666 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 666 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 666 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 666 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 666 "mode_info.m"
    }
#line 666 "mode_info.m"
  }
#line 218 "mode_info.m"
}

#line 216 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_context_3_p_0(
#line 216 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 216 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 216 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 216 "mode_info.m"
{
#line 662 "mode_info.m"
  {
#line 662 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));

#line 660 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 662 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 662 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 662 "mode_info.m"
    else
#line 663 "mode_info.m"
      {
#line 663 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 663 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 663 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 663 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 663 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 663 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 663 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 663 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));

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
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 663 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 663 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 663 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 663 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 663 "mode_info.m"
        }
#line 663 "mode_info.m"
      }
#line 662 "mode_info.m"
  }
#line 216 "mode_info.m"
}

#line 214 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_proc_id_3_p_0(
#line 214 "mode_info.m"
  MR_Integer check_hlds__mode_info__X_4,
#line 214 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 214 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 214 "mode_info.m"
{
#line 653 "mode_info.m"
  {
#line 653 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 654 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));

#line 654 "mode_info.m"
    {
#line 654 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 654 "mode_info.m"
    }
#line 654 "mode_info.m"
    {
#line 654 "mode_info.m"
      MR_Word base;
#line 654 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 654 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 654 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 654 "mode_info.m"
    }
#line 653 "mode_info.m"
  }
#line 214 "mode_info.m"
}

#line 212 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_pred_id_3_p_0(
#line 212 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 212 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 212 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 212 "mode_info.m"
{
#line 651 "mode_info.m"
  {
#line 651 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 651 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 651 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 651 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 651 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 651 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 651 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 651 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 651 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 651 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 652 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));

#line 652 "mode_info.m"
    {
#line 652 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) ((check_hlds__mode_info__V_27_27 | ((((check_hlds__mode_info__V_28_28 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_29_29 << (MR_Integer) 2)))))));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) ((check_hlds__mode_info__V_31_31 | ((check_hlds__mode_info__V_32_32 << (MR_Integer) 1)))));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) (check_hlds__mode_info__V_33_33));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((((check_hlds__mode_info__V_37_37 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_41_41 << (MR_Integer) 5)))))))))))));
#line 652 "mode_info.m"
    }
#line 652 "mode_info.m"
    {
#line 652 "mode_info.m"
      MR_Word base;
#line 652 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 652 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 652 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 652 "mode_info.m"
    }
#line 651 "mode_info.m"
  }
#line 212 "mode_info.m"
}

#line 210 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_module_info_3_p_0(
#line 210 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 210 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 210 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 210 "mode_info.m"
{
#line 648 "mode_info.m"
  {
#line 648 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));

#line 646 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 648 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 648 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 648 "mode_info.m"
    else
#line 649 "mode_info.m"
      {
#line 649 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 649 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 649 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 649 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 649 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 649 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 649 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 649 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));

#line 649 "mode_info.m"
        {
#line 649 "mode_info.m"
          MR_Word base;
#line 649 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 649 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 649 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 649 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 649 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 649 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 649 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 649 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 649 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 649 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 649 "mode_info.m"
        }
#line 649 "mode_info.m"
      }
#line 648 "mode_info.m"
  }
#line 210 "mode_info.m"
}

#line 205 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(
#line 205 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 205 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 205 "mode_info.m"
{
#line 642 "mode_info.m"
  {
#line 642 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 643 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 643 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 643 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 642 "mode_info.m"
  }
#line 205 "mode_info.m"
}

#line 203 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_make_ground_terms_unique_2_p_0(
#line 203 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 203 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 203 "mode_info.m"
{
#line 640 "mode_info.m"
  {
#line 640 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 641 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 641 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 641 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 641 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 640 "mode_info.m"
  }
#line 203 "mode_info.m"
}

#line 201 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_had_from_ground_term_2_p_0(
#line 201 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 201 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 201 "mode_info.m"
{
#line 638 "mode_info.m"
  {
#line 638 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 639 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 639 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 639 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 639 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 639 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 638 "mode_info.m"
  }
#line 201 "mode_info.m"
}

#line 199 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_in_from_ground_term_2_p_0(
#line 199 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 199 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 199 "mode_info.m"
{
#line 636 "mode_info.m"
  {
#line 636 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 637 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 637 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 637 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 637 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 637 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 637 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 636 "mode_info.m"
  }
#line 199 "mode_info.m"
}

#line 197 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_p_0(
#line 197 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 197 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 197 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_24_24;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 629 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 629 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 629 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 629 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 629 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 629 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 629 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 629 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 629 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 628 "mode_info.m"
  }
#line 197 "mode_info.m"
}

#line 196 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_checking_extra_goals_2_p_0(
#line 196 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 196 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 196 "mode_info.m"
{
#line 634 "mode_info.m"
  {
#line 634 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 635 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 635 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 635 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 635 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 635 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 635 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 635 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 635 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 634 "mode_info.m"
  }
#line 196 "mode_info.m"
}

#line 194 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_head_inst_vars_2_p_0(
#line 194 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 194 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 194 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_29_29;
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 633 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 633 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 633 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 633 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 633 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 633 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 633 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 633 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 633 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 632 "mode_info.m"
  }
#line 194 "mode_info.m"
}

#line 193 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_initial_instmap_2_p_0(
#line 193 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 193 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 193 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_28_28;
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 631 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 631 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 631 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 631 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 631 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 631 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 631 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 631 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 631 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 631 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 630 "mode_info.m"
  }
#line 193 "mode_info.m"
}

#line 191 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(
#line 191 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 191 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 191 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_23_23;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 627 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 627 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 627 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 627 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 627 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 627 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 627 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 627 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 627 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 627 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 627 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 627 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 627 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 627 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 626 "mode_info.m"
  }
#line 191 "mode_info.m"
}

#line 189 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_how_to_check_2_p_0(
#line 189 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 189 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 189 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_22_22;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 625 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
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
    *check_hlds__mode_info__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 625 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 625 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 625 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 625 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
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
#line 189 "mode_info.m"
}

#line 188 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(
#line 188 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 188 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 188 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_26_26;
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 623 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
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
    *check_hlds__mode_info__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 623 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 623 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 623 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
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
#line 188 "mode_info.m"
}

#line 186 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_parallel_vars_2_p_0(
#line 186 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 186 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 186 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_21_21;
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 621 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
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
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 621 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 621 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 621 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 621 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 621 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 621 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 621 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
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
#line 186 "mode_info.m"
}

#line 184 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_last_checkpoint_insts_2_p_0(
#line 184 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 184 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 184 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
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
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
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
#line 184 "mode_info.m"
}

#line 182 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(
#line 182 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 182 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 182 "mode_info.m"
{
#line 617 "mode_info.m"
  {
#line 617 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 617 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 617 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 617 "mode_info.m"
  }
#line 182 "mode_info.m"
}

#line 181 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_live_vars_2_p_0(
#line 181 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 181 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 181 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_19_19;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
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
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
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
#line 181 "mode_info.m"
}

#line 180 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_delay_info_2_p_0(
#line 180 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 180 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 180 "mode_info.m"
{
#line 613 "mode_info.m"
  {
#line 613 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 613 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 613 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 613 "mode_info.m"
  }
#line 180 "mode_info.m"
}

#line 179 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_var_types_2_p_0(
#line 179 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 179 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 179 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_16_16;
#line 593 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
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
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 593 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
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
#line 179 "mode_info.m"
}

#line 178 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_instvarset_2_p_0(
#line 178 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_3,
#line 178 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 178 "mode_info.m"
{
#line 600 "mode_info.m"
  {
#line 600 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 600 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
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
    MR_Word check_hlds__mode_info__V_20_20;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 601 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 601 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 601 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 601 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 601 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 601 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 601 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 601 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 601 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 601 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 601 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 601 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 601 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 601 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
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
#line 178 "mode_info.m"
}

#line 177 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_varset_2_p_0(
#line 177 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 177 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 177 "mode_info.m"
{
#line 590 "mode_info.m"
  {
#line 590 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 590 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 591 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 591 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
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
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 591 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 591 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 591 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 591 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 591 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
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
check_hlds__mode_info__mode_info_get_liveness_2_p_0(
#line 176 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_3,
#line 176 "mode_info.m"
  MR_Word * check_hlds__mode_info__LiveVars_4)
#line 176 "mode_info.m"
{
#line 933 "mode_info.m"
  {
#line 933 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 933 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVarsBag_5;
#line 933 "mode_info.m"
    MR_Word check_hlds__mode_info__SortedList_6;
#line 933 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 615 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
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
    MR_Word check_hlds__mode_info__V_36_36;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 615 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;

#line 615 "mode_info.m"
    check_hlds__mode_info__LiveVarsBag_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 615 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 615 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 935 "mode_info.m"
    {
#line 935 "mode_info.m"
      mercury__bag__to_list_without_duplicates_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVarsBag_5, &check_hlds__mode_info__SortedList_6);
    }
#line 936 "mode_info.m"
    {
#line 936 "mode_info.m"
      parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_info__SortedList_6, check_hlds__mode_info__LiveVars_4);
#line 936 "mode_info.m"
      return;
    }
#line 933 "mode_info.m"
  }
#line 176 "mode_info.m"
}

#line 175 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_num_errors_2_p_0(
#line 175 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_3,
#line 175 "mode_info.m"
  MR_Integer * check_hlds__mode_info__NumErrors_4)
#line 175 "mode_info.m"
{
#line 882 "mode_info.m"
  {
#line 882 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 882 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 884 "mode_info.m"
    {
#line 884 "mode_info.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__mode_info__Errors_5, check_hlds__mode_info__NumErrors_4);
#line 884 "mode_info.m"
      return;
    }
#line 882 "mode_info.m"
  }
#line 175 "mode_info.m"
}

#line 173 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(
#line 173 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 173 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 173 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 611 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 611 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
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
#line 173 "mode_info.m"
}

#line 171 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_need_to_requantify_2_p_0(
#line 171 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 171 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 171 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 609 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
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
    *check_hlds__mode_info__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
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
#line 171 "mode_info.m"
}

#line 169 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_warnings_2_p_0(
#line 169 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 169 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 169 "mode_info.m"
{
#line 606 "mode_info.m"
  {
#line 606 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 606 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 607 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 607 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 607 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 607 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 607 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 606 "mode_info.m"
  }
#line 169 "mode_info.m"
}

#line 168 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_errors_2_p_0(
#line 168 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 168 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 168 "mode_info.m"
{
#line 605 "mode_info.m"
  {
#line 605 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 605 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 605 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 605 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 605 "mode_info.m"
  }
#line 168 "mode_info.m"
}

#line 167 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_locked_vars_2_p_0(
#line 167 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 167 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 167 "mode_info.m"
{
#line 602 "mode_info.m"
  {
#line 602 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 602 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 603 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 603 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;

#line 603 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 603 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 603 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 602 "mode_info.m"
  }
#line 167 "mode_info.m"
}

#line 166 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_instmap_2_p_0(
#line 166 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 166 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 166 "mode_info.m"
{
#line 599 "mode_info.m"
  {
#line 599 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6;
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 599 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 599 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 599 "mode_info.m"
    check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 599 "mode_info.m"
    check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 599 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 599 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 599 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 599 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 599 "mode_info.m"
  }
#line 166 "mode_info.m"
}

#line 165 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_mode_context_2_p_0(
#line 165 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 165 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 165 "mode_info.m"
{
#line 597 "mode_info.m"
  {
#line 597 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 597 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 597 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 597 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 597 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 597 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 597 "mode_info.m"
  }
#line 165 "mode_info.m"
}

#line 164 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_context_2_p_0(
#line 164 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 164 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 164 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 595 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 595 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 595 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 595 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 595 "mode_info.m"
  }
#line 164 "mode_info.m"
}

#line 162 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_debug_modes_2_p_0(
#line 162 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 162 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 162 "mode_info.m"
{
#line 588 "mode_info.m"
  {
#line 588 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 588 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 589 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 589 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
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
    MR_Word check_hlds__mode_info__V_35_35;

#line 589 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 589 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 589 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 589 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 589 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 589 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 589 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 589 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
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
#line 588 "mode_info.m"
  }
#line 162 "mode_info.m"
}

#line 161 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_proc_id_2_p_0(
#line 161 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 161 "mode_info.m"
  MR_Integer * check_hlds__mode_info__X_4)
#line 161 "mode_info.m"
{
#line 586 "mode_info.m"
  {
#line 586 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 586 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 587 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
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
    MR_Word check_hlds__mode_info__V_35_35;

#line 587 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 587 "mode_info.m"
    check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 587 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 587 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 587 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 587 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 587 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 587 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 587 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 587 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 587 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 587 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 587 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 587 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 587 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 587 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 587 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 587 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 587 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 587 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 587 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 587 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 587 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 586 "mode_info.m"
  }
#line 161 "mode_info.m"
}

#line 160 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_pred_id_2_p_0(
#line 160 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 160 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 160 "mode_info.m"
{
#line 584 "mode_info.m"
  {
#line 584 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 584 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 585 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_13_13;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 585 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
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
    MR_Word check_hlds__mode_info__V_35_35;

#line 585 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 585 "mode_info.m"
    check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 585 "mode_info.m"
    check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 585 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 585 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 585 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 585 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 585 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 585 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 585 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) & (MR_Integer) 1);
#line 585 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 585 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 585 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)));
#line 585 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) & (MR_Integer) 1);
#line 585 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 585 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)));
#line 585 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 585 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 585 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) & (MR_Integer) 1);
#line 585 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 585 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 585 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 585 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 585 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 584 "mode_info.m"
  }
#line 160 "mode_info.m"
}

#line 159 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_insts_2_p_0(
#line 159 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_3,
#line 159 "mode_info.m"
  MR_Word * check_hlds__mode_info__Insts_4)
#line 159 "mode_info.m"
{
#line 835 "mode_info.m"
  {
#line 835 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 835 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 837 "mode_info.m"
    {
#line 837 "mode_info.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Insts_4);
#line 837 "mode_info.m"
      return;
    }
#line 835 "mode_info.m"
  }
#line 159 "mode_info.m"
}

#line 158 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_modes_2_p_0(
#line 158 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_3,
#line 158 "mode_info.m"
  MR_Word * check_hlds__mode_info__Modes_4)
#line 158 "mode_info.m"
{
#line 831 "mode_info.m"
  {
#line 831 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 831 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 833 "mode_info.m"
    {
#line 833 "mode_info.m"
      hlds__hlds_module__module_info_get_mode_table_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Modes_4);
#line 833 "mode_info.m"
      return;
    }
#line 831 "mode_info.m"
  }
#line 158 "mode_info.m"
}

#line 157 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_preds_2_p_0(
#line 157 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_3,
#line 157 "mode_info.m"
  MR_Word * check_hlds__mode_info__Preds_4)
#line 157 "mode_info.m"
{
#line 827 "mode_info.m"
  {
#line 827 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 827 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 829 "mode_info.m"
    {
#line 829 "mode_info.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Preds_4);
#line 829 "mode_info.m"
      return;
    }
#line 827 "mode_info.m"
  }
#line 157 "mode_info.m"
}

#line 156 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_module_info_2_p_0(
#line 156 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 156 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 156 "mode_info.m"
{
#line 583 "mode_info.m"
  {
#line 583 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 583 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 583 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 583 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 583 "mode_info.m"
  }
#line 156 "mode_info.m"
}

#line 110 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_init_10_p_0(
#line 110 "mode_info.m"
  MR_Word check_hlds__mode_info__ModuleInfo_11,
#line 110 "mode_info.m"
  MR_Word check_hlds__mode_info__PredId_12,
#line 110 "mode_info.m"
  MR_Integer check_hlds__mode_info__ProcId_13,
#line 110 "mode_info.m"
  MR_Word check_hlds__mode_info__Context_14,
#line 110 "mode_info.m"
  MR_Word check_hlds__mode_info__LiveVars_15,
#line 110 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadInstVars_16,
#line 110 "mode_info.m"
  MR_Word check_hlds__mode_info__InstMap0_17,
#line 110 "mode_info.m"
  MR_Word check_hlds__mode_info__HowToCheck_18,
#line 110 "mode_info.m"
  MR_Word check_hlds__mode_info__MayChangeProc_19,
#line 110 "mode_info.m"
  MR_Word * check_hlds__mode_info__ModeInfo_20)
#line 110 "mode_info.m"
{
#line 513 "mode_info.m"
  {
#line 513 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 513 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeCtorInfo_61_61;
#line 513 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeInfo_62_62;
#line 513 "mode_info.m"
    MR_Word check_hlds__mode_info__Globals_21;
#line 513 "mode_info.m"
    MR_Word check_hlds__mode_info__DebugModes_22;
#line 513 "mode_info.m"
    MR_Integer check_hlds__mode_info__DebugModesPredId_23;
#line 513 "mode_info.m"
    MR_Integer check_hlds__mode_info__PredIdInt_24;
#line 513 "mode_info.m"
    MR_Word check_hlds__mode_info__Debug_29;
#line 513 "mode_info.m"
    MR_Word check_hlds__mode_info__ProcInfo_30;
#line 513 "mode_info.m"
    MR_Word check_hlds__mode_info__VarSet_31;
#line 513 "mode_info.m"
    MR_Word check_hlds__mode_info__VarTypes_32;
#line 513 "mode_info.m"
    MR_Word check_hlds__mode_info__InstVarSet_33;
#line 513 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVarsBag_34;
#line 513 "mode_info.m"
    MR_Word check_hlds__mode_info__LastCheckpointInstMap_35;
#line 513 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeSubInfo_48;
#line 513 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext_49;
#line 513 "mode_info.m"
    MR_Word check_hlds__mode_info__DelayInfo_50;
#line 513 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVarsBag_52;
#line 513 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59;
#line 513 "mode_info.m"
    MR_Word check_hlds__mode_info__V_60_60;
#line 521 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_55_55;

#line 514 "mode_info.m"
    {
#line 514 "mode_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__mode_info__ModuleInfo_11, &check_hlds__mode_info__Globals_21);
    }
#line 515 "mode_info.m"
    {
#line 515 "mode_info.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 60, &check_hlds__mode_info__DebugModes_22);
    }
#line 516 "mode_info.m"
    {
#line 516 "mode_info.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 64, &check_hlds__mode_info__DebugModesPredId_23);
    }
#line 518 "mode_info.m"
    {
#line 518 "mode_info.m"
      hlds__hlds_pred__pred_id_to_int_2_p_0(check_hlds__mode_info__PredId_12, &check_hlds__mode_info__PredIdInt_24);
    }
#line 520 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__DebugModes_22 == (MR_Integer) 1);
#line 520 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 520 "mode_info.m"
      {
#line 521 "mode_info.m"
        check_hlds__mode_info__V_55_55 = (MR_Integer) 0;
#line 521 "mode_info.m"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__DebugModesPredId_23 >= check_hlds__mode_info__V_55_55);
#line 521 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 521 "mode_info.m"
          {
#line 521 "mode_info.m"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__DebugModesPredId_23 == check_hlds__mode_info__PredIdInt_24);
#line 521 "mode_info.m"
            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 521 "mode_info.m"
          }
#line 521 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 520 "mode_info.m"
      }
#line 529 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 523 "mode_info.m"
      {
#line 523 "mode_info.m"
        MR_Word check_hlds__mode_info__DebugVerbose_25;
#line 523 "mode_info.m"
        MR_Word check_hlds__mode_info__DebugMinimal_26;
#line 523 "mode_info.m"
        MR_Word check_hlds__mode_info__Statistics_27;
#line 523 "mode_info.m"
        MR_Word check_hlds__mode_info__Flags_28;

#line 523 "mode_info.m"
        {
#line 523 "mode_info.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 63, &check_hlds__mode_info__DebugVerbose_25);
        }
#line 524 "mode_info.m"
        {
#line 524 "mode_info.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 62, &check_hlds__mode_info__DebugMinimal_26);
        }
#line 525 "mode_info.m"
        {
#line 525 "mode_info.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 61, &check_hlds__mode_info__Statistics_27);
        }
#line 527 "mode_info.m"
        {
#line 527 "mode_info.m"
          check_hlds__mode_info__Flags_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 527 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__Flags_28, 0) = ((MR_Box) ((check_hlds__mode_info__DebugVerbose_25 | ((((check_hlds__mode_info__DebugMinimal_26 << (MR_Integer) 1)) | ((check_hlds__mode_info__Statistics_27 << (MR_Integer) 2)))))));
#line 527 "mode_info.m"
        }
#line 528 "mode_info.m"
        {
#line 528 "mode_info.m"
          check_hlds__mode_info__Debug_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 528 "mode_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_info__Debug_29, 0) = ((MR_Box) (check_hlds__mode_info__Flags_28));
#line 528 "mode_info.m"
        }
#line 523 "mode_info.m"
      }
#line 529 "mode_info.m"
    else
#line 530 "mode_info.m"
      check_hlds__mode_info__Debug_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 533 "mode_info.m"
    {
#line 533 "mode_info.m"
      hlds__hlds_module__module_info_proc_info_4_p_0(check_hlds__mode_info__ModuleInfo_11, check_hlds__mode_info__PredId_12, check_hlds__mode_info__ProcId_13, &check_hlds__mode_info__ProcInfo_30);
    }
#line 534 "mode_info.m"
    {
#line 534 "mode_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__mode_info__ProcInfo_30, &check_hlds__mode_info__VarSet_31);
    }
#line 535 "mode_info.m"
    {
#line 535 "mode_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__mode_info__ProcInfo_30, &check_hlds__mode_info__VarTypes_32);
    }
#line 536 "mode_info.m"
    {
#line 536 "mode_info.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__mode_info__ProcInfo_30, &check_hlds__mode_info__InstVarSet_33);
    }
#line 17457 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeCtorInfo_61_61 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 538 "mode_info.m"
    {
#line 538 "mode_info.m"
      check_hlds__mode_info__V_59_59 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__mode_info__TypeCtorInfo_61_61, check_hlds__mode_info__LiveVars_15);
    }
#line 17464 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeInfo_62_62 = (MR_Word) &check_hlds__mode_info_scalar_common_1[0];
#line 538 "mode_info.m"
    {
#line 538 "mode_info.m"
      mercury__bag__from_sorted_list_2_p_0(check_hlds__mode_info__TypeInfo_62_62, check_hlds__mode_info__V_59_59, &check_hlds__mode_info__LiveVarsBag_34);
    }
#line 539 "mode_info.m"
    {
#line 539 "mode_info.m"
      hlds__instmap__init_unreachable_1_p_0(&check_hlds__mode_info__LastCheckpointInstMap_35);
    }
#line 554 "mode_info.m"
    {
#line 554 "mode_info.m"
      check_hlds__mode_info__ModeSubInfo_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 554 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 0) = ((MR_Box) (check_hlds__mode_info__PredId_12));
#line 554 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 1) = ((MR_Box) (check_hlds__mode_info__ProcId_13));
#line 554 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 2) = ((MR_Box) (check_hlds__mode_info__VarSet_31));
#line 554 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 3) = ((MR_Box) (check_hlds__mode_info__VarTypes_32));
#line 554 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 4) = ((MR_Box) (check_hlds__mode_info__Debug_29));
#line 554 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 6) = ((MR_Box) (check_hlds__mode_info__LiveVarsBag_34));
#line 554 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 7) = ((MR_Box) (check_hlds__mode_info__InstVarSet_33));
#line 554 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 9) = ((MR_Box) ((check_hlds__mode_info__HowToCheck_18 | ((((check_hlds__mode_info__MayChangeProc_19 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))));
#line 554 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 10) = ((MR_Box) (check_hlds__mode_info__LastCheckpointInstMap_35));
#line 554 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 11) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 554 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 12) = ((MR_Box) (check_hlds__mode_info__InstMap0_17));
#line 554 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 13) = ((MR_Box) (check_hlds__mode_info__HeadInstVars_16));
#line 554 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 14) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_48, 15) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((MR_Integer) 1 << (MR_Integer) 5)))))))))))));
#line 554 "mode_info.m"
    }
#line 561 "mode_info.m"
    {
#line 561 "mode_info.m"
      check_hlds__mode_errors__mode_context_init_1_p_0(&check_hlds__mode_info__ModeContext_49);
    }
#line 562 "mode_info.m"
    {
#line 562 "mode_info.m"
      check_hlds__delay_info__delay_info_init_1_p_0(&check_hlds__mode_info__DelayInfo_50);
    }
#line 564 "mode_info.m"
    {
#line 564 "mode_info.m"
      check_hlds__mode_info__V_60_60 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__mode_info__TypeCtorInfo_61_61, check_hlds__mode_info__LiveVars_15);
    }
#line 564 "mode_info.m"
    {
#line 564 "mode_info.m"
      mercury__bag__from_sorted_list_2_p_0(check_hlds__mode_info__TypeInfo_62_62, check_hlds__mode_info__V_60_60, &check_hlds__mode_info__NondetLiveVarsBag_52);
    }
#line 567 "mode_info.m"
    {
#line 567 "mode_info.m"
      MR_Word base;
#line 567 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 567 "mode_info.m"
      *check_hlds__mode_info__ModeInfo_20 = base;
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__ModuleInfo_11));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__InstMap0_17));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__DelayInfo_50));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__ModeContext_49));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__Context_14));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__NondetLiveVarsBag_52));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__ModeSubInfo_48));
#line 567 "mode_info.m"
    }
#line 513 "mode_info.m"
  }
#line 110 "mode_info.m"
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
