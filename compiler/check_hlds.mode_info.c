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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 140 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_0[1];

#line 143 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0;

#line 146 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_1[1];

#line 149 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1;

#line 152 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_0[1];

#line 155 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_1[1];

#line 158 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_call_context_0[2];

#line 161 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_call_context_0[2];

#line 164 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_call_context_0[2];

#line 167 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_debug_flags_0_0[3];

#line 170 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_debug_flags_0_0[3];

#line 173 "check_hlds.mode_info.c"
static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_debug_flags_0_0[3];

#line 176 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0;

#line 179 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0[1];

#line 182 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_debug_flags_0[1];

#line 185 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_debug_flags_0[1];

#line 188 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_debug_flags_0[1];

#line 191 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0;

#line 194 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1;

#line 197 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_had_from_ground_term_scope_0[2];

#line 200 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_had_from_ground_term_scope_0[2];

#line 203 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_had_from_ground_term_scope_0[2];

#line 206 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0;

#line 209 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1;

#line 212 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_how_to_check_goal_0[2];

#line 215 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_how_to_check_goal_0[2];

#line 218 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_how_to_check_goal_0[2];

#line 221 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0;

#line 224 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1;

#line 227 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_dupl_for_switch_0[2];

#line 230 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_dupl_for_switch_0[2];

#line 233 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_dupl_for_switch_0[2];

#line 236 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0;

#line 239 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1;

#line 242 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_from_ground_term_scope_0[2];

#line 245 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_from_ground_term_scope_0[2];

#line 248 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_from_ground_term_scope_0[2];

#line 251 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0;

#line 254 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1;

#line 257 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_promise_purity_scope_0[2];

#line 260 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_promise_purity_scope_0[2];

#line 263 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_promise_purity_scope_0[2];

#line 266 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 269 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 272 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 275 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 278 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0;

#line 281 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1;

#line 284 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_make_ground_terms_unique_0[2];

#line 287 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_make_ground_terms_unique_0[2];

#line 290 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_make_ground_terms_unique_0[2];

#line 293 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0;

#line 296 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1;

#line 299 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_change_called_proc_0[2];

#line 302 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_change_called_proc_0[2];

#line 305 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_change_called_proc_0[2];

#line 308 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0;

#line 311 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1;

#line 314 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_init_solver_vars_0[2];

#line 317 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_init_solver_vars_0[2];

#line 320 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_init_solver_vars_0[2];

#line 323 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_maybe_have_auto_init_var_0_0;

#line 326 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_maybe_have_auto_init_var_0_1;

#line 329 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_maybe_have_auto_init_var_0[2];

#line 332 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_maybe_have_auto_init_var_0[2];

#line 335 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_maybe_have_auto_init_var_0[2];

#line 338 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_0[2];

#line 341 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0;

#line 344 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_1[2];

#line 347 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1;

#line 350 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2;

#line 353 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_0[1];

#line 356 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_1[1];

#line 359 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_2[1];

#line 362 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_context_0[3];

#line 365 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_context_0[3];

#line 368 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_context_0[3];

#line 371 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

#line 374 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 377 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_info_0_0[8];

#line 380 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_info_0_0[8];

#line 383 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0;

#line 386 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0[1];

#line 389 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_info_0[1];

#line 392 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_info_0[1];

#line 395 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_info_0[1];

#line 398 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 401 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 404 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0;

#line 407 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 410 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0;

#line 413 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 416 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 419 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_warning_info_0;

#line 422 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_sub_info_0_0[25];

#line 425 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_sub_info_0_0[25];

#line 428 "check_hlds.mode_info.c"
static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_mode_sub_info_0_0[25];

#line 431 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0;

#line 434 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0[1];

#line 437 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_sub_info_0[1];

#line 440 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_sub_info_0[1];

#line 443 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_sub_info_0[1];

#line 446 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_par_conj_mode_check_0_0[2];

#line 449 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_par_conj_mode_check_0_0[2];

#line 452 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0;

#line 455 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0[1];

#line 458 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_par_conj_mode_check_0[1];

#line 461 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_par_conj_mode_check_0[1];

#line 464 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_par_conj_mode_check_0[1];

#line 467 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0;

#line 470 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1;

#line 473 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_side_0[2];

#line 476 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_side_0[2];

#line 479 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_side_0[2];

#line 482 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0;

#line 485 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1;

#line 488 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_var_lock_reason_0_2[1];

#line 491 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2;

#line 494 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3;

#line 497 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4;

#line 500 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5;

#line 503 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_0[5];

#line 506 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_1[1];

#line 509 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_var_lock_reason_0[2];

#line 512 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_var_lock_reason_0[6];

#line 515 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_var_lock_reason_0[6];

#line 518 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____call_context_0_0_10001(
#line 521 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 523 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 526 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____call_context_0_0_10001(
#line 529 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 531 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 533 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 536 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____debug_flags_0_0_10001(
#line 539 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 541 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 544 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0_10001(
#line 547 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 549 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 551 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 554 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0_10001(
#line 557 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 559 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 562 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0_10001(
#line 565 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 567 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 569 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 572 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____how_to_check_goal_0_0_10001(
#line 575 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 577 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 580 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____how_to_check_goal_0_0_10001(
#line 583 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 585 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 587 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 590 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0_10001(
#line 593 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 595 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 598 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0_10001(
#line 601 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 603 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 605 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 608 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0_10001(
#line 611 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 613 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 616 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0_10001(
#line 619 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 621 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 623 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 626 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0_10001(
#line 629 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 631 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 634 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0_10001(
#line 637 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 639 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 641 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 644 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____locked_vars_0_0_10001(
#line 647 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 649 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 652 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____locked_vars_0_0_10001(
#line 655 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 657 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 659 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 662 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0_10001(
#line 665 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 667 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 670 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0_10001(
#line 673 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 675 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 677 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 680 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_change_called_proc_0_0_10001(
#line 683 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 685 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 688 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_change_called_proc_0_0_10001(
#line 691 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 693 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 695 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 698 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_init_solver_vars_0_0_10001(
#line 701 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 703 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 706 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_init_solver_vars_0_0_10001(
#line 709 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 711 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 713 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 716 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____maybe_have_auto_init_var_0_0_10001(
#line 719 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 721 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 724 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____maybe_have_auto_init_var_0_0_10001(
#line 727 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 729 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 731 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 734 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_context_0_0_10001(
#line 737 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 739 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 742 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_context_0_0_10001(
#line 745 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 747 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 749 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 752 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0_10001(
#line 755 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 757 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 760 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0_10001(
#line 763 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 765 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 767 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 770 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0_10001(
#line 773 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 775 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 778 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0_10001(
#line 781 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 783 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 785 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 788 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0_10001(
#line 791 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 793 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 796 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0_10001(
#line 799 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 801 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 803 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 806 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0_10001(
#line 809 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 811 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 814 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0_10001(
#line 817 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 819 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 821 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 824 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____side_0_0_10001(
#line 827 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 829 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 832 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____side_0_0_10001(
#line 835 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 837 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 839 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 842 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____var_lock_reason_0_0_10001(
#line 845 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 847 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2);

#line 850 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____var_lock_reason_0_0_10001(
#line 853 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 855 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 857 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3);

#line 371 "mode_info.m"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0(
#line 371 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 371 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 371 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3);

#line 371 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0(
#line 371 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 371 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2);

#line 1002 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(
#line 1002 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 1002 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_7,
#line 1002 "mode_info.m"
  MR_Word * check_hlds__mode_info__Reason_8);

#line 584 "mode_info.m"
static void MR_CALL 
check_hlds__mode_info__do_we_have_auto_init_var_3_p_0(
#line 584 "mode_info.m"
  MR_Word check_hlds__mode_info__ModuleInfo_1,
#line 584 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 584 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3);


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



#line 994 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0
};

#line 999 "check_hlds.mode_info.c"
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

#line 1014 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0
};

#line 1019 "check_hlds.mode_info.c"
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

#line 1034 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0
};

#line 1039 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1
};

#line 1044 "check_hlds.mode_info.c"
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

#line 1058 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_call_context_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0
};

#line 1064 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_call_context_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1070 "check_hlds.mode_info.c"
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

#line 1087 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_debug_flags_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1094 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_debug_flags_0_0[3] = {
  (MR_String) "verbose",
  (MR_String) "minimal",
  (MR_String) "statistics"
};

#line 1101 "check_hlds.mode_info.c"
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

#line 1120 "check_hlds.mode_info.c"
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

#line 1135 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0
};

#line 1140 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_debug_flags_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0
  }
};

#line 1149 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_debug_flags_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0
};

#line 1154 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_debug_flags_0[1] = {
  (MR_Integer) 0
};

#line 1159 "check_hlds.mode_info.c"
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

#line 1176 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0 = {
  (MR_String) "had_from_ground_term_scope",
  (MR_Integer) 0
};

#line 1182 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1 = {
  (MR_String) "did_not_have_from_ground_term_scope",
  (MR_Integer) 1
};

#line 1188 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_had_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1
};

#line 1194 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_had_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0
};

#line 1200 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_had_from_ground_term_scope_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1206 "check_hlds.mode_info.c"
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

#line 1223 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0 = {
  (MR_String) "check_modes",
  (MR_Integer) 0
};

#line 1229 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1 = {
  (MR_String) "check_unique_modes",
  (MR_Integer) 1
};

#line 1235 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_how_to_check_goal_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1
};

#line 1241 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_how_to_check_goal_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1
};

#line 1247 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_how_to_check_goal_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1253 "check_hlds.mode_info.c"
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

#line 1270 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0 = {
  (MR_String) "in_dupl_for_switch",
  (MR_Integer) 0
};

#line 1276 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1 = {
  (MR_String) "not_in_dupl_for_switch",
  (MR_Integer) 1
};

#line 1282 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_dupl_for_switch_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1
};

#line 1288 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_dupl_for_switch_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1
};

#line 1294 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_dupl_for_switch_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1300 "check_hlds.mode_info.c"
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

#line 1317 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0 = {
  (MR_String) "in_from_ground_term_scope",
  (MR_Integer) 0
};

#line 1323 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1 = {
  (MR_String) "not_in_from_ground_term_scope",
  (MR_Integer) 1
};

#line 1329 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1
};

#line 1335 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1
};

#line 1341 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_from_ground_term_scope_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1347 "check_hlds.mode_info.c"
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

#line 1364 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0 = {
  (MR_String) "in_promise_purity_scope",
  (MR_Integer) 0
};

#line 1370 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1 = {
  (MR_String) "not_in_promise_purity_scope",
  (MR_Integer) 1
};

#line 1376 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_promise_purity_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1
};

#line 1382 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_promise_purity_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1
};

#line 1388 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_promise_purity_scope_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1394 "check_hlds.mode_info.c"
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

#line 1411 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1419 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1427 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_var_lock_reason_0,
    (MR_TypeInfo) &check_hlds__mode_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1436 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1444 "check_hlds.mode_info.c"
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

#line 1461 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0 = {
  (MR_String) "make_ground_terms_unique",
  (MR_Integer) 0
};

#line 1467 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1 = {
  (MR_String) "do_not_make_ground_terms_unique",
  (MR_Integer) 1
};

#line 1473 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_make_ground_terms_unique_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1
};

#line 1479 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_make_ground_terms_unique_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0
};

#line 1485 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_make_ground_terms_unique_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1491 "check_hlds.mode_info.c"
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

#line 1508 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0 = {
  (MR_String) "may_change_called_proc",
  (MR_Integer) 0
};

#line 1514 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1 = {
  (MR_String) "may_not_change_called_proc",
  (MR_Integer) 1
};

#line 1520 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_change_called_proc_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1
};

#line 1526 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_change_called_proc_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1
};

#line 1532 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_change_called_proc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1538 "check_hlds.mode_info.c"
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

#line 1555 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0 = {
  (MR_String) "may_init_solver_vars",
  (MR_Integer) 0
};

#line 1561 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1 = {
  (MR_String) "may_not_init_solver_vars",
  (MR_Integer) 1
};

#line 1567 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_init_solver_vars_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1
};

#line 1573 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_init_solver_vars_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_init_solver_vars_0_1
};

#line 1579 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_init_solver_vars_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1585 "check_hlds.mode_info.c"
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

#line 1602 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_maybe_have_auto_init_var_0_0 = {
  (MR_String) "have_no_auto_init_var",
  (MR_Integer) 0
};

#line 1608 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_maybe_have_auto_init_var_0_1 = {
  (MR_String) "have_auto_init_var",
  (MR_Integer) 1
};

#line 1614 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_maybe_have_auto_init_var_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_maybe_have_auto_init_var_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_maybe_have_auto_init_var_0_1
};

#line 1620 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_maybe_have_auto_init_var_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_maybe_have_auto_init_var_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_maybe_have_auto_init_var_0_0
};

#line 1626 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_maybe_have_auto_init_var_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1632 "check_hlds.mode_info.c"
const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_maybe_have_auto_init_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____maybe_have_auto_init_var_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____maybe_have_auto_init_var_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "maybe_have_auto_init_var",
  {     check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_maybe_have_auto_init_var_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_maybe_have_auto_init_var_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_maybe_have_auto_init_var_0
};

#line 1649 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1655 "check_hlds.mode_info.c"
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

#line 1670 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_side_0
};

#line 1676 "check_hlds.mode_info.c"
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

#line 1691 "check_hlds.mode_info.c"
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

#line 1706 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2
};

#line 1711 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0
};

#line 1716 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_2[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1
};

#line 1721 "check_hlds.mode_info.c"
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

#line 1740 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_context_0[3] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2
};

#line 1747 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_context_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1754 "check_hlds.mode_info.c"
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

#line 1771 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0
  }
};

#line 1779 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1787 "check_hlds.mode_info.c"
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

#line 1799 "check_hlds.mode_info.c"
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

#line 1811 "check_hlds.mode_info.c"
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

#line 1826 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0
};

#line 1831 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0
  }
};

#line 1840 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_info_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0
};

#line 1845 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_info_0[1] = {
  (MR_Integer) 0
};

#line 1850 "check_hlds.mode_info.c"
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

#line 1867 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1875 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1884 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_debug_flags_0
  }
};

#line 1892 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1900 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0
  }
};

#line 1908 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1916 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1925 "check_hlds.mode_info.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_warning_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0
  }
};

#line 1933 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_sub_info_0_0[25] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_maybe_have_auto_init_var_0,
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

#line 1962 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_sub_info_0_0[25] = {
  (MR_String) "msi_pred_id",
  (MR_String) "msi_proc_id",
  (MR_String) "msi_varset",
  (MR_String) "msi_vartypes",
  (MR_String) "msi_have_auto_init_var",
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

#line 1991 "check_hlds.mode_info.c"
static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_mode_sub_info_0_0[25] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 1,
    (MR_Integer) 1
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 16,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 16,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 16,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 16,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 16,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 16,
    (MR_Integer) 5,
    (MR_Integer) 1
  }
};

#line 2120 "check_hlds.mode_info.c"
static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0 = {
  (MR_String) "mode_sub_info",
  (MR_Integer) 25,
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

#line 2135 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0
};

#line 2140 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0
  }
};

#line 2149 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_sub_info_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0
};

#line 2154 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_sub_info_0[1] = {
  (MR_Integer) 0
};

#line 2159 "check_hlds.mode_info.c"
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

#line 2176 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_par_conj_mode_check_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__mode_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__mode_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2182 "check_hlds.mode_info.c"
static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_par_conj_mode_check_0_0[2] = {
  (MR_String) "par_conj_nonlocals",
  (MR_String) "par_conj_bound"
};

#line 2188 "check_hlds.mode_info.c"
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

#line 2203 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0
};

#line 2208 "check_hlds.mode_info.c"
static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_par_conj_mode_check_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0
  }
};

#line 2217 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_par_conj_mode_check_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0
};

#line 2222 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_par_conj_mode_check_0[1] = {
  (MR_Integer) 0
};

#line 2227 "check_hlds.mode_info.c"
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

#line 2244 "check_hlds.mode_info.c"
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

#line 2261 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0 = {
  (MR_String) "left",
  (MR_Integer) 0
};

#line 2267 "check_hlds.mode_info.c"
static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1 = {
  (MR_String) "right",
  (MR_Integer) 1
};

#line 2273 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_side_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1
};

#line 2279 "check_hlds.mode_info.c"
static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_side_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1
};

#line 2285 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_side_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2291 "check_hlds.mode_info.c"
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

#line 2308 "check_hlds.mode_info.c"
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

#line 2323 "check_hlds.mode_info.c"
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

#line 2338 "check_hlds.mode_info.c"
static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_var_lock_reason_0_2[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
};

#line 2343 "check_hlds.mode_info.c"
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

#line 2358 "check_hlds.mode_info.c"
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

#line 2373 "check_hlds.mode_info.c"
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

#line 2388 "check_hlds.mode_info.c"
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

#line 2403 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_0[5] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5
};

#line 2412 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2
};

#line 2417 "check_hlds.mode_info.c"
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

#line 2431 "check_hlds.mode_info.c"
static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_var_lock_reason_0[6] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3
};

#line 2441 "check_hlds.mode_info.c"
static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_var_lock_reason_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 4
};

#line 2451 "check_hlds.mode_info.c"
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

#line 2468 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____call_context_0_0_10001(
#line 2471 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2473 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2475 "check_hlds.mode_info.c"
{
#line 2477 "check_hlds.mode_info.c"
  {
#line 2479 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2482 "check_hlds.mode_info.c"
    {
#line 2484 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____call_context_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2487 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2489 "check_hlds.mode_info.c"
  }
#line 2491 "check_hlds.mode_info.c"
}

#line 2494 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____call_context_0_0_10001(
#line 2497 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2499 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2501 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2503 "check_hlds.mode_info.c"
{
#line 2505 "check_hlds.mode_info.c"
  {
#line 2507 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2510 "check_hlds.mode_info.c"
    {
#line 2512 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____call_context_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2515 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2517 "check_hlds.mode_info.c"
  }
#line 2519 "check_hlds.mode_info.c"
}

#line 2522 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____debug_flags_0_0_10001(
#line 2525 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2527 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2529 "check_hlds.mode_info.c"
{
#line 2531 "check_hlds.mode_info.c"
  {
#line 2533 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2536 "check_hlds.mode_info.c"
    {
#line 2538 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____debug_flags_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2541 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2543 "check_hlds.mode_info.c"
  }
#line 2545 "check_hlds.mode_info.c"
}

#line 2548 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0_10001(
#line 2551 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2553 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2555 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2557 "check_hlds.mode_info.c"
{
#line 2559 "check_hlds.mode_info.c"
  {
#line 2561 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2564 "check_hlds.mode_info.c"
    {
#line 2566 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____debug_flags_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2569 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2571 "check_hlds.mode_info.c"
  }
#line 2573 "check_hlds.mode_info.c"
}

#line 2576 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0_10001(
#line 2579 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2581 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2583 "check_hlds.mode_info.c"
{
#line 2585 "check_hlds.mode_info.c"
  {
#line 2587 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2590 "check_hlds.mode_info.c"
    {
#line 2592 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2595 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2597 "check_hlds.mode_info.c"
  }
#line 2599 "check_hlds.mode_info.c"
}

#line 2602 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0_10001(
#line 2605 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2607 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2609 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2611 "check_hlds.mode_info.c"
{
#line 2613 "check_hlds.mode_info.c"
  {
#line 2615 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2618 "check_hlds.mode_info.c"
    {
#line 2620 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2623 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2625 "check_hlds.mode_info.c"
  }
#line 2627 "check_hlds.mode_info.c"
}

#line 2630 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____how_to_check_goal_0_0_10001(
#line 2633 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2635 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2637 "check_hlds.mode_info.c"
{
#line 2639 "check_hlds.mode_info.c"
  {
#line 2641 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2644 "check_hlds.mode_info.c"
    {
#line 2646 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____how_to_check_goal_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2649 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2651 "check_hlds.mode_info.c"
  }
#line 2653 "check_hlds.mode_info.c"
}

#line 2656 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____how_to_check_goal_0_0_10001(
#line 2659 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2661 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2663 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2665 "check_hlds.mode_info.c"
{
#line 2667 "check_hlds.mode_info.c"
  {
#line 2669 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2672 "check_hlds.mode_info.c"
    {
#line 2674 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____how_to_check_goal_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2677 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2679 "check_hlds.mode_info.c"
  }
#line 2681 "check_hlds.mode_info.c"
}

#line 2684 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0_10001(
#line 2687 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2689 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2691 "check_hlds.mode_info.c"
{
#line 2693 "check_hlds.mode_info.c"
  {
#line 2695 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2698 "check_hlds.mode_info.c"
    {
#line 2700 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____in_dupl_for_switch_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2703 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2705 "check_hlds.mode_info.c"
  }
#line 2707 "check_hlds.mode_info.c"
}

#line 2710 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0_10001(
#line 2713 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2715 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2717 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2719 "check_hlds.mode_info.c"
{
#line 2721 "check_hlds.mode_info.c"
  {
#line 2723 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2726 "check_hlds.mode_info.c"
    {
#line 2728 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____in_dupl_for_switch_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2731 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2733 "check_hlds.mode_info.c"
  }
#line 2735 "check_hlds.mode_info.c"
}

#line 2738 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0_10001(
#line 2741 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2743 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2745 "check_hlds.mode_info.c"
{
#line 2747 "check_hlds.mode_info.c"
  {
#line 2749 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2752 "check_hlds.mode_info.c"
    {
#line 2754 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2757 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2759 "check_hlds.mode_info.c"
  }
#line 2761 "check_hlds.mode_info.c"
}

#line 2764 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0_10001(
#line 2767 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2769 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2771 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2773 "check_hlds.mode_info.c"
{
#line 2775 "check_hlds.mode_info.c"
  {
#line 2777 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2780 "check_hlds.mode_info.c"
    {
#line 2782 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2785 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2787 "check_hlds.mode_info.c"
  }
#line 2789 "check_hlds.mode_info.c"
}

#line 2792 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0_10001(
#line 2795 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2797 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2799 "check_hlds.mode_info.c"
{
#line 2801 "check_hlds.mode_info.c"
  {
#line 2803 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2806 "check_hlds.mode_info.c"
    {
#line 2808 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____in_promise_purity_scope_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2811 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2813 "check_hlds.mode_info.c"
  }
#line 2815 "check_hlds.mode_info.c"
}

#line 2818 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0_10001(
#line 2821 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2823 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2825 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2827 "check_hlds.mode_info.c"
{
#line 2829 "check_hlds.mode_info.c"
  {
#line 2831 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2834 "check_hlds.mode_info.c"
    {
#line 2836 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____in_promise_purity_scope_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2839 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2841 "check_hlds.mode_info.c"
  }
#line 2843 "check_hlds.mode_info.c"
}

#line 2846 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____locked_vars_0_0_10001(
#line 2849 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2851 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2853 "check_hlds.mode_info.c"
{
#line 2855 "check_hlds.mode_info.c"
  {
#line 2857 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2860 "check_hlds.mode_info.c"
    {
#line 2862 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____locked_vars_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2865 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2867 "check_hlds.mode_info.c"
  }
#line 2869 "check_hlds.mode_info.c"
}

#line 2872 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____locked_vars_0_0_10001(
#line 2875 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2877 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2879 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2881 "check_hlds.mode_info.c"
{
#line 2883 "check_hlds.mode_info.c"
  {
#line 2885 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2888 "check_hlds.mode_info.c"
    {
#line 2890 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____locked_vars_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2893 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2895 "check_hlds.mode_info.c"
  }
#line 2897 "check_hlds.mode_info.c"
}

#line 2900 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0_10001(
#line 2903 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2905 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2907 "check_hlds.mode_info.c"
{
#line 2909 "check_hlds.mode_info.c"
  {
#line 2911 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2914 "check_hlds.mode_info.c"
    {
#line 2916 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____make_ground_terms_unique_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2919 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2921 "check_hlds.mode_info.c"
  }
#line 2923 "check_hlds.mode_info.c"
}

#line 2926 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0_10001(
#line 2929 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2931 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2933 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2935 "check_hlds.mode_info.c"
{
#line 2937 "check_hlds.mode_info.c"
  {
#line 2939 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2942 "check_hlds.mode_info.c"
    {
#line 2944 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____make_ground_terms_unique_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 2947 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 2949 "check_hlds.mode_info.c"
  }
#line 2951 "check_hlds.mode_info.c"
}

#line 2954 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_change_called_proc_0_0_10001(
#line 2957 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 2959 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 2961 "check_hlds.mode_info.c"
{
#line 2963 "check_hlds.mode_info.c"
  {
#line 2965 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 2968 "check_hlds.mode_info.c"
    {
#line 2970 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____may_change_called_proc_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 2973 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 2975 "check_hlds.mode_info.c"
  }
#line 2977 "check_hlds.mode_info.c"
}

#line 2980 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_change_called_proc_0_0_10001(
#line 2983 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 2985 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 2987 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 2989 "check_hlds.mode_info.c"
{
#line 2991 "check_hlds.mode_info.c"
  {
#line 2993 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 2996 "check_hlds.mode_info.c"
    {
#line 2998 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____may_change_called_proc_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3001 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3003 "check_hlds.mode_info.c"
  }
#line 3005 "check_hlds.mode_info.c"
}

#line 3008 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_init_solver_vars_0_0_10001(
#line 3011 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3013 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3015 "check_hlds.mode_info.c"
{
#line 3017 "check_hlds.mode_info.c"
  {
#line 3019 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3022 "check_hlds.mode_info.c"
    {
#line 3024 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____may_init_solver_vars_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3027 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3029 "check_hlds.mode_info.c"
  }
#line 3031 "check_hlds.mode_info.c"
}

#line 3034 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____may_init_solver_vars_0_0_10001(
#line 3037 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3039 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3041 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3043 "check_hlds.mode_info.c"
{
#line 3045 "check_hlds.mode_info.c"
  {
#line 3047 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3050 "check_hlds.mode_info.c"
    {
#line 3052 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____may_init_solver_vars_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3055 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3057 "check_hlds.mode_info.c"
  }
#line 3059 "check_hlds.mode_info.c"
}

#line 3062 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____maybe_have_auto_init_var_0_0_10001(
#line 3065 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3067 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3069 "check_hlds.mode_info.c"
{
#line 3071 "check_hlds.mode_info.c"
  {
#line 3073 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3076 "check_hlds.mode_info.c"
    {
#line 3078 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____maybe_have_auto_init_var_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3081 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3083 "check_hlds.mode_info.c"
  }
#line 3085 "check_hlds.mode_info.c"
}

#line 3088 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____maybe_have_auto_init_var_0_0_10001(
#line 3091 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3093 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3095 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3097 "check_hlds.mode_info.c"
{
#line 3099 "check_hlds.mode_info.c"
  {
#line 3101 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3104 "check_hlds.mode_info.c"
    {
#line 3106 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____maybe_have_auto_init_var_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3109 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3111 "check_hlds.mode_info.c"
  }
#line 3113 "check_hlds.mode_info.c"
}

#line 3116 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_context_0_0_10001(
#line 3119 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3121 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3123 "check_hlds.mode_info.c"
{
#line 3125 "check_hlds.mode_info.c"
  {
#line 3127 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3130 "check_hlds.mode_info.c"
    {
#line 3132 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_context_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3135 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3137 "check_hlds.mode_info.c"
  }
#line 3139 "check_hlds.mode_info.c"
}

#line 3142 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_context_0_0_10001(
#line 3145 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3147 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3149 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3151 "check_hlds.mode_info.c"
{
#line 3153 "check_hlds.mode_info.c"
  {
#line 3155 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3158 "check_hlds.mode_info.c"
    {
#line 3160 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____mode_context_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3163 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3165 "check_hlds.mode_info.c"
  }
#line 3167 "check_hlds.mode_info.c"
}

#line 3170 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0_10001(
#line 3173 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3175 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3177 "check_hlds.mode_info.c"
{
#line 3179 "check_hlds.mode_info.c"
  {
#line 3181 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3184 "check_hlds.mode_info.c"
    {
#line 3186 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_info_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3189 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3191 "check_hlds.mode_info.c"
  }
#line 3193 "check_hlds.mode_info.c"
}

#line 3196 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0_10001(
#line 3199 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3201 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3203 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3205 "check_hlds.mode_info.c"
{
#line 3207 "check_hlds.mode_info.c"
  {
#line 3209 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3212 "check_hlds.mode_info.c"
    {
#line 3214 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____mode_info_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3217 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3219 "check_hlds.mode_info.c"
  }
#line 3221 "check_hlds.mode_info.c"
}

#line 3224 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0_10001(
#line 3227 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3229 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3231 "check_hlds.mode_info.c"
{
#line 3233 "check_hlds.mode_info.c"
  {
#line 3235 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3238 "check_hlds.mode_info.c"
    {
#line 3240 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_sub_info_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3243 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3245 "check_hlds.mode_info.c"
  }
#line 3247 "check_hlds.mode_info.c"
}

#line 3250 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0_10001(
#line 3253 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3255 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3257 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3259 "check_hlds.mode_info.c"
{
#line 3261 "check_hlds.mode_info.c"
  {
#line 3263 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3266 "check_hlds.mode_info.c"
    {
#line 3268 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____mode_sub_info_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3271 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3273 "check_hlds.mode_info.c"
  }
#line 3275 "check_hlds.mode_info.c"
}

#line 3278 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0_10001(
#line 3281 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3283 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3285 "check_hlds.mode_info.c"
{
#line 3287 "check_hlds.mode_info.c"
  {
#line 3289 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3292 "check_hlds.mode_info.c"
    {
#line 3294 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____par_conj_mode_check_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3297 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3299 "check_hlds.mode_info.c"
  }
#line 3301 "check_hlds.mode_info.c"
}

#line 3304 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0_10001(
#line 3307 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3309 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3311 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3313 "check_hlds.mode_info.c"
{
#line 3315 "check_hlds.mode_info.c"
  {
#line 3317 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3320 "check_hlds.mode_info.c"
    {
#line 3322 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____par_conj_mode_check_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3325 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3327 "check_hlds.mode_info.c"
  }
#line 3329 "check_hlds.mode_info.c"
}

#line 3332 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0_10001(
#line 3335 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3337 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3339 "check_hlds.mode_info.c"
{
#line 3341 "check_hlds.mode_info.c"
  {
#line 3343 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3346 "check_hlds.mode_info.c"
    {
#line 3348 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3351 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3353 "check_hlds.mode_info.c"
  }
#line 3355 "check_hlds.mode_info.c"
}

#line 3358 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0_10001(
#line 3361 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3363 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3365 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3367 "check_hlds.mode_info.c"
{
#line 3369 "check_hlds.mode_info.c"
  {
#line 3371 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3374 "check_hlds.mode_info.c"
    {
#line 3376 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3379 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3381 "check_hlds.mode_info.c"
  }
#line 3383 "check_hlds.mode_info.c"
}

#line 3386 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____side_0_0_10001(
#line 3389 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3391 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3393 "check_hlds.mode_info.c"
{
#line 3395 "check_hlds.mode_info.c"
  {
#line 3397 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3400 "check_hlds.mode_info.c"
    {
#line 3402 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____side_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3405 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3407 "check_hlds.mode_info.c"
  }
#line 3409 "check_hlds.mode_info.c"
}

#line 3412 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____side_0_0_10001(
#line 3415 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3417 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3419 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3421 "check_hlds.mode_info.c"
{
#line 3423 "check_hlds.mode_info.c"
  {
#line 3425 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3428 "check_hlds.mode_info.c"
    {
#line 3430 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____side_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3433 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3435 "check_hlds.mode_info.c"
  }
#line 3437 "check_hlds.mode_info.c"
}

#line 3440 "check_hlds.mode_info.c"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____var_lock_reason_0_0_10001(
#line 3443 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_1,
#line 3445 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2)
#line 3447 "check_hlds.mode_info.c"
{
#line 3449 "check_hlds.mode_info.c"
  {
#line 3451 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded;

#line 3454 "check_hlds.mode_info.c"
    {
#line 3456 "check_hlds.mode_info.c"
      check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____var_lock_reason_0_0(((MR_Word) check_hlds__mode_info__wrapper_arg_1), ((MR_Word) check_hlds__mode_info__wrapper_arg_2));
    }
#line 3459 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 3461 "check_hlds.mode_info.c"
  }
#line 3463 "check_hlds.mode_info.c"
}

#line 3466 "check_hlds.mode_info.c"
static void MR_CALL 
check_hlds__mode_info____Compare____var_lock_reason_0_0_10001(
#line 3469 "check_hlds.mode_info.c"
  MR_Box * check_hlds__mode_info__wrapper_arg_1,
#line 3471 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_2,
#line 3473 "check_hlds.mode_info.c"
  MR_Box check_hlds__mode_info__wrapper_arg_3)
#line 3475 "check_hlds.mode_info.c"
{
#line 3477 "check_hlds.mode_info.c"
  {
#line 3479 "check_hlds.mode_info.c"
    MR_Word check_hlds__mode_info__conv0_HeadVar__1_1;

#line 3482 "check_hlds.mode_info.c"
    {
#line 3484 "check_hlds.mode_info.c"
      check_hlds__mode_info____Compare____var_lock_reason_0_0(&check_hlds__mode_info__conv0_HeadVar__1_1, ((MR_Word) check_hlds__mode_info__wrapper_arg_2), ((MR_Word) check_hlds__mode_info__wrapper_arg_3));
    }
#line 3487 "check_hlds.mode_info.c"
    *check_hlds__mode_info__wrapper_arg_1 = ((MR_Box) (check_hlds__mode_info__conv0_HeadVar__1_1));
#line 3489 "check_hlds.mode_info.c"
  }
#line 3491 "check_hlds.mode_info.c"
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
#line 3518 "check_hlds.mode_info.c"
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
#line 3584 "check_hlds.mode_info.c"
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
#line 3642 "check_hlds.mode_info.c"
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
#line 3700 "check_hlds.mode_info.c"
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
#line 3758 "check_hlds.mode_info.c"
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
#line 3816 "check_hlds.mode_info.c"
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
#line 3849 "check_hlds.mode_info.c"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "mode_info.m"
                    break;
#line 68 "mode_info.m"
                  case (MR_Integer) 1:
#line 3855 "check_hlds.mode_info.c"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "mode_info.m"
                    break;
#line 68 "mode_info.m"
                  case (MR_Integer) 2:
#line 3861 "check_hlds.mode_info.c"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "mode_info.m"
                    break;
#line 68 "mode_info.m"
                  case (MR_Integer) 3:
#line 3867 "check_hlds.mode_info.c"
                    *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "mode_info.m"
                    break;
#line 68 "mode_info.m"
                  case (MR_Integer) 4:
#line 3873 "check_hlds.mode_info.c"
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
#line 4048 "check_hlds.mode_info.c"
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
#line 4104 "check_hlds.mode_info.c"
  {
#line 4106 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 4109 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 4111 "check_hlds.mode_info.c"
  }
#line 60 "mode_info.m"
}

#line 151 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0(
#line 151 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 151 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 151 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 151 "mode_info.m"
{
#line 151 "mode_info.m"
  {
#line 151 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 151 "mode_info.m"
    MR_Word check_hlds__mode_info__Cast_HeadVar1_4 = check_hlds__mode_info__HeadVar__2_2;
#line 151 "mode_info.m"
    MR_Word check_hlds__mode_info__Cast_HeadVar2_5 = check_hlds__mode_info__HeadVar__3_3;

#line 151 "mode_info.m"
    {
#line 151 "mode_info.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[8], check_hlds__mode_info__HeadVar__1_1, ((MR_Box) (check_hlds__mode_info__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__mode_info__Cast_HeadVar2_5)));
    }
#line 151 "mode_info.m"
  }
#line 151 "mode_info.m"
}

#line 151 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0(
#line 151 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 151 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 151 "mode_info.m"
{
#line 151 "mode_info.m"
  {
#line 151 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 151 "mode_info.m"
    MR_Word check_hlds__mode_info__Cast_HeadVar1_3 = check_hlds__mode_info__HeadVar__1_1;
#line 151 "mode_info.m"
    MR_Word check_hlds__mode_info__Cast_HeadVar2_4 = check_hlds__mode_info__HeadVar__2_2;

#line 151 "mode_info.m"
    {
#line 151 "mode_info.m"
      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[8], ((MR_Box) (check_hlds__mode_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_info__Cast_HeadVar2_4)));
    }
#line 151 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 151 "mode_info.m"
  }
#line 151 "mode_info.m"
}

#line 152 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0(
#line 152 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 152 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 152 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 152 "mode_info.m"
{
#line 152 "mode_info.m"
  {
#line 152 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 152 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_9 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 152 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_10 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 152 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_9 == check_hlds__mode_info__CastY_10);
#line 152 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 4200 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 152 "mode_info.m"
    else
#line 152 "mode_info.m"
      {
#line 152 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 152 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 152 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));
#line 152 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 1)));
#line 152 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8;

#line 152 "mode_info.m"
        {
#line 152 "mode_info.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[3], &check_hlds__mode_info__V_8_8, ((MR_Box) (check_hlds__mode_info__V_4_4)), ((MR_Box) (check_hlds__mode_info__V_6_6)));
        }
#line 4222 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_8_8 == (MR_Integer) 0);
#line 152 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 152 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 152 "mode_info.m"
          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_8_8;
#line 152 "mode_info.m"
        else
#line 152 "mode_info.m"
          {
#line 152 "mode_info.m"
            {
#line 152 "mode_info.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[3], check_hlds__mode_info__HeadVar__1_1, ((MR_Box) (check_hlds__mode_info__V_5_5)), ((MR_Box) (check_hlds__mode_info__V_7_7)));
            }
#line 152 "mode_info.m"
          }
#line 152 "mode_info.m"
      }
#line 152 "mode_info.m"
  }
#line 152 "mode_info.m"
}

#line 152 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0(
#line 152 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 152 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 152 "mode_info.m"
{
#line 152 "mode_info.m"
  {
#line 152 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 152 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_7 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 152 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_8 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 152 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_7 == check_hlds__mode_info__CastY_8);
#line 152 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 152 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 152 "mode_info.m"
    else
#line 152 "mode_info.m"
      {
#line 152 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_10_10;
#line 152 "mode_info.m"
        MR_Word check_hlds__mode_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 152 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 152 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 152 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));

#line 4287 "check_hlds.mode_info.c"
        {
#line 4289 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[3], ((MR_Box) (check_hlds__mode_info__V_3_3)), ((MR_Box) (check_hlds__mode_info__V_5_5)));
        }
#line 152 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 152 "mode_info.m"
          {
#line 4296 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeInfo_10_10 = (MR_Word) &check_hlds__mode_info_scalar_common_1[3];
#line 4298 "check_hlds.mode_info.c"
            {
#line 4300 "check_hlds.mode_info.c"
              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_10_10, ((MR_Box) (check_hlds__mode_info__V_4_4)), ((MR_Box) (check_hlds__mode_info__V_6_6)));
            }
#line 152 "mode_info.m"
          }
#line 152 "mode_info.m"
      }
#line 152 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 152 "mode_info.m"
  }
#line 152 "mode_info.m"
}

#line 371 "mode_info.m"
static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0(
#line 371 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 371 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 371 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 371 "mode_info.m"
{
#line 371 "mode_info.m"
  {
#line 371 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 371 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_78 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 371 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_79 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 371 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_78 == check_hlds__mode_info__CastY_79);
#line 371 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 4338 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 371 "mode_info.m"
    else
#line 371 "mode_info.m"
      {
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 371 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 8)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 11)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 13)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));
#line 371 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 1)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 2)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 3)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 4)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 5)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 6)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 7)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 8)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 9)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 11)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 13)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 14)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 15)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54;

#line 371 "mode_info.m"
        {
#line 371 "mode_info.m"
          hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__mode_info__V_54_54, check_hlds__mode_info__V_4_4, check_hlds__mode_info__V_29_29);
        }
#line 4452 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_54_54 == (MR_Integer) 0);
#line 371 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_54_54;
#line 371 "mode_info.m"
        else
#line 371 "mode_info.m"
          {
#line 371 "mode_info.m"
            MR_Word check_hlds__mode_info__V_55_55;

#line 371 "mode_info.m"
            {
#line 371 "mode_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_55_55, check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_30_30);
            }
#line 4472 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_55_55 == (MR_Integer) 0);
#line 371 "mode_info.m"
            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_55_55;
#line 371 "mode_info.m"
            else
#line 371 "mode_info.m"
              {
#line 371 "mode_info.m"
                MR_Word check_hlds__mode_info__V_56_56;

#line 371 "mode_info.m"
                {
#line 371 "mode_info.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[5], &check_hlds__mode_info__V_56_56, ((MR_Box) (check_hlds__mode_info__V_6_6)), ((MR_Box) (check_hlds__mode_info__V_31_31)));
                }
#line 4492 "check_hlds.mode_info.c"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_56_56 == (MR_Integer) 0);
#line 371 "mode_info.m"
                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_56_56;
#line 371 "mode_info.m"
                else
#line 371 "mode_info.m"
                  {
#line 371 "mode_info.m"
                    MR_Word check_hlds__mode_info__V_57_57;

#line 371 "mode_info.m"
                    {
#line 371 "mode_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_2[1], &check_hlds__mode_info__V_57_57, ((MR_Box) (check_hlds__mode_info__V_7_7)), ((MR_Box) (check_hlds__mode_info__V_32_32)));
                    }
#line 4512 "check_hlds.mode_info.c"
                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_57_57 == (MR_Integer) 0);
#line 371 "mode_info.m"
                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_57_57;
#line 371 "mode_info.m"
                    else
#line 371 "mode_info.m"
                      {
#line 371 "mode_info.m"
                        MR_Word check_hlds__mode_info__V_58_58;
#line 371 "mode_info.m"
                        MR_Integer check_hlds__mode_info__V_105_105 = (MR_Integer) check_hlds__mode_info__V_8_8;
#line 371 "mode_info.m"
                        MR_Integer check_hlds__mode_info__V_106_106 = (MR_Integer) check_hlds__mode_info__V_33_33;

#line 371 "mode_info.m"
                        {
#line 371 "mode_info.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_58_58, check_hlds__mode_info__V_105_105, check_hlds__mode_info__V_106_106);
                        }
#line 4536 "check_hlds.mode_info.c"
                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_58_58 == (MR_Integer) 0);
#line 371 "mode_info.m"
                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_58_58;
#line 371 "mode_info.m"
                        else
#line 371 "mode_info.m"
                          {
#line 371 "mode_info.m"
                            MR_Word check_hlds__mode_info__V_59_59;

#line 371 "mode_info.m"
                            {
#line 371 "mode_info.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[6], &check_hlds__mode_info__V_59_59, ((MR_Box) (check_hlds__mode_info__V_9_9)), ((MR_Box) (check_hlds__mode_info__V_34_34)));
                            }
#line 4556 "check_hlds.mode_info.c"
                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_59_59 == (MR_Integer) 0);
#line 371 "mode_info.m"
                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_59_59;
#line 371 "mode_info.m"
                            else
#line 371 "mode_info.m"
                              {
#line 371 "mode_info.m"
                                MR_Word check_hlds__mode_info__V_60_60;

#line 371 "mode_info.m"
                                {
#line 371 "mode_info.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[4], &check_hlds__mode_info__V_60_60, ((MR_Box) (check_hlds__mode_info__V_10_10)), ((MR_Box) (check_hlds__mode_info__V_35_35)));
                                }
#line 4576 "check_hlds.mode_info.c"
                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_60_60 == (MR_Integer) 0);
#line 371 "mode_info.m"
                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_60_60;
#line 371 "mode_info.m"
                                else
#line 371 "mode_info.m"
                                  {
#line 371 "mode_info.m"
                                    MR_Word check_hlds__mode_info__V_61_61;

#line 371 "mode_info.m"
                                    {
#line 371 "mode_info.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[2], &check_hlds__mode_info__V_61_61, ((MR_Box) (check_hlds__mode_info__V_11_11)), ((MR_Box) (check_hlds__mode_info__V_36_36)));
                                    }
#line 4596 "check_hlds.mode_info.c"
                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_61_61 == (MR_Integer) 0);
#line 371 "mode_info.m"
                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                                    if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_61_61;
#line 371 "mode_info.m"
                                    else
#line 371 "mode_info.m"
                                      {
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_62_62;

#line 371 "mode_info.m"
                                        {
#line 371 "mode_info.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[7], &check_hlds__mode_info__V_62_62, ((MR_Box) (check_hlds__mode_info__V_12_12)), ((MR_Box) (check_hlds__mode_info__V_37_37)));
                                        }
#line 4616 "check_hlds.mode_info.c"
                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_62_62 == (MR_Integer) 0);
#line 371 "mode_info.m"
                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                                        if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_62_62;
#line 371 "mode_info.m"
                                        else
#line 371 "mode_info.m"
                                          {
#line 371 "mode_info.m"
                                            MR_Word check_hlds__mode_info__V_63_63;

#line 371 "mode_info.m"
                                            {
#line 371 "mode_info.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[8], &check_hlds__mode_info__V_63_63, ((MR_Box) (check_hlds__mode_info__V_13_13)), ((MR_Box) (check_hlds__mode_info__V_38_38)));
                                            }
#line 4636 "check_hlds.mode_info.c"
                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_63_63 == (MR_Integer) 0);
#line 371 "mode_info.m"
                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                                            if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_63_63;
#line 371 "mode_info.m"
                                            else
#line 371 "mode_info.m"
                                              {
#line 371 "mode_info.m"
                                                MR_Word check_hlds__mode_info__V_64_64;
#line 371 "mode_info.m"
                                                MR_Integer check_hlds__mode_info__V_107_107 = (MR_Integer) check_hlds__mode_info__V_14_14;
#line 371 "mode_info.m"
                                                MR_Integer check_hlds__mode_info__V_108_108 = (MR_Integer) check_hlds__mode_info__V_39_39;

#line 371 "mode_info.m"
                                                {
#line 371 "mode_info.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_64_64, check_hlds__mode_info__V_107_107, check_hlds__mode_info__V_108_108);
                                                }
#line 4660 "check_hlds.mode_info.c"
                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_64_64 == (MR_Integer) 0);
#line 371 "mode_info.m"
                                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                                                if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_64_64;
#line 371 "mode_info.m"
                                                else
#line 371 "mode_info.m"
                                                  {
#line 371 "mode_info.m"
                                                    MR_Word check_hlds__mode_info__V_65_65;
#line 371 "mode_info.m"
                                                    MR_Integer check_hlds__mode_info__V_109_109 = (MR_Integer) check_hlds__mode_info__V_15_15;
#line 371 "mode_info.m"
                                                    MR_Integer check_hlds__mode_info__V_110_110 = (MR_Integer) check_hlds__mode_info__V_40_40;

#line 371 "mode_info.m"
                                                    {
#line 371 "mode_info.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_65_65, check_hlds__mode_info__V_109_109, check_hlds__mode_info__V_110_110);
                                                    }
#line 4684 "check_hlds.mode_info.c"
                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_65_65 == (MR_Integer) 0);
#line 371 "mode_info.m"
                                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                                                    if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_65_65;
#line 371 "mode_info.m"
                                                    else
#line 371 "mode_info.m"
                                                      {
#line 371 "mode_info.m"
                                                        MR_Word check_hlds__mode_info__V_66_66;
#line 371 "mode_info.m"
                                                        MR_Integer check_hlds__mode_info__V_111_111 = (MR_Integer) check_hlds__mode_info__V_16_16;
#line 371 "mode_info.m"
                                                        MR_Integer check_hlds__mode_info__V_112_112 = (MR_Integer) check_hlds__mode_info__V_41_41;

#line 371 "mode_info.m"
                                                        {
#line 371 "mode_info.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_66_66, check_hlds__mode_info__V_111_111, check_hlds__mode_info__V_112_112);
                                                        }
#line 4708 "check_hlds.mode_info.c"
                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_66_66 == (MR_Integer) 0);
#line 371 "mode_info.m"
                                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                                                        if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_66_66;
#line 371 "mode_info.m"
                                                        else
#line 371 "mode_info.m"
                                                          {
#line 371 "mode_info.m"
                                                            MR_Word check_hlds__mode_info__V_67_67;

#line 371 "mode_info.m"
                                                            {
#line 371 "mode_info.m"
                                                              hlds__instmap____Compare____instmap_0_0(&check_hlds__mode_info__V_67_67, check_hlds__mode_info__V_17_17, check_hlds__mode_info__V_42_42);
                                                            }
#line 4728 "check_hlds.mode_info.c"
                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_67_67 == (MR_Integer) 0);
#line 371 "mode_info.m"
                                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                                                            if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_67_67;
#line 371 "mode_info.m"
                                                            else
#line 371 "mode_info.m"
                                                              {
#line 371 "mode_info.m"
                                                                MR_Word check_hlds__mode_info__V_68_68;
#line 371 "mode_info.m"
                                                                MR_Integer check_hlds__mode_info__V_113_113 = (MR_Integer) check_hlds__mode_info__V_18_18;
#line 371 "mode_info.m"
                                                                MR_Integer check_hlds__mode_info__V_114_114 = (MR_Integer) check_hlds__mode_info__V_43_43;

#line 371 "mode_info.m"
                                                                {
#line 371 "mode_info.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_68_68, check_hlds__mode_info__V_113_113, check_hlds__mode_info__V_114_114);
                                                                }
#line 4752 "check_hlds.mode_info.c"
                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_68_68 == (MR_Integer) 0);
#line 371 "mode_info.m"
                                                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                                                                if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_68_68;
#line 371 "mode_info.m"
                                                                else
#line 371 "mode_info.m"
                                                                  {
#line 371 "mode_info.m"
                                                                    MR_Word check_hlds__mode_info__V_69_69;
#line 371 "mode_info.m"
                                                                    MR_Integer check_hlds__mode_info__V_115_115 = (MR_Integer) check_hlds__mode_info__V_19_19;
#line 371 "mode_info.m"
                                                                    MR_Integer check_hlds__mode_info__V_116_116 = (MR_Integer) check_hlds__mode_info__V_44_44;

#line 371 "mode_info.m"
                                                                    {
#line 371 "mode_info.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_69_69, check_hlds__mode_info__V_115_115, check_hlds__mode_info__V_116_116);
                                                                    }
#line 4776 "check_hlds.mode_info.c"
                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_69_69 == (MR_Integer) 0);
#line 371 "mode_info.m"
                                                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                                                                    if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_69_69;
#line 371 "mode_info.m"
                                                                    else
#line 371 "mode_info.m"
                                                                      {
#line 371 "mode_info.m"
                                                                        MR_Word check_hlds__mode_info__V_70_70;

#line 371 "mode_info.m"
                                                                        {
#line 371 "mode_info.m"
                                                                          hlds__instmap____Compare____instmap_0_0(&check_hlds__mode_info__V_70_70, check_hlds__mode_info__V_20_20, check_hlds__mode_info__V_45_45);
                                                                        }
#line 4796 "check_hlds.mode_info.c"
                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_70_70 == (MR_Integer) 0);
#line 371 "mode_info.m"
                                                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                                                                        if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_70_70;
#line 371 "mode_info.m"
                                                                        else
#line 371 "mode_info.m"
                                                                          {
#line 371 "mode_info.m"
                                                                            MR_Word check_hlds__mode_info__V_71_71;

#line 371 "mode_info.m"
                                                                            {
#line 371 "mode_info.m"
                                                                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_2[2], &check_hlds__mode_info__V_71_71, ((MR_Box) (check_hlds__mode_info__V_21_21)), ((MR_Box) (check_hlds__mode_info__V_46_46)));
                                                                            }
#line 4816 "check_hlds.mode_info.c"
                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_71_71 == (MR_Integer) 0);
#line 371 "mode_info.m"
                                                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                                                                            if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_71_71;
#line 371 "mode_info.m"
                                                                            else
#line 371 "mode_info.m"
                                                                              {
#line 371 "mode_info.m"
                                                                                MR_Word check_hlds__mode_info__V_72_72;

#line 371 "mode_info.m"
                                                                                {
#line 371 "mode_info.m"
                                                                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[10], &check_hlds__mode_info__V_72_72, ((MR_Box) (check_hlds__mode_info__V_22_22)), ((MR_Box) (check_hlds__mode_info__V_47_47)));
                                                                                }
#line 4836 "check_hlds.mode_info.c"
                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_72_72 == (MR_Integer) 0);
#line 371 "mode_info.m"
                                                                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                                                                                if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_72_72;
#line 371 "mode_info.m"
                                                                                else
#line 371 "mode_info.m"
                                                                                  {
#line 371 "mode_info.m"
                                                                                    MR_Word check_hlds__mode_info__V_73_73;
#line 371 "mode_info.m"
                                                                                    MR_Integer check_hlds__mode_info__V_117_117 = (MR_Integer) check_hlds__mode_info__V_23_23;
#line 371 "mode_info.m"
                                                                                    MR_Integer check_hlds__mode_info__V_118_118 = (MR_Integer) check_hlds__mode_info__V_48_48;

#line 371 "mode_info.m"
                                                                                    {
#line 371 "mode_info.m"
                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_73_73, check_hlds__mode_info__V_117_117, check_hlds__mode_info__V_118_118);
                                                                                    }
#line 4860 "check_hlds.mode_info.c"
                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_73_73 == (MR_Integer) 0);
#line 371 "mode_info.m"
                                                                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                                                                                    if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_73_73;
#line 371 "mode_info.m"
                                                                                    else
#line 371 "mode_info.m"
                                                                                      {
#line 371 "mode_info.m"
                                                                                        MR_Word check_hlds__mode_info__V_74_74;
#line 371 "mode_info.m"
                                                                                        MR_Integer check_hlds__mode_info__V_119_119 = (MR_Integer) check_hlds__mode_info__V_24_24;
#line 371 "mode_info.m"
                                                                                        MR_Integer check_hlds__mode_info__V_120_120 = (MR_Integer) check_hlds__mode_info__V_49_49;

#line 371 "mode_info.m"
                                                                                        {
#line 371 "mode_info.m"
                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_74_74, check_hlds__mode_info__V_119_119, check_hlds__mode_info__V_120_120);
                                                                                        }
#line 4884 "check_hlds.mode_info.c"
                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_74_74 == (MR_Integer) 0);
#line 371 "mode_info.m"
                                                                                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                                                                                        if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_74_74;
#line 371 "mode_info.m"
                                                                                        else
#line 371 "mode_info.m"
                                                                                          {
#line 371 "mode_info.m"
                                                                                            MR_Word check_hlds__mode_info__V_75_75;
#line 371 "mode_info.m"
                                                                                            MR_Integer check_hlds__mode_info__V_121_121 = (MR_Integer) check_hlds__mode_info__V_25_25;
#line 371 "mode_info.m"
                                                                                            MR_Integer check_hlds__mode_info__V_122_122 = (MR_Integer) check_hlds__mode_info__V_50_50;

#line 371 "mode_info.m"
                                                                                            {
#line 371 "mode_info.m"
                                                                                              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_75_75, check_hlds__mode_info__V_121_121, check_hlds__mode_info__V_122_122);
                                                                                            }
#line 4908 "check_hlds.mode_info.c"
                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_75_75 == (MR_Integer) 0);
#line 371 "mode_info.m"
                                                                                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                                                                                            if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_75_75;
#line 371 "mode_info.m"
                                                                                            else
#line 371 "mode_info.m"
                                                                                              {
#line 371 "mode_info.m"
                                                                                                MR_Word check_hlds__mode_info__V_76_76;
#line 371 "mode_info.m"
                                                                                                MR_Integer check_hlds__mode_info__V_123_123 = (MR_Integer) check_hlds__mode_info__V_26_26;
#line 371 "mode_info.m"
                                                                                                MR_Integer check_hlds__mode_info__V_124_124 = (MR_Integer) check_hlds__mode_info__V_51_51;

#line 371 "mode_info.m"
                                                                                                {
#line 371 "mode_info.m"
                                                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_76_76, check_hlds__mode_info__V_123_123, check_hlds__mode_info__V_124_124);
                                                                                                }
#line 4932 "check_hlds.mode_info.c"
                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_76_76 == (MR_Integer) 0);
#line 371 "mode_info.m"
                                                                                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                                                                                                if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_76_76;
#line 371 "mode_info.m"
                                                                                                else
#line 371 "mode_info.m"
                                                                                                  {
#line 371 "mode_info.m"
                                                                                                    MR_Word check_hlds__mode_info__V_77_77;
#line 371 "mode_info.m"
                                                                                                    MR_Integer check_hlds__mode_info__V_125_125 = (MR_Integer) check_hlds__mode_info__V_27_27;
#line 371 "mode_info.m"
                                                                                                    MR_Integer check_hlds__mode_info__V_126_126 = (MR_Integer) check_hlds__mode_info__V_52_52;

#line 371 "mode_info.m"
                                                                                                    {
#line 371 "mode_info.m"
                                                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_77_77, check_hlds__mode_info__V_125_125, check_hlds__mode_info__V_126_126);
                                                                                                    }
#line 4956 "check_hlds.mode_info.c"
                                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_77_77 == (MR_Integer) 0);
#line 371 "mode_info.m"
                                                                                                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 371 "mode_info.m"
                                                                                                    if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_77_77;
#line 371 "mode_info.m"
                                                                                                    else
#line 371 "mode_info.m"
                                                                                                      {
#line 371 "mode_info.m"
                                                                                                        MR_Integer check_hlds__mode_info__V_127_127 = (MR_Integer) check_hlds__mode_info__V_28_28;
#line 371 "mode_info.m"
                                                                                                        MR_Integer check_hlds__mode_info__V_128_128 = (MR_Integer) check_hlds__mode_info__V_53_53;

#line 371 "mode_info.m"
                                                                                                        {
#line 371 "mode_info.m"
                                                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_127_127, check_hlds__mode_info__V_128_128);
                                                                                                        }
#line 371 "mode_info.m"
                                                                                                      }
#line 371 "mode_info.m"
                                                                                                  }
#line 371 "mode_info.m"
                                                                                              }
#line 371 "mode_info.m"
                                                                                          }
#line 371 "mode_info.m"
                                                                                      }
#line 371 "mode_info.m"
                                                                                  }
#line 371 "mode_info.m"
                                                                              }
#line 371 "mode_info.m"
                                                                          }
#line 371 "mode_info.m"
                                                                      }
#line 371 "mode_info.m"
                                                                  }
#line 371 "mode_info.m"
                                                              }
#line 371 "mode_info.m"
                                                          }
#line 371 "mode_info.m"
                                                      }
#line 371 "mode_info.m"
                                                  }
#line 371 "mode_info.m"
                                              }
#line 371 "mode_info.m"
                                          }
#line 371 "mode_info.m"
                                      }
#line 371 "mode_info.m"
                                  }
#line 371 "mode_info.m"
                              }
#line 371 "mode_info.m"
                          }
#line 371 "mode_info.m"
                      }
#line 371 "mode_info.m"
                  }
#line 371 "mode_info.m"
              }
#line 371 "mode_info.m"
          }
#line 371 "mode_info.m"
      }
#line 371 "mode_info.m"
  }
#line 371 "mode_info.m"
}

#line 371 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0(
#line 371 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 371 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 371 "mode_info.m"
{
#line 371 "mode_info.m"
  {
#line 371 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 371 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_53 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 371 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_54 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 371 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_53 == check_hlds__mode_info__CastY_54);
#line 371 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 371 "mode_info.m"
    else
#line 371 "mode_info.m"
      {
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_56_56;
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_57_57;
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_58_58;
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_59_59;
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_60_60;
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_61_61;
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_62_62;
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_65_65;
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_66_66;
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 371 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 2)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 3)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 4)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 5)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 6)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 7)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 8)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 9)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 11)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 13)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 14)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 15)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 371 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 8)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 9)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 11)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 13)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 14)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 15)));
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 371 "mode_info.m"
        MR_Word check_hlds__mode_info__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 5180 "check_hlds.mode_info.c"
        {
#line 5182 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_28_28);
        }
#line 371 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
          {
#line 5189 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_4_4 == check_hlds__mode_info__V_29_29);
#line 371 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
              {
#line 5195 "check_hlds.mode_info.c"
                check_hlds__mode_info__TypeInfo_56_56 = (MR_Word) &check_hlds__mode_info_scalar_common_1[5];
#line 5197 "check_hlds.mode_info.c"
                {
#line 5199 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_56_56, ((MR_Box) (check_hlds__mode_info__V_5_5)), ((MR_Box) (check_hlds__mode_info__V_30_30)));
                }
#line 371 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                  {
#line 5206 "check_hlds.mode_info.c"
                    check_hlds__mode_info__TypeInfo_57_57 = (MR_Word) &check_hlds__mode_info_scalar_common_2[1];
#line 5208 "check_hlds.mode_info.c"
                    {
#line 5210 "check_hlds.mode_info.c"
                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_57_57, ((MR_Box) (check_hlds__mode_info__V_6_6)), ((MR_Box) (check_hlds__mode_info__V_31_31)));
                    }
#line 371 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                      {
#line 5217 "check_hlds.mode_info.c"
                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_7_7 == check_hlds__mode_info__V_32_32);
#line 371 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                          {
#line 5223 "check_hlds.mode_info.c"
                            check_hlds__mode_info__TypeInfo_58_58 = (MR_Word) &check_hlds__mode_info_scalar_common_1[6];
#line 5225 "check_hlds.mode_info.c"
                            {
#line 5227 "check_hlds.mode_info.c"
                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_58_58, ((MR_Box) (check_hlds__mode_info__V_8_8)), ((MR_Box) (check_hlds__mode_info__V_33_33)));
                            }
#line 371 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                              {
#line 5234 "check_hlds.mode_info.c"
                                check_hlds__mode_info__TypeInfo_59_59 = (MR_Word) &check_hlds__mode_info_scalar_common_1[4];
#line 5236 "check_hlds.mode_info.c"
                                {
#line 5238 "check_hlds.mode_info.c"
                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_59_59, ((MR_Box) (check_hlds__mode_info__V_9_9)), ((MR_Box) (check_hlds__mode_info__V_34_34)));
                                }
#line 371 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                  {
#line 5245 "check_hlds.mode_info.c"
                                    check_hlds__mode_info__TypeInfo_60_60 = (MR_Word) &check_hlds__mode_info_scalar_common_1[2];
#line 5247 "check_hlds.mode_info.c"
                                    {
#line 5249 "check_hlds.mode_info.c"
                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_60_60, ((MR_Box) (check_hlds__mode_info__V_10_10)), ((MR_Box) (check_hlds__mode_info__V_35_35)));
                                    }
#line 371 "mode_info.m"
                                    if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                      {
#line 5256 "check_hlds.mode_info.c"
                                        check_hlds__mode_info__TypeInfo_61_61 = (MR_Word) &check_hlds__mode_info_scalar_common_1[7];
#line 5258 "check_hlds.mode_info.c"
                                        {
#line 5260 "check_hlds.mode_info.c"
                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_61_61, ((MR_Box) (check_hlds__mode_info__V_11_11)), ((MR_Box) (check_hlds__mode_info__V_36_36)));
                                        }
#line 371 "mode_info.m"
                                        if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                          {
#line 5267 "check_hlds.mode_info.c"
                                            check_hlds__mode_info__TypeInfo_62_62 = (MR_Word) &check_hlds__mode_info_scalar_common_1[8];
#line 5269 "check_hlds.mode_info.c"
                                            {
#line 5271 "check_hlds.mode_info.c"
                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_62_62, ((MR_Box) (check_hlds__mode_info__V_12_12)), ((MR_Box) (check_hlds__mode_info__V_37_37)));
                                            }
#line 371 "mode_info.m"
                                            if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                              {
#line 5278 "check_hlds.mode_info.c"
                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_13_13 == check_hlds__mode_info__V_38_38);
#line 371 "mode_info.m"
                                                if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                  {
#line 5284 "check_hlds.mode_info.c"
                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_14_14 == check_hlds__mode_info__V_39_39);
#line 371 "mode_info.m"
                                                    if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                      {
#line 5290 "check_hlds.mode_info.c"
                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_15_15 == check_hlds__mode_info__V_40_40);
#line 371 "mode_info.m"
                                                        if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                          {
#line 5296 "check_hlds.mode_info.c"
                                                            {
#line 5298 "check_hlds.mode_info.c"
                                                              check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_16_16, check_hlds__mode_info__V_41_41);
                                                            }
#line 371 "mode_info.m"
                                                            if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                              {
#line 5305 "check_hlds.mode_info.c"
                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_17_17 == check_hlds__mode_info__V_42_42);
#line 371 "mode_info.m"
                                                                if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                  {
#line 5311 "check_hlds.mode_info.c"
                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_18_18 == check_hlds__mode_info__V_43_43);
#line 371 "mode_info.m"
                                                                    if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                      {
#line 5317 "check_hlds.mode_info.c"
                                                                        {
#line 5319 "check_hlds.mode_info.c"
                                                                          check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_19_19, check_hlds__mode_info__V_44_44);
                                                                        }
#line 371 "mode_info.m"
                                                                        if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                          {
#line 5326 "check_hlds.mode_info.c"
                                                                            check_hlds__mode_info__TypeInfo_65_65 = (MR_Word) &check_hlds__mode_info_scalar_common_2[2];
#line 5328 "check_hlds.mode_info.c"
                                                                            {
#line 5330 "check_hlds.mode_info.c"
                                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_65_65, ((MR_Box) (check_hlds__mode_info__V_20_20)), ((MR_Box) (check_hlds__mode_info__V_45_45)));
                                                                            }
#line 371 "mode_info.m"
                                                                            if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                              {
#line 5337 "check_hlds.mode_info.c"
                                                                                check_hlds__mode_info__TypeInfo_66_66 = (MR_Word) &check_hlds__mode_info_scalar_common_1[10];
#line 5339 "check_hlds.mode_info.c"
                                                                                {
#line 5341 "check_hlds.mode_info.c"
                                                                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_66_66, ((MR_Box) (check_hlds__mode_info__V_21_21)), ((MR_Box) (check_hlds__mode_info__V_46_46)));
                                                                                }
#line 371 "mode_info.m"
                                                                                if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                  {
#line 5348 "check_hlds.mode_info.c"
                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_22_22 == check_hlds__mode_info__V_47_47);
#line 371 "mode_info.m"
                                                                                    if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                      {
#line 5354 "check_hlds.mode_info.c"
                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_23_23 == check_hlds__mode_info__V_48_48);
#line 371 "mode_info.m"
                                                                                        if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                          {
#line 5360 "check_hlds.mode_info.c"
                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_24_24 == check_hlds__mode_info__V_49_49);
#line 371 "mode_info.m"
                                                                                            if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                              {
#line 5366 "check_hlds.mode_info.c"
                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_25_25 == check_hlds__mode_info__V_50_50);
#line 371 "mode_info.m"
                                                                                                if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                                  {
#line 5372 "check_hlds.mode_info.c"
                                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_26_26 == check_hlds__mode_info__V_51_51);
#line 371 "mode_info.m"
                                                                                                    if (check_hlds__mode_info__succeeded)
#line 5376 "check_hlds.mode_info.c"
                                                                                                      check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_27_27 == check_hlds__mode_info__V_52_52);
#line 371 "mode_info.m"
                                                                                                  }
#line 371 "mode_info.m"
                                                                                              }
#line 371 "mode_info.m"
                                                                                          }
#line 371 "mode_info.m"
                                                                                      }
#line 371 "mode_info.m"
                                                                                  }
#line 371 "mode_info.m"
                                                                              }
#line 371 "mode_info.m"
                                                                          }
#line 371 "mode_info.m"
                                                                      }
#line 371 "mode_info.m"
                                                                  }
#line 371 "mode_info.m"
                                                              }
#line 371 "mode_info.m"
                                                          }
#line 371 "mode_info.m"
                                                      }
#line 371 "mode_info.m"
                                                  }
#line 371 "mode_info.m"
                                              }
#line 371 "mode_info.m"
                                          }
#line 371 "mode_info.m"
                                      }
#line 371 "mode_info.m"
                                  }
#line 371 "mode_info.m"
                              }
#line 371 "mode_info.m"
                          }
#line 371 "mode_info.m"
                      }
#line 371 "mode_info.m"
                  }
#line 371 "mode_info.m"
              }
#line 371 "mode_info.m"
          }
#line 371 "mode_info.m"
      }
#line 371 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 371 "mode_info.m"
  }
#line 371 "mode_info.m"
}

#line 488 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0(
#line 488 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 488 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 488 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 488 "mode_info.m"
{
#line 488 "mode_info.m"
  {
#line 488 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 488 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_27 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 488 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_28 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 488 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_27 == check_hlds__mode_info__CastY_28);
#line 488 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 5457 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 488 "mode_info.m"
    else
#line 488 "mode_info.m"
      {
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 1)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 2)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 3)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 4)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 5)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 6)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 7)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20;

#line 488 "mode_info.m"
        {
#line 488 "mode_info.m"
          hlds__hlds_module____Compare____module_info_0_0(&check_hlds__mode_info__V_20_20, check_hlds__mode_info__V_4_4, check_hlds__mode_info__V_12_12);
        }
#line 5503 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_20_20 == (MR_Integer) 0);
#line 488 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 488 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 488 "mode_info.m"
          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_20_20;
#line 488 "mode_info.m"
        else
#line 488 "mode_info.m"
          {
#line 488 "mode_info.m"
            MR_Word check_hlds__mode_info__V_21_21;

#line 488 "mode_info.m"
            {
#line 488 "mode_info.m"
              hlds__instmap____Compare____instmap_0_0(&check_hlds__mode_info__V_21_21, check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_13_13);
            }
#line 5523 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_21_21 == (MR_Integer) 0);
#line 488 "mode_info.m"
            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 488 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 488 "mode_info.m"
              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_21_21;
#line 488 "mode_info.m"
            else
#line 488 "mode_info.m"
              {
#line 488 "mode_info.m"
                MR_Word check_hlds__mode_info__V_22_22;

#line 488 "mode_info.m"
                {
#line 488 "mode_info.m"
                  check_hlds__delay_info____Compare____delay_info_0_0(&check_hlds__mode_info__V_22_22, check_hlds__mode_info__V_6_6, check_hlds__mode_info__V_14_14);
                }
#line 5543 "check_hlds.mode_info.c"
                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_22_22 == (MR_Integer) 0);
#line 488 "mode_info.m"
                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 488 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 488 "mode_info.m"
                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_22_22;
#line 488 "mode_info.m"
                else
#line 488 "mode_info.m"
                  {
#line 488 "mode_info.m"
                    MR_Word check_hlds__mode_info__V_23_23;

#line 488 "mode_info.m"
                    {
#line 488 "mode_info.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[1], &check_hlds__mode_info__V_23_23, ((MR_Box) (check_hlds__mode_info__V_7_7)), ((MR_Box) (check_hlds__mode_info__V_15_15)));
                    }
#line 5563 "check_hlds.mode_info.c"
                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_23_23 == (MR_Integer) 0);
#line 488 "mode_info.m"
                    check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 488 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 488 "mode_info.m"
                      *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_23_23;
#line 488 "mode_info.m"
                    else
#line 488 "mode_info.m"
                      {
#line 488 "mode_info.m"
                        MR_Word check_hlds__mode_info__V_24_24;

#line 488 "mode_info.m"
                        {
#line 488 "mode_info.m"
                          check_hlds__mode_info____Compare____mode_context_0_0(&check_hlds__mode_info__V_24_24, check_hlds__mode_info__V_8_8, check_hlds__mode_info__V_16_16);
                        }
#line 5583 "check_hlds.mode_info.c"
                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_24_24 == (MR_Integer) 0);
#line 488 "mode_info.m"
                        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 488 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 488 "mode_info.m"
                          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_24_24;
#line 488 "mode_info.m"
                        else
#line 488 "mode_info.m"
                          {
#line 488 "mode_info.m"
                            MR_Word check_hlds__mode_info__V_25_25;

#line 488 "mode_info.m"
                            {
#line 488 "mode_info.m"
                              mercury__term____Compare____context_0_0(&check_hlds__mode_info__V_25_25, check_hlds__mode_info__V_9_9, check_hlds__mode_info__V_17_17);
                            }
#line 5603 "check_hlds.mode_info.c"
                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_25_25 == (MR_Integer) 0);
#line 488 "mode_info.m"
                            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 488 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 488 "mode_info.m"
                              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_25_25;
#line 488 "mode_info.m"
                            else
#line 488 "mode_info.m"
                              {
#line 488 "mode_info.m"
                                MR_Word check_hlds__mode_info__V_26_26;

#line 488 "mode_info.m"
                                {
#line 488 "mode_info.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[2], &check_hlds__mode_info__V_26_26, ((MR_Box) (check_hlds__mode_info__V_10_10)), ((MR_Box) (check_hlds__mode_info__V_18_18)));
                                }
#line 5623 "check_hlds.mode_info.c"
                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_26_26 == (MR_Integer) 0);
#line 488 "mode_info.m"
                                check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 488 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 488 "mode_info.m"
                                  *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_26_26;
#line 488 "mode_info.m"
                                else
#line 488 "mode_info.m"
                                  {
#line 488 "mode_info.m"
                                    check_hlds__mode_info____Compare____mode_sub_info_0_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_11_11, check_hlds__mode_info__V_19_19);
                                  }
#line 488 "mode_info.m"
                              }
#line 488 "mode_info.m"
                          }
#line 488 "mode_info.m"
                      }
#line 488 "mode_info.m"
                  }
#line 488 "mode_info.m"
              }
#line 488 "mode_info.m"
          }
#line 488 "mode_info.m"
      }
#line 488 "mode_info.m"
  }
#line 488 "mode_info.m"
}

#line 488 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0(
#line 488 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 488 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 488 "mode_info.m"
{
#line 488 "mode_info.m"
  {
#line 488 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 488 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_19 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 488 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_20 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 488 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_19 == check_hlds__mode_info__CastY_20);
#line 488 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 488 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 488 "mode_info.m"
    else
#line 488 "mode_info.m"
      {
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_24_24;
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeInfo_26_26;
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 2)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 3)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 4)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 5)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 6)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 7)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 2)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 3)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 4)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 5)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 6)));
#line 488 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 7)));
#line 371 "mode_info.m"
        MR_Integer check_hlds__mode_info__CastX_77;
#line 371 "mode_info.m"
        MR_Integer check_hlds__mode_info__CastY_78;

#line 5726 "check_hlds.mode_info.c"
        {
#line 5728 "check_hlds.mode_info.c"
          check_hlds__mode_info__succeeded = hlds__hlds_module____Unify____module_info_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_11_11);
        }
#line 488 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 488 "mode_info.m"
          {
#line 5735 "check_hlds.mode_info.c"
            {
#line 5737 "check_hlds.mode_info.c"
              check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_4_4, check_hlds__mode_info__V_12_12);
            }
#line 488 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 488 "mode_info.m"
              {
#line 5744 "check_hlds.mode_info.c"
                {
#line 5746 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = check_hlds__delay_info____Unify____delay_info_0_0(check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_13_13);
                }
#line 488 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 488 "mode_info.m"
                  {
#line 5753 "check_hlds.mode_info.c"
                    check_hlds__mode_info__TypeInfo_24_24 = (MR_Word) &check_hlds__mode_info_scalar_common_1[1];
#line 5755 "check_hlds.mode_info.c"
                    {
#line 5757 "check_hlds.mode_info.c"
                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_24_24, ((MR_Box) (check_hlds__mode_info__V_6_6)), ((MR_Box) (check_hlds__mode_info__V_14_14)));
                    }
#line 488 "mode_info.m"
                    if (check_hlds__mode_info__succeeded)
#line 488 "mode_info.m"
                      {
#line 5764 "check_hlds.mode_info.c"
                        {
#line 5766 "check_hlds.mode_info.c"
                          check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____mode_context_0_0(check_hlds__mode_info__V_7_7, check_hlds__mode_info__V_15_15);
                        }
#line 488 "mode_info.m"
                        if (check_hlds__mode_info__succeeded)
#line 488 "mode_info.m"
                          {
#line 5773 "check_hlds.mode_info.c"
                            {
#line 5775 "check_hlds.mode_info.c"
                              check_hlds__mode_info__succeeded = mercury__term____Unify____context_0_0(check_hlds__mode_info__V_8_8, check_hlds__mode_info__V_16_16);
                            }
#line 488 "mode_info.m"
                            if (check_hlds__mode_info__succeeded)
#line 488 "mode_info.m"
                              {
#line 5782 "check_hlds.mode_info.c"
                                check_hlds__mode_info__TypeInfo_26_26 = (MR_Word) &check_hlds__mode_info_scalar_common_1[2];
#line 5784 "check_hlds.mode_info.c"
                                {
#line 5786 "check_hlds.mode_info.c"
                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_26_26, ((MR_Box) (check_hlds__mode_info__V_9_9)), ((MR_Box) (check_hlds__mode_info__V_17_17)));
                                }
#line 488 "mode_info.m"
                                if (check_hlds__mode_info__succeeded)
#line 488 "mode_info.m"
                                  {
#line 371 "mode_info.m"
                                    check_hlds__mode_info__CastX_77 = (MR_Integer) check_hlds__mode_info__V_10_10;
#line 371 "mode_info.m"
                                    check_hlds__mode_info__CastY_78 = (MR_Integer) check_hlds__mode_info__V_18_18;
#line 371 "mode_info.m"
                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_77 == check_hlds__mode_info__CastY_78);
#line 371 "mode_info.m"
                                    if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                      check_hlds__mode_info__succeeded = MR_TRUE;
#line 371 "mode_info.m"
                                    else
#line 371 "mode_info.m"
                                      {
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_56_80;
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_57_81;
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_58_82;
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_59_83;
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_60_84;
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_61_85;
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_62_86;
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_65_89;
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__TypeInfo_66_90;
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 0)));
#line 371 "mode_info.m"
                                        MR_Integer check_hlds__mode_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 1)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 2)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 3)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 4)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 5)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 6)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 7)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 8)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 13)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 0)));
#line 371 "mode_info.m"
                                        MR_Integer check_hlds__mode_info__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 1)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 2)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 3)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 4)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 5)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 6)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 7)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 8)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 9)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_62_62 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 11)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_66_66 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 13)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 14)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 15)));
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_71_71 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 371 "mode_info.m"
                                        MR_Word check_hlds__mode_info__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_18_18, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 5926 "check_hlds.mode_info.c"
                                        {
#line 5928 "check_hlds.mode_info.c"
                                          check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__mode_info__V_27_27, check_hlds__mode_info__V_52_52);
                                        }
#line 371 "mode_info.m"
                                        if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                          {
#line 5935 "check_hlds.mode_info.c"
                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_28_28 == check_hlds__mode_info__V_53_53);
#line 371 "mode_info.m"
                                            if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                              {
#line 5941 "check_hlds.mode_info.c"
                                                check_hlds__mode_info__TypeInfo_56_80 = (MR_Word) &check_hlds__mode_info_scalar_common_1[5];
#line 5943 "check_hlds.mode_info.c"
                                                {
#line 5945 "check_hlds.mode_info.c"
                                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_56_80, ((MR_Box) (check_hlds__mode_info__V_29_29)), ((MR_Box) (check_hlds__mode_info__V_54_54)));
                                                }
#line 371 "mode_info.m"
                                                if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                  {
#line 5952 "check_hlds.mode_info.c"
                                                    check_hlds__mode_info__TypeInfo_57_81 = (MR_Word) &check_hlds__mode_info_scalar_common_2[1];
#line 5954 "check_hlds.mode_info.c"
                                                    {
#line 5956 "check_hlds.mode_info.c"
                                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_57_81, ((MR_Box) (check_hlds__mode_info__V_30_30)), ((MR_Box) (check_hlds__mode_info__V_55_55)));
                                                    }
#line 371 "mode_info.m"
                                                    if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                      {
#line 5963 "check_hlds.mode_info.c"
                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_31_31 == check_hlds__mode_info__V_56_56);
#line 371 "mode_info.m"
                                                        if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                          {
#line 5969 "check_hlds.mode_info.c"
                                                            check_hlds__mode_info__TypeInfo_58_82 = (MR_Word) &check_hlds__mode_info_scalar_common_1[6];
#line 5971 "check_hlds.mode_info.c"
                                                            {
#line 5973 "check_hlds.mode_info.c"
                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_58_82, ((MR_Box) (check_hlds__mode_info__V_32_32)), ((MR_Box) (check_hlds__mode_info__V_57_57)));
                                                            }
#line 371 "mode_info.m"
                                                            if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                              {
#line 5980 "check_hlds.mode_info.c"
                                                                check_hlds__mode_info__TypeInfo_59_83 = (MR_Word) &check_hlds__mode_info_scalar_common_1[4];
#line 5982 "check_hlds.mode_info.c"
                                                                {
#line 5984 "check_hlds.mode_info.c"
                                                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_59_83, ((MR_Box) (check_hlds__mode_info__V_33_33)), ((MR_Box) (check_hlds__mode_info__V_58_58)));
                                                                }
#line 371 "mode_info.m"
                                                                if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                  {
#line 5991 "check_hlds.mode_info.c"
                                                                    check_hlds__mode_info__TypeInfo_60_84 = (MR_Word) &check_hlds__mode_info_scalar_common_1[2];
#line 5993 "check_hlds.mode_info.c"
                                                                    {
#line 5995 "check_hlds.mode_info.c"
                                                                      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_60_84, ((MR_Box) (check_hlds__mode_info__V_34_34)), ((MR_Box) (check_hlds__mode_info__V_59_59)));
                                                                    }
#line 371 "mode_info.m"
                                                                    if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                      {
#line 6002 "check_hlds.mode_info.c"
                                                                        check_hlds__mode_info__TypeInfo_61_85 = (MR_Word) &check_hlds__mode_info_scalar_common_1[7];
#line 6004 "check_hlds.mode_info.c"
                                                                        {
#line 6006 "check_hlds.mode_info.c"
                                                                          check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_61_85, ((MR_Box) (check_hlds__mode_info__V_35_35)), ((MR_Box) (check_hlds__mode_info__V_60_60)));
                                                                        }
#line 371 "mode_info.m"
                                                                        if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                          {
#line 6013 "check_hlds.mode_info.c"
                                                                            check_hlds__mode_info__TypeInfo_62_86 = (MR_Word) &check_hlds__mode_info_scalar_common_1[8];
#line 6015 "check_hlds.mode_info.c"
                                                                            {
#line 6017 "check_hlds.mode_info.c"
                                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_62_86, ((MR_Box) (check_hlds__mode_info__V_36_36)), ((MR_Box) (check_hlds__mode_info__V_61_61)));
                                                                            }
#line 371 "mode_info.m"
                                                                            if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                              {
#line 6024 "check_hlds.mode_info.c"
                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_37_37 == check_hlds__mode_info__V_62_62);
#line 371 "mode_info.m"
                                                                                if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                  {
#line 6030 "check_hlds.mode_info.c"
                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_38_38 == check_hlds__mode_info__V_63_63);
#line 371 "mode_info.m"
                                                                                    if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                      {
#line 6036 "check_hlds.mode_info.c"
                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_39_39 == check_hlds__mode_info__V_64_64);
#line 371 "mode_info.m"
                                                                                        if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                          {
#line 6042 "check_hlds.mode_info.c"
                                                                                            {
#line 6044 "check_hlds.mode_info.c"
                                                                                              check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_40_40, check_hlds__mode_info__V_65_65);
                                                                                            }
#line 371 "mode_info.m"
                                                                                            if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                              {
#line 6051 "check_hlds.mode_info.c"
                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_41_41 == check_hlds__mode_info__V_66_66);
#line 371 "mode_info.m"
                                                                                                if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                                  {
#line 6057 "check_hlds.mode_info.c"
                                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_42_42 == check_hlds__mode_info__V_67_67);
#line 371 "mode_info.m"
                                                                                                    if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                                      {
#line 6063 "check_hlds.mode_info.c"
                                                                                                        {
#line 6065 "check_hlds.mode_info.c"
                                                                                                          check_hlds__mode_info__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__mode_info__V_43_43, check_hlds__mode_info__V_68_68);
                                                                                                        }
#line 371 "mode_info.m"
                                                                                                        if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                                          {
#line 6072 "check_hlds.mode_info.c"
                                                                                                            check_hlds__mode_info__TypeInfo_65_89 = (MR_Word) &check_hlds__mode_info_scalar_common_2[2];
#line 6074 "check_hlds.mode_info.c"
                                                                                                            {
#line 6076 "check_hlds.mode_info.c"
                                                                                                              check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_65_89, ((MR_Box) (check_hlds__mode_info__V_44_44)), ((MR_Box) (check_hlds__mode_info__V_69_69)));
                                                                                                            }
#line 371 "mode_info.m"
                                                                                                            if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                                              {
#line 6083 "check_hlds.mode_info.c"
                                                                                                                check_hlds__mode_info__TypeInfo_66_90 = (MR_Word) &check_hlds__mode_info_scalar_common_1[10];
#line 6085 "check_hlds.mode_info.c"
                                                                                                                {
#line 6087 "check_hlds.mode_info.c"
                                                                                                                  check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0(check_hlds__mode_info__TypeInfo_66_90, ((MR_Box) (check_hlds__mode_info__V_45_45)), ((MR_Box) (check_hlds__mode_info__V_70_70)));
                                                                                                                }
#line 371 "mode_info.m"
                                                                                                                if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                                                  {
#line 6094 "check_hlds.mode_info.c"
                                                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_46_46 == check_hlds__mode_info__V_71_71);
#line 371 "mode_info.m"
                                                                                                                    if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                                                      {
#line 6100 "check_hlds.mode_info.c"
                                                                                                                        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_47_47 == check_hlds__mode_info__V_72_72);
#line 371 "mode_info.m"
                                                                                                                        if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                                                          {
#line 6106 "check_hlds.mode_info.c"
                                                                                                                            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_48_48 == check_hlds__mode_info__V_73_73);
#line 371 "mode_info.m"
                                                                                                                            if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                                                              {
#line 6112 "check_hlds.mode_info.c"
                                                                                                                                check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_49_49 == check_hlds__mode_info__V_74_74);
#line 371 "mode_info.m"
                                                                                                                                if (check_hlds__mode_info__succeeded)
#line 371 "mode_info.m"
                                                                                                                                  {
#line 6118 "check_hlds.mode_info.c"
                                                                                                                                    check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_50_50 == check_hlds__mode_info__V_75_75);
#line 371 "mode_info.m"
                                                                                                                                    if (check_hlds__mode_info__succeeded)
#line 6122 "check_hlds.mode_info.c"
                                                                                                                                      check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_51_51 == check_hlds__mode_info__V_76_76);
#line 371 "mode_info.m"
                                                                                                                                  }
#line 371 "mode_info.m"
                                                                                                                              }
#line 371 "mode_info.m"
                                                                                                                          }
#line 371 "mode_info.m"
                                                                                                                      }
#line 371 "mode_info.m"
                                                                                                                  }
#line 371 "mode_info.m"
                                                                                                              }
#line 371 "mode_info.m"
                                                                                                          }
#line 371 "mode_info.m"
                                                                                                      }
#line 371 "mode_info.m"
                                                                                                  }
#line 371 "mode_info.m"
                                                                                              }
#line 371 "mode_info.m"
                                                                                          }
#line 371 "mode_info.m"
                                                                                      }
#line 371 "mode_info.m"
                                                                                  }
#line 371 "mode_info.m"
                                                                              }
#line 371 "mode_info.m"
                                                                          }
#line 371 "mode_info.m"
                                                                      }
#line 371 "mode_info.m"
                                                                  }
#line 371 "mode_info.m"
                                                              }
#line 371 "mode_info.m"
                                                          }
#line 371 "mode_info.m"
                                                      }
#line 371 "mode_info.m"
                                                  }
#line 371 "mode_info.m"
                                              }
#line 371 "mode_info.m"
                                          }
#line 371 "mode_info.m"
                                      }
#line 488 "mode_info.m"
                                  }
#line 488 "mode_info.m"
                              }
#line 488 "mode_info.m"
                          }
#line 488 "mode_info.m"
                      }
#line 488 "mode_info.m"
                  }
#line 488 "mode_info.m"
              }
#line 488 "mode_info.m"
          }
#line 488 "mode_info.m"
      }
#line 488 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 488 "mode_info.m"
  }
#line 488 "mode_info.m"
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
#line 6219 "check_hlds.mode_info.c"
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
#line 6243 "check_hlds.mode_info.c"
              *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "mode_info.m"
              break;
#line 47 "mode_info.m"
            case (MR_Integer) 2:
#line 6249 "check_hlds.mode_info.c"
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
#line 6273 "check_hlds.mode_info.c"
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
#line 6293 "check_hlds.mode_info.c"
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
                    }
#line 47 "mode_info.m"
                }
#line 47 "mode_info.m"
                break;
#line 47 "mode_info.m"
              case (MR_Integer) 2:
#line 6314 "check_hlds.mode_info.c"
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
#line 6340 "check_hlds.mode_info.c"
                *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "mode_info.m"
                break;
#line 47 "mode_info.m"
              case (MR_Integer) 1:
#line 6346 "check_hlds.mode_info.c"
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
#line 6366 "check_hlds.mode_info.c"
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
#line 6476 "check_hlds.mode_info.c"
                {
#line 6478 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____call_id_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_5_5);
                }
#line 47 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 6483 "check_hlds.mode_info.c"
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
#line 6514 "check_hlds.mode_info.c"
                {
#line 6516 "check_hlds.mode_info.c"
                  check_hlds__mode_info__succeeded = hlds__hlds_goal____Unify____unify_context_0_0(check_hlds__mode_info__V_7_7, check_hlds__mode_info__V_9_9);
                }
#line 47 "mode_info.m"
                if (check_hlds__mode_info__succeeded)
#line 6521 "check_hlds.mode_info.c"
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

#line 96 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____maybe_have_auto_init_var_0_0(
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
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 96 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 96 "mode_info.m"
    {
#line 96 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
    }
#line 96 "mode_info.m"
  }
#line 96 "mode_info.m"
}

#line 96 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____maybe_have_auto_init_var_0_0(
#line 96 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 96 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 96 "mode_info.m"
{
#line 6577 "check_hlds.mode_info.c"
  {
#line 6579 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6582 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6584 "check_hlds.mode_info.c"
  }
#line 96 "mode_info.m"
}

#line 121 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____may_init_solver_vars_0_0(
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
    }
#line 121 "mode_info.m"
  }
#line 121 "mode_info.m"
}

#line 121 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_init_solver_vars_0_0(
#line 121 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 121 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 121 "mode_info.m"
{
#line 6628 "check_hlds.mode_info.c"
  {
#line 6630 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6633 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6635 "check_hlds.mode_info.c"
  }
#line 121 "mode_info.m"
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
#line 6679 "check_hlds.mode_info.c"
  {
#line 6681 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6684 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6686 "check_hlds.mode_info.c"
  }
#line 88 "mode_info.m"
}

#line 137 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0(
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
    }
#line 137 "mode_info.m"
  }
#line 137 "mode_info.m"
}

#line 137 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0(
#line 137 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 137 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 137 "mode_info.m"
{
#line 6730 "check_hlds.mode_info.c"
  {
#line 6732 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6735 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6737 "check_hlds.mode_info.c"
  }
#line 137 "mode_info.m"
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
      check_hlds__mode_info__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[4], ((MR_Box) (check_hlds__mode_info__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__mode_info__Cast_HeadVar2_4)));
    }
#line 92 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 92 "mode_info.m"
  }
#line 92 "mode_info.m"
}

#line 125 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0(
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
    }
#line 125 "mode_info.m"
  }
#line 125 "mode_info.m"
}

#line 125 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0(
#line 125 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 125 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 125 "mode_info.m"
{
#line 6841 "check_hlds.mode_info.c"
  {
#line 6843 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6846 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6848 "check_hlds.mode_info.c"
  }
#line 125 "mode_info.m"
}

#line 129 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0(
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
    }
#line 129 "mode_info.m"
  }
#line 129 "mode_info.m"
}

#line 129 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0(
#line 129 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 129 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 129 "mode_info.m"
{
#line 6892 "check_hlds.mode_info.c"
  {
#line 6894 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6897 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6899 "check_hlds.mode_info.c"
  }
#line 129 "mode_info.m"
}

#line 141 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0(
#line 141 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 141 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 141 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 141 "mode_info.m"
{
#line 141 "mode_info.m"
  {
#line 141 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 141 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar1_4 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 141 "mode_info.m"
    MR_Integer check_hlds__mode_info__Cast_HeadVar2_5 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 141 "mode_info.m"
    {
#line 141 "mode_info.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__Cast_HeadVar1_4, check_hlds__mode_info__Cast_HeadVar2_5);
    }
#line 141 "mode_info.m"
  }
#line 141 "mode_info.m"
}

#line 141 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0(
#line 141 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 141 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 141 "mode_info.m"
{
#line 6943 "check_hlds.mode_info.c"
  {
#line 6945 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6948 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 6950 "check_hlds.mode_info.c"
  }
#line 141 "mode_info.m"
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
#line 6994 "check_hlds.mode_info.c"
  {
#line 6996 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 6999 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 7001 "check_hlds.mode_info.c"
  }
#line 77 "mode_info.m"
}

#line 133 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0(
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
    }
#line 133 "mode_info.m"
  }
#line 133 "mode_info.m"
}

#line 133 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0(
#line 133 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_1,
#line 133 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 133 "mode_info.m"
{
#line 7045 "check_hlds.mode_info.c"
  {
#line 7047 "check_hlds.mode_info.c"
    MR_bool check_hlds__mode_info__succeeded = (check_hlds__mode_info__HeadVar__2_1 == check_hlds__mode_info__HeadVar__2_2);

#line 7050 "check_hlds.mode_info.c"
    return check_hlds__mode_info__succeeded;
#line 7052 "check_hlds.mode_info.c"
  }
#line 133 "mode_info.m"
}

#line 100 "mode_info.m"
void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0(
#line 100 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__1_1,
#line 100 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 100 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__3_3)
#line 100 "mode_info.m"
{
#line 100 "mode_info.m"
  {
#line 100 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 100 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_12 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;
#line 100 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_13 = (MR_Integer) check_hlds__mode_info__HeadVar__3_3;

#line 100 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_12 == check_hlds__mode_info__CastY_13);
#line 100 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 7081 "check_hlds.mode_info.c"
      *check_hlds__mode_info__HeadVar__1_1 = (MR_Integer) 0;
#line 100 "mode_info.m"
    else
#line 100 "mode_info.m"
      {
#line 100 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 100 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 100 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 100 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 100 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 100 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 100 "mode_info.m"
        MR_Word check_hlds__mode_info__V_10_10;
#line 100 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_17_17 = (MR_Integer) check_hlds__mode_info__V_4_4;
#line 100 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_18_18 = (MR_Integer) check_hlds__mode_info__V_7_7;

#line 100 "mode_info.m"
        {
#line 100 "mode_info.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_10_10, check_hlds__mode_info__V_17_17, check_hlds__mode_info__V_18_18);
        }
#line 7111 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_10_10 == (MR_Integer) 0);
#line 100 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 100 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 100 "mode_info.m"
          *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_10_10;
#line 100 "mode_info.m"
        else
#line 100 "mode_info.m"
          {
#line 100 "mode_info.m"
            MR_Word check_hlds__mode_info__V_11_11;
#line 100 "mode_info.m"
            MR_Integer check_hlds__mode_info__V_19_19 = (MR_Integer) check_hlds__mode_info__V_5_5;
#line 100 "mode_info.m"
            MR_Integer check_hlds__mode_info__V_20_20 = (MR_Integer) check_hlds__mode_info__V_8_8;

#line 100 "mode_info.m"
            {
#line 100 "mode_info.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__mode_info__V_11_11, check_hlds__mode_info__V_19_19, check_hlds__mode_info__V_20_20);
            }
#line 7135 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_11_11 == (MR_Integer) 0);
#line 100 "mode_info.m"
            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 100 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 100 "mode_info.m"
              *check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__V_11_11;
#line 100 "mode_info.m"
            else
#line 100 "mode_info.m"
              {
#line 100 "mode_info.m"
                MR_Integer check_hlds__mode_info__V_21_21 = (MR_Integer) check_hlds__mode_info__V_6_6;
#line 100 "mode_info.m"
                MR_Integer check_hlds__mode_info__V_22_22 = (MR_Integer) check_hlds__mode_info__V_9_9;

#line 100 "mode_info.m"
                {
#line 100 "mode_info.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__mode_info__HeadVar__1_1, check_hlds__mode_info__V_21_21, check_hlds__mode_info__V_22_22);
                }
#line 100 "mode_info.m"
              }
#line 100 "mode_info.m"
          }
#line 100 "mode_info.m"
      }
#line 100 "mode_info.m"
  }
#line 100 "mode_info.m"
}

#line 100 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info____Unify____debug_flags_0_0(
#line 100 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 100 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2)
#line 100 "mode_info.m"
{
#line 100 "mode_info.m"
  {
#line 100 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 100 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastX_9 = (MR_Integer) check_hlds__mode_info__HeadVar__1_1;
#line 100 "mode_info.m"
    MR_Integer check_hlds__mode_info__CastY_10 = (MR_Integer) check_hlds__mode_info__HeadVar__2_2;

#line 100 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__CastX_9 == check_hlds__mode_info__CastY_10);
#line 100 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 100 "mode_info.m"
      check_hlds__mode_info__succeeded = MR_TRUE;
#line 100 "mode_info.m"
    else
#line 100 "mode_info.m"
      {
#line 100 "mode_info.m"
        MR_Word check_hlds__mode_info__V_3_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 100 "mode_info.m"
        MR_Word check_hlds__mode_info__V_4_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 100 "mode_info.m"
        MR_Word check_hlds__mode_info__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 100 "mode_info.m"
        MR_Word check_hlds__mode_info__V_6_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 100 "mode_info.m"
        MR_Word check_hlds__mode_info__V_7_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 100 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 7209 "check_hlds.mode_info.c"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_3_3 == check_hlds__mode_info__V_6_6);
#line 100 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 100 "mode_info.m"
          {
#line 7215 "check_hlds.mode_info.c"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_4_4 == check_hlds__mode_info__V_7_7);
#line 100 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 7219 "check_hlds.mode_info.c"
              check_hlds__mode_info__succeeded = (check_hlds__mode_info__V_5_5 == check_hlds__mode_info__V_8_8);
#line 100 "mode_info.m"
          }
#line 100 "mode_info.m"
      }
#line 100 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 100 "mode_info.m"
  }
#line 100 "mode_info.m"
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
#line 7256 "check_hlds.mode_info.c"
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
            }
#line 64 "mode_info.m"
          }
#line 64 "mode_info.m"
        else
#line 7283 "check_hlds.mode_info.c"
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
#line 7296 "check_hlds.mode_info.c"
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
#line 7362 "check_hlds.mode_info.c"
            {
#line 7364 "check_hlds.mode_info.c"
              check_hlds__mode_info__succeeded = hlds__hlds_pred____Unify____call_id_0_0(check_hlds__mode_info__V_5_5, check_hlds__mode_info__V_6_6);
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
#line 7388 "check_hlds.mode_info.c"
            {
#line 7390 "check_hlds.mode_info.c"
              check_hlds__mode_info__succeeded = hlds__hlds_goal____Unify____unify_context_0_0(check_hlds__mode_info__V_3_3, check_hlds__mode_info__V_4_4);
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

#line 1002 "mode_info.m"
static MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(
#line 1002 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 1002 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_7,
#line 1002 "mode_info.m"
  MR_Word * check_hlds__mode_info__Reason_8)
#line 1002 "mode_info.m"
{
#line 1005 "mode_info.m"
  while (MR_TRUE)
#line 1005 "mode_info.m"
    {
#line 1005 "mode_info.m"
      /* tailcall optimized into a loop */
#line 1005 "mode_info.m"
      {
#line 1005 "mode_info.m"
        MR_bool check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1005 "mode_info.m"
        MR_Word check_hlds__mode_info__ThisReason_4;
#line 1005 "mode_info.m"
        MR_Word check_hlds__mode_info__Set_5;
#line 1005 "mode_info.m"
        MR_Word check_hlds__mode_info__Sets_6;
#line 1005 "mode_info.m"
        MR_Word check_hlds__mode_info__V_9_9;
#line 1006 "mode_info.m"
        MR_Word check_hlds__mode_info__TypeCtorInfo_10_10;

#line 1005 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 1005 "mode_info.m"
          {
#line 1005 "mode_info.m"
            check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 1005 "mode_info.m"
            check_hlds__mode_info__Sets_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 1)));
#line 1005 "mode_info.m"
            check_hlds__mode_info__ThisReason_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 1005 "mode_info.m"
            check_hlds__mode_info__Set_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 7448 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1006 "mode_info.m"
            {
#line 1006 "mode_info.m"
              check_hlds__mode_info__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__mode_info__TypeCtorInfo_10_10, check_hlds__mode_info__Set_5, check_hlds__mode_info__Var_7);
            }
#line 1008 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 1007 "mode_info.m"
              {
#line 1007 "mode_info.m"
                *check_hlds__mode_info__Reason_8 = check_hlds__mode_info__ThisReason_4;
#line 1007 "mode_info.m"
                check_hlds__mode_info__succeeded = MR_TRUE;
#line 1007 "mode_info.m"
              }
#line 1008 "mode_info.m"
            else
#line 1009 "mode_info.m"
              {
#line 1009 "mode_info.m"
                /* direct tailcall eliminated */
#line 1009 "mode_info.m"
                {
#line 1009 "mode_info.m"
                  MR_Word check_hlds__mode_info__HeadVar__1__tmp_copy_1 = check_hlds__mode_info__Sets_6;

#line 1009 "mode_info.m"
                  check_hlds__mode_info__HeadVar__1_1 = check_hlds__mode_info__HeadVar__1__tmp_copy_1;
#line 1009 "mode_info.m"
                }
#line 1009 "mode_info.m"
                continue;
#line 1009 "mode_info.m"
              }
#line 1005 "mode_info.m"
          }
#line 1005 "mode_info.m"
        return check_hlds__mode_info__succeeded;
#line 1005 "mode_info.m"
      }
#line 1005 "mode_info.m"
      break;
#line 1005 "mode_info.m"
    }
#line 1002 "mode_info.m"
}

#line 584 "mode_info.m"
static void MR_CALL 
check_hlds__mode_info__do_we_have_auto_init_var_3_p_0(
#line 584 "mode_info.m"
  MR_Word check_hlds__mode_info__ModuleInfo_1,
#line 584 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 584 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 584 "mode_info.m"
{
#line 587 "mode_info.m"
  while (MR_TRUE)
#line 587 "mode_info.m"
    {
#line 587 "mode_info.m"
      /* tailcall optimized into a loop */
#line 587 "mode_info.m"
      {
#line 587 "mode_info.m"
        MR_bool check_hlds__mode_info__succeeded;

#line 587 "mode_info.m"
        if ((check_hlds__mode_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 587 "mode_info.m"
          *check_hlds__mode_info__HeadVar__3_3 = (MR_Integer) 0;
#line 587 "mode_info.m"
        else
#line 588 "mode_info.m"
          {
#line 588 "mode_info.m"
            MR_Word check_hlds__mode_info__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 588 "mode_info.m"
            MR_Word check_hlds__mode_info__Types_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));

#line 589 "mode_info.m"
            {
#line 589 "mode_info.m"
              check_hlds__mode_info__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(check_hlds__mode_info__ModuleInfo_1, check_hlds__mode_info__Type_6);
            }
#line 591 "mode_info.m"
            if (check_hlds__mode_info__succeeded)
#line 590 "mode_info.m"
              *check_hlds__mode_info__HeadVar__3_3 = (MR_Integer) 1;
#line 591 "mode_info.m"
            else
#line 592 "mode_info.m"
              {
#line 592 "mode_info.m"
                /* direct tailcall eliminated */
#line 592 "mode_info.m"
                {
#line 592 "mode_info.m"
                  MR_Word check_hlds__mode_info__HeadVar__2__tmp_copy_2 = check_hlds__mode_info__Types_7;

#line 592 "mode_info.m"
                  check_hlds__mode_info__HeadVar__2_2 = check_hlds__mode_info__HeadVar__2__tmp_copy_2;
#line 592 "mode_info.m"
                }
#line 592 "mode_info.m"
                continue;
#line 592 "mode_info.m"
              }
#line 588 "mode_info.m"
          }
#line 587 "mode_info.m"
      }
#line 587 "mode_info.m"
      break;
#line 587 "mode_info.m"
    }
#line 584 "mode_info.m"
}

#line 352 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(
#line 352 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_2)
#line 352 "mode_info.m"
{
#line 1068 "mode_info.m"
  {
#line 1068 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1068 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 0)));
#line 1068 "mode_info.m"
    MR_Word check_hlds__mode_info__Globals_4;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 1)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 2)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 3)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 4)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 5)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 6)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 7)));

#line 1070 "mode_info.m"
    {
#line 1070 "mode_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__mode_info__ModuleInfo_3, &check_hlds__mode_info__Globals_4);
    }
#line 1071 "mode_info.m"
    {
#line 1071 "mode_info.m"
      check_hlds__mode_info__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__mode_info__Globals_4, (MR_Integer) 291, (MR_Integer) 1);
    }
#line 1068 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 1068 "mode_info.m"
  }
#line 352 "mode_info.m"
}

#line 346 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info__mode_info_may_init_solver_vars_1_p_0(
#line 346 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_2)
#line 346 "mode_info.m"
{
#line 1062 "mode_info.m"
  {
#line 1062 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1062 "mode_info.m"
    MR_Word check_hlds__mode_info__MayInitSolverVars_3;
#line 1062 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 7)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 0)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 1)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 2)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 3)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 4)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 5)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_2, (MR_Integer) 6)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 0)));
#line 656 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 1)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 2)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 3)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 4)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 5)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 6)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 7)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 8)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 9)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;

#line 656 "mode_info.m"
    check_hlds__mode_info__MayInitSolverVars_3 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 11)));
#line 656 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 656 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 13)));
#line 656 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 14)));
#line 656 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 15)));
#line 656 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 656 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_6_6, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1064 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__MayInitSolverVars_3 == (MR_Integer) 0);
#line 1062 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 1062 "mode_info.m"
  }
#line 346 "mode_info.m"
}

#line 342 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_need_to_requantify_2_p_0(
#line 342 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4,
#line 342 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_5)
#line 342 "mode_info.m"
{
#line 1057 "mode_info.m"
  {
#line 1057 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;

#line 1058 "mode_info.m"
    {
#line 1058 "mode_info.m"
      check_hlds__mode_info__mode_info_set_need_to_requantify_3_p_0((MR_Integer) 0, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_4, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_5);
    }
#line 1057 "mode_info.m"
  }
#line 342 "mode_info.m"
}

#line 339 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_add_warning_3_p_0(
#line 339 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeWarningInfo_4,
#line 339 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8,
#line 339 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9)
#line 339 "mode_info.m"
{
#line 1052 "mode_info.m"
  {
#line 1052 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1052 "mode_info.m"
    MR_Word check_hlds__mode_info__Warnings0_6;
#line 1052 "mode_info.m"
    MR_Word check_hlds__mode_info__Warnings_7;
#line 1052 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 1052 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));
#line 1052 "mode_info.m"
    MR_Word check_hlds__mode_info__V_53_53;
#line 1052 "mode_info.m"
    MR_Word check_hlds__mode_info__V_54_54;
#line 1052 "mode_info.m"
    MR_Word check_hlds__mode_info__V_55_55;
#line 1052 "mode_info.m"
    MR_Word check_hlds__mode_info__V_56_56;
#line 1052 "mode_info.m"
    MR_Word check_hlds__mode_info__V_57_57;
#line 1052 "mode_info.m"
    MR_Word check_hlds__mode_info__V_58_58;
#line 1052 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59;
#line 1052 "mode_info.m"
    MR_Word check_hlds__mode_info__V_60_60;
#line 1052 "mode_info.m"
    MR_Word check_hlds__mode_info__V_61_61;
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 0)));
#line 634 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 1)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 2)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 3)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 4)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 5)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 6)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 7)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 8)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 11)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 13)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 14)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_47_47;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_62_62;
#line 705 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_63_63;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_64_64;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_65_65;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_70_70;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_71_71;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_72_72;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_73_73;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_74_74;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_75_75;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_76_76;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_77_77;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_78_78;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_79_79;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_81_81;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_82_82;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_83_83;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_84_84;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_85_85;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_86_86;
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_80_80;

#line 634 "mode_info.m"
    check_hlds__mode_info__Warnings0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)));
#line 634 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 634 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1054 "mode_info.m"
    {
#line 1054 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1054 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__ModeWarningInfo_4));
#line 1054 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1054 "mode_info.m"
    }
#line 1054 "mode_info.m"
    {
#line 1054 "mode_info.m"
      mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0, check_hlds__mode_info__Warnings0_6, check_hlds__mode_info__V_10_10, &check_hlds__mode_info__Warnings_7);
    }
#line 705 "mode_info.m"
    check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 0)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 1)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 2)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 3)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 4)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 5)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 6)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 7)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 8)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 9)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_72_72 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 705 "mode_info.m"
    check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    check_hlds__mode_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    check_hlds__mode_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 11)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_76_76 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 705 "mode_info.m"
    check_hlds__mode_info__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    check_hlds__mode_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 13)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 14)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 15)));
#line 705 "mode_info.m"
    check_hlds__mode_info__V_81_81 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 705 "mode_info.m"
    check_hlds__mode_info__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    check_hlds__mode_info__V_83_83 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    check_hlds__mode_info__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    check_hlds__mode_info__V_85_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    check_hlds__mode_info__V_86_86 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_53_53, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    {
#line 705 "mode_info.m"
      check_hlds__mode_info__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 0) = ((MR_Box) (check_hlds__mode_info__V_62_62));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 1) = ((MR_Box) (check_hlds__mode_info__V_63_63));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 2) = ((MR_Box) (check_hlds__mode_info__V_64_64));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 3) = ((MR_Box) (check_hlds__mode_info__V_65_65));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 4) = ((MR_Box) (check_hlds__mode_info__V_66_66));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 5) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 6) = ((MR_Box) (check_hlds__mode_info__V_68_68));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 7) = ((MR_Box) (check_hlds__mode_info__V_69_69));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 8) = ((MR_Box) (check_hlds__mode_info__V_70_70));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 9) = ((MR_Box) (check_hlds__mode_info__V_71_71));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 10) = ((MR_Box) ((check_hlds__mode_info__V_72_72 | ((((check_hlds__mode_info__V_73_73 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_74_74 << (MR_Integer) 2)))))));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 11) = ((MR_Box) (check_hlds__mode_info__V_75_75));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 12) = ((MR_Box) ((check_hlds__mode_info__V_76_76 | ((check_hlds__mode_info__V_77_77 << (MR_Integer) 1)))));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 13) = ((MR_Box) (check_hlds__mode_info__V_78_78));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 14) = ((MR_Box) (check_hlds__mode_info__V_79_79));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 15) = ((MR_Box) (check_hlds__mode_info__Warnings_7));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 16) = ((MR_Box) ((check_hlds__mode_info__V_81_81 | ((((check_hlds__mode_info__V_82_82 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_83_83 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_84_84 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_85_85 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_86_86 << (MR_Integer) 5)))))))))))));
#line 705 "mode_info.m"
    }
#line 705 "mode_info.m"
    {
#line 705 "mode_info.m"
      MR_Word base;
#line 705 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 705 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9 = base;
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_59_59));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_60_60));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_61_61));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 705 "mode_info.m"
    }
#line 1052 "mode_info.m"
  }
#line 339 "mode_info.m"
}

#line 336 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_warning_3_p_0(
#line 336 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeWarning_4,
#line 336 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9,
#line 336 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10)
#line 336 "mode_info.m"
{
#line 1046 "mode_info.m"
  {
#line 1046 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1046 "mode_info.m"
    MR_Word check_hlds__mode_info__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 5)));
#line 1046 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 4)));
#line 1046 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeWarningInfo_8;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 0)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 1)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 2)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 3)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 6)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 7)));

#line 1049 "mode_info.m"
    {
#line 1049 "mode_info.m"
      check_hlds__mode_info__ModeWarningInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1049 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 0) = ((MR_Box) (check_hlds__mode_info__ModeWarning_4));
#line 1049 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 1) = ((MR_Box) (check_hlds__mode_info__Context_6));
#line 1049 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeWarningInfo_8, 2) = ((MR_Box) (check_hlds__mode_info__ModeContext_7));
#line 1049 "mode_info.m"
    }
#line 1050 "mode_info.m"
    {
#line 1050 "mode_info.m"
      check_hlds__mode_info__mode_info_add_warning_3_p_0(check_hlds__mode_info__ModeWarningInfo_8, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10);
    }
#line 1046 "mode_info.m"
  }
#line 336 "mode_info.m"
}

#line 333 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_add_error_3_p_0(
#line 333 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeErrorInfo_4,
#line 333 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8,
#line 333 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9)
#line 333 "mode_info.m"
{
#line 1041 "mode_info.m"
  {
#line 1041 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1041 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3)));
#line 1041 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors_7;
#line 1041 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7)));

#line 1043 "mode_info.m"
    {
#line 1043 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__ModeErrorInfo_4));
#line 1043 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1043 "mode_info.m"
    }
#line 1043 "mode_info.m"
    {
#line 1043 "mode_info.m"
      mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__mode_info__Errors0_6, check_hlds__mode_info__V_10_10, &check_hlds__mode_info__Errors_7);
    }
#line 1044 "mode_info.m"
    {
#line 1044 "mode_info.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__mode_info__Errors_7, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_8, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_9);
    }
#line 1041 "mode_info.m"
  }
#line 333 "mode_info.m"
}

#line 330 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_error_4_p_0(
#line 330 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_5,
#line 330 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeError_6,
#line 330 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11,
#line 330 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12)
#line 330 "mode_info.m"
{
#line 1035 "mode_info.m"
  {
#line 1035 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1035 "mode_info.m"
    MR_Word check_hlds__mode_info__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 5)));
#line 1035 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 4)));
#line 1035 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeErrorInfo_10;
#line 1035 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors0_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 3)));
#line 1035 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors_37;
#line 1035 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 0)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 1)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 2)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 6)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 7)));

#line 1038 "mode_info.m"
    {
#line 1038 "mode_info.m"
      check_hlds__mode_info__ModeErrorInfo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 0) = ((MR_Box) (check_hlds__mode_info__Vars_5));
#line 1038 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 1) = ((MR_Box) (check_hlds__mode_info__ModeError_6));
#line 1038 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 2) = ((MR_Box) (check_hlds__mode_info__Context_8));
#line 1038 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeErrorInfo_10, 3) = ((MR_Box) (check_hlds__mode_info__ModeContext_9));
#line 1038 "mode_info.m"
    }
#line 1043 "mode_info.m"
    {
#line 1043 "mode_info.m"
      check_hlds__mode_info__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_38_38, 0) = ((MR_Box) (check_hlds__mode_info__ModeErrorInfo_10));
#line 1043 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1043 "mode_info.m"
    }
#line 1043 "mode_info.m"
    {
#line 1043 "mode_info.m"
      mercury__list__append_3_p_1((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__mode_info__Errors0_36, check_hlds__mode_info__V_38_38, &check_hlds__mode_info__Errors_37);
    }
#line 1044 "mode_info.m"
    {
#line 1044 "mode_info.m"
      check_hlds__mode_info__mode_info_set_errors_3_p_0(check_hlds__mode_info__Errors_37, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12);
    }
#line 1035 "mode_info.m"
  }
#line 330 "mode_info.m"
}

#line 323 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_var_is_nondet_live_3_p_0(
#line 323 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 323 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_5,
#line 323 "mode_info.m"
  MR_Word * check_hlds__mode_info__Result_6)
#line 323 "mode_info.m"
{
#line 954 "mode_info.m"
  {
#line 954 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 954 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));

#line 956 "mode_info.m"
    {
#line 956 "mode_info.m"
      check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__NondetLiveVars0_7, ((MR_Box) (check_hlds__mode_info__Var_5)));
    }
#line 958 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 957 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 0;
#line 958 "mode_info.m"
    else
#line 959 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 1;
#line 954 "mode_info.m"
  }
#line 323 "mode_info.m"
}

#line 318 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_var_is_live_3_p_0(
#line 318 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 318 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_5,
#line 318 "mode_info.m"
  MR_Word * check_hlds__mode_info__Result_6)
#line 318 "mode_info.m"
{
#line 946 "mode_info.m"
  {
#line 946 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 946 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 946 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 642 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;

#line 642 "mode_info.m"
    check_hlds__mode_info__LiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 948 "mode_info.m"
    {
#line 948 "mode_info.m"
      check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVars0_7, ((MR_Box) (check_hlds__mode_info__Var_5)));
    }
#line 950 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 949 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 0;
#line 950 "mode_info.m"
    else
#line 951 "mode_info.m"
      *check_hlds__mode_info__Result_6 = (MR_Integer) 1;
#line 946 "mode_info.m"
  }
#line 318 "mode_info.m"
}

#line 316 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(
#line 316 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_1,
#line 316 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__2_2,
#line 316 "mode_info.m"
  MR_Word * check_hlds__mode_info__HeadVar__3_3)
#line 316 "mode_info.m"
{
#line 941 "mode_info.m"
  {
#line 941 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;

#line 941 "mode_info.m"
    if ((check_hlds__mode_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 941 "mode_info.m"
      *check_hlds__mode_info__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 941 "mode_info.m"
    else
#line 942 "mode_info.m"
      {
#line 942 "mode_info.m"
        MR_Word check_hlds__mode_info__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 0)));
#line 942 "mode_info.m"
        MR_Word check_hlds__mode_info__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__2_2, (MR_Integer) 1)));
#line 942 "mode_info.m"
        MR_Word check_hlds__mode_info__Live_8;
#line 942 "mode_info.m"
        MR_Word check_hlds__mode_info__Lives_9;
#line 942 "mode_info.m"
        MR_Word check_hlds__mode_info__LiveVars0_13;
#line 942 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 7)));
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 0)));
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 1)));
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 2)));
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 3)));
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 4)));
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 5)));
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_1, (MR_Integer) 6)));
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 0)));
#line 642 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 1)));
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 2)));
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 3)));
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 4)));
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 5)));
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 6)));
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32;
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33;
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34;
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35;
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36;
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37;
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38;
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39;
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40;
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41;
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42;
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43;
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44;
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45;
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46;
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47;
#line 642 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48;

#line 642 "mode_info.m"
        check_hlds__mode_info__LiveVars0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 7)));
#line 642 "mode_info.m"
        check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 8)));
#line 642 "mode_info.m"
        check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 9)));
#line 642 "mode_info.m"
        check_hlds__mode_info__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
        check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
        check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "mode_info.m"
        check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 11)));
#line 642 "mode_info.m"
        check_hlds__mode_info__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
        check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
        check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 13)));
#line 642 "mode_info.m"
        check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 14)));
#line 642 "mode_info.m"
        check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 15)));
#line 642 "mode_info.m"
        check_hlds__mode_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
        check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
        check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "mode_info.m"
        check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 642 "mode_info.m"
        check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 642 "mode_info.m"
        check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_17_17, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 948 "mode_info.m"
        {
#line 948 "mode_info.m"
          check_hlds__mode_info__succeeded = mercury__bag__contains_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVars0_13, ((MR_Box) (check_hlds__mode_info__Var_6)));
        }
#line 950 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 949 "mode_info.m"
          check_hlds__mode_info__Live_8 = (MR_Integer) 0;
#line 950 "mode_info.m"
        else
#line 951 "mode_info.m"
          check_hlds__mode_info__Live_8 = (MR_Integer) 1;
#line 944 "mode_info.m"
        {
#line 944 "mode_info.m"
          check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(check_hlds__mode_info__ModeInfo_1, check_hlds__mode_info__Vars_7, &check_hlds__mode_info__Lives_9);
        }
#line 942 "mode_info.m"
        {
#line 942 "mode_info.m"
          MR_Word base;
#line 942 "mode_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "mode_info.m"
          *check_hlds__mode_info__HeadVar__3_3 = base;
#line 942 "mode_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__mode_info__Live_8));
#line 942 "mode_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__mode_info__Lives_9));
#line 942 "mode_info.m"
        }
#line 942 "mode_info.m"
      }
#line 941 "mode_info.m"
  }
#line 316 "mode_info.m"
}

#line 311 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_call_id_3_p_0(
#line 311 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 311 "mode_info.m"
  MR_Word check_hlds__mode_info__PredId_5,
#line 311 "mode_info.m"
  MR_Word * check_hlds__mode_info__CallId_6)
#line 311 "mode_info.m"
{
#line 1028 "mode_info.m"
  {
#line 1028 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1028 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 1028 "mode_info.m"
    MR_Word check_hlds__mode_info__PredInfo_8;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));

#line 1030 "mode_info.m"
    {
#line 1030 "mode_info.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__mode_info__ModuleInfo_7, check_hlds__mode_info__PredId_5, &check_hlds__mode_info__PredInfo_8);
    }
#line 1031 "mode_info.m"
    {
#line 1031 "mode_info.m"
      hlds__hlds_pred__pred_info_get_call_id_2_p_0(check_hlds__mode_info__PredInfo_8, check_hlds__mode_info__CallId_6);
    }
#line 1028 "mode_info.m"
  }
#line 311 "mode_info.m"
}

#line 305 "mode_info.m"
MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_3_p_0(
#line 305 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 305 "mode_info.m"
  MR_Word check_hlds__mode_info__Var_5,
#line 305 "mode_info.m"
  MR_Word * check_hlds__mode_info__Reason_6)
#line 305 "mode_info.m"
{
#line 998 "mode_info.m"
  {
#line 998 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 998 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVarsList_7;
#line 998 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 0)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 1)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 2)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 3)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 4)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 5)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 0)));
#line 630 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 1)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 2)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 3)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 4)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 5)));
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
    MR_Word check_hlds__mode_info__V_36_36;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;

#line 630 "mode_info.m"
    check_hlds__mode_info__LockedVarsList_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 6)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 7)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 8)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 13)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1000 "mode_info.m"
    {
#line 1000 "mode_info.m"
      check_hlds__mode_info__succeeded = check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(check_hlds__mode_info__LockedVarsList_7, check_hlds__mode_info__Var_5, check_hlds__mode_info__Reason_6);
    }
#line 998 "mode_info.m"
    return check_hlds__mode_info__succeeded;
#line 998 "mode_info.m"
  }
#line 305 "mode_info.m"
}

#line 302 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_unlock_vars_4_p_0(
#line 302 "mode_info.m"
  MR_Word check_hlds__mode_info__Reason_5,
#line 302 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_6,
#line 302 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12,
#line 302 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_13)
#line 302 "mode_info.m"
{
#line 986 "mode_info.m"
  {
#line 986 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 986 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars0_8;
#line 986 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars_11;
#line 986 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 7)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 0)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 1)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 2)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 3)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 4)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 5)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 6)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 0)));
#line 630 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 1)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 2)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 3)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 4)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 5)));
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_47_47;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_48_48;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_49_49;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_50_50;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_51_51;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_52_52;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_53_53;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_54_54;
#line 993 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars1_10;
#line 989 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeCtorInfo_19_19;
#line 989 "mode_info.m"
    MR_Word check_hlds__mode_info__TheseVars_9;
#line 989 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 989 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;

#line 630 "mode_info.m"
    check_hlds__mode_info__LockedVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 6)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 7)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 8)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 9)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 11)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 13)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 14)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 15)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_49_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_23_23, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 989 "mode_info.m"
    check_hlds__mode_info__succeeded = ((MR_tag((MR_Word) check_hlds__mode_info__LockedVars0_8)) == (MR_mktag((MR_Integer) 1)));
#line 989 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 989 "mode_info.m"
      {
#line 989 "mode_info.m"
        check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__LockedVars0_8, (MR_Integer) 0)));
#line 989 "mode_info.m"
        check_hlds__mode_info__LockedVars1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__LockedVars0_8, (MR_Integer) 1)));
#line 989 "mode_info.m"
        check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, (MR_Integer) 0)));
#line 989 "mode_info.m"
        check_hlds__mode_info__TheseVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, (MR_Integer) 1)));
#line 989 "mode_info.m"
        {
#line 989 "mode_info.m"
          check_hlds__mode_info__succeeded = check_hlds__mode_info____Unify____var_lock_reason_0_0(check_hlds__mode_info__Reason_5, check_hlds__mode_info__V_20_20);
        }
#line 989 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 989 "mode_info.m"
          {
#line 8969 "check_hlds.mode_info.c"
            check_hlds__mode_info__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 990 "mode_info.m"
            {
#line 990 "mode_info.m"
              check_hlds__mode_info__succeeded = parse_tree__set_of_var__equal_2_p_0(check_hlds__mode_info__TypeCtorInfo_19_19, check_hlds__mode_info__TheseVars_9, check_hlds__mode_info__Vars_6);
            }
#line 989 "mode_info.m"
          }
#line 989 "mode_info.m"
      }
#line 993 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 992 "mode_info.m"
      check_hlds__mode_info__LockedVars_11 = check_hlds__mode_info__LockedVars1_10;
#line 993 "mode_info.m"
    else
#line 994 "mode_info.m"
      {
#line 994 "mode_info.m"
        {
#line 994 "mode_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_unlock_vars\'/4", (MR_String) "some kind of nesting error");
#line 994 "mode_info.m"
          return;
        }
#line 994 "mode_info.m"
      }
#line 996 "mode_info.m"
    {
#line 996 "mode_info.m"
      check_hlds__mode_info__mode_info_set_locked_vars_3_p_0(check_hlds__mode_info__LockedVars_11, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_12, check_hlds__mode_info__STATE_VARIABLE_ModeInfo_13);
    }
#line 986 "mode_info.m"
  }
#line 302 "mode_info.m"
}

#line 299 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_lock_vars_4_p_0(
#line 299 "mode_info.m"
  MR_Word check_hlds__mode_info__Reason_5,
#line 299 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_6,
#line 299 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9,
#line 299 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10)
#line 299 "mode_info.m"
{
#line 982 "mode_info.m"
  {
#line 982 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__LockedVars_8;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 7)));
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 0)));
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 1)));
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 2)));
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 3)));
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 4)));
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 5)));
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 6)));
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 0)));
#line 982 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 1)));
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 2)));
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 3)));
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 4)));
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 5)));
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_47_47;
#line 982 "mode_info.m"
    MR_Word check_hlds__mode_info__V_54_54;

#line 630 "mode_info.m"
    check_hlds__mode_info__LockedVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 6)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 7)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 8)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 9)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 11)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 13)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 14)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 15)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_16_16, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 984 "mode_info.m"
    {
#line 984 "mode_info.m"
      check_hlds__mode_info__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 984 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, 0) = ((MR_Box) (check_hlds__mode_info__Reason_5));
#line 984 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, 1) = ((MR_Box) (check_hlds__mode_info__Vars_6));
#line 984 "mode_info.m"
    }
#line 984 "mode_info.m"
    {
#line 984 "mode_info.m"
      check_hlds__mode_info__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_11_11, 0) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 984 "mode_info.m"
      MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_11_11, 1) = ((MR_Box) (check_hlds__mode_info__LockedVars_8));
#line 984 "mode_info.m"
    }
#line 695 "mode_info.m"
    {
#line 695 "mode_info.m"
      check_hlds__mode_info__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 0) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 1) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 2) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 3) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 4) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 5) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 6) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 7) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 8) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 9) = ((MR_Box) (check_hlds__mode_info__V_32_32));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 10) = ((MR_Box) ((check_hlds__mode_info__V_33_33 | ((((check_hlds__mode_info__V_34_34 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_35_35 << (MR_Integer) 2)))))));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 11) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 12) = ((MR_Box) ((check_hlds__mode_info__V_37_37 | ((check_hlds__mode_info__V_38_38 << (MR_Integer) 1)))));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 13) = ((MR_Box) (check_hlds__mode_info__V_39_39));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 14) = ((MR_Box) (check_hlds__mode_info__V_40_40));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 15) = ((MR_Box) (check_hlds__mode_info__V_41_41));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_54_54, 16) = ((MR_Box) ((check_hlds__mode_info__V_42_42 | ((((check_hlds__mode_info__V_43_43 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_44_44 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_45_45 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_46_46 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_47_47 << (MR_Integer) 5)))))))))))));
#line 695 "mode_info.m"
    }
#line 695 "mode_info.m"
    {
#line 695 "mode_info.m"
      MR_Word base;
#line 695 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 695 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_10 = base;
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 695 "mode_info.m"
    }
#line 982 "mode_info.m"
  }
#line 299 "mode_info.m"
}

#line 296 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_types_of_vars_3_p_0(
#line 296 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_4,
#line 296 "mode_info.m"
  MR_Word check_hlds__mode_info__Vars_5,
#line 296 "mode_info.m"
  MR_Word * check_hlds__mode_info__TypesOfVars_6)
#line 296 "mode_info.m"
{
#line 969 "mode_info.m"
  {
#line 969 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 969 "mode_info.m"
    MR_Word check_hlds__mode_info__VarTypes_7;
#line 969 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 7)));
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
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_4, (MR_Integer) 6)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 0)));
#line 618 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 1)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 2)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;

#line 618 "mode_info.m"
    check_hlds__mode_info__VarTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 3)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 4)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 5)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 6)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 7)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 8)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 9)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 11)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 13)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 14)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 15)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 971 "mode_info.m"
    {
#line 971 "mode_info.m"
      hlds__vartypes__lookup_var_types_3_p_0(check_hlds__mode_info__VarTypes_7, check_hlds__mode_info__Vars_5, check_hlds__mode_info__TypesOfVars_6);
    }
#line 969 "mode_info.m"
  }
#line 296 "mode_info.m"
}

#line 291 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(
#line 291 "mode_info.m"
  MR_Word check_hlds__mode_info__OldLiveVars_4,
#line 291 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_13,
#line 291 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_14)
#line 291 "mode_info.m"
{
#line 926 "mode_info.m"
  {
#line 926 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 926 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeInfo_19_19;
#line 926 "mode_info.m"
    MR_Word check_hlds__mode_info__OldLiveVarsList_6;
#line 926 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 926 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars0_8;
#line 926 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars_9;
#line 926 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars_10;
#line 926 "mode_info.m"
    MR_Word check_hlds__mode_info__DelayInfo0_11;
#line 926 "mode_info.m"
    MR_Word check_hlds__mode_info__DelayInfo_12;
#line 926 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_15_15;
#line 926 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_16_16;
#line 926 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 642 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_31_31;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_47_47;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_48_48;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_49_49;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_50_50;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_51_51;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_52_52;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_53_53;
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_65_65;
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_66_66;
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67;
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68;
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69;
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_70_70;
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_71_71;

#line 927 "mode_info.m"
    {
#line 927 "mode_info.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_info__OldLiveVars_4, &check_hlds__mode_info__OldLiveVarsList_6);
    }
#line 642 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 0)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 1)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 2)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 3)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 4)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 5)));
#line 642 "mode_info.m"
    check_hlds__mode_info__NondetLiveVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 6)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_13, (MR_Integer) 7)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 0)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 1)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 2)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 3)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 4)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 5)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 6)));
#line 642 "mode_info.m"
    check_hlds__mode_info__LiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 7)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 8)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 9)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 11)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 13)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 14)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 15)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_22_22, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 9545 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeInfo_19_19 = (MR_Word) &check_hlds__mode_info_scalar_common_1[0];
#line 930 "mode_info.m"
    {
#line 930 "mode_info.m"
      mercury__bag__det_remove_list_3_p_0(check_hlds__mode_info__TypeInfo_19_19, check_hlds__mode_info__OldLiveVarsList_6, check_hlds__mode_info__LiveVars0_7, &check_hlds__mode_info__LiveVars_9);
    }
#line 931 "mode_info.m"
    {
#line 931 "mode_info.m"
      mercury__bag__det_remove_list_3_p_0(check_hlds__mode_info__TypeInfo_19_19, check_hlds__mode_info__OldLiveVarsList_6, check_hlds__mode_info__NondetLiveVars0_8, &check_hlds__mode_info__NondetLiveVars_10);
    }
#line 932 "mode_info.m"
    {
#line 932 "mode_info.m"
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__mode_info__LiveVars_9, check_hlds__mode_info__STATE_VARIABLE_MI_0_13, &check_hlds__mode_info__STATE_VARIABLE_MI_15_15);
    }
#line 933 "mode_info.m"
    {
#line 933 "mode_info.m"
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__mode_info__NondetLiveVars_10, check_hlds__mode_info__STATE_VARIABLE_MI_15_15, &check_hlds__mode_info__STATE_VARIABLE_MI_16_16);
    }
#line 640 "mode_info.m"
    check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 0)));
#line 640 "mode_info.m"
    check_hlds__mode_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 1)));
#line 640 "mode_info.m"
    check_hlds__mode_info__DelayInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 2)));
#line 640 "mode_info.m"
    check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 3)));
#line 640 "mode_info.m"
    check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 4)));
#line 640 "mode_info.m"
    check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 5)));
#line 640 "mode_info.m"
    check_hlds__mode_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 6)));
#line 640 "mode_info.m"
    check_hlds__mode_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_16_16, (MR_Integer) 7)));
#line 938 "mode_info.m"
    {
#line 938 "mode_info.m"
      check_hlds__delay_info__delay_info_bind_var_list_3_p_0(check_hlds__mode_info__OldLiveVarsList_6, check_hlds__mode_info__DelayInfo0_11, &check_hlds__mode_info__DelayInfo_12);
    }
#line 939 "mode_info.m"
    {
#line 939 "mode_info.m"
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__mode_info__DelayInfo_12, check_hlds__mode_info__STATE_VARIABLE_MI_16_16, check_hlds__mode_info__STATE_VARIABLE_MI_14);
    }
#line 926 "mode_info.m"
  }
#line 291 "mode_info.m"
}

#line 289 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_add_live_vars_3_p_0(
#line 289 "mode_info.m"
  MR_Word check_hlds__mode_info__NewLiveVars_4,
#line 289 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_11,
#line 289 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_12)
#line 289 "mode_info.m"
{
#line 917 "mode_info.m"
  {
#line 917 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 917 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeInfo_16_16;
#line 917 "mode_info.m"
    MR_Word check_hlds__mode_info__NewLiveVarsList_6;
#line 917 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars0_7;
#line 917 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars0_8;
#line 917 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVars_9;
#line 917 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVars_10;
#line 917 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_13_13;
#line 917 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 642 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_28_28;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_44_44;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_45_45;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_46_46;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_47_47;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_48_48;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_49_49;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_50_50;

#line 918 "mode_info.m"
    {
#line 918 "mode_info.m"
      parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_info__NewLiveVars_4, &check_hlds__mode_info__NewLiveVarsList_6);
    }
#line 642 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 0)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 1)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 2)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 3)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 4)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 5)));
#line 642 "mode_info.m"
    check_hlds__mode_info__NondetLiveVars0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 6)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_11, (MR_Integer) 7)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 0)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 1)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 2)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 3)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 4)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 5)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 6)));
#line 642 "mode_info.m"
    check_hlds__mode_info__LiveVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 7)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 8)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 9)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 11)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 13)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 14)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 15)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_19_19, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 9761 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeInfo_16_16 = (MR_Word) &check_hlds__mode_info_scalar_common_1[0];
#line 921 "mode_info.m"
    {
#line 921 "mode_info.m"
      mercury__bag__insert_list_3_p_0(check_hlds__mode_info__TypeInfo_16_16, check_hlds__mode_info__NewLiveVarsList_6, check_hlds__mode_info__LiveVars0_7, &check_hlds__mode_info__LiveVars_9);
    }
#line 922 "mode_info.m"
    {
#line 922 "mode_info.m"
      mercury__bag__insert_list_3_p_0(check_hlds__mode_info__TypeInfo_16_16, check_hlds__mode_info__NewLiveVarsList_6, check_hlds__mode_info__NondetLiveVars0_8, &check_hlds__mode_info__NondetLiveVars_10);
    }
#line 923 "mode_info.m"
    {
#line 923 "mode_info.m"
      check_hlds__mode_info__mode_info_set_live_vars_3_p_0(check_hlds__mode_info__LiveVars_9, check_hlds__mode_info__STATE_VARIABLE_MI_0_11, &check_hlds__mode_info__STATE_VARIABLE_MI_13_13);
    }
#line 924 "mode_info.m"
    {
#line 924 "mode_info.m"
      check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(check_hlds__mode_info__NondetLiveVars_10, check_hlds__mode_info__STATE_VARIABLE_MI_13_13, check_hlds__mode_info__STATE_VARIABLE_MI_12);
    }
#line 917 "mode_info.m"
  }
#line 289 "mode_info.m"
}

#line 276 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(
#line 276 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 276 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 276 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 276 "mode_info.m"
{
#line 769 "mode_info.m"
  {
#line 769 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 769 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 769 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 769 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 769 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 769 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 769 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 769 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 769 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 769 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 770 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 770 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);

#line 770 "mode_info.m"
    {
#line 770 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_30_30 << (MR_Integer) 2)))))));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)))));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 16) = ((MR_Box) ((check_hlds__mode_info__V_37_37 | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 4)) | ((check_hlds__mode_info__X_4 << (MR_Integer) 5)))))))))))));
#line 770 "mode_info.m"
    }
#line 770 "mode_info.m"
    {
#line 770 "mode_info.m"
      MR_Word base;
#line 770 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 770 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 770 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 770 "mode_info.m"
    }
#line 769 "mode_info.m"
  }
#line 276 "mode_info.m"
}

#line 274 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_make_ground_terms_unique_3_p_0(
#line 274 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 274 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 274 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 274 "mode_info.m"
{
#line 767 "mode_info.m"
  {
#line 767 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 767 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 767 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 767 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 767 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 767 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 767 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 767 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 767 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 767 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 768 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 768 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 768 "mode_info.m"
    {
#line 768 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_30_30 << (MR_Integer) 2)))))));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)))));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 16) = ((MR_Box) ((check_hlds__mode_info__V_37_37 | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 3)) | ((((check_hlds__mode_info__X_4 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_42_42 << (MR_Integer) 5)))))))))))));
#line 768 "mode_info.m"
    }
#line 768 "mode_info.m"
    {
#line 768 "mode_info.m"
      MR_Word base;
#line 768 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 768 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 768 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 768 "mode_info.m"
    }
#line 767 "mode_info.m"
  }
#line 274 "mode_info.m"
}

#line 272 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_had_from_ground_term_3_p_0(
#line 272 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 272 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 272 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 272 "mode_info.m"
{
#line 764 "mode_info.m"
  {
#line 764 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 760 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 760 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;

#line 760 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 760 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 760 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 760 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 764 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 764 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 764 "mode_info.m"
    else
#line 765 "mode_info.m"
      {
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12;
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 765 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_61_61 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_65_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)));
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_70_70 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 765 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);

#line 765 "mode_info.m"
        {
#line 765 "mode_info.m"
          check_hlds__mode_info__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 0) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 1) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 2) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 3) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 4) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 5) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 6) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 7) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 8) = ((MR_Box) (check_hlds__mode_info__V_59_59));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) (check_hlds__mode_info__V_60_60));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 10) = ((MR_Box) ((check_hlds__mode_info__V_61_61 | ((((check_hlds__mode_info__V_62_62 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_63_63 << (MR_Integer) 2)))))));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 11) = ((MR_Box) (check_hlds__mode_info__V_64_64));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 12) = ((MR_Box) ((check_hlds__mode_info__V_65_65 | ((check_hlds__mode_info__V_66_66 << (MR_Integer) 1)))));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 13) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 14) = ((MR_Box) (check_hlds__mode_info__V_68_68));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) (check_hlds__mode_info__V_69_69));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 16) = ((MR_Box) ((check_hlds__mode_info__V_70_70 | ((((check_hlds__mode_info__V_71_71 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 2)) | ((((check_hlds__mode_info__X_4 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_74_74 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_75_75 << (MR_Integer) 5)))))))))))));
#line 765 "mode_info.m"
        }
#line 765 "mode_info.m"
        {
#line 765 "mode_info.m"
          MR_Word base;
#line 765 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 765 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_47_47));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 765 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 765 "mode_info.m"
        }
#line 765 "mode_info.m"
      }
#line 764 "mode_info.m"
  }
#line 272 "mode_info.m"
}

#line 270 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_in_from_ground_term_3_p_0(
#line 270 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 270 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 270 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 270 "mode_info.m"
{
#line 756 "mode_info.m"
  {
#line 756 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 756 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 756 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 756 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 756 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 756 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 756 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 756 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 756 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 756 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 757 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 757 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 757 "mode_info.m"
    {
#line 757 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_30_30 << (MR_Integer) 2)))))));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)))));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 16) = ((MR_Box) ((check_hlds__mode_info__V_37_37 | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 1)) | ((((check_hlds__mode_info__X_4 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_42_42 << (MR_Integer) 5)))))))))))));
#line 757 "mode_info.m"
    }
#line 757 "mode_info.m"
    {
#line 757 "mode_info.m"
      MR_Word base;
#line 757 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 757 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 757 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 757 "mode_info.m"
    }
#line 756 "mode_info.m"
  }
#line 270 "mode_info.m"
}

#line 268 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_may_init_solver_vars_3_p_0(
#line 268 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 268 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 268 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 268 "mode_info.m"
{
#line 753 "mode_info.m"
  {
#line 753 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 749 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 749 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;

#line 749 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 749 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));
#line 749 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 749 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 749 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 749 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 749 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));
#line 749 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 749 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 749 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 749 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 749 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 749 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 749 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 753 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 753 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 753 "mode_info.m"
    else
#line 754 "mode_info.m"
      {
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12;
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 754 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_61_61 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_65_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)));
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_70_70 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 754 "mode_info.m"
        MR_Word check_hlds__mode_info__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);

#line 754 "mode_info.m"
        {
#line 754 "mode_info.m"
          check_hlds__mode_info__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 0) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 1) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 2) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 3) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 4) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 5) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 6) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 7) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 8) = ((MR_Box) (check_hlds__mode_info__V_59_59));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) (check_hlds__mode_info__V_60_60));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 10) = ((MR_Box) ((check_hlds__mode_info__V_61_61 | ((((check_hlds__mode_info__V_62_62 << (MR_Integer) 1)) | ((check_hlds__mode_info__X_4 << (MR_Integer) 2)))))));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 11) = ((MR_Box) (check_hlds__mode_info__V_64_64));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 12) = ((MR_Box) ((check_hlds__mode_info__V_65_65 | ((check_hlds__mode_info__V_66_66 << (MR_Integer) 1)))));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 13) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 14) = ((MR_Box) (check_hlds__mode_info__V_68_68));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) (check_hlds__mode_info__V_69_69));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 16) = ((MR_Box) ((check_hlds__mode_info__V_70_70 | ((((check_hlds__mode_info__V_71_71 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_73_73 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_74_74 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_75_75 << (MR_Integer) 5)))))))))))));
#line 754 "mode_info.m"
        }
#line 754 "mode_info.m"
        {
#line 754 "mode_info.m"
          MR_Word base;
#line 754 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 754 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_47_47));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 754 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 754 "mode_info.m"
        }
#line 754 "mode_info.m"
      }
#line 753 "mode_info.m"
  }
#line 268 "mode_info.m"
}

#line 266 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_checking_extra_goals_3_p_0(
#line 266 "mode_info.m"
  MR_Word check_hlds__mode_info__Checking_4,
#line 266 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_7,
#line 266 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_8)
#line 266 "mode_info.m"
{
#line 1012 "mode_info.m"
  {
#line 1012 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 1012 "mode_info.m"
    MR_Word check_hlds__mode_info__Checking0_6;
#line 1012 "mode_info.m"
    MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 7)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 0)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 1)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 2)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 3)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 4)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 5)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 6)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 0)));
#line 662 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 1)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 2)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 3)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 4)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 5)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 6)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 7)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 8)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 9)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_75_75 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_77_77 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 11)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_79_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_80_80;
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_81_81;
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_82_82;
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_83_83;
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_84_84;
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_85_85;
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_86_86;
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_87_87;
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_88_88;

#line 662 "mode_info.m"
    check_hlds__mode_info__Checking0_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 662 "mode_info.m"
    check_hlds__mode_info__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 13)));
#line 662 "mode_info.m"
    check_hlds__mode_info__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 14)));
#line 662 "mode_info.m"
    check_hlds__mode_info__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 15)));
#line 662 "mode_info.m"
    check_hlds__mode_info__V_83_83 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 662 "mode_info.m"
    check_hlds__mode_info__V_84_84 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 662 "mode_info.m"
    check_hlds__mode_info__V_85_85 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 662 "mode_info.m"
    check_hlds__mode_info__V_86_86 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 662 "mode_info.m"
    check_hlds__mode_info__V_87_87 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 662 "mode_info.m"
    check_hlds__mode_info__V_88_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_57_57, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1015 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__Checking0_6 == (MR_Integer) 1);
#line 1015 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 1016 "mode_info.m"
      check_hlds__mode_info__succeeded = (check_hlds__mode_info__Checking_4 == (MR_Integer) 1);
#line 1022 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 1020 "mode_info.m"
      {
#line 1020 "mode_info.m"
        {
#line 1020 "mode_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_set_checking_extra_goals\'/3", (MR_String) "rechecking extra goals adds more extra goals");
#line 1020 "mode_info.m"
          return;
        }
#line 1020 "mode_info.m"
      }
#line 1022 "mode_info.m"
    else
#line 1023 "mode_info.m"
      {
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 7)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_14_14;
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 0)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 1)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 2)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 3)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 4)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 5)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_7, (MR_Integer) 6)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 0)));
#line 1023 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 1)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 2)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 3)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 4)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 5)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 6)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 7)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 8)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 9)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 11)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 13)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 14)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 15)));
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 1023 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_13_13, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 1023 "mode_info.m"
        {
#line 1023 "mode_info.m"
          check_hlds__mode_info__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 0) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 1) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 2) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 3) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 4) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 5) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 6) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 7) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 8) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 9) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 10) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_34_34 << (MR_Integer) 2)))))));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 11) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 12) = ((MR_Box) ((check_hlds__mode_info__V_36_36 | ((check_hlds__mode_info__Checking_4 << (MR_Integer) 1)))));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 13) = ((MR_Box) (check_hlds__mode_info__V_38_38));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 14) = ((MR_Box) (check_hlds__mode_info__V_39_39));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 15) = ((MR_Box) (check_hlds__mode_info__V_40_40));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_14_14, 16) = ((MR_Box) ((check_hlds__mode_info__V_41_41 | ((((check_hlds__mode_info__V_42_42 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_43_43 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_44_44 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_45_45 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_46_46 << (MR_Integer) 5)))))))))))));
#line 1023 "mode_info.m"
        }
#line 1023 "mode_info.m"
        {
#line 1023 "mode_info.m"
          MR_Word base;
#line 1023 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1023 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_8 = base;
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 1023 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 1023 "mode_info.m"
        }
#line 1023 "mode_info.m"
      }
#line 1012 "mode_info.m"
  }
#line 266 "mode_info.m"
}

#line 264 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_may_change_called_proc_3_p_0(
#line 264 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 264 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 264 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 264 "mode_info.m"
{
#line 745 "mode_info.m"
  {
#line 745 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 745 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 745 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 745 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 745 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 745 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 745 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 745 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 745 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 745 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 746 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 746 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 746 "mode_info.m"
    {
#line 746 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((((check_hlds__mode_info__X_4 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_30_30 << (MR_Integer) 2)))))));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)))));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 16) = ((MR_Box) ((check_hlds__mode_info__V_37_37 | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_42_42 << (MR_Integer) 5)))))))))))));
#line 746 "mode_info.m"
    }
#line 746 "mode_info.m"
    {
#line 746 "mode_info.m"
      MR_Word base;
#line 746 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 746 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 746 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 746 "mode_info.m"
    }
#line 745 "mode_info.m"
  }
#line 264 "mode_info.m"
}

#line 262 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_how_to_check_3_p_0(
#line 262 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 262 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 262 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 262 "mode_info.m"
{
#line 743 "mode_info.m"
  {
#line 743 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 743 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 743 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 743 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 743 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 743 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 743 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 743 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 743 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 743 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 744 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 744 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);

#line 744 "mode_info.m"
    {
#line 744 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) ((check_hlds__mode_info__X_4 | ((((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_30_30 << (MR_Integer) 2)))))));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)))));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 16) = ((MR_Box) ((check_hlds__mode_info__V_37_37 | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_42_42 << (MR_Integer) 5)))))))))))));
#line 744 "mode_info.m"
    }
#line 744 "mode_info.m"
    {
#line 744 "mode_info.m"
      MR_Word base;
#line 744 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 744 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 744 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 744 "mode_info.m"
    }
#line 743 "mode_info.m"
  }
#line 262 "mode_info.m"
}

#line 260 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(
#line 260 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 260 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 260 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 260 "mode_info.m"
{
#line 740 "mode_info.m"
  {
#line 740 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 737 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 737 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;

#line 737 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 737 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 737 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 737 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 737 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));
#line 737 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 737 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 737 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 737 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 737 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 737 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 737 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 740 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 740 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 740 "mode_info.m"
    else
#line 741 "mode_info.m"
      {
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_12_12;
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 741 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_61_61 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)));
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_70_70 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 741 "mode_info.m"
        MR_Word check_hlds__mode_info__V_65_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)))) & (MR_Integer) 1);

#line 741 "mode_info.m"
        {
#line 741 "mode_info.m"
          check_hlds__mode_info__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 0) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 1) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 2) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 3) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 4) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 5) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 6) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 7) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 8) = ((MR_Box) (check_hlds__mode_info__V_59_59));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) (check_hlds__mode_info__V_60_60));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 10) = ((MR_Box) ((check_hlds__mode_info__V_61_61 | ((((check_hlds__mode_info__V_62_62 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_63_63 << (MR_Integer) 2)))))));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 11) = ((MR_Box) (check_hlds__mode_info__V_64_64));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 12) = ((MR_Box) ((check_hlds__mode_info__X_4 | ((check_hlds__mode_info__V_66_66 << (MR_Integer) 1)))));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 13) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 14) = ((MR_Box) (check_hlds__mode_info__V_68_68));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) (check_hlds__mode_info__V_69_69));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 16) = ((MR_Box) ((check_hlds__mode_info__V_70_70 | ((((check_hlds__mode_info__V_71_71 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_73_73 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_74_74 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_75_75 << (MR_Integer) 5)))))))))))));
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_47_47));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 741 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 741 "mode_info.m"
        }
#line 741 "mode_info.m"
      }
#line 740 "mode_info.m"
  }
#line 260 "mode_info.m"
}

#line 258 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_parallel_vars_3_p_0(
#line 258 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 258 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 258 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 258 "mode_info.m"
{
#line 733 "mode_info.m"
  {
#line 733 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 733 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 733 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 733 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 733 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 733 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 733 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 733 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 733 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 733 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 734 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 734 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));

#line 734 "mode_info.m"
    {
#line 734 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_30_30 << (MR_Integer) 2)))))));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)))));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 16) = ((MR_Box) ((check_hlds__mode_info__V_37_37 | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_42_42 << (MR_Integer) 5)))))))))))));
#line 734 "mode_info.m"
    }
#line 734 "mode_info.m"
    {
#line 734 "mode_info.m"
      MR_Word base;
#line 734 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 734 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 734 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 734 "mode_info.m"
    }
#line 733 "mode_info.m"
  }
#line 258 "mode_info.m"
}

#line 256 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_last_checkpoint_insts_3_p_0(
#line 256 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 256 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 256 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 256 "mode_info.m"
{
#line 731 "mode_info.m"
  {
#line 731 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 731 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 732 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 732 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));

#line 732 "mode_info.m"
    {
#line 732 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_30_30 << (MR_Integer) 2)))))));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)))));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 16) = ((MR_Box) ((check_hlds__mode_info__V_37_37 | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_42_42 << (MR_Integer) 5)))))))))))));
#line 732 "mode_info.m"
    }
#line 732 "mode_info.m"
    {
#line 732 "mode_info.m"
      MR_Word base;
#line 732 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 732 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 732 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 732 "mode_info.m"
    }
#line 731 "mode_info.m"
  }
#line 256 "mode_info.m"
}

#line 254 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(
#line 254 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 254 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 254 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 254 "mode_info.m"
{
#line 728 "mode_info.m"
  {
#line 728 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 726 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));

#line 726 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 728 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 728 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 728 "mode_info.m"
    else
#line 729 "mode_info.m"
      {
#line 729 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 729 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 729 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 729 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 729 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 729 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 729 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 729 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));

#line 729 "mode_info.m"
        {
#line 729 "mode_info.m"
          MR_Word base;
#line 729 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 729 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 729 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 729 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 729 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 729 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 729 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 729 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 729 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 729 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 729 "mode_info.m"
        }
#line 729 "mode_info.m"
      }
#line 728 "mode_info.m"
  }
#line 254 "mode_info.m"
}

#line 252 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_live_vars_3_p_0(
#line 252 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 252 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 252 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 252 "mode_info.m"
{
#line 723 "mode_info.m"
  {
#line 723 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 723 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 723 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 723 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 723 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 723 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 723 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 723 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 723 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 723 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 724 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 724 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));

#line 724 "mode_info.m"
    {
#line 724 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_30_30 << (MR_Integer) 2)))))));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)))));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 16) = ((MR_Box) ((check_hlds__mode_info__V_37_37 | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_42_42 << (MR_Integer) 5)))))))))))));
#line 724 "mode_info.m"
    }
#line 724 "mode_info.m"
    {
#line 724 "mode_info.m"
      MR_Word base;
#line 724 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 724 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 724 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 724 "mode_info.m"
    }
#line 723 "mode_info.m"
  }
#line 252 "mode_info.m"
}

#line 250 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_delay_info_3_p_0(
#line 250 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 250 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 250 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 250 "mode_info.m"
{
#line 720 "mode_info.m"
  {
#line 720 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 718 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));

#line 718 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 720 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 720 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 720 "mode_info.m"
    else
#line 721 "mode_info.m"
      {
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 721 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));

#line 721 "mode_info.m"
        {
#line 721 "mode_info.m"
          MR_Word base;
#line 721 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 721 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 721 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 721 "mode_info.m"
        }
#line 721 "mode_info.m"
      }
#line 720 "mode_info.m"
  }
#line 250 "mode_info.m"
}

#line 248 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_var_types_3_p_0(
#line 248 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 248 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 248 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 248 "mode_info.m"
{
#line 684 "mode_info.m"
  {
#line 684 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 684 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 685 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 685 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));

#line 685 "mode_info.m"
    {
#line 685 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_30_30 << (MR_Integer) 2)))))));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)))));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 16) = ((MR_Box) ((check_hlds__mode_info__V_37_37 | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_42_42 << (MR_Integer) 5)))))))))))));
#line 685 "mode_info.m"
    }
#line 685 "mode_info.m"
    {
#line 685 "mode_info.m"
      MR_Word base;
#line 685 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 685 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 685 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 685 "mode_info.m"
    }
#line 684 "mode_info.m"
  }
#line 248 "mode_info.m"
}

#line 246 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_varset_3_p_0(
#line 246 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 246 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 246 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 246 "mode_info.m"
{
#line 682 "mode_info.m"
  {
#line 682 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 682 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 683 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 683 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));

#line 683 "mode_info.m"
    {
#line 683 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_30_30 << (MR_Integer) 2)))))));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)))));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 16) = ((MR_Box) ((check_hlds__mode_info__V_37_37 | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_42_42 << (MR_Integer) 5)))))))))))));
#line 683 "mode_info.m"
    }
#line 683 "mode_info.m"
    {
#line 683 "mode_info.m"
      MR_Word base;
#line 683 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 683 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 683 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 683 "mode_info.m"
    }
#line 682 "mode_info.m"
  }
#line 246 "mode_info.m"
}

#line 244 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_p_0(
#line 244 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 244 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 244 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 244 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 716 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 716 "mode_info.m"
    {
#line 716 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_30_30 << (MR_Integer) 2)))))));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)))));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 716 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 16) = ((MR_Box) ((check_hlds__mode_info__V_37_37 | ((((check_hlds__mode_info__X_4 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_42_42 << (MR_Integer) 5)))))))))))));
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
#line 244 "mode_info.m"
}

#line 242 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_need_to_requantify_3_p_0(
#line 242 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 242 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 242 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 242 "mode_info.m"
{
#line 712 "mode_info.m"
  {
#line 712 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 708 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;
#line 708 "mode_info.m"
    MR_Word check_hlds__mode_info__V_43_43;

#line 708 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 708 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 708 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 708 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 708 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 708 "mode_info.m"
    check_hlds__mode_info__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 708 "mode_info.m"
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
        MR_Word check_hlds__mode_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 713 "mode_info.m"
        MR_Integer check_hlds__mode_info__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_61_61 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_65_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)));
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 713 "mode_info.m"
        MR_Word check_hlds__mode_info__V_70_70 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) & (MR_Integer) 1);

#line 713 "mode_info.m"
        {
#line 713 "mode_info.m"
          check_hlds__mode_info__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 0) = ((MR_Box) (check_hlds__mode_info__V_51_51));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 1) = ((MR_Box) (check_hlds__mode_info__V_52_52));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 2) = ((MR_Box) (check_hlds__mode_info__V_53_53));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 3) = ((MR_Box) (check_hlds__mode_info__V_54_54));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 4) = ((MR_Box) (check_hlds__mode_info__V_55_55));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 5) = ((MR_Box) (check_hlds__mode_info__V_56_56));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 6) = ((MR_Box) (check_hlds__mode_info__V_57_57));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 7) = ((MR_Box) (check_hlds__mode_info__V_58_58));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 8) = ((MR_Box) (check_hlds__mode_info__V_59_59));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 9) = ((MR_Box) (check_hlds__mode_info__V_60_60));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 10) = ((MR_Box) ((check_hlds__mode_info__V_61_61 | ((((check_hlds__mode_info__V_62_62 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_63_63 << (MR_Integer) 2)))))));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 11) = ((MR_Box) (check_hlds__mode_info__V_64_64));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 12) = ((MR_Box) ((check_hlds__mode_info__V_65_65 | ((check_hlds__mode_info__V_66_66 << (MR_Integer) 1)))));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 13) = ((MR_Box) (check_hlds__mode_info__V_67_67));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 14) = ((MR_Box) (check_hlds__mode_info__V_68_68));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 15) = ((MR_Box) (check_hlds__mode_info__V_69_69));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_12_12, 16) = ((MR_Box) ((check_hlds__mode_info__X_4 | ((((check_hlds__mode_info__V_71_71 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_72_72 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_73_73 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_74_74 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_75_75 << (MR_Integer) 5)))))))))))));
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
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_44_44));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_45_45));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_46_46));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_47_47));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_48_48));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_49_49));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_50_50));
#line 713 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 713 "mode_info.m"
        }
#line 713 "mode_info.m"
      }
#line 712 "mode_info.m"
  }
#line 242 "mode_info.m"
}

#line 240 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_warnings_3_p_0(
#line 240 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 240 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 240 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 240 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 705 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));

#line 705 "mode_info.m"
    {
#line 705 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_30_30 << (MR_Integer) 2)))))));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)))));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 705 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 16) = ((MR_Box) ((check_hlds__mode_info__V_37_37 | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_42_42 << (MR_Integer) 5)))))))))))));
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
#line 240 "mode_info.m"
}

#line 238 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_errors_3_p_0(
#line 238 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 238 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 238 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 238 "mode_info.m"
{
#line 701 "mode_info.m"
  {
#line 701 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 699 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
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
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 702 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));

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
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 702 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 702 "mode_info.m"
        }
#line 702 "mode_info.m"
      }
#line 701 "mode_info.m"
  }
#line 238 "mode_info.m"
}

#line 236 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_instvarset_3_p_0(
#line 236 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 236 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 236 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 236 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 697 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));

#line 697 "mode_info.m"
    {
#line 697 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_30_30 << (MR_Integer) 2)))))));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)))));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 697 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 16) = ((MR_Box) ((check_hlds__mode_info__V_37_37 | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_42_42 << (MR_Integer) 5)))))))))))));
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
#line 236 "mode_info.m"
}

#line 234 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_locked_vars_3_p_0(
#line 234 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 234 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 234 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 234 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 695 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));

#line 695 "mode_info.m"
    {
#line 695 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_30_30 << (MR_Integer) 2)))))));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)))));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 695 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 16) = ((MR_Box) ((check_hlds__mode_info__V_37_37 | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_42_42 << (MR_Integer) 5)))))))))))));
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
#line 234 "mode_info.m"
}

#line 232 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_instmap_3_p_0(
#line 232 "mode_info.m"
  MR_Word check_hlds__mode_info__InstMap_4,
#line 232 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_9,
#line 232 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_10)
#line 232 "mode_info.m"
{
#line 895 "mode_info.m"
  {
#line 895 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 895 "mode_info.m"
    MR_Word check_hlds__mode_info__InstMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 1)));
#line 895 "mode_info.m"
    MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_11_11;
#line 895 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 0)));
#line 895 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 2)));
#line 895 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 3)));
#line 895 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 4)));
#line 895 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 5)));
#line 895 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 6)));
#line 895 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_9, (MR_Integer) 7)));

#line 897 "mode_info.m"
    {
#line 897 "mode_info.m"
      check_hlds__mode_info__STATE_VARIABLE_MI_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 897 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 0) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 897 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 1) = ((MR_Box) (check_hlds__mode_info__InstMap_4));
#line 897 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 2) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 897 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 3) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 897 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 4) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 897 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 5) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 897 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 6) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 897 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, 7) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 897 "mode_info.m"
    }
#line 899 "mode_info.m"
    {
#line 899 "mode_info.m"
      check_hlds__mode_info__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__mode_info__InstMap_4);
    }
#line 899 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 900 "mode_info.m"
      {
#line 900 "mode_info.m"
        check_hlds__mode_info__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__mode_info__InstMap0_6);
      }
#line 905 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 902 "mode_info.m"
      {
#line 902 "mode_info.m"
        MR_Word check_hlds__mode_info__DelayInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 2)));
#line 902 "mode_info.m"
        MR_Word check_hlds__mode_info__DelayInfo_8;
#line 640 "mode_info.m"
        MR_Word check_hlds__mode_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 0)));
#line 640 "mode_info.m"
        MR_Word check_hlds__mode_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 1)));
#line 640 "mode_info.m"
        MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 3)));
#line 640 "mode_info.m"
        MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 4)));
#line 640 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 5)));
#line 640 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 6)));
#line 640 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_11_11, (MR_Integer) 7)));

#line 903 "mode_info.m"
        {
#line 903 "mode_info.m"
          check_hlds__delay_info__delay_info_bind_all_vars_2_p_0(check_hlds__mode_info__DelayInfo0_7, &check_hlds__mode_info__DelayInfo_8);
        }
#line 904 "mode_info.m"
        {
#line 904 "mode_info.m"
          check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__mode_info__DelayInfo_8, check_hlds__mode_info__STATE_VARIABLE_MI_11_11, check_hlds__mode_info__STATE_VARIABLE_MI_10);
        }
#line 902 "mode_info.m"
      }
#line 905 "mode_info.m"
    else
#line 905 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_10 = check_hlds__mode_info__STATE_VARIABLE_MI_11_11;
#line 895 "mode_info.m"
  }
#line 232 "mode_info.m"
}

#line 230 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_unset_call_context_2_p_0(
#line 230 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_4,
#line 230 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_5)
#line 230 "mode_info.m"
{
#line 890 "mode_info.m"
  {
#line 890 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 0)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 1)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 2)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 3)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 5)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 6)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 7)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_4, (MR_Integer) 4)));

#line 693 "mode_info.m"
    {
#line 693 "mode_info.m"
      MR_Word base;
#line 693 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 693 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_5 = base;
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 693 "mode_info.m"
    }
#line 890 "mode_info.m"
  }
#line 230 "mode_info.m"
}

#line 228 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(
#line 228 "mode_info.m"
  MR_Integer check_hlds__mode_info__ArgNum_4,
#line 228 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11,
#line 228 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12)
#line 228 "mode_info.m"
{
#line 873 "mode_info.m"
  {
#line 873 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 873 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 4)));
#line 873 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 0)));
#line 873 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 1)));
#line 873 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 2)));
#line 873 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 3)));
#line 873 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 5)));
#line 873 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 6)));
#line 873 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 7)));

#line 879 "mode_info.m"
#line 879 "mode_info.m"
    switch (MR_tag((MR_Word) check_hlds__mode_info__ModeContext0_6)) {
#line 879 "mode_info.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 879 "mode_info.m"
      case (MR_Integer) 0:
#line 886 "mode_info.m"
        {
#line 887 "mode_info.m"
          {
#line 887 "mode_info.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.mode_info", (MR_String) "predicate \140check_hlds.mode_info.mode_info_set_call_arg_context\'/3", (MR_String) "uninitialized");
#line 887 "mode_info.m"
            return;
          }
#line 886 "mode_info.m"
        }
#line 879 "mode_info.m"
        break;
#line 879 "mode_info.m"
      case (MR_Integer) 1:
#line 876 "mode_info.m"
        {
#line 876 "mode_info.m"
          MR_Word check_hlds__mode_info__CallId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__ModeContext0_6, (MR_Integer) 0)));
#line 876 "mode_info.m"
          MR_Word check_hlds__mode_info__V_16_16;
#line 876 "mode_info.m"
          MR_Integer check_hlds__mode_info__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__ModeContext0_6, (MR_Integer) 1)));

#line 877 "mode_info.m"
          {
#line 877 "mode_info.m"
            check_hlds__mode_info__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 877 "mode_info.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_16_16, 0) = ((MR_Box) (check_hlds__mode_info__CallId_7));
#line 877 "mode_info.m"
            MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_16_16, 1) = ((MR_Box) (check_hlds__mode_info__ArgNum_4));
#line 877 "mode_info.m"
          }
#line 693 "mode_info.m"
          {
#line 693 "mode_info.m"
            MR_Word base;
#line 693 "mode_info.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 693 "mode_info.m"
            *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12 = base;
#line 693 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 693 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 693 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 693 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 693 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 693 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 693 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 693 "mode_info.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 693 "mode_info.m"
          }
#line 876 "mode_info.m"
        }
#line 879 "mode_info.m"
        break;
#line 879 "mode_info.m"
      case (MR_Integer) 2:
#line 880 "mode_info.m"
        *check_hlds__mode_info__STATE_VARIABLE_ModeInfo_12 = check_hlds__mode_info__STATE_VARIABLE_ModeInfo_0_11;
#line 879 "mode_info.m"
        break;
#line 879 "mode_info.m"
    }
#line 873 "mode_info.m"
  }
#line 228 "mode_info.m"
}

#line 226 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_call_context_3_p_0(
#line 226 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadVar__1_1,
#line 226 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_2,
#line 226 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_3)
#line 226 "mode_info.m"
{
#line 868 "mode_info.m"
  {
#line 868 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;

#line 868 "mode_info.m"
    if (((MR_tag((MR_Word) check_hlds__mode_info__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 870 "mode_info.m"
      {
#line 870 "mode_info.m"
        MR_Word check_hlds__mode_info__CallId_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 870 "mode_info.m"
        MR_Word check_hlds__mode_info__V_15_15;
#line 693 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23;
#line 693 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24;
#line 693 "mode_info.m"
        MR_Word check_hlds__mode_info__V_25_25;
#line 693 "mode_info.m"
        MR_Word check_hlds__mode_info__V_26_26;
#line 693 "mode_info.m"
        MR_Word check_hlds__mode_info__V_28_28;
#line 693 "mode_info.m"
        MR_Word check_hlds__mode_info__V_29_29;
#line 693 "mode_info.m"
        MR_Word check_hlds__mode_info__V_30_30;
#line 693 "mode_info.m"
        MR_Word check_hlds__mode_info__V_27_27;

#line 871 "mode_info.m"
        {
#line 871 "mode_info.m"
          check_hlds__mode_info__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "mode_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_15_15, 0) = ((MR_Box) (check_hlds__mode_info__CallId_11));
#line 871 "mode_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_info__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 871 "mode_info.m"
        }
#line 693 "mode_info.m"
        check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 0)));
#line 693 "mode_info.m"
        check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 1)));
#line 693 "mode_info.m"
        check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 2)));
#line 693 "mode_info.m"
        check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 3)));
#line 693 "mode_info.m"
        check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 4)));
#line 693 "mode_info.m"
        check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 5)));
#line 693 "mode_info.m"
        check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 6)));
#line 693 "mode_info.m"
        check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 7)));
#line 693 "mode_info.m"
        {
#line 693 "mode_info.m"
          MR_Word base;
#line 693 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 693 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_3 = base;
#line 693 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 693 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 693 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 693 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 693 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 693 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_28_28));
#line 693 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_29_29));
#line 693 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_30_30));
#line 693 "mode_info.m"
        }
#line 870 "mode_info.m"
      }
#line 868 "mode_info.m"
    else
#line 868 "mode_info.m"
      {
#line 868 "mode_info.m"
        MR_Word check_hlds__mode_info__UnifyContext_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__HeadVar__1_1, (MR_Integer) 0)));
#line 868 "mode_info.m"
        MR_Word check_hlds__mode_info__V_8_8;
#line 693 "mode_info.m"
        MR_Word check_hlds__mode_info__V_36_36;
#line 693 "mode_info.m"
        MR_Word check_hlds__mode_info__V_37_37;
#line 693 "mode_info.m"
        MR_Word check_hlds__mode_info__V_38_38;
#line 693 "mode_info.m"
        MR_Word check_hlds__mode_info__V_39_39;
#line 693 "mode_info.m"
        MR_Word check_hlds__mode_info__V_41_41;
#line 693 "mode_info.m"
        MR_Word check_hlds__mode_info__V_42_42;
#line 693 "mode_info.m"
        MR_Word check_hlds__mode_info__V_43_43;
#line 693 "mode_info.m"
        MR_Word check_hlds__mode_info__V_40_40;

#line 869 "mode_info.m"
        {
#line 869 "mode_info.m"
          check_hlds__mode_info__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "mode_info.m"
          MR_hl_field(MR_mktag(2), check_hlds__mode_info__V_8_8, 0) = ((MR_Box) (check_hlds__mode_info__UnifyContext_4));
#line 869 "mode_info.m"
          MR_hl_field(MR_mktag(2), check_hlds__mode_info__V_8_8, 1) = ((MR_Box) ((MR_Integer) 0));
#line 869 "mode_info.m"
        }
#line 693 "mode_info.m"
        check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 0)));
#line 693 "mode_info.m"
        check_hlds__mode_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 1)));
#line 693 "mode_info.m"
        check_hlds__mode_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 2)));
#line 693 "mode_info.m"
        check_hlds__mode_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 3)));
#line 693 "mode_info.m"
        check_hlds__mode_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 4)));
#line 693 "mode_info.m"
        check_hlds__mode_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 5)));
#line 693 "mode_info.m"
        check_hlds__mode_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 6)));
#line 693 "mode_info.m"
        check_hlds__mode_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_2, (MR_Integer) 7)));
#line 693 "mode_info.m"
        {
#line 693 "mode_info.m"
          MR_Word base;
#line 693 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 693 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_3 = base;
#line 693 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 693 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_37_37));
#line 693 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_38_38));
#line 693 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_39_39));
#line 693 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_8_8));
#line 693 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_41_41));
#line 693 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_42_42));
#line 693 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_43_43));
#line 693 "mode_info.m"
        }
#line 868 "mode_info.m"
      }
#line 868 "mode_info.m"
  }
#line 226 "mode_info.m"
}

#line 224 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_mode_context_3_p_0(
#line 224 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 224 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 224 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 224 "mode_info.m"
{
#line 693 "mode_info.m"
  {
#line 693 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 693 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));

#line 693 "mode_info.m"
    {
#line 693 "mode_info.m"
      MR_Word base;
#line 693 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 693 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_9_9));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 693 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 693 "mode_info.m"
    }
#line 693 "mode_info.m"
  }
#line 224 "mode_info.m"
}

#line 222 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_context_3_p_0(
#line 222 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 222 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 222 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 222 "mode_info.m"
{
#line 689 "mode_info.m"
  {
#line 689 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 687 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));

#line 687 "mode_info.m"
    check_hlds__mode_info__succeeded = (((MR_Word) check_hlds__mode_info__X_4) == ((MR_Word) check_hlds__mode_info__V_8_8));
#line 689 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 689 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = check_hlds__mode_info__STATE_VARIABLE_MI_0_6;
#line 689 "mode_info.m"
    else
#line 690 "mode_info.m"
      {
#line 690 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 690 "mode_info.m"
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 690 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 690 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 690 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 690 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 690 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 690 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));

#line 690 "mode_info.m"
        {
#line 690 "mode_info.m"
          MR_Word base;
#line 690 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 690 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 690 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 690 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 690 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 690 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 690 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 690 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 690 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 690 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 690 "mode_info.m"
        }
#line 690 "mode_info.m"
      }
#line 689 "mode_info.m"
  }
#line 222 "mode_info.m"
}

#line 220 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_proc_id_3_p_0(
#line 220 "mode_info.m"
  MR_Integer check_hlds__mode_info__X_4,
#line 220 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 220 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 220 "mode_info.m"
{
#line 680 "mode_info.m"
  {
#line 680 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 680 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 680 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 680 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 680 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 680 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 680 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 680 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 680 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 680 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 2)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 3)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 4)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 5)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 6)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 7)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 8)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 681 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 681 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 1)));

#line 681 "mode_info.m"
    {
#line 681 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 1) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 2) = ((MR_Box) (check_hlds__mode_info__V_20_20));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 3) = ((MR_Box) (check_hlds__mode_info__V_21_21));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 4) = ((MR_Box) (check_hlds__mode_info__V_22_22));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 5) = ((MR_Box) (check_hlds__mode_info__V_23_23));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 6) = ((MR_Box) (check_hlds__mode_info__V_24_24));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 7) = ((MR_Box) (check_hlds__mode_info__V_25_25));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 8) = ((MR_Box) (check_hlds__mode_info__V_26_26));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_30_30 << (MR_Integer) 2)))))));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)))));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 16) = ((MR_Box) ((check_hlds__mode_info__V_37_37 | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_42_42 << (MR_Integer) 5)))))))))))));
#line 681 "mode_info.m"
    }
#line 681 "mode_info.m"
    {
#line 681 "mode_info.m"
      MR_Word base;
#line 681 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 681 "mode_info.m"
      *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__V_11_11));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_12_12));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_13_13));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_14_14));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__V_15_15));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__V_16_16));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__V_17_17));
#line 681 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__V_10_10));
#line 681 "mode_info.m"
    }
#line 680 "mode_info.m"
  }
#line 220 "mode_info.m"
}

#line 218 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_pred_id_3_p_0(
#line 218 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 218 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 218 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 218 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 9)));
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 11)));
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 13)));
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 14)));
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 15)));
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 679 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_9_9, (MR_Integer) 0)));

#line 679 "mode_info.m"
    {
#line 679 "mode_info.m"
      check_hlds__mode_info__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 0) = ((MR_Box) (check_hlds__mode_info__X_4));
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
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 9) = ((MR_Box) (check_hlds__mode_info__V_27_27));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 10) = ((MR_Box) ((check_hlds__mode_info__V_28_28 | ((((check_hlds__mode_info__V_29_29 << (MR_Integer) 1)) | ((check_hlds__mode_info__V_30_30 << (MR_Integer) 2)))))));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 11) = ((MR_Box) (check_hlds__mode_info__V_31_31));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 12) = ((MR_Box) ((check_hlds__mode_info__V_32_32 | ((check_hlds__mode_info__V_33_33 << (MR_Integer) 1)))));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 13) = ((MR_Box) (check_hlds__mode_info__V_34_34));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 14) = ((MR_Box) (check_hlds__mode_info__V_35_35));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 15) = ((MR_Box) (check_hlds__mode_info__V_36_36));
#line 679 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_10_10, 16) = ((MR_Box) ((check_hlds__mode_info__V_37_37 | ((((check_hlds__mode_info__V_38_38 << (MR_Integer) 1)) | ((((check_hlds__mode_info__V_39_39 << (MR_Integer) 2)) | ((((check_hlds__mode_info__V_40_40 << (MR_Integer) 3)) | ((((check_hlds__mode_info__V_41_41 << (MR_Integer) 4)) | ((check_hlds__mode_info__V_42_42 << (MR_Integer) 5)))))))))))));
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
#line 218 "mode_info.m"
}

#line 216 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_set_module_info_3_p_0(
#line 216 "mode_info.m"
  MR_Word check_hlds__mode_info__X_4,
#line 216 "mode_info.m"
  MR_Word check_hlds__mode_info__STATE_VARIABLE_MI_0_6,
#line 216 "mode_info.m"
  MR_Word * check_hlds__mode_info__STATE_VARIABLE_MI_7)
#line 216 "mode_info.m"
{
#line 675 "mode_info.m"
  {
#line 675 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 673 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));
#line 673 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 673 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 673 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
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
        MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 1)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 2)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 3)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 4)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 5)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 6)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 7)));
#line 676 "mode_info.m"
        MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__STATE_VARIABLE_MI_0_6, (MR_Integer) 0)));

#line 676 "mode_info.m"
        {
#line 676 "mode_info.m"
          MR_Word base;
#line 676 "mode_info.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 676 "mode_info.m"
          *check_hlds__mode_info__STATE_VARIABLE_MI_7 = base;
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__X_4));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__V_18_18));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__V_19_19));
#line 676 "mode_info.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__mode_info__V_20_20));
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
#line 216 "mode_info.m"
}

#line 211 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(
#line 211 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 211 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 211 "mode_info.m"
{
#line 669 "mode_info.m"
  {
#line 669 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 669 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 670 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 670 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

#line 670 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 669 "mode_info.m"
  }
#line 211 "mode_info.m"
}

#line 209 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_make_ground_terms_unique_2_p_0(
#line 209 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 209 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 209 "mode_info.m"
{
#line 667 "mode_info.m"
  {
#line 667 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 667 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 668 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 668 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 668 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 667 "mode_info.m"
  }
#line 209 "mode_info.m"
}

#line 207 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_had_from_ground_term_2_p_0(
#line 207 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 207 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 207 "mode_info.m"
{
#line 665 "mode_info.m"
  {
#line 665 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 665 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 666 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 666 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 666 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 666 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 666 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 665 "mode_info.m"
  }
#line 207 "mode_info.m"
}

#line 205 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_in_from_ground_term_2_p_0(
#line 205 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 205 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 205 "mode_info.m"
{
#line 663 "mode_info.m"
  {
#line 663 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 663 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 664 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 664 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 664 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 664 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 664 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 664 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 663 "mode_info.m"
  }
#line 205 "mode_info.m"
}

#line 203 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_may_init_solver_vars_2_p_0(
#line 203 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 203 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 203 "mode_info.m"
{
#line 655 "mode_info.m"
  {
#line 655 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 655 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 656 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 656 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 656 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 656 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 656 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 656 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 656 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 656 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 656 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 656 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 655 "mode_info.m"
  }
#line 203 "mode_info.m"
}

#line 202 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_checking_extra_goals_2_p_0(
#line 202 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 202 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 202 "mode_info.m"
{
#line 661 "mode_info.m"
  {
#line 661 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 661 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 662 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 662 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 662 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 662 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 662 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 662 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 662 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 662 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 662 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 662 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 662 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 662 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 661 "mode_info.m"
  }
#line 202 "mode_info.m"
}

#line 200 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_head_inst_vars_2_p_0(
#line 200 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 200 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 200 "mode_info.m"
{
#line 659 "mode_info.m"
  {
#line 659 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 659 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 660 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 660 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 660 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 660 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 660 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 660 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 660 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 660 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 660 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 660 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 659 "mode_info.m"
  }
#line 200 "mode_info.m"
}

#line 199 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_initial_instmap_2_p_0(
#line 199 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 199 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 199 "mode_info.m"
{
#line 657 "mode_info.m"
  {
#line 657 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 657 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 658 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 658 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 658 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 658 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 658 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 658 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 658 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 658 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 658 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 658 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 658 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 657 "mode_info.m"
  }
#line 199 "mode_info.m"
}

#line 197 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(
#line 197 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 197 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 197 "mode_info.m"
{
#line 653 "mode_info.m"
  {
#line 653 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 653 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 654 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 654 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 654 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 654 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 654 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 654 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 654 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 654 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 654 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 654 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 654 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 654 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 654 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 654 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 654 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 654 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 653 "mode_info.m"
  }
#line 197 "mode_info.m"
}

#line 195 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_how_to_check_2_p_0(
#line 195 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 195 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 195 "mode_info.m"
{
#line 651 "mode_info.m"
  {
#line 651 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 651 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 652 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 652 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 652 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 652 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 652 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 652 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 652 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 652 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 652 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 652 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 652 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 652 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 652 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 652 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 652 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 652 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 652 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 651 "mode_info.m"
  }
#line 195 "mode_info.m"
}

#line 194 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(
#line 194 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 194 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 194 "mode_info.m"
{
#line 649 "mode_info.m"
  {
#line 649 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 649 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 650 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 650 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 650 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 650 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 650 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 650 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 650 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 650 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 650 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 650 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 650 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 650 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 650 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 649 "mode_info.m"
  }
#line 194 "mode_info.m"
}

#line 192 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_parallel_vars_2_p_0(
#line 192 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 192 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 192 "mode_info.m"
{
#line 647 "mode_info.m"
  {
#line 647 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 647 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 648 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 648 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 648 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 648 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 648 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 648 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 648 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 648 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 648 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 648 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 648 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 648 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 648 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 648 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 648 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 648 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 648 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 648 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 647 "mode_info.m"
  }
#line 192 "mode_info.m"
}

#line 190 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_last_checkpoint_insts_2_p_0(
#line 190 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 190 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 190 "mode_info.m"
{
#line 645 "mode_info.m"
  {
#line 645 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 645 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 646 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 646 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 646 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 646 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 646 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 646 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 646 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 646 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 646 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 646 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 646 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 646 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 646 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 646 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 645 "mode_info.m"
  }
#line 190 "mode_info.m"
}

#line 188 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(
#line 188 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 188 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 188 "mode_info.m"
{
#line 644 "mode_info.m"
  {
#line 644 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 644 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 644 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 644 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 644 "mode_info.m"
  }
#line 188 "mode_info.m"
}

#line 187 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_live_vars_2_p_0(
#line 187 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 187 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 187 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_20_20;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 642 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 641 "mode_info.m"
  }
#line 187 "mode_info.m"
}

#line 186 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_delay_info_2_p_0(
#line 186 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 186 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 186 "mode_info.m"
{
#line 640 "mode_info.m"
  {
#line 640 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 640 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 640 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 640 "mode_info.m"
    check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 640 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 640 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 640 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 640 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 640 "mode_info.m"
  }
#line 186 "mode_info.m"
}

#line 184 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_have_auto_init_var_2_p_0(
#line 184 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 184 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 184 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_17_17;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 620 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
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
    MR_Word check_hlds__mode_info__V_36_36;

#line 620 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 620 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 620 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 620 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 620 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 620 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 620 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 620 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 620 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 620 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 620 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 620 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 620 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 620 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 620 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 619 "mode_info.m"
  }
#line 184 "mode_info.m"
}

#line 183 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_var_types_2_p_0(
#line 183 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 183 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 183 "mode_info.m"
{
#line 617 "mode_info.m"
  {
#line 617 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 617 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 618 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 618 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 618 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 618 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 618 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 617 "mode_info.m"
  }
#line 183 "mode_info.m"
}

#line 182 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_instvarset_2_p_0(
#line 182 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_3,
#line 182 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 182 "mode_info.m"
{
#line 627 "mode_info.m"
  {
#line 627 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 627 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
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
    MR_Word check_hlds__mode_info__V_21_21;
#line 628 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
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
    MR_Word check_hlds__mode_info__V_36_36;

#line 628 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 628 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 628 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 628 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 628 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 628 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 628 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 628 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 628 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 628 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 628 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 627 "mode_info.m"
  }
#line 182 "mode_info.m"
}

#line 181 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_varset_2_p_0(
#line 181 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 181 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 181 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_15_15;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 616 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
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
    MR_Word check_hlds__mode_info__V_36_36;

#line 616 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 616 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 616 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 615 "mode_info.m"
  }
#line 181 "mode_info.m"
}

#line 180 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_liveness_2_p_0(
#line 180 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_3,
#line 180 "mode_info.m"
  MR_Word * check_hlds__mode_info__LiveVars_4)
#line 180 "mode_info.m"
{
#line 962 "mode_info.m"
  {
#line 962 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 962 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVarsBag_5;
#line 962 "mode_info.m"
    MR_Word check_hlds__mode_info__SortedList_6;
#line 962 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 0)));
#line 642 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 1)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 2)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 3)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 4)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 5)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 6)));
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_37_37;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_38_38;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_39_39;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_40_40;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_41_41;
#line 642 "mode_info.m"
    MR_Word check_hlds__mode_info__V_42_42;

#line 642 "mode_info.m"
    check_hlds__mode_info__LiveVarsBag_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 7)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 8)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 9)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 11)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 13)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 14)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 15)));
#line 642 "mode_info.m"
    check_hlds__mode_info__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 642 "mode_info.m"
    check_hlds__mode_info__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_11_11, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 964 "mode_info.m"
    {
#line 964 "mode_info.m"
      mercury__bag__to_list_without_duplicates_2_p_0((MR_Word) &check_hlds__mode_info_scalar_common_1[0], check_hlds__mode_info__LiveVarsBag_5, &check_hlds__mode_info__SortedList_6);
    }
#line 965 "mode_info.m"
    {
#line 965 "mode_info.m"
      parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__mode_info__SortedList_6, check_hlds__mode_info__LiveVars_4);
    }
#line 962 "mode_info.m"
  }
#line 180 "mode_info.m"
}

#line 179 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_num_errors_2_p_0(
#line 179 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_3,
#line 179 "mode_info.m"
  MR_Integer * check_hlds__mode_info__NumErrors_4)
#line 179 "mode_info.m"
{
#line 911 "mode_info.m"
  {
#line 911 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 911 "mode_info.m"
    MR_Word check_hlds__mode_info__Errors_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 913 "mode_info.m"
    {
#line 913 "mode_info.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0, check_hlds__mode_info__Errors_5, check_hlds__mode_info__NumErrors_4);
    }
#line 911 "mode_info.m"
  }
#line 179 "mode_info.m"
}

#line 177 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(
#line 177 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 177 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 177 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 638 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 638 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 638 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 638 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 638 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 638 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 637 "mode_info.m"
  }
#line 177 "mode_info.m"
}

#line 175 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_need_to_requantify_2_p_0(
#line 175 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 175 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 175 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 636 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 636 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 636 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 636 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 635 "mode_info.m"
  }
#line 175 "mode_info.m"
}

#line 173 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_warnings_2_p_0(
#line 173 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 173 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 173 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 634 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
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
    MR_Word check_hlds__mode_info__V_36_36;

#line 634 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 634 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 634 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 634 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 633 "mode_info.m"
  }
#line 173 "mode_info.m"
}

#line 172 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_errors_2_p_0(
#line 172 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 172 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 172 "mode_info.m"
{
#line 632 "mode_info.m"
  {
#line 632 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 632 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 632 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 632 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 632 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 632 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 632 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 632 "mode_info.m"
  }
#line 172 "mode_info.m"
}

#line 171 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_locked_vars_2_p_0(
#line 171 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 171 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 171 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_19_19;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 630 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
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
    MR_Word check_hlds__mode_info__V_36_36;

#line 630 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 630 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 630 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 629 "mode_info.m"
  }
#line 171 "mode_info.m"
}

#line 170 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_instmap_2_p_0(
#line 170 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 170 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 170 "mode_info.m"
{
#line 626 "mode_info.m"
  {
#line 626 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 626 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 626 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 626 "mode_info.m"
    check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 626 "mode_info.m"
    check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 626 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 626 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 626 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 626 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 626 "mode_info.m"
  }
#line 170 "mode_info.m"
}

#line 169 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_mode_context_2_p_0(
#line 169 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 169 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 169 "mode_info.m"
{
#line 624 "mode_info.m"
  {
#line 624 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 624 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 624 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 624 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 624 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 624 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 624 "mode_info.m"
  }
#line 169 "mode_info.m"
}

#line 168 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_context_2_p_0(
#line 168 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 168 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 168 "mode_info.m"
{
#line 622 "mode_info.m"
  {
#line 622 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 622 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 622 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 622 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 622 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 622 "mode_info.m"
  }
#line 168 "mode_info.m"
}

#line 166 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_debug_modes_2_p_0(
#line 166 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 166 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 166 "mode_info.m"
{
#line 613 "mode_info.m"
  {
#line 613 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 613 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 614 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 614 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 614 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 614 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 614 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 613 "mode_info.m"
  }
#line 166 "mode_info.m"
}

#line 165 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_proc_id_2_p_0(
#line 165 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 165 "mode_info.m"
  MR_Integer * check_hlds__mode_info__X_4)
#line 165 "mode_info.m"
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
    MR_Word check_hlds__mode_info__V_14_14;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_31_31;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_32_32;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_33_33;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_34_34;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_35_35;
#line 612 "mode_info.m"
    MR_Word check_hlds__mode_info__V_36_36;

#line 612 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 612 "mode_info.m"
    check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 612 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 612 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 612 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 612 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 612 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 612 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 612 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 612 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 612 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 612 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 612 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 612 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 612 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 612 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 612 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 612 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 612 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 612 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 612 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 612 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 612 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 612 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 611 "mode_info.m"
  }
#line 165 "mode_info.m"
}

#line 164 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_pred_id_2_p_0(
#line 164 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 164 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 164 "mode_info.m"
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
    MR_Integer check_hlds__mode_info__V_13_13;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_15_15;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_16_16;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_17_17;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_18_18;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_19_19;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_20_20;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_21_21;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_22_22;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_23_23;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_24_24;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_25_25;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_26_26;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_27_27;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_28_28;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_29_29;
#line 610 "mode_info.m"
    MR_Word check_hlds__mode_info__V_30_30;
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
    MR_Word check_hlds__mode_info__V_36_36;

#line 610 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 0)));
#line 610 "mode_info.m"
    check_hlds__mode_info__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 1)));
#line 610 "mode_info.m"
    check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 2)));
#line 610 "mode_info.m"
    check_hlds__mode_info__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 3)));
#line 610 "mode_info.m"
    check_hlds__mode_info__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 4)));
#line 610 "mode_info.m"
    check_hlds__mode_info__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 5)));
#line 610 "mode_info.m"
    check_hlds__mode_info__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 6)));
#line 610 "mode_info.m"
    check_hlds__mode_info__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 7)));
#line 610 "mode_info.m"
    check_hlds__mode_info__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 8)));
#line 610 "mode_info.m"
    check_hlds__mode_info__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 9)));
#line 610 "mode_info.m"
    check_hlds__mode_info__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) & (MR_Integer) 1);
#line 610 "mode_info.m"
    check_hlds__mode_info__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 610 "mode_info.m"
    check_hlds__mode_info__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 610 "mode_info.m"
    check_hlds__mode_info__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 11)));
#line 610 "mode_info.m"
    check_hlds__mode_info__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 610 "mode_info.m"
    check_hlds__mode_info__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 610 "mode_info.m"
    check_hlds__mode_info__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 13)));
#line 610 "mode_info.m"
    check_hlds__mode_info__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 14)));
#line 610 "mode_info.m"
    check_hlds__mode_info__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 15)));
#line 610 "mode_info.m"
    check_hlds__mode_info__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) & (MR_Integer) 1);
#line 610 "mode_info.m"
    check_hlds__mode_info__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 610 "mode_info.m"
    check_hlds__mode_info__V_33_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 610 "mode_info.m"
    check_hlds__mode_info__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 610 "mode_info.m"
    check_hlds__mode_info__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 610 "mode_info.m"
    check_hlds__mode_info__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__V_5_5, (MR_Integer) 16)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 609 "mode_info.m"
  }
#line 164 "mode_info.m"
}

#line 163 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_insts_2_p_0(
#line 163 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_3,
#line 163 "mode_info.m"
  MR_Word * check_hlds__mode_info__Insts_4)
#line 163 "mode_info.m"
{
#line 864 "mode_info.m"
  {
#line 864 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 864 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 866 "mode_info.m"
    {
#line 866 "mode_info.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Insts_4);
    }
#line 864 "mode_info.m"
  }
#line 163 "mode_info.m"
}

#line 162 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_modes_2_p_0(
#line 162 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_3,
#line 162 "mode_info.m"
  MR_Word * check_hlds__mode_info__Modes_4)
#line 162 "mode_info.m"
{
#line 860 "mode_info.m"
  {
#line 860 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 860 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 862 "mode_info.m"
    {
#line 862 "mode_info.m"
      hlds__hlds_module__module_info_get_mode_table_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Modes_4);
    }
#line 860 "mode_info.m"
  }
#line 162 "mode_info.m"
}

#line 161 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_preds_2_p_0(
#line 161 "mode_info.m"
  MR_Word check_hlds__mode_info__ModeInfo_3,
#line 161 "mode_info.m"
  MR_Word * check_hlds__mode_info__Preds_4)
#line 161 "mode_info.m"
{
#line 856 "mode_info.m"
  {
#line 856 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 856 "mode_info.m"
    MR_Word check_hlds__mode_info__ModuleInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 0)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 1)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 2)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 3)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 4)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 5)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 6)));
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeInfo_3, (MR_Integer) 7)));

#line 858 "mode_info.m"
    {
#line 858 "mode_info.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__mode_info__ModuleInfo_5, check_hlds__mode_info__Preds_4);
    }
#line 856 "mode_info.m"
  }
#line 161 "mode_info.m"
}

#line 160 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_get_module_info_2_p_0(
#line 160 "mode_info.m"
  MR_Word check_hlds__mode_info__MI_3,
#line 160 "mode_info.m"
  MR_Word * check_hlds__mode_info__X_4)
#line 160 "mode_info.m"
{
#line 608 "mode_info.m"
  {
#line 608 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_5_5;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_6_6;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_7_7;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_8_8;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_9_9;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_10_10;
#line 608 "mode_info.m"
    MR_Word check_hlds__mode_info__V_11_11;

#line 608 "mode_info.m"
    *check_hlds__mode_info__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 0)));
#line 608 "mode_info.m"
    check_hlds__mode_info__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 1)));
#line 608 "mode_info.m"
    check_hlds__mode_info__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 2)));
#line 608 "mode_info.m"
    check_hlds__mode_info__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 3)));
#line 608 "mode_info.m"
    check_hlds__mode_info__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 4)));
#line 608 "mode_info.m"
    check_hlds__mode_info__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 5)));
#line 608 "mode_info.m"
    check_hlds__mode_info__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 6)));
#line 608 "mode_info.m"
    check_hlds__mode_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__mode_info__MI_3, (MR_Integer) 7)));
#line 608 "mode_info.m"
  }
#line 160 "mode_info.m"
}

#line 114 "mode_info.m"
void MR_CALL 
check_hlds__mode_info__mode_info_init_10_p_0(
#line 114 "mode_info.m"
  MR_Word check_hlds__mode_info__ModuleInfo_11,
#line 114 "mode_info.m"
  MR_Word check_hlds__mode_info__PredId_12,
#line 114 "mode_info.m"
  MR_Integer check_hlds__mode_info__ProcId_13,
#line 114 "mode_info.m"
  MR_Word check_hlds__mode_info__Context_14,
#line 114 "mode_info.m"
  MR_Word check_hlds__mode_info__LiveVars_15,
#line 114 "mode_info.m"
  MR_Word check_hlds__mode_info__HeadInstVars_16,
#line 114 "mode_info.m"
  MR_Word check_hlds__mode_info__InstMap0_17,
#line 114 "mode_info.m"
  MR_Word check_hlds__mode_info__HowToCheck_18,
#line 114 "mode_info.m"
  MR_Word check_hlds__mode_info__MayChangeProc_19,
#line 114 "mode_info.m"
  MR_Word * check_hlds__mode_info__ModeInfo_20)
#line 114 "mode_info.m"
{
#line 524 "mode_info.m"
  {
#line 524 "mode_info.m"
    MR_bool check_hlds__mode_info__succeeded;
#line 524 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeCtorInfo_63_63;
#line 524 "mode_info.m"
    MR_Word check_hlds__mode_info__TypeInfo_64_64;
#line 524 "mode_info.m"
    MR_Word check_hlds__mode_info__Globals_21;
#line 524 "mode_info.m"
    MR_Word check_hlds__mode_info__DebugModes_22;
#line 524 "mode_info.m"
    MR_Integer check_hlds__mode_info__DebugModesPredId_23;
#line 524 "mode_info.m"
    MR_Integer check_hlds__mode_info__PredIdInt_24;
#line 524 "mode_info.m"
    MR_Word check_hlds__mode_info__Debug_29;
#line 524 "mode_info.m"
    MR_Word check_hlds__mode_info__ProcInfo_30;
#line 524 "mode_info.m"
    MR_Word check_hlds__mode_info__VarSet_31;
#line 524 "mode_info.m"
    MR_Word check_hlds__mode_info__VarTypes_32;
#line 524 "mode_info.m"
    MR_Word check_hlds__mode_info__AllTypes_33;
#line 524 "mode_info.m"
    MR_Word check_hlds__mode_info__HaveAutoInitVar_34;
#line 524 "mode_info.m"
    MR_Word check_hlds__mode_info__InstVarSet_35;
#line 524 "mode_info.m"
    MR_Word check_hlds__mode_info__LiveVarsBag_36;
#line 524 "mode_info.m"
    MR_Word check_hlds__mode_info__LastCheckpointInstMap_37;
#line 524 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeSubInfo_50;
#line 524 "mode_info.m"
    MR_Word check_hlds__mode_info__ModeContext_51;
#line 524 "mode_info.m"
    MR_Word check_hlds__mode_info__DelayInfo_52;
#line 524 "mode_info.m"
    MR_Word check_hlds__mode_info__NondetLiveVarsBag_54;
#line 524 "mode_info.m"
    MR_Word check_hlds__mode_info__V_61_61;
#line 524 "mode_info.m"
    MR_Word check_hlds__mode_info__V_62_62;
#line 532 "mode_info.m"
    MR_Integer check_hlds__mode_info__V_57_57;

#line 525 "mode_info.m"
    {
#line 525 "mode_info.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__mode_info__ModuleInfo_11, &check_hlds__mode_info__Globals_21);
    }
#line 526 "mode_info.m"
    {
#line 526 "mode_info.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 60, &check_hlds__mode_info__DebugModes_22);
    }
#line 527 "mode_info.m"
    {
#line 527 "mode_info.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 64, &check_hlds__mode_info__DebugModesPredId_23);
    }
#line 529 "mode_info.m"
    {
#line 529 "mode_info.m"
      hlds__hlds_pred__pred_id_to_int_2_p_0(check_hlds__mode_info__PredId_12, &check_hlds__mode_info__PredIdInt_24);
    }
#line 531 "mode_info.m"
    check_hlds__mode_info__succeeded = (check_hlds__mode_info__DebugModes_22 == (MR_Integer) 1);
#line 531 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 531 "mode_info.m"
      {
#line 532 "mode_info.m"
        check_hlds__mode_info__V_57_57 = (MR_Integer) 0;
#line 532 "mode_info.m"
        check_hlds__mode_info__succeeded = (check_hlds__mode_info__DebugModesPredId_23 >= check_hlds__mode_info__V_57_57);
#line 532 "mode_info.m"
        if (check_hlds__mode_info__succeeded)
#line 532 "mode_info.m"
          {
#line 532 "mode_info.m"
            check_hlds__mode_info__succeeded = (check_hlds__mode_info__DebugModesPredId_23 == check_hlds__mode_info__PredIdInt_24);
#line 532 "mode_info.m"
            check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 532 "mode_info.m"
          }
#line 532 "mode_info.m"
        check_hlds__mode_info__succeeded = !(check_hlds__mode_info__succeeded);
#line 531 "mode_info.m"
      }
#line 540 "mode_info.m"
    if (check_hlds__mode_info__succeeded)
#line 534 "mode_info.m"
      {
#line 534 "mode_info.m"
        MR_Word check_hlds__mode_info__DebugVerbose_25;
#line 534 "mode_info.m"
        MR_Word check_hlds__mode_info__DebugMinimal_26;
#line 534 "mode_info.m"
        MR_Word check_hlds__mode_info__Statistics_27;
#line 534 "mode_info.m"
        MR_Word check_hlds__mode_info__Flags_28;

#line 534 "mode_info.m"
        {
#line 534 "mode_info.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 63, &check_hlds__mode_info__DebugVerbose_25);
        }
#line 535 "mode_info.m"
        {
#line 535 "mode_info.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 62, &check_hlds__mode_info__DebugMinimal_26);
        }
#line 536 "mode_info.m"
        {
#line 536 "mode_info.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__mode_info__Globals_21, (MR_Integer) 61, &check_hlds__mode_info__Statistics_27);
        }
#line 538 "mode_info.m"
        {
#line 538 "mode_info.m"
          check_hlds__mode_info__Flags_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 538 "mode_info.m"
          MR_hl_field(MR_mktag(0), check_hlds__mode_info__Flags_28, 0) = ((MR_Box) ((check_hlds__mode_info__DebugVerbose_25 | ((((check_hlds__mode_info__DebugMinimal_26 << (MR_Integer) 1)) | ((check_hlds__mode_info__Statistics_27 << (MR_Integer) 2)))))));
#line 538 "mode_info.m"
        }
#line 539 "mode_info.m"
        {
#line 539 "mode_info.m"
          check_hlds__mode_info__Debug_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 539 "mode_info.m"
          MR_hl_field(MR_mktag(1), check_hlds__mode_info__Debug_29, 0) = ((MR_Box) (check_hlds__mode_info__Flags_28));
#line 539 "mode_info.m"
        }
#line 534 "mode_info.m"
      }
#line 540 "mode_info.m"
    else
#line 541 "mode_info.m"
      check_hlds__mode_info__Debug_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 544 "mode_info.m"
    {
#line 544 "mode_info.m"
      hlds__hlds_module__module_info_proc_info_4_p_0(check_hlds__mode_info__ModuleInfo_11, check_hlds__mode_info__PredId_12, check_hlds__mode_info__ProcId_13, &check_hlds__mode_info__ProcInfo_30);
    }
#line 545 "mode_info.m"
    {
#line 545 "mode_info.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__mode_info__ProcInfo_30, &check_hlds__mode_info__VarSet_31);
    }
#line 546 "mode_info.m"
    {
#line 546 "mode_info.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__mode_info__ProcInfo_30, &check_hlds__mode_info__VarTypes_32);
    }
#line 547 "mode_info.m"
    {
#line 547 "mode_info.m"
      hlds__vartypes__vartypes_types_2_p_0(check_hlds__mode_info__VarTypes_32, &check_hlds__mode_info__AllTypes_33);
    }
#line 548 "mode_info.m"
    {
#line 548 "mode_info.m"
      check_hlds__mode_info__do_we_have_auto_init_var_3_p_0(check_hlds__mode_info__ModuleInfo_11, check_hlds__mode_info__AllTypes_33, &check_hlds__mode_info__HaveAutoInitVar_34);
    }
#line 549 "mode_info.m"
    {
#line 549 "mode_info.m"
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(check_hlds__mode_info__ProcInfo_30, &check_hlds__mode_info__InstVarSet_35);
    }
#line 18045 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 551 "mode_info.m"
    {
#line 551 "mode_info.m"
      check_hlds__mode_info__V_61_61 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__mode_info__TypeCtorInfo_63_63, check_hlds__mode_info__LiveVars_15);
    }
#line 18052 "check_hlds.mode_info.c"
    check_hlds__mode_info__TypeInfo_64_64 = (MR_Word) &check_hlds__mode_info_scalar_common_1[0];
#line 551 "mode_info.m"
    {
#line 551 "mode_info.m"
      mercury__bag__from_sorted_list_2_p_0(check_hlds__mode_info__TypeInfo_64_64, check_hlds__mode_info__V_61_61, &check_hlds__mode_info__LiveVarsBag_36);
    }
#line 552 "mode_info.m"
    {
#line 552 "mode_info.m"
      hlds__instmap__init_unreachable_1_p_0(&check_hlds__mode_info__LastCheckpointInstMap_37);
    }
#line 567 "mode_info.m"
    {
#line 567 "mode_info.m"
      check_hlds__mode_info__ModeSubInfo_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 17 * sizeof(MR_Word)), NULL, NULL);
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_50, 0) = ((MR_Box) (check_hlds__mode_info__PredId_12));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_50, 1) = ((MR_Box) (check_hlds__mode_info__ProcId_13));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_50, 2) = ((MR_Box) (check_hlds__mode_info__VarSet_31));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_50, 3) = ((MR_Box) (check_hlds__mode_info__VarTypes_32));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_50, 4) = ((MR_Box) (check_hlds__mode_info__HaveAutoInitVar_34));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_50, 5) = ((MR_Box) (check_hlds__mode_info__Debug_29));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_50, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_50, 7) = ((MR_Box) (check_hlds__mode_info__LiveVarsBag_36));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_50, 8) = ((MR_Box) (check_hlds__mode_info__InstVarSet_35));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_50, 9) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_50, 10) = ((MR_Box) ((check_hlds__mode_info__HowToCheck_18 | ((((check_hlds__mode_info__MayChangeProc_19 << (MR_Integer) 1)) | (((MR_Integer) 0 << (MR_Integer) 2)))))));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_50, 11) = ((MR_Box) (check_hlds__mode_info__LastCheckpointInstMap_37));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_50, 12) = ((MR_Box) (((MR_Integer) 0 | (((MR_Integer) 0 << (MR_Integer) 1)))));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_50, 13) = ((MR_Box) (check_hlds__mode_info__InstMap0_17));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_50, 14) = ((MR_Box) (check_hlds__mode_info__HeadInstVars_16));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_50, 15) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 567 "mode_info.m"
      MR_hl_field(MR_mktag(0), check_hlds__mode_info__ModeSubInfo_50, 16) = ((MR_Box) (((MR_Integer) 1 | (((((MR_Integer) 1 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 1 << (MR_Integer) 3)) | (((((MR_Integer) 1 << (MR_Integer) 4)) | (((MR_Integer) 1 << (MR_Integer) 5)))))))))))));
#line 567 "mode_info.m"
    }
#line 575 "mode_info.m"
    {
#line 575 "mode_info.m"
      check_hlds__mode_errors__mode_context_init_1_p_0(&check_hlds__mode_info__ModeContext_51);
    }
#line 576 "mode_info.m"
    {
#line 576 "mode_info.m"
      check_hlds__delay_info__delay_info_init_1_p_0(&check_hlds__mode_info__DelayInfo_52);
    }
#line 578 "mode_info.m"
    {
#line 578 "mode_info.m"
      check_hlds__mode_info__V_62_62 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__mode_info__TypeCtorInfo_63_63, check_hlds__mode_info__LiveVars_15);
    }
#line 578 "mode_info.m"
    {
#line 578 "mode_info.m"
      mercury__bag__from_sorted_list_2_p_0(check_hlds__mode_info__TypeInfo_64_64, check_hlds__mode_info__V_62_62, &check_hlds__mode_info__NondetLiveVarsBag_54);
    }
#line 581 "mode_info.m"
    {
#line 581 "mode_info.m"
      MR_Word base;
#line 581 "mode_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 581 "mode_info.m"
      *check_hlds__mode_info__ModeInfo_20 = base;
#line 581 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__mode_info__ModuleInfo_11));
#line 581 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__mode_info__InstMap0_17));
#line 581 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__mode_info__DelayInfo_52));
#line 581 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 581 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__mode_info__ModeContext_51));
#line 581 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__mode_info__Context_14));
#line 581 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__mode_info__NondetLiveVarsBag_54));
#line 581 "mode_info.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__mode_info__ModeSubInfo_50));
#line 581 "mode_info.m"
    }
#line 524 "mode_info.m"
  }
#line 114 "mode_info.m"
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
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_maybe_have_auto_init_var_0);
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
